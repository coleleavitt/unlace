_QWORD *__fastcall sub_10CCF40(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rbp
  unsigned __int64 v5; // r8
  _QWORD *v6; // rbx
  size_t v7; // r12
  size_t v8; // rcx
  size_t v9; // rdx
  int v10; // eax
  size_t v11; // rbp
  size_t v12; // r12
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // rbp
  _QWORD *v16; // rbp
  __int64 v17; // rax
  _BYTE *v18; // rsi
  void *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r15
  __int64 v25; // r12
  _QWORD *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  unsigned __int64 v29; // rax
  const void *v30; // rsi
  size_t v31; // rdx
  unsigned __int64 v32; // [rsp+0h] [rbp-48h]
  size_t v33; // [rsp+8h] [rbp-40h]

  v3 = a1 + 1;
  v4 = a1[2];
  if ( !v4 )
  {
    v6 = a1 + 1;
    goto LABEL_23;
  }
  v5 = *a2;
  v6 = a1 + 1;
  do
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v4 + 32) < v5 )
        goto LABEL_11;
      if ( *(_QWORD *)(v4 + 32) == v5 )
        break;
LABEL_9:
      v6 = (_QWORD *)v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        goto LABEL_12;
    }
    v7 = *(_QWORD *)(v4 + 48);
    v8 = a2[2];
    v9 = v8;
    if ( v7 <= v8 )
      v9 = *(_QWORD *)(v4 + 48);
    if ( v9 )
    {
      v33 = a2[2];
      v32 = v5;
      v10 = memcmp(*(const void **)(v4 + 40), (const void *)a2[1], v9);
      v5 = v32;
      v8 = v33;
      if ( v10 )
        goto LABEL_8;
    }
    v25 = v7 - v8;
    if ( v25 > 0x7FFFFFFF )
      goto LABEL_9;
    if ( v25 >= (__int64)0xFFFFFFFF80000000LL )
    {
      v10 = v25;
LABEL_8:
      if ( v10 < 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_11:
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v4 );
LABEL_12:
  if ( v3 == v6 || v6[4] > v5 )
    goto LABEL_23;
  if ( v6[4] == v5 )
  {
    v11 = a2[2];
    v12 = v6[6];
    v13 = v12;
    if ( v11 <= v12 )
      v13 = a2[2];
    if ( v13 && (v14 = memcmp((const void *)a2[1], (const void *)v6[5], v13)) != 0 )
    {
LABEL_22:
      if ( v14 < 0 )
        goto LABEL_23;
    }
    else
    {
      v15 = v11 - v12;
      if ( v15 <= 0x7FFFFFFF )
      {
        if ( v15 >= (__int64)0xFFFFFFFF80000000LL )
        {
          v14 = v15;
          goto LABEL_22;
        }
LABEL_23:
        v16 = v6;
        v17 = operator new(0xF8u);
        v18 = (_BYTE *)a2[1];
        v6 = (_QWORD *)v17;
        v19 = (void *)(v17 + 56);
        v20 = (__int64)&v18[a2[2]];
        *(_QWORD *)(v17 + 32) = *a2;
        *(_QWORD *)(v17 + 40) = v17 + 56;
        sub_10B4F90((_QWORD *)(v17 + 40), v18, v20);
        v6[9] = v6 + 11;
        v6[10] = 0x400000000LL;
        v21 = sub_10CCC60(a1, v16, (__int64)(v6 + 4));
        v23 = v21;
        if ( v22 )
        {
          if ( v3 != v22 && !v21 )
          {
            v29 = v22[4];
            if ( v6[4] >= v29 && v6[4] == v29 )
            {
              v30 = (const void *)v22[5];
              v31 = v22[6];
              if ( v6[6] <= v31 )
                v31 = v6[6];
              sub_990B80((const void *)v6[5], v30, v31);
            }
          }
          std::_Rb_tree_insert_and_rebalance();
          ++a1[5];
        }
        else
        {
          v26 = (_QWORD *)v6[9];
          if ( v6 + 11 != v26 )
            free(v26);
          v27 = (void *)v6[5];
          if ( v19 != v27 )
            operator delete(v27);
          v28 = v6;
          v6 = (_QWORD *)v23;
          operator delete(v28);
        }
      }
    }
  }
  return v6 + 9;
}

