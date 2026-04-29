void __noreturn dyld3::MachOAnalyzer::chainedPointerFormat()
{
  __assert_rtn(
    "chainedPointerFormat",
    "MachOAnalyzer.cpp",
    3223,
    "this->cputype == CPU_TYPE_ARM64 && (this->maskedCpuSubtype() == CPU_SUBTYPE_ARM64E) && \"chainedPointerFormat() call"
    "ed on non-chained binary\"");
}
