void __noreturn mach_o::ChainedFixupPointerOnDisk::isBind()
{
  __assert_rtn("isBind", "MachOLayout.cpp", 2132, "0 && \"unsupported pointer chain format\"");
}
