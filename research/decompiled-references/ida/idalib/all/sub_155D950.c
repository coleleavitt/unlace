bool __fastcall sub_155D950(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  bool result; // al

  v2 = *(_QWORD **)(a1 + 2704);
  v3 = 8LL * *(unsigned int *)(a1 + 2712);
  v4 = &v2[(unsigned __int64)v3 / 8];
  v5 = v3 >> 3;
  v6 = v3 >> 5;
  if ( !v6 )
  {
    v8 = v2;
LABEL_14:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return 0;
LABEL_22:
        result = 0;
        if ( a2 != *v8 )
          return result;
        return v4 != v8;
      }
      if ( a2 == *v8 )
        return v4 != v8;
      ++v8;
    }
    if ( a2 != *v8 )
    {
      ++v8;
      goto LABEL_22;
    }
    return v4 != v8;
  }
  if ( a2 == *v2 )
    return v2 != v4;
  if ( a2 == v2[1] )
    return v4 != v2 + 1;
  if ( a2 == v2[2] )
    return v4 != v2 + 2;
  v7 = &v2[4 * v6];
  if ( a2 == v2[3] )
    return v4 != v2 + 3;
  while ( 1 )
  {
    v8 = v2 + 4;
    if ( v7 == v2 + 4 )
    {
      v5 = v4 - v8;
      goto LABEL_14;
    }
    if ( a2 == v2[4] )
      return v4 != v8;
    if ( a2 == v2[5] )
      return v4 != v2 + 5;
    if ( a2 == v2[6] )
      return v4 != v2 + 6;
    if ( a2 == v2[7] )
      return v4 != v2 + 7;
    v2 += 4;
  }
}
