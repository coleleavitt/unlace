bool __fastcall sub_5AAC71(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  int v9; // [rsp+3Ch] [rbp-4h]

  if ( !a1 )
    __assert_fail(
      "elf_mapped_base",
      "src/common/linux/elfutils.cc",
      0x86u,
      "bool google_breakpad::FindElfSection(const void*, const char*, uint32_t, const void**, size_t*)");
  if ( !a4 )
    __assert_fail(
      "section_start",
      "src/common/linux/elfutils.cc",
      0x87u,
      "bool google_breakpad::FindElfSection(const void*, const char*, uint32_t, const void**, size_t*)");
  if ( !a5 )
    __assert_fail(
      "section_size",
      "src/common/linux/elfutils.cc",
      0x88u,
      "bool google_breakpad::FindElfSection(const void*, const char*, uint32_t, const void**, size_t*)");
  *a4 = 0;
  *a5 = 0;
  if ( !sub_5AAC29(a1) )
    return 0;
  v9 = sub_5AAC54(a1);
  if ( v9 == 1 )
  {
    sub_5AAF9C(a1, a2, a3, a4, a5);
    return *a4 != 0;
  }
  else if ( v9 == 2 )
  {
    sub_5AB19C(a1, a2, a3, a4, a5);
    return *a4 != 0;
  }
  else
  {
    return 0;
  }
}
