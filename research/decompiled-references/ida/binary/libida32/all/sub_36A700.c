__int64 __fastcall sub_36A700(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 8) = -1;
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  if ( (unsigned int)atos(&v5, v3) )
    *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

