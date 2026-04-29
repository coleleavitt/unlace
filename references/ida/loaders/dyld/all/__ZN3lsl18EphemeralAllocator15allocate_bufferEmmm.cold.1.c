void __fastcall __noreturn lsl::EphemeralAllocator::allocate_buffer(lsl::EphemeralAllocator *this)
{
  __assert_rtn("allocate_buffer", "Allocator.cpp", 184, "(uintptr_t)_freeBuffer.address%16 == 0");
}
