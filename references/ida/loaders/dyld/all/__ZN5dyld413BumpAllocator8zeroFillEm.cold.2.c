void __fastcall __noreturn dyld4::BumpAllocator::zeroFill(dyld4::BumpAllocator *this)
{
  __assert_rtn(
    "zeroFill",
    "PrebuiltLoader.cpp",
    2311,
    "(uint8_t*)_usageEnd + reqSize <= (uint8_t*)_vmAllocationStart + _vmAllocationSize");
}
