__int64 __fastcall sub_1BE4DC(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-20h]
  unsigned __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  if ( !a1 )
    __assert_fail(
      "elf_base",
      "src/common/linux/elfutils.cc",
      0x36u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( !a4 )
    __assert_fail(
      "section_start",
      "src/common/linux/elfutils.cc",
      0x37u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( !a5 )
    __assert_fail(
      "section_size",
      "src/common/linux/elfutils.cc",
      0x38u,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( (unsigned int)my_strncmp(a1, &unk_1DA344, 4) )
    __assert_fail(
      "my_strncmp(elf_base, \"\\177ELF\", 4) == 0",
      "src/common/linux/elfutils.cc",
      0x3Au,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( *(_BYTE *)(a1 + 4) != 2 )
    __assert_fail(
      "elf_header->e_ident[4] == ElfClass::kClass",
      "src/common/linux/elfutils.cc",
      0x3Du,
      "void google_breakpad::{anonymous}::FindElfClassSection(const char*, const char*, typename ElfClass::Word, const vo"
      "id**, size_t*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int; size_t = long unsigned int]");
  if ( *(_QWORD *)(a1 + 40) )
  {
    v12 = google_breakpad::GetOffset<google_breakpad::ElfClass64,Elf64_Shdr>(a1, *(_QWORD *)(a1 + 40));
    v11 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 62) << 6) + v12;
    v10 = google_breakpad::GetOffset<google_breakpad::ElfClass64,char>(a1, *(_QWORD *)(v11 + 24));
    result = google_breakpad::FindElfSectionByName<google_breakpad::ElfClass64>(
               a2,
               a3,
               v12,
               v10,
               *(_QWORD *)(v11 + 32) + v10,
               *(unsigned __int16 *)(a1 + 60));
    v9 = result;
    if ( result )
    {
      result = *(_QWORD *)(result + 32);
      if ( result )
      {
        *a4 = a1 + *(_QWORD *)(v9 + 24);
        *a5 = *(_QWORD *)(v9 + 32);
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

