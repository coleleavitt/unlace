void __noreturn dyld4::Loader::unmap()
{
  __assert_rtn("unmap", "Loader.cpp", 270, "this->magic == kMagic");
}
