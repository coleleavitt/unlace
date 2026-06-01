__int64 __fastcall sub_10BD7C0(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  __int64 v4; // rcx
  size_t v5; // rbp
  size_t v6; // r13
  size_t v7; // rdx
  int v8; // eax
  __int64 v10; // rbp
  size_t v11; // rbx
  size_t v12; // rbp
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // [rsp+8h] [rbp-40h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return a1 + 8;
  v3 = *a2;
  v4 = a1 + 8;
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v2 + 32) < v3 )
        goto LABEL_11;
      if ( *(_QWORD *)(v2 + 32) == v3 )
        break;
LABEL_9:
      v4 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_12;
    }
    v5 = *(_QWORD *)(v2 + 48);
    v6 = a2[2];
    v7 = v6;
    if ( v5 <= v6 )
      v7 = *(_QWORD *)(v2 + 48);
    if ( v7 )
    {
      v16 = v4;
      v8 = memcmp(*(const void **)(v2 + 40), (const void *)a2[1], v7);
      v4 = v16;
      if ( v8 )
        goto LABEL_8;
    }
    v10 = v5 - v6;
    if ( v10 > 0x7FFFFFFF )
      goto LABEL_9;
    if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v8 = v10;
LABEL_8:
      if ( v8 < 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_11:
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_12:
  if ( a1 + 8 == v4 || *(_QWORD *)(v4 + 32) > v3 )
    return a1 + 8;
  if ( *(_QWORD *)(v4 + 32) == v3 )
  {
    v11 = a2[2];
    v12 = *(_QWORD *)(v4 + 48);
    v13 = v12;
    if ( v11 <= v12 )
      v13 = a2[2];
    if ( v13 && (v17 = v4, v14 = memcmp((const void *)a2[1], *(const void **)(v4 + 40), v13), v4 = v17, v14) )
    {
LABEL_26:
      if ( v14 < 0 )
        return a1 + 8;
    }
    else
    {
      v15 = v11 - v12;
      if ( v15 <= 0x7FFFFFFF )
      {
        if ( v15 < (__int64)0xFFFFFFFF80000000LL )
          return a1 + 8;
        v14 = v15;
        goto LABEL_26;
      }
    }
  }
  return v4;
}

