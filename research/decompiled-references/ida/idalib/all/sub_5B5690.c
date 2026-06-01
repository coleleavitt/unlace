__int64 __fastcall sub_5B5690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  char *v9; // rsi
  unsigned __int64 v10; // r13
  size_t v11; // r15
  __int64 v12; // r14
  size_t v13; // r8
  char *v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  char *v17; // rsi
  unsigned __int64 v18; // rbp
  size_t v19; // r14
  __int64 v20; // r13
  size_t v21; // r15
  char *v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_35A790((char **)a1);
  if ( *(_QWORD *)(a4 + 8) <= 1u && *(_QWORD *)(a5 + 8) <= 1u )
    return a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 2;
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = *(char **)a1;
    --v7;
    if ( *(_QWORD *)(a1 + 16) >= v8 )
      goto LABEL_5;
  }
  else
  {
    v9 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) >= 2u )
      goto LABEL_5;
  }
  v24 = qvector_reserve(a1, v9, v8, 1);
  *(_QWORD *)a1 = v24;
  v9 = (char *)v24;
LABEL_5:
  *(_QWORD *)(a1 + 8) = v8;
  v9[v7] = 32;
  *(_BYTE *)(*(_QWORD *)a1 + v7 + 1) = 0;
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v10 - 1;
      if ( v12 )
      {
        --v12;
        v13 = v11 + v12;
        v10 += v12;
      }
      v14 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v10 )
      {
        v28 = v13;
        v25 = qvector_reserve(a1, v14, v10, 1);
        *(_QWORD *)a1 = v25;
        v13 = v28;
        v14 = (char *)v25;
      }
      *(_QWORD *)(a1 + 8) = v10;
      v14[v13] = 0;
      memcpy((void *)(v12 + *(_QWORD *)a1), *(const void **)a4, v11);
    }
  }
  if ( *(_QWORD *)(a5 + 8) > 1u )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = 2;
    if ( v15 )
      v16 = v15-- + 1;
    v17 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 )
    {
      v26 = qvector_reserve(a1, v17, v16, 1);
      *(_QWORD *)a1 = v26;
      v17 = (char *)v26;
    }
    *(_QWORD *)(a1 + 8) = v16;
    v17[v15] = 61;
    *(_BYTE *)(*(_QWORD *)a1 + v15 + 1) = 0;
    v18 = *(_QWORD *)(a5 + 8);
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v18 != 1 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v21 = v18 - 1;
        if ( v20 )
        {
          --v20;
          v21 = v19 + v20;
          v18 += v20;
        }
        v22 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v18 )
        {
          v27 = qvector_reserve(a1, v22, v18, 1);
          *(_QWORD *)a1 = v27;
          v22 = (char *)v27;
        }
        *(_QWORD *)(a1 + 8) = v18;
        v22[v21] = 0;
        memcpy((void *)(v20 + *(_QWORD *)a1), *(const void **)a5, v19);
      }
    }
  }
  return a1;
}
