//! Pass hierarchy adaptors.

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum PassScope {
    Module,
    Cgscc,
    Function,
    Loop,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct AdaptedPass {
    pub name: String,
    pub scope: PassScope,
}

impl AdaptedPass {
    pub fn function(name: impl Into<String>) -> Self {
        Self {
            name: name.into(),
            scope: PassScope::Function,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn creates_function_adaptor_record() {
        let pass = AdaptedPass::function("gvn");
        assert_eq!(pass.scope, PassScope::Function);
    }
}
