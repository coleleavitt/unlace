__int64 __fastcall google_breakpad::ElfFileSoNameFromMappedFile(google_breakpad *this, const void *a2, char *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 *v5; // r9
  void *v7; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v8[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v9; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v10[2]; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+4Ch] [rbp-4h]

  if ( (unsigned __int8)google_breakpad::IsValidElf(this, a2) != 1 )
    return 0;
  if ( (unsigned __int8)google_breakpad::FindElfSection(
                          this,
                          ".dynamic",
                          &byte_6,
                          (unsigned int)v10,
                          (const void **)&v9,
                          v3) != 1 )
    return 0;
  if ( (unsigned __int8)google_breakpad::FindElfSection(
                          this,
                          ".dynstr",
                          (const char *)&dword_0 + 3,
                          (unsigned int)v8,
                          (const void **)&v7,
                          v5) != 1 )
    return 0;
  v11 = google_breakpad::ElfClass(this, ".dynstr");
  if ( v11 == 1 )
    return google_breakpad::FindElfSoNameFromDynamicSection<google_breakpad::ElfClass32>(
             *(_QWORD *)v10,
             v9,
             *(_QWORD *)v8,
             v7,
             a2,
             a3);
  else
    return google_breakpad::FindElfSoNameFromDynamicSection<google_breakpad::ElfClass64>(
             *(_QWORD *)v10,
             v9,
             *(_QWORD *)v8,
             v7,
             a2,
             a3);
}

