bool __fastcall sub_5A7D32(_DWORD *a1, const char *a2)
{
  if ( *a1 != -1 )
    __assert_fail(
      "file_ == -1",
      "src/client/minidump_file_writer.cc",
      0x6Cu,
      "bool google_breakpad::MinidumpFileWriter::Open(const char*)");
  *a1 = sub_5A7C15(a2, 193, 384);
  return *a1 != -1;
}
