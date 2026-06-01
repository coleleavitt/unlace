__int64 __fastcall sub_221BB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // r15
  const void *v4; // r13
  __int64 v5; // r12
  size_t v6; // rbp
  size_t v7; // rdx
  int v8; // eax
  size_t v9; // rbx
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // r15
  __int64 v14; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return a1 + 8;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(const void **)a2;
  v5 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v2 + 40);
      v7 = v3;
      if ( v6 <= v3 )
        v7 = *(_QWORD *)(v2 + 40);
      if ( !v7 )
        break;
      v8 = memcmp(*(const void **)(v2 + 32), v4, v7);
      if ( !v8 )
        break;
LABEL_8:
      if ( v8 < 0 )
        goto LABEL_9;
LABEL_3:
      v5 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_10;
    }
    v14 = v6 - v3;
    if ( v14 > 0x7FFFFFFF )
      goto LABEL_3;
    if ( v14 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v8 = v14;
      goto LABEL_8;
    }
LABEL_9:
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_10:
  if ( a1 + 8 != v5 )
  {
    v9 = *(_QWORD *)(v5 + 40);
    v10 = v9;
    if ( v3 <= v9 )
      v10 = v3;
    if ( v10 && (v11 = memcmp(v4, *(const void **)(v5 + 32), v10)) != 0 )
    {
LABEL_18:
      if ( v11 < 0 )
        return a1 + 8;
    }
    else
    {
      v12 = v3 - v9;
      if ( v12 <= 0x7FFFFFFF )
      {
        if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v11 = v12;
          goto LABEL_18;
        }
        return a1 + 8;
      }
    }
  }
  return v5;
}
