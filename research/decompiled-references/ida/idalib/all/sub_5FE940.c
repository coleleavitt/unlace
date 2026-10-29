__int64 __fastcall sub_5FE940(int *a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rdi
  int *v9; // r12
  __int64 i; // rbp
  __int64 v11; // rax
  size_t v12; // rbx
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdi
  void *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rbx
  void *v23; // rax
  void *v24; // rax
  const void *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r14
  __int64 v30; // rbx
  void *v31; // rax
  __int64 v33; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]
  size_t na; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  v3 = operator new(0x50u);
  v4 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v3 + 32) = 0;
  v5 = v3;
  *(_OWORD *)(v3 + 40) = 0;
  if ( v4 )
  {
    v24 = (void *)qalloc_or_throw(v4);
    *(_QWORD *)(v5 + 32) = v24;
    v25 = *((const void **)a1 + 4);
    *(_QWORD *)(v5 + 48) = v4;
    memcpy(v24, v25, v4);
    *(_QWORD *)(v5 + 40) = v4;
  }
  v6 = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  if ( v6 )
  {
    v26 = qalloc_or_throw(24 * v6);
    *(_QWORD *)(v5 + 56) = v26;
    v27 = v26;
    v28 = 0;
    *(_QWORD *)(v5 + 72) = v6;
    while ( 1 )
    {
      v29 = 24 * v28 + v27;
      v30 = 24 * v28 + *((_QWORD *)a1 + 7);
      *(_QWORD *)v29 = 0;
      *(_OWORD *)(v29 + 8) = 0;
      if ( *(_QWORD *)(v30 + 8) )
      {
        na = *(_QWORD *)(v30 + 8);
        v31 = (void *)qalloc_or_throw(na);
        *(_QWORD *)v29 = v31;
        ++v28;
        *(_QWORD *)(v29 + 16) = na;
        memcpy(v31, *(const void **)v30, na);
        *(_QWORD *)(v29 + 8) = na;
        if ( v6 == v28 )
        {
LABEL_25:
          *(_QWORD *)(v5 + 64) = v6;
          break;
        }
      }
      else if ( v6 == ++v28 )
      {
        goto LABEL_25;
      }
      v27 = *(_QWORD *)(v5 + 56);
    }
  }
  v7 = *a1;
  v8 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)v5 = v7;
  *(_QWORD *)(v5 + 8) = a2;
  if ( v8 )
    *(_QWORD *)(v5 + 24) = sub_5FE940(v8, v5);
  v9 = *((int **)a1 + 2);
  for ( i = v5; v9; v9 = *((int **)v9 + 2) )
  {
    v33 = i;
    v11 = operator new(0x50u);
    *(_QWORD *)(v11 + 32) = 0;
    i = v11;
    *(_OWORD *)(v11 + 40) = 0;
    v12 = *((_QWORD *)v9 + 5);
    if ( v12 )
    {
      v17 = (void *)qalloc_or_throw(*((_QWORD *)v9 + 5));
      *(_QWORD *)(i + 32) = v17;
      *(_QWORD *)(i + 48) = v12;
      memcpy(v17, *((const void **)v9 + 4), v12);
      *(_QWORD *)(i + 40) = v12;
    }
    *(_QWORD *)(i + 56) = 0;
    *(_OWORD *)(i + 64) = 0;
    v13 = *((_QWORD *)v9 + 8);
    if ( v13 )
    {
      v18 = qalloc_or_throw(24 * v13);
      *(_QWORD *)(i + 56) = v18;
      v19 = v18;
      v20 = 0;
      *(_QWORD *)(i + 72) = v13;
      while ( 1 )
      {
        v21 = 24 * v20 + v19;
        v22 = 24 * v20 + *((_QWORD *)v9 + 7);
        *(_QWORD *)v21 = 0;
        *(_OWORD *)(v21 + 8) = 0;
        if ( *(_QWORD *)(v22 + 8) )
        {
          v36 = v20;
          n = *(_QWORD *)(v22 + 8);
          v23 = (void *)qalloc_or_throw(n);
          *(_QWORD *)v21 = v23;
          *(_QWORD *)(v21 + 16) = n;
          memcpy(v23, *(const void **)v22, n);
          v20 = v36 + 1;
          *(_QWORD *)(v21 + 8) = n;
          if ( v13 == v36 + 1 )
          {
LABEL_19:
            *(_QWORD *)(i + 64) = v13;
            break;
          }
        }
        else if ( v13 == ++v20 )
        {
          goto LABEL_19;
        }
        v19 = *(_QWORD *)(i + 56);
      }
    }
    v14 = *v9;
    *(_QWORD *)(i + 16) = 0;
    *(_QWORD *)(i + 24) = 0;
    *(_DWORD *)i = v14;
    *(_QWORD *)(v33 + 16) = i;
    *(_QWORD *)(i + 8) = v33;
    v15 = *((_QWORD *)v9 + 3);
    if ( v15 )
      *(_QWORD *)(i + 24) = sub_5FE940(v15, i);
  }
  return v5;
}
