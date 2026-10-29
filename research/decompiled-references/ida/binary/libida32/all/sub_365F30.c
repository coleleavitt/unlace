__int64 __fastcall sub_365F30(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // edx
  void (__noreturn *v8)(); // rdx

  v3 = haystack;
  v4 = *(_DWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  v5 = (v4 << 8) & 0x1F000;
  v6 = v5 | 0x200000u;
  v7 = v5 | 0x40;
  if ( (v4 & 1) != 0 )
    v6 = v7;
  if ( (v4 & 0x400000) != 0 )
    v6 = (unsigned int)v6 | 0x400000;
  v8 = sub_365330;
  if ( (v4 & 2) != 0 )
    v8 = nullptr;
  *(_DWORD *)(a2 + 8) = parse_decls(0, v3, v8, v6);
  return 0;
}

