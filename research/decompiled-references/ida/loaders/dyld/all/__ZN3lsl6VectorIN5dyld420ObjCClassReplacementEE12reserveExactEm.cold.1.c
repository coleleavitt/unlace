void __noreturn lsl::Vector<dyld4::ObjCClassReplacement>::reserveExact()
{
  __assert_rtn("reserveExact", "Vector.h", 212, "capacity() >= newCapacity");
}
