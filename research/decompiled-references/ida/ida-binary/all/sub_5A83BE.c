_BOOL8 __fastcall sub_5A83BE(__int64 a1, unsigned int a2, const char *a3, size_t a4)
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
  if ( a4 + a2 > (unsigned __int64)*(unsigned int *)(a1 + 8) + *(_QWORD *)(a1 + 16) )
    __assert_fail(
      "pos + size <= position_ + size_",
      "src/client/minidump_file_writer.cc",
      0x15Du,
      "bool google_breakpad::UntypedMDRVA::Copy(MDRVA, const void*, size_t)");
  return sub_5A8230(*(_QWORD *)a1, a2, a3, a4);
}
