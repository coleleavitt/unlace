//! Explicit return storage suppresses model-generated hidden return arguments.
use crate::dtype::TypeFactory;
use crate::fspec::PrototypePieces;
use std::borrow::Cow;
use unlace_base::error::KunaResult;

#[doc(hidden)]
pub fn input_assignment<'a>(
    pieces: &'a PrototypePieces,
    types: &dyn TypeFactory,
) -> KunaResult<Cow<'a, PrototypePieces>> {
    if pieces.output_storage.is_none() {
        return Ok(Cow::Borrowed(pieces));
    }
    let mut inputs = pieces.clone();
    inputs.outtype = Some(types.get_type_void()?);
    Ok(Cow::Owned(inputs))
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.customreturn_input_assignment = Some(input_assignment);
}
