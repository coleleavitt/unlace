_QWORD *__fastcall sub_1AA0ED0(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdi
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // rsi

  v1 = *(_QWORD **)a1;
  v2 = 8LL * *(_QWORD *)(a1 + 8);
  result = &v1[(unsigned __int64)v2 / 8];
  v4 = v2 >> 5;
  v5 = v2 >> 3;
  if ( v4 <= 0 )
  {
    v7 = v1;
LABEL_14:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return result;
        goto LABEL_17;
      }
      if ( *(_BYTE *)(*v7 + 8LL) == 43 )
        return v7;
      ++v7;
    }
    if ( *(_BYTE *)(*v7 + 8LL) != 43 )
    {
      ++v7;
LABEL_17:
      if ( *(_BYTE *)(*v7 + 8LL) == 43 )
        return v7;
      return result;
    }
    return v7;
  }
  if ( *(_BYTE *)(*v1 + 8LL) == 43 )
    return v1;
  if ( *(_BYTE *)(v1[1] + 8LL) == 43 )
    return v1 + 1;
  if ( *(_BYTE *)(v1[2] + 8LL) == 43 )
    return v1 + 2;
  v6 = &v1[4 * v4];
  if ( *(_BYTE *)(v1[3] + 8LL) == 43 )
    return v1 + 3;
  while ( 1 )
  {
    v7 = v1 + 4;
    if ( v1 + 4 == v6 )
    {
      v5 = result - v6;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(v1[4] + 8LL) == 43 )
      return v7;
    if ( *(_BYTE *)(v1[5] + 8LL) == 43 )
      return v1 + 5;
    if ( *(_BYTE *)(v1[6] + 8LL) == 43 )
      return v1 + 6;
    if ( *(_BYTE *)(v1[7] + 8LL) == 43 )
      return v1 + 7;
    v1 += 4;
  }
}
