bool __fastcall google_breakpad::MinidumpFileWriter::Open(google_breakpad::MinidumpFileWriter *this, const char *a2)
{
  if ( *(_DWORD *)this != -1 )
    __assert_fail(
      "file_ == -1",
      "src/client/minidump_file_writer.cc",
      0x6Cu,
      "bool google_breakpad::MinidumpFileWriter::Open(const char*)");
  *(_DWORD *)this = sub_1BAF55(a2, 193, 384);
  return *(_DWORD *)this != -1;
}

