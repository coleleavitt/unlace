__int64 __fastcall sub_1DF580(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 v4; // r12
  size_t v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  size_t v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  __int64 v19; // rsi
  size_t v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-48h]
  unsigned __int64 v27; // [rsp+10h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a2[1];
  if ( !v4 )
    return a1;
  v6 = strlen(a3);
  v7 = *a2;
  v8 = v6 * (v4 - 1);
  v9 = v6;
  v10 = *a2 + 24 * v4;
  if ( *a2 == v10 )
  {
    if ( !v8 )
      return a1;
    goto LABEL_23;
  }
  v11 = *a2;
  do
  {
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
      v8 = v8 + v12 - 1;
    v11 += 24;
  }
  while ( v10 != v11 );
  if ( v8 )
  {
LABEL_23:
    *(_QWORD *)a1 = qvector_reserve(a1, 0, v8, 1);
    v7 = *a2;
    v10 = *a2 + 24 * a2[1];
    if ( *a2 == v10 )
      return a1;
    goto LABEL_18;
  }
  do
  {
LABEL_18:
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 > 1 )
    {
      v19 = *(_QWORD *)a1;
      v20 = v9 + v18 - 1;
      v21 = v9 + v18;
      if ( *(_QWORD *)(a1 + 16) < v9 + v18 )
      {
        v22 = qvector_reserve(a1, v19, v21, 1);
        v20 = v9 + v18 - 1;
        v21 = v9 + v18;
        *(_QWORD *)a1 = v22;
        v19 = v22;
      }
      *(_QWORD *)(a1 + 8) = v21;
      *(_BYTE *)(v19 + v20) = 0;
      memmove((void *)(v18 - 1 + *(_QWORD *)a1), a3, v9);
    }
    v13 = *(_QWORD *)(v7 + 8);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v13 != 1 )
      {
        v15 = *(_QWORD *)(a1 + 8);
        v16 = v13 - 1;
        if ( v15 )
        {
          --v15;
          v16 = v14 + v15;
          v13 += v15;
        }
        v17 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v13 )
        {
          v27 = v16;
          v26 = v15;
          v25 = v14;
          v24 = qvector_reserve(a1, v17, v13, 1);
          v16 = v27;
          v15 = v26;
          *(_QWORD *)a1 = v24;
          v17 = v24;
          v14 = v25;
        }
        *(_QWORD *)(a1 + 8) = v13;
        *(_BYTE *)(v17 + v16) = 0;
        memcpy((void *)(v15 + *(_QWORD *)a1), *(const void **)v7, v14);
      }
    }
    v7 += 24;
  }
  while ( v10 != v7 );
  return a1;
}
