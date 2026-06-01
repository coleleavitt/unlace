bool __fastcall google_breakpad::FindElfSection(
        google_breakpad *this,
        const void *a2,
        const char *a3,
        _QWORD *a4,
        const void **a5,
        unsigned __int64 *a6)
{
  unsigned int v9; // [rsp+1Ch] [rbp-24h]
  int v10; // [rsp+3Ch] [rbp-4h]

  v9 = (unsigned int)a3;
  if ( !this )
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
  *a5 = nullptr;
  if ( (unsigned __int8)google_breakpad::IsValidElf(this, a2) != 1 )
    return 0;
  v10 = google_breakpad::ElfClass(this, a2);
  if ( v10 == 1 )
  {
    sub_1BEEDC(this, a2, v9, a4, a5);
    return *a4 != 0;
  }
  else if ( v10 == 2 )
  {
    sub_1BF0DC(this, a2, v9, a4, a5);
    return *a4 != 0;
  }
  else
  {
    return 0;
  }
}

