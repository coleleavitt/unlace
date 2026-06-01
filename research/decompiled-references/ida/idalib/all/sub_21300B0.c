__int64 __fastcall sub_21300B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  size_t v4; // rbp
  size_t v5; // r15
  size_t v6; // rdx
  int v7; // eax
  size_t v8; // rbx
  size_t v9; // rdx
  int v10; // eax

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return a1 + 8;
  v3 = a1 + 8;
  v4 = *(_QWORD *)(a2 + 8);
  do
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 40);
      v6 = v4;
      if ( v5 <= v4 )
        v6 = *(_QWORD *)(v2 + 40);
      if ( v6 )
      {
        v7 = memcmp(*(const void **)(v2 + 32), *(const void **)a2, v6);
        if ( v7 )
          break;
      }
      if ( v5 == v4 || v5 >= v4 )
      {
        v3 = v2;
        v2 = *(_QWORD *)(v2 + 16);
        goto LABEL_11;
      }
LABEL_3:
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        goto LABEL_12;
    }
    if ( v7 < 0 )
      goto LABEL_3;
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 16);
LABEL_11:
    ;
  }
  while ( v2 );
LABEL_12:
  if ( a1 + 8 != v3 )
  {
    v8 = *(_QWORD *)(v3 + 40);
    v9 = v4;
    if ( v8 <= v4 )
      v9 = *(_QWORD *)(v3 + 40);
    if ( v9 && (v10 = memcmp(*(const void **)a2, *(const void **)(v3 + 32), v9)) != 0 )
    {
      if ( v10 >= 0 )
        return v3;
    }
    else if ( v8 == v4 || v8 <= v4 )
    {
      return v3;
    }
  }
  return a1 + 8;
}
