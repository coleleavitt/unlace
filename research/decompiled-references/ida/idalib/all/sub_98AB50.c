bool __fastcall sub_98AB50(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  bool result; // al

  v1 = *(_QWORD **)a1;
  v2 = 8LL * *(unsigned int *)(a1 + 8);
  v3 = (_QWORD *)(*(_QWORD *)a1 + v2);
  v4 = v2 >> 3;
  v5 = v2 >> 5;
  if ( !v5 )
  {
    v7 = v1;
LABEL_14:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return 0;
LABEL_22:
        result = 0;
        if ( !*v7 )
          return result;
        return v3 != v7;
      }
      if ( *v7 )
        return v3 != v7;
      ++v7;
    }
    if ( !*v7 )
    {
      ++v7;
      goto LABEL_22;
    }
    return v3 != v7;
  }
  if ( *v1 )
    return v1 != v3;
  if ( v1[1] )
    return v3 != v1 + 1;
  if ( v1[2] )
    return v3 != v1 + 2;
  v6 = &v1[4 * v5];
  if ( v1[3] )
    return v3 != v1 + 3;
  while ( 1 )
  {
    v7 = v1 + 4;
    if ( v1 + 4 == v6 )
    {
      v4 = v3 - v6;
      goto LABEL_14;
    }
    if ( v1[4] )
      return v3 != v7;
    if ( v1[5] )
      return v3 != v1 + 5;
    if ( v1[6] )
      return v3 != v1 + 6;
    if ( v1[7] )
      return v3 != v1 + 7;
    v1 += 4;
  }
}
