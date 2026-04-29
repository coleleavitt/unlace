__int64 __fastcall sub_3CA560(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 *v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 *v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 *v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1[7];
  if ( !v2 )
    return 1;
  v6 = *(unsigned __int64 **)a2;
  v7 = 0;
  v8 = v6;
  while ( v3 < *v8 || v3 >= *v8 + v8[2] )
  {
    ++v7;
    v8 += 3;
    if ( v7 == v2 )
      goto LABEL_6;
  }
  if ( !v8 )
  {
LABEL_6:
    v9 = a1[8];
    goto LABEL_7;
  }
  v20 = correct_address(v3, *v8, v8[1], v8[2], 0);
  v9 = a1[8];
  a1[7] = v20;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v6 = *(unsigned __int64 **)a2;
LABEL_7:
  v10 = v6;
  v11 = 0;
  while ( v9 < *v10 || v9 >= *v10 + v10[2] )
  {
    ++v11;
    v10 += 3;
    if ( v11 == v2 )
      goto LABEL_11;
  }
  if ( !v10 )
  {
LABEL_11:
    v12 = a1[5];
    goto LABEL_12;
  }
  v22 = correct_address(v9, *v10, v10[1], v10[2], 0);
  v12 = a1[5];
  a1[8] = v22;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v6 = *(unsigned __int64 **)a2;
LABEL_12:
  v13 = v6;
  v14 = 0;
  while ( v12 < *v13 || v12 >= *v13 + v13[2] )
  {
    ++v14;
    v13 += 3;
    if ( v14 == v2 )
      goto LABEL_16;
  }
  if ( !v13 )
  {
LABEL_16:
    v15 = a1[6];
    goto LABEL_17;
  }
  v21 = correct_address(v12, *v13, v13[1], v13[2], 0);
  v15 = a1[6];
  a1[5] = v21;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 1;
  v6 = *(unsigned __int64 **)a2;
LABEL_17:
  v16 = 0;
  while ( 1 )
  {
    v17 = *v6;
    if ( v15 >= *v6 )
    {
      v18 = v6[2];
      if ( v15 < v17 + v18 )
        break;
    }
    ++v16;
    v6 += 3;
    if ( v16 == v2 )
      return 1;
  }
  if ( v6 )
  {
    a1[6] = correct_address(v15, v17, v6[1], v18, 0);
    return 1;
  }
  return 1;
}
