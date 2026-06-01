__int64 __fastcall sub_5A436C(__int64 a1, _QWORD *a2)
{
  if ( !*(_QWORD *)(a1 + 528) )
    __assert_fail(
      "value_",
      "./src/client/linux/minidump_writer/proc_cpuinfo_reader.h",
      0x73u,
      "const char* google_breakpad::ProcCpuInfoReader::GetValueAndLen(size_t*)");
  *a2 = *(_QWORD *)(a1 + 536);
  return *(_QWORD *)(a1 + 528);
}
