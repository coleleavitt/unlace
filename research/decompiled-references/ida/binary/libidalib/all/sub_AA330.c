const char *__fastcall sub_AA330(_QWORD *a1)
{
  _DWORD *v1; // rsi
  __int64 v2; // rax
  const char *result; // rax
  __int64 v4; // rax

  v1 = (_DWORD *)a1[25];
  if ( a1[27] <= 7u )
  {
    v4 = qvector_reserve();
    a1[25] = v4;
    v1 = (_DWORD *)v4;
  }
  a1[26] = 8;
  *v1 = 1667330644;
  *(_DWORD *)((char *)v1 + 3) = 1735289187;
  *(_BYTE *)(a1[25] + 7LL) = 0;
  v2 = a1[23];
  if ( *(_QWORD *)(v2 + 312) && **(_BYTE **)(v2 + 304) )
    sub_96630(a1 + 25);
  result = s1;
  if ( a1[26] )
    return (const char *)a1[25];
  return result;
}

