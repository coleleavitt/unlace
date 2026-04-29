void __noreturn mach_o::ChainedFixupPointerOnDisk::isRebase()
{
  __assert_rtn("isRebase", "MachOLayout.cpp", 2081, "0 && \"unsupported pointer chain format\"");
}
