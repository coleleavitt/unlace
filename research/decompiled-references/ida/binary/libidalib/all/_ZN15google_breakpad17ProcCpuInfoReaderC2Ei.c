// Alternative name is '_ZN15google_breakpad17ProcCpuInfoReaderC1Ei'
google_breakpad::ProcCpuInfoReader *__fastcall google_breakpad::ProcCpuInfoReader::ProcCpuInfoReader(
        google_breakpad::ProcCpuInfoReader *this,
        int a2)
{
  google_breakpad::LineReader::LineReader(this, a2);
  *((_DWORD *)this + 131) = -1;
  return this;
}

