// Alternative name is '_ZN15google_breakpad18MinidumpFileWriterC2Ev'
google_breakpad::MinidumpFileWriter *__fastcall google_breakpad::MinidumpFileWriter::MinidumpFileWriter(
        google_breakpad::MinidumpFileWriter *this)
{
  *(_DWORD *)this = -1;
  *((_BYTE *)this + 4) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  return this;
}

