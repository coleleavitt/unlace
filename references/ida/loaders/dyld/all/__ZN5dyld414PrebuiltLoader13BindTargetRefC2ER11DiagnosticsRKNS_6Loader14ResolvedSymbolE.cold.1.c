void __noreturn dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef()
{
  __assert_rtn(
    "BindTargetRef",
    "PrebuiltLoader.cpp",
    94,
    "(offset() == targetSymbol.targetRuntimeOffset) && \"large offset not support\"");
}
