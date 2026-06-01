__int64 __fastcall sub_1BE6D7(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  __int64 v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp-10h]
  int i; // [rsp+4Ch] [rbp-4h]

  if ( !a1 )
    __assert_fail(
      "elf_base",
      "src/common/linux/elfutils.cc",
      0x5Eu,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int]");
  if ( !a3 )
    __assert_fail(
      "segments",
      "src/common/linux/elfutils.cc",
      0x5Fu,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int]");
  if ( (unsigned int)my_strncmp(a1, &unk_1DA344, 4) )
    __assert_fail(
      "my_strncmp(elf_base, \"\\177ELF\", 4) == 0",
      "src/common/linux/elfutils.cc",
      0x61u,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int]");
  v8 = a1;
  if ( *(_BYTE *)(a1 + 4) != 1 )
    __assert_fail(
      "elf_header->e_ident[4] == ElfClass::kClass",
      "src/common/linux/elfutils.cc",
      0x64u,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass32; typename ElfClass::Word = unsigned int]");
  v7 = google_breakpad::GetOffset<google_breakpad::ElfClass32,Elf32_Phdr>(v8, *(unsigned int *)(v8 + 28));
  for ( i = 0; ; ++i )
  {
    result = *(unsigned __int16 *)(v8 + 44);
    if ( i >= (int)result )
      break;
    if ( a2 == *(_DWORD *)(32LL * i + v7) )
    {
      v5 = 0;
      v6 = 0;
      v5 = *(unsigned int *)(32LL * i + v7 + 4) + a1;
      v6 = *(unsigned int *)(32LL * i + v7 + 16);
      std::vector<google_breakpad::ElfSegment,google_breakpad::PageStdAllocator<google_breakpad::ElfSegment>>::push_back(
        a3,
        &v5);
    }
  }
  return result;
}

