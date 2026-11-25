//! Call classification and prototype overrides for format-string varargs.
//!
//! [`classify_variadic_call`] follows Ghidra's `FormatStringAnalyzer`: callee
//! names containing `printf` or `scanf` are candidates, and `scanf` selects input
//! types even when both substrings occur. [`build_override_pieces`] combines
//! the callee's fixed parameters and return type with the parser's [`Spec`]s.
//! The resulting [`PrototypePieces`] has `first_var_arg_slot = -1`: the
//! call-site override is a fixed signature, not another variadic declaration.
//! This corresponds to Ghidra's `createParameters` / `initSignature` and
//! `HighFunctionDBUtil.writeOverride`.
//!
//! Image lookup and p-code walking belong to the load-time and console drivers.
//! The console also owns the inspect/override/re-decompile loop; this module
//! only classifies names and constructs overrides.

use std::rc::Rc;

use unlace_base::error::UnlaceResult;
use unlace_base::types::uint4;
use unlace_decomp::dtype::{Datatype, TypeFactory};
use unlace_decomp::formatstring::VarargAbi;
use unlace_decomp::fspec::PrototypePieces;

use super::{Spec, spec_to_datatype};

/// Ghidra `FormatStringAnalyzer.VARIADIC_SUBSTRINGS` (`:42`): a call-site callee
/// whose name *contains* one of these is a candidate variadic format function.
pub const VARIADIC_SUBSTRINGS: &[&str] = &["printf", "scanf"];

/// Ghidra `FormatStringAnalyzer.INPUT_FUNCTION_SUBSTRING` (`:59`): a callee whose
/// name contains this takes *input* argument types (`scanf`-family: it writes
/// through pointer arguments); otherwise it takes *output* types
/// (`printf`-family).  `parseParameters` `:273`:
/// `isOutputType = !callFunctionName.contains("scanf")`.
pub const INPUT_FUNCTION_SUBSTRING: &str = "scanf";

/// Classify a recovered call-site callee by name (Ghidra
/// `FormatStringAnalyzer.run`, `:127-128` + `parseParameters` `:273`).
///
/// Returns:
/// - `Some(true)`  — a `printf`-family *output* format function (use
///   [`super::parse_output_types`] on the format string);
/// - `Some(false)` — a `scanf`-family *input* format function (use
///   [`super::parse_input_types`]);
/// - `None`        — not a recognized variadic format function.
///
/// The test is the same substring containment Ghidra uses: e.g. `printf`,
/// `fprintf`, `sprintf`, `snprintf`, `vprintf` all match `"printf"`; `scanf`,
/// `sscanf`, `fscanf` all match `"scanf"`.  A name containing `"scanf"` is
/// classified input regardless of whether it also contains `"printf"` (Ghidra's
/// `isOutputType` is `!contains("scanf")`, so the `scanf` test wins).
pub fn classify_variadic_call(name: &str) -> Option<bool> {
    let is_variadic = VARIADIC_SUBSTRINGS.iter().any(|sub| name.contains(sub));
    if !is_variadic {
        return None;
    }
    // isOutputType = !callFunctionName.contains(INPUT_FUNCTION_SUBSTRING) (`:273`).
    Some(!name.contains(INPUT_FUNCTION_SUBSTRING))
}

