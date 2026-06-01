_BOOL8 __fastcall sub_5A8230(__int64 a1, unsigned int a2, const char *a3, size_t a4)
{
  if ( !a3 )
    __assert_fail(
      "src",
      "src/client/minidump_file_writer.cc",
      0x13Au,
      "bool google_breakpad::MinidumpFileWriter::Copy(MDRVA, const void*, ssize_t)");
  if ( !a4 )
    __assert_fail(
      "size",
      "src/client/minidump_file_writer.cc",
      0x13Bu,
      "bool google_breakpad::MinidumpFileWriter::Copy(MDRVA, const void*, ssize_t)");
  if ( *(_DWORD *)a1 == -1 )
    __assert_fail(
      "file_ != -1",
      "src/client/minidump_file_writer.cc",
      0x13Cu,
      "bool google_breakpad::MinidumpFileWriter::Copy(MDRVA, const void*, ssize_t)");
  if ( a2 + a4 > *(_QWORD *)(a1 + 16) )
    return 0;
  return sub_5A7BB4(*(_DWORD *)a1, a2, 0) == a2 && sub_5A7C76(*(_DWORD *)a1, a3, a4) == a4;
}
