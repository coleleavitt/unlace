void __noreturn lsl::Vector<std::byte>::reserveExact()
{
  __assert_rtn("reserveExact", "Vector.h", 212, "capacity() >= newCapacity");
}