/// Build the concrete per-call-site [`PrototypePieces`](unlace_decomp::fspec::PrototypePieces) override (Ghidra
/// `createParameters` `:292` + `initSignature` `:313`).
///
/// The new signature is the callee's already-recovered *fixed* parameters
/// (`fixed_param_types`, the analog of `namesToParameters.get(callFunctionName)`
/// = `function.getParameters()` minus the trailing `"..."`) followed by the
/// `format_specs`-derived argument types ([`spec_to_datatype`] per spec).  The
/// result is a *fixed* prototype: `first_var_arg_slot = -1` (no longer varargs),
/// exactly as Ghidra installs a plain `FunctionDefinitionDataType` (no var-args
/// flag) via `HighFunctionDBUtil.writeOverride`.
///
/// `name` is the callee name (carried only for the pieces' identifier, the analog
/// of `FunctionDefinitionDataType(callFunctionName)`).  `outtype` is the callee's
/// recovered return type (`signature.setReturnType(namesToReturn.get(...))`,
/// `:325`); `None` is faithful to a null Ghidra return type.  Parameters are
/// left ANONYMOUS — see the note in the body.
///
/// Returns `None` when there is nothing to type (no fixed params and no format
/// specs — Ghidra `createParameters` returns `null` for `numberOfParameters ==
/// 0`, `:296`), when the format asks for a `long double` (see the body), and
/// when `abi` says the target does not pass one of the format's arguments the
/// way it passes a named one of that type: the closed prototype would then move
/// the argument rather than type it (Apple AArch64 passes every vararg on the
/// stack, and a closed `%d` read `w1`). A `spec_to_datatype` failure propagates
/// as an `Err`.
pub fn build_override_pieces(
    name: &str,
    outtype: Option<Rc<Datatype>>,
    fixed_param_types: &[Rc<Datatype>],
    format_specs: &[Spec],
    types: &dyn TypeFactory,
    word_size: uint4,
    abi: VarargAbi,
) -> UnlaceResult<Option<PrototypePieces>> {
    let number_of_parameters = fixed_param_types.len() + format_specs.len();
    if number_of_parameters == 0 {
        // createParameters `:296`: numberOfParameters == 0 → null (invalid).
        return Ok(None);
    }
    // A `long double` conversion (`%Lf`) declines the whole site. unlace has no
    // extended-precision base type, so `Spec::LongDouble` lowers to an 8-byte
    // float — and an 8-byte float is a different ABI CLASS from a `long double`:
    // on x86-64 SysV the former is passed in an SSE register and the latter in
    // memory. Asserting the wrong class does not mistype one argument, it shifts
    // every argument after it, and the caller grows a phantom `double` parameter
    // for the vector register the override claimed. coreutils `numfmt`
    // `simple_strtod_human` prints `%Lf` and was recovered with seven parameters
    // instead of five. Saying nothing is the honest answer until the width is.
    if format_specs.contains(&Spec::LongDouble) {
        return Ok(None);
    }
    let mut intypes: Vec<Rc<Datatype>> = Vec::with_capacity(number_of_parameters);
    // i < initialFunctionParameters.size(): the callee's recovered fixed params.
    for ty in fixed_param_types {
        intypes.push(Rc::clone(ty));
    }
    // else: the format-string-derived var-arg types.
    for spec in format_specs {
        intypes.push(spec_to_datatype(*spec, types, word_size)?);
    }
    let ptr_size = types.get_size_of_pointer();
    if !intypes[fixed_param_types.len()..]
        .iter()
        .all(|ty| abi.admits(ty, ptr_size))
    {
        return Ok(None);
    }
    // The parameters are deliberately ANONYMOUS, where Ghidra's
    // `ParameterDefinitionImpl("param" + i, …)` (`:303`/`:307`) names them
    // positionally. A call-site override's parameter names reach the CALLER's
    // locals, and a positional name is the same at every site: coreutils `fmt`
    // renders `error(0,*v2,"%s: %s",param3,param3)` for two different values,
    // because one took `param3` from the two-vararg site and the other from the
    // one-vararg site in the branch beside it — one name, two variables, and
    // only one of them declared. The built-in prototype tables leave `innames`
    // empty for the same reason (`protos::build_pieces`), and the engine then
    // keeps the caller's own naming.
    let innames: Vec<String> = vec![String::new(); number_of_parameters];
    Ok(Some(PrototypePieces {
        name: name.to_string(),
        outtype,
        intypes,
        innames,
        // The override is now a *fixed* signature — no longer varargs (Ghidra
        // installs a FunctionDefinitionDataType with no var-args flag set).
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    }))
}

#[cfg(test)]
mod tests;
