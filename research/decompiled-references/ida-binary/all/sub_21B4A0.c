const char *__fastcall sub_21B4A0(_QWORD *a1)
{
  _DWORD *v1; // rsi
  __int64 v2; // rax
  const char *v3; // rdx
  const char *result; // rax
  __int64 v5; // rax

  v1 = (_DWORD *)a1[25];
  if ( a1[27] <= 7u )
  {
    v5 = qvector_reserve(a1 + 25, v1, 8, 1);
    a1[25] = v5;
    v1 = (_DWORD *)v5;
  }
  a1[26] = 8;
  *v1 = 1667330644;
  *(_DWORD *)((char *)v1 + 3) = 1735289187;
  *(_BYTE *)(a1[25] + 7LL) = 0;
  v2 = a1[23];
  if ( *(_QWORD *)(v2 + 312) )
  {
    v3 = *(const char **)(v2 + 304);
    if ( *v3 )
      sub_16FAA0(a1 + 25, (__int64)": %s", v3);
  }
  result = &s1;
  if ( a1[26] )
    return (const char *)a1[25];
  return result;
}
