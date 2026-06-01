__int64 __fastcall sub_5AB528(__int64 a1, int a2, __int64 a3)
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
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int]");
  if ( !a3 )
    __assert_fail(
      "segments",
      "src/common/linux/elfutils.cc",
      0x5Fu,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int]");
  if ( (unsigned int)sub_5ADB25(a1, &unk_75B7E4, 4) )
    __assert_fail(
      "my_strncmp(elf_base, \"\\177ELF\", 4) == 0",
      "src/common/linux/elfutils.cc",
      0x61u,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int]");
  v8 = a1;
  if ( *(_BYTE *)(a1 + 4) != 2 )
    __assert_fail(
      "elf_header->e_ident[4] == ElfClass::kClass",
      "src/common/linux/elfutils.cc",
      0x64u,
      "void google_breakpad::{anonymous}::FindElfClassSegment(const char*, typename ElfClass::Word, google_breakpad::wast"
      "eful_vector<google_breakpad::ElfSegment>*) [with ElfClass = google_breakpad::ElfClass64; typename ElfClass::Word = unsigned int]");
  v7 = sub_5ABC8B(v8, *(_QWORD *)(v8 + 32));
  for ( i = 0; ; ++i )
  {
    result = *(unsigned __int16 *)(v8 + 56);
    if ( i >= (int)result )
      break;
    if ( a2 == *(_DWORD *)(56LL * i + v7) )
    {
      v5 = 0;
      v6 = 0;
      v5 = a1 + *(_QWORD *)(56LL * i + v7 + 8);
      v6 = *(_QWORD *)(56LL * i + v7 + 32);
      sub_5ABC10(a3, &v5);
    }
  }
  return result;
}
