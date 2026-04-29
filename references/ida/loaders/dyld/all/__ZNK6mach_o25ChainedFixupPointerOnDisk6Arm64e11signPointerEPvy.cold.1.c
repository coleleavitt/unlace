void __noreturn mach_o::ChainedFixupPointerOnDisk::Arm64e::signPointer()
{
  __assert_rtn("signPointer", "MachOLayout.cpp", 2003, "this->authBind.auth == 1");
}
