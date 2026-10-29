void __noreturn lsl::Vector<lsl::MemoryManager::Buffer>::reserveExact()
{
  __assert_rtn("reserveExact", "Vector.h", 212, "capacity() >= newCapacity");
}
