__int64 __fastcall sub_445060(__int64 a1, __int64 a2)
{
  const char *v2; // r8
  const char *v3; // rcx

  v2 = &s1;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a2 + 32) )
    v2 = *(const char **)(a2 + 24);
  v3 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  sub_169A50((__int64 *)a1, (__int64)"%d, %s@%s", *(_DWORD *)(a2 + 84), v3, v2);
  return a1;
}
