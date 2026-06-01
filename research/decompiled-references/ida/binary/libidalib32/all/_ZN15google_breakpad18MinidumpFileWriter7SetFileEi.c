google_breakpad::MinidumpFileWriter *__fastcall google_breakpad::MinidumpFileWriter::SetFile(
        google_breakpad::MinidumpFileWriter *this,
        int a2)
{
  if ( *(_DWORD *)this != -1 )
    __assert_fail(
      "file_ == -1",
      "src/client/minidump_file_writer.cc",
      0x77u,
      "void google_breakpad::MinidumpFileWriter::SetFile(int)");
  *(_DWORD *)this = a2;
  *((_BYTE *)this + 4) = 0;
  return this;
}

