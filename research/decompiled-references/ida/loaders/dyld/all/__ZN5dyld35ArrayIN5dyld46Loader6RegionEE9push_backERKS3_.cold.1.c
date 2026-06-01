void __noreturn dyld3::Array<dyld4::Loader::Region>::push_back()
{
  __assert_rtn("push_back", "Array.h", 62, "_usedCount < _allocCount");
}
