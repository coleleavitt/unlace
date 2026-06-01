void __fastcall __noreturn lsl::MemoryManager::vm_allocate_bytes(
        lsl::MemoryManager *this,
        char *a2,
        char *a3,
        char *a4)
{
  bytesToHex(a3, 8, a2);
  strlcpy((char *)this, "Could not vm_allocate 0x", 0x400u);
  OUTLINED_FUNCTION_1_5((char *)this, a2);
  OUTLINED_FUNCTION_1_5((char *)this, " bytes (kr: 0x");
  bytesToHex(a4, 4, a2);
  OUTLINED_FUNCTION_1_5((char *)this, a2);
  OUTLINED_FUNCTION_1_5((char *)this, ")");
  qword_9C1D8 = (__int64)this;
  __assert_rtn("vm_allocate_bytes", "Allocator.cpp", 407, "0 && \"vm_allocate failed\"");
}
