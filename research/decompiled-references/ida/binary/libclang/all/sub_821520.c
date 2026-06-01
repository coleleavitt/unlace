__int64 __fastcall sub_821520(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 i; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx

  v1 = sub_80F4C0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3)));
  if ( !v1 || (*(_BYTE *)(v1 + 28) & 0x7Fu) - 32 > 5 )
  {
    v10 = sub_80F4C0(*(_QWORD *)(a1 + *(unsigned __int8 *)(a1 + 3)));
    if ( !v10 || (*(_BYTE *)(v10 + 29) & 1) == 0 )
      return 0;
    v11 = sub_79A2B0(v10);
    v12 = (_QWORD *)*v11;
    v13 = *v11 + 8LL * *((unsigned int *)v11 + 2);
    if ( (unsigned __int64)v12 >= v13 )
    {
      if ( v12 == (_QWORD *)v13 )
        return 0;
      while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 120 )
      {
        v13 += 8LL;
        if ( v12 == (_QWORD *)v13 )
          return 0;
      }
      v14 = v12;
    }
    else
    {
      v14 = v12;
      while ( *(_WORD *)(*v14 + 32LL) != 120 )
      {
        if ( (_QWORD *)v13 == ++v14 )
          return 0;
      }
    }
    if ( v14 != (_QWORD *)v13 )
    {
      for ( i = *v12; *(_WORD *)(i + 32) != 120; ++v12 )
        i = v12[1];
      return i;
    }
    return 0;
  }
  if ( (*(_BYTE *)(v1 + 29) & 1) == 0 )
    return 0;
  v2 = sub_79A2B0(v1);
  v3 = (_QWORD *)*v2;
  v4 = *v2 + 8LL * *((unsigned int *)v2 + 2);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( v3 == (_QWORD *)v4 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 120 )
    {
      v4 += 8LL;
      if ( v3 == (_QWORD *)v4 )
        return 0;
    }
    v5 = v3;
  }
  else
  {
    v5 = v3;
    while ( *(_WORD *)(*v5 + 32LL) != 120 )
    {
      if ( (_QWORD *)v4 == ++v5 )
        return 0;
    }
  }
  if ( v5 == (_QWORD *)v4 )
    return 0;
  i = *v3;
  if ( *(_WORD *)(*v3 + 32LL) == 120 )
    return i;
  v7 = v3 + 1;
  do
    v8 = *v7++;
  while ( *(_WORD *)(v8 + 32) != 120 );
  return v8;
}

