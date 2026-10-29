_BOOL8 __fastcall google_breakpad::MinidumpFileWriter::Copy(
        google_breakpad::MinidumpFileWriter *this,
        unsigned int a2,
        const char *a3,
        size_t a4)
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
  if ( *(_DWORD *)this == -1 )
    __assert_fail(
      "file_ != -1",
      "src/client/minidump_file_writer.cc",
      0x13Cu,
      "bool google_breakpad::MinidumpFileWriter::Copy(MDRVA, const void*, ssize_t)");
  if ( a2 + a4 > *((_QWORD *)this + 2) )
    return 0;
  return sub_1BAEF4(*(_DWORD *)this, a2, 0) == a2 && sub_1BAFB6(*(_DWORD *)this, a3, a4) == a4;
}

