char __fastcall sub_141B210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v5; // r14
  __int64 v6; // rbp
  size_t v7; // rcx
  __int64 v8; // rbx
  size_t v9; // rdx
  __int64 v10; // r12
  size_t v11; // r15
  int v12; // eax
  char result; // al
  size_t v14; // rbx
  size_t v15; // r12
  size_t v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-48h]
  size_t v19; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v5 = (a2 - a1) >> 4;
  v6 = a1;
  if ( a2 - a1 > 0 )
  {
    v7 = *(_QWORD *)(a3 + 8);
    while ( 1 )
    {
      v9 = v7;
      v8 = v5 >> 1;
      v10 = v6 + 16 * (v5 >> 1);
      v11 = *(_QWORD *)(v10 + 8);
      if ( v11 <= v7 )
        v9 = *(_QWORD *)(v10 + 8);
      if ( !v9 )
        break;
      v19 = v7;
      v18 = v3;
      v12 = memcmp(*(const void **)v10, *(const void **)a3, v9);
      v3 = v18;
      v7 = v19;
      if ( !v12 )
        break;
      if ( v12 < 0 )
        goto LABEL_5;
      if ( v8 <= 0 )
        goto LABEL_14;
LABEL_7:
      v5 = v8;
    }
    if ( v11 != v7 && v11 < v7 )
    {
LABEL_5:
      v6 = v10 + 16;
      v8 = v5 - v8 - 1;
    }
    if ( v8 <= 0 )
      goto LABEL_14;
    goto LABEL_7;
  }
LABEL_14:
  result = 0;
  if ( v3 != v6 )
  {
    v14 = *(_QWORD *)(a3 + 8);
    v15 = *(_QWORD *)(v6 + 8);
    v16 = v14;
    if ( v15 <= v14 )
      v16 = *(_QWORD *)(v6 + 8);
    if ( v16 && (v17 = memcmp(*(const void **)a3, *(const void **)v6, v16)) != 0 )
    {
      return v17 >= 0;
    }
    else
    {
      result = v15 <= v14;
      if ( v15 == v14 )
        return 1;
    }
  }
  return result;
}
