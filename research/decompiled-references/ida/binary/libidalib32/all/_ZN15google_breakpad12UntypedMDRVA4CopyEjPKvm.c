__int64 __fastcall google_breakpad::UntypedMDRVA::Copy(
        google_breakpad::UntypedMDRVA *this,
        unsigned int a2,
        const void *a3,
        __int64 a4)
{
  if ( !a3 )
    __assert_fail(
      "src",
      "src/client/minidump_file_writer.cc",
      0x15Bu,
      "bool google_breakpad::UntypedMDRVA::Copy(MDRVA, const void*, size_t)");
  if ( !a4 )
    __assert_fail(
      "size",
      "src/client/minidump_file_writer.cc",
      0x15Cu,
      "bool google_breakpad::UntypedMDRVA::Copy(MDRVA, const void*, size_t)");
  if ( a4 + (unsigned __int64)a2 > (unsigned __int64)*((unsigned int *)this + 2) + *((_QWORD *)this + 2) )
    __assert_fail(
      "pos + size <= position_ + size_",
      "src/client/minidump_file_writer.cc",
      0x15Du,
      "bool google_breakpad::UntypedMDRVA::Copy(MDRVA, const void*, size_t)");
  return google_breakpad::MinidumpFileWriter::Copy(*(google_breakpad::MinidumpFileWriter **)this, a2, a3, a4);
}

