_QWORD *__fastcall sub_16716D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx

  v2 = (_QWORD *)sub_9C8850(a2);
  v4 = (v3 - (__int64)v2) >> 5;
  v5 = (v3 - (__int64)v2) >> 3;
  if ( v4 <= 0 )
  {
    v8 = v2;
LABEL_14:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return (_QWORD *)v3;
        goto LABEL_17;
      }
      if ( *(_WORD *)(*v8 + 36LL) == 372 )
        return v8;
      ++v8;
    }
    if ( *(_WORD *)(*v8 + 36LL) != 372 )
    {
      ++v8;
LABEL_17:
      if ( *(_WORD *)(*v8 + 36LL) == 372 )
        return v8;
      return (_QWORD *)v3;
    }
    return v8;
  }
  if ( *(_WORD *)(*v2 + 36LL) == 372 )
    return v2;
  if ( *(_WORD *)(v2[1] + 36LL) == 372 )
    return v2 + 1;
  if ( *(_WORD *)(v2[2] + 36LL) == 372 )
    return v2 + 2;
  v6 = v2;
  v7 = &v2[4 * v4];
  if ( *(_WORD *)(v2[3] + 36LL) == 372 )
    return v2 + 3;
  while ( 1 )
  {
    v8 = v6 + 4;
    if ( v6 + 4 == v7 )
    {
      v5 = (v3 - (__int64)v7) >> 3;
      goto LABEL_14;
    }
    if ( *(_WORD *)(v6[4] + 36LL) == 372 )
      return v8;
    if ( *(_WORD *)(v6[5] + 36LL) == 372 )
      return v6 + 5;
    if ( *(_WORD *)(v6[6] + 36LL) == 372 )
      return v6 + 6;
    if ( *(_WORD *)(v6[7] + 36LL) == 372 )
      return v6 + 7;
    v6 += 4;
  }
}
