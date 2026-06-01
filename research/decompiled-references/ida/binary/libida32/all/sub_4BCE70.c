void __fastcall sub_4BCE70(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  unsigned int v5; // eax
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbp
  const char *v14; // r15
  const char *v15; // rax
  size_t v16; // rax
  size_t v17; // r8
  void *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+0h] [rbp-48h]
  size_t v24; // [rsp+8h] [rbp-40h]

  v3 = 0;
  v5 = unpack_dd(a1);
  v6 = a2[1];
  v7 = v5;
  if ( v6 )
  {
    do
    {
      v8 = *a2 + 24 * v3;
      v9 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        qfree(v9);
      }
      ++v3;
    }
    while ( v6 != v3 );
  }
  a2[1] = 0;
  if ( a2[2] < v7 )
  {
    *a2 = qvector_reserve(a2, *a2, v7, 24);
  }
  else if ( !v7 )
  {
    return;
  }
  v10 = 0;
  do
  {
    v11 = a2[1];
    v12 = *a2;
    if ( a2[2] < (unsigned __int64)(v11 + 1) )
    {
      v20 = qvector_reserve(a2, v12, v11 + 1, 24);
      v11 = a2[1];
      *a2 = v20;
      v12 = v20;
    }
    v13 = v12 + 24 * v11;
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    ++a2[1];
    v14 = *(const char **)a1;
    v15 = *(const char **)a1;
    do
    {
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_13;
      ++v15;
    }
    while ( *(v15 - 1) );
    *(_QWORD *)a1 = v15;
    if ( !v14 || (v16 = strlen(v14), (v17 = v16) == 0) )
    {
LABEL_13:
      *(_QWORD *)(v13 + 8) = 0;
      goto LABEL_14;
    }
    v18 = *(void **)v13;
    v19 = v16 + 1;
    if ( *(_QWORD *)(v13 + 16) < v16 + 1 )
    {
      v23 = v16 + 1;
      v24 = v16;
      v21 = qvector_reserve(v13, *(_QWORD *)v13, v19, 1);
      v17 = v24;
      v19 = v23;
      *(_QWORD *)v13 = v21;
      v18 = (void *)v21;
    }
    *(_QWORD *)(v13 + 8) = v19;
    v22 = v17;
    memmove(v18, v14, v17);
    *(_BYTE *)(*(_QWORD *)v13 + v22) = 0;
LABEL_14:
    ++v10;
  }
  while ( v7 != v10 );
}

