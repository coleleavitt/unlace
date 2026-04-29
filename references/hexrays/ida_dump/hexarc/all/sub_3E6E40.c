__int64 __fastcall sub_3E6E40(_QWORD *a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbp
  int dtype_size; // eax
  int v4; // eax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  unsigned __int64 *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbp
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx

  v1 = a1[50];
  v2 = *(_QWORD *)(*(_QWORD *)(a1[100] + 24LL) + 16LL) & (16LL * a1[3] + (a1[10] & 0xFFFFFFFFFFFFFFFELL));
  dtype_size = get_dtype_size(2);
  sub_1CF210((__int64)a1, 3u, dtype_size, v1, 0x3BEA45E214ADDC55LL, 264, 0);
  v4 = get_dtype_size(2);
  sub_1CF210((__int64)a1, 3u, v4, v2, 0x3BEA45E214ADDC55LL, 268, 0);
  v5 = (unsigned __int64 *)a1[117];
  v6 = a1[118];
  v7 = &v5[v6];
  if ( v5 == v7 )
    goto LABEL_12;
  v8 = (unsigned __int64 *)a1[117];
  while ( v2 != *v8 )
  {
    if ( v7 == ++v8 )
      goto LABEL_12;
  }
  if ( v7 == v8 )
  {
LABEL_12:
    v15 = v6 + 1;
    if ( a1[119] < v15 )
    {
      v17 = qvector_reserve(a1 + 117, v5, v15, 8);
      v18 = a1[118];
      a1[117] = v17;
      v7 = (unsigned __int64 *)(v17 + 8 * v18);
    }
    *v7 = v2;
    ++a1[118];
  }
  v9 = (_QWORD *)a1[120];
  v10 = a1[121];
  v11 = a1[50];
  v12 = &v9[v10];
  if ( v9 != v12 )
  {
    v13 = (_QWORD *)a1[120];
    while ( v11 != *v13 )
    {
      if ( v12 == ++v13 )
        goto LABEL_15;
    }
    if ( v13 != v12 )
      return 1;
  }
LABEL_15:
  v16 = v10 + 1;
  if ( a1[122] < v16 )
  {
    v19 = qvector_reserve(a1 + 120, v9, v16, 8);
    v20 = a1[121];
    a1[120] = v19;
    v12 = (_QWORD *)(v19 + 8 * v20);
  }
  *v12 = v11;
  ++a1[121];
  return 1;
}
