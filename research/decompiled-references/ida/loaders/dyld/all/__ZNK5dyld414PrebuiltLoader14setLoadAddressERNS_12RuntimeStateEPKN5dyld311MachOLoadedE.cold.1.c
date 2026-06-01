void __noreturn dyld4::PrebuiltLoader::setLoadAddress()
{
  __assert_rtn("setLoadAddress", "PrebuiltLoader.cpp", 813, "this->ref.app && \"shared cache addresses are fixed\"");
}
