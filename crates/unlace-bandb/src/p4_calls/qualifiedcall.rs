//! Resolve declared storage before an indirect call adopts a symbol prototype.
use crate::{context::ArchContext, fspec::FuncProto};
use unlace_base::address::Address;

pub fn prototype(arch: &ArchContext, entry: &Address) -> Option<FuncProto> {
    let pieces = arch.callee_proto_pieces(entry)?;
    if pieces.input_storage.is_empty()
        && pieces.output_storage.is_none()
        && !crate::gotimportproto::binds_type_only(arch, entry, &pieces)
    {
        return None;
    }
    let model = arch
        .callee_proto_model(entry)
        .or_else(|| crate::typedcallabi::undeclared_model(arch, &pieces))
        .or_else(|| arch.default_fp().cloned())?;
    let types = arch.types()?;
    let void = types.get_type_void().ok()?;
    let mut proto = FuncProto::new();
    if pieces.outtype.is_none() && pieces.intypes.is_empty() {
        let output = pieces.output_storage.as_ref()?;
        proto.set_internal(model, void);
        proto.set_output(output);
    } else {
        proto
            .seed_locked_from_pieces(&pieces, model, void, types, arch.manage())
            .ok()?;
    }
    Some(proto)
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::KunaHookSlots) {
    hooks.qualifiedcall_prototype = Some(prototype);
}
