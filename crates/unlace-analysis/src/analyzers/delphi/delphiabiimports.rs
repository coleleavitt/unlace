//! (kuna `delphiabi`) The Win32 imports of a Delphi PE keep `__stdcall`.
//!
//! Under the Delphi compiler spec the default model is `register` (EAX, EDX,
//! ECX, then the stack), but a Windows API entry point is `__stdcall`
//! whatever the caller's compiler is. Read under the default, a call such as
//! `SetFilePointer(h, lo, &hi, FILE_BEGIN)` takes its first three arguments
//! from whatever EAX, EDX and ECX last held and its fourth from the first
//! pushed word. Each import the resolver names, at its IAT slot and at its
//! jump thunk, is bound to `__stdcall`. A name exported by a Delphi package
//! (Borland-mangled, `@Unit@Proc$qqrv`) is Delphi code and keeps the default,
//! and a C runtime import keeps the `__cdecl` the commit gives it. A
//! delay-load thunk (`__imp_load_<name>`) is the image's own code: it saves
//! ECX and EDX and jumps to `__tailMerge`, so it is no `__stdcall` callee and
//! keeps the default; the delay IAT slot it fills is bound like any import.
//!
//! Fires only when the image composes the Delphi language id: the
//! `delphiabi` gate is on and the image is a 32-bit Delphi PE
//! ([`super::is_delphi_image`]).

use std::collections::BTreeSet;

use object::read::Object;
use object::{Architecture, BinaryFormat};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, ModelFact, Phase};

/// The name prefix `pe_iat` gives a delay-load import's load thunk.
const DELAY_LOAD_THUNK: &str = "__imp_load_";

/// The `delphiabi` import-convention pass. Inert unless the gate is on.
#[derive(Default)]
pub struct DelphiAbiImportsPass;

impl AnalysisPass for DelphiAbiImportsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "delphiabi"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if !unlace_decomp::delphiabi::delphiabi_enabled()
            || ctx.file.format() != BinaryFormat::Pe
            || ctx.file.architecture() != Architecture::I386
            || !super::is_delphi_image(ctx.file)
        {
            return out;
        }
        out.models = stdcall_imports(ctx.file, ctx.bytes);
        out
    }
}

/// A `__stdcall` model fact for every resolved import of `file` that is
/// neither a Delphi package export, a C runtime function nor a delay-load
/// thunk.
pub(crate) fn stdcall_imports(file: &object::File, bytes: &[u8]) -> Vec<ModelFact> {
    let crt: BTreeSet<String> = crate::loader::pe_iat::c_runtime_import_names(bytes)
        .into_iter()
        .collect();
    crate::protos::resolved_import_addrs(file, bytes)
        .into_iter()
        .filter(|(name, _)| {
            !name.starts_with('@') && !name.starts_with(DELAY_LOAD_THUNK) && !crt.contains(name)
        })
        .map(|(_, addr)| ModelFact {
            func_addr: addr,
            model: "__stdcall",
            leaf_stack_inputs: None,
            maybe_self: false,
        })
        .collect()
}
