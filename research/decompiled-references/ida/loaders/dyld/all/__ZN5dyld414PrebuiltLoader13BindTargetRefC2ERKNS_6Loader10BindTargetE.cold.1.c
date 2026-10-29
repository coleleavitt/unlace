void __noreturn dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef()
{
  __assert_rtn(
    "BindTargetRef",
    "PrebuiltLoader.cpp",
    187,
    "(offset() == bindTarget.runtimeOffset) && \"large offset not support\"");
}
