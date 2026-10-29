__int64 __fastcall google_breakpad::FindElfSegments(google_breakpad *a1, const void *a2, __int64 a3)
{
  int v5; // [rsp+2Ch] [rbp-4h]

  if ( !a1 )
    __assert_fail(
      "elf_mapped_base",
      "src/common/linux/elfutils.cc",
      0xA4u,
      "bool google_breakpad::FindElfSegments(const void*, uint32_t, google_breakpad::wasteful_vector<google_breakpad::ElfSegment>*)");
  if ( !a3 )
    __assert_fail(
      "segments",
      "src/common/linux/elfutils.cc",
      0xA5u,
      "bool google_breakpad::FindElfSegments(const void*, uint32_t, google_breakpad::wasteful_vector<google_breakpad::ElfSegment>*)");
  if ( (unsigned __int8)google_breakpad::IsValidElf(a1, a2) != 1 )
    return 0;
  v5 = google_breakpad::ElfClass(a1, a2);
  if ( v5 == 1 )
  {
    sub_1BE6D7(a1, (unsigned int)a2, a3);
    return 1;
  }
  else if ( v5 == 2 )
  {
    sub_1BE868(a1, (unsigned int)a2, a3);
    return 1;
  }
  else
  {
    return 0;
  }
}

