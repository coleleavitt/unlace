__int64 __fastcall sub_5AADBB(__int64 a1, unsigned int a2, __int64 a3)
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
  if ( !sub_5AAC29(a1) )
    return 0;
  v5 = sub_5AAC54(a1);
  if ( v5 == 1 )
  {
    sub_5AB397(a1, a2, a3);
    return 1;
  }
  else if ( v5 == 2 )
  {
    sub_5AB528(a1, a2, a3);
    return 1;
  }
  else
  {
    return 0;
  }
}
