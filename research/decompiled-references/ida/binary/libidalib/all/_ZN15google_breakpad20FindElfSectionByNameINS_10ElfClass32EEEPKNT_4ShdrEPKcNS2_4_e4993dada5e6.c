__int64 __fastcall google_breakpad::FindElfSectionByName<google_breakpad::ElfClass32>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v12; // [rsp+30h] [rbp-10h]
  int v13; // [rsp+38h] [rbp-8h]
  int i; // [rsp+3Ch] [rbp-4h]

  if ( !a1 )
    __assert_fail(
      "name != __null",
      "./src/common/linux/elfutils-inl.h",
      0x34u,
      "const typename ElfClass::Shdr* google_breakpad::FindElfSectionByName(const char*, typename ElfClass::Word, const t"
      "ypename ElfClass::Shdr*, const char*, const char*, int) [with ElfClass = google_breakpad::ElfClass32; typename Elf"
      "Class::Shdr = Elf32_Shdr; typename ElfClass::Word = unsigned int]");
  if ( !a3 )
    __assert_fail(
      "sections != __null",
      "./src/common/linux/elfutils-inl.h",
      0x35u,
      "const typename ElfClass::Shdr* google_breakpad::FindElfSectionByName(const char*, typename ElfClass::Word, const t"
      "ypename ElfClass::Shdr*, const char*, const char*, int) [with ElfClass = google_breakpad::ElfClass32; typename Elf"
      "Class::Shdr = Elf32_Shdr; typename ElfClass::Word = unsigned int]");
  if ( a6 <= 0 )
    __assert_fail(
      "nsection > 0",
      "./src/common/linux/elfutils-inl.h",
      0x36u,
      "const typename ElfClass::Shdr* google_breakpad::FindElfSectionByName(const char*, typename ElfClass::Word, const t"
      "ypename ElfClass::Shdr*, const char*, const char*, int) [with ElfClass = google_breakpad::ElfClass32; typename Elf"
      "Class::Shdr = Elf32_Shdr; typename ElfClass::Word = unsigned int]");
  v13 = my_strlen(a1);
  if ( !v13 )
    return 0;
  for ( i = 0; i < a6; ++i )
  {
    v12 = *(unsigned int *)(40LL * i + a3) + a4;
    if ( a2 == *(_DWORD *)(40LL * i + a3 + 4) && a5 - v12 >= v13 + 1 && !(unsigned int)my_strcmp(a1, v12) )
      return 40LL * i + a3;
  }
  return 0;
}

