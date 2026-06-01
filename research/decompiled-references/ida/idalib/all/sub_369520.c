__int64 __fastcall sub_369520(_QWORD *a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // edx
  void (__noreturn *v8)(); // rdx

  v3 = haystack;
  v4 = a1[5];
  if ( a1[2] )
    v3 = (const char *)a1[1];
  v5 = ((_DWORD)v4 << 8) & 0x1F000;
  v6 = v5 | 0x200000u;
  v7 = v5 | 0x40;
  if ( (v4 & 1) != 0 )
    v6 = v7;
  if ( (v4 & 0x400000) != 0 )
    v6 = (unsigned int)v6 | 0x400000;
  v8 = sub_368890;
  if ( (v4 & 2) != 0 )
    v8 = nullptr;
  *(_QWORD *)(a2 + 8) = (int)parse_decls(0, v3, v8, v6);
  return 0;
}
