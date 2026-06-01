__int64 __fastcall sub_1BEEDC(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  if ( !a1 )
    __assert_fail(
      "elf_base",
      "src/common/linux/elfutils.cc",
      0x36u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( !a4 )
    __assert_fail(
      "section_start",
      "src/common/linux/elfutils.cc",
      0x37u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( !a5 )
    __assert_fail(
      "section_size",
      "src/common/linux/elfutils.cc",
      0x38u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( (unsigned int)my_strncmp(a1, &unk_1DB364, 4) )
    __assert_fail(
      "my_strncmp(elf_base, \"\\177ELF\", 4) == 0",
      "src/common/linux/elfutils.cc",
      0x3Au,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( *(_BYTE *)(a1 + 4) != 1 )
    __assert_fail(
      "elf_header->e_ident[4] == ElfClass::kClass",
      "src/common/linux/elfutils.cc",
      0x3Du,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( *(_DWORD *)(a1 + 32) )
  {
    v12 = google_breakpad::GetOffset<google_breakpad::ElfClass32,Elf32_Shdr>(a1, *(unsigned int *)(a1 + 32));
    v11 = 40LL * *(unsigned __int16 *)(a1 + 50) + v12;
    v10 = google_breakpad::GetOffset<google_breakpad::ElfClass32,char>(a1, *(unsigned int *)(v11 + 16));
    result = google_breakpad::FindElfSectionByName<google_breakpad::ElfClass32>(
               a2,
               a3,
               v12,
               v10,
               *(unsigned int *)(v11 + 20) + v10,
               *(unsigned __int16 *)(a1 + 48));
    v9 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 20);
      if ( (_DWORD)result )
      {
        *a4 = *(unsigned int *)(v9 + 16) + a1;
        *a5 = *(unsigned int *)(v9 + 20);
        return (__int64)a5;
      }
    }
  }
  else
  {
    *a4 = 0;
    *a5 = 0;
    return (__int64)a5;
  }
  return result;
}

