__int64 __fastcall google_breakpad::ProcCpuInfoReader::GetValueAndLen(
        google_breakpad::ProcCpuInfoReader *this,
        unsigned __int64 *a2)
{
  if ( !*((_QWORD *)this + 66) )
    __assert_fail(
      "value_",
      "./src/client/linux/minidump_writer/proc_cpuinfo_reader.h",
      0x73u,
      "const char* google_breakpad::ProcCpuInfoReader::GetValueAndLen(size_t*)");
  *a2 = *((_QWORD *)this + 67);
  return *((_QWORD *)this + 66);
}

