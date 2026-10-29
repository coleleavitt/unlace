/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000642D0
// Address: 0x00000001000642D0

//----- (00000001000642D0) ----------------------------------------------------
__int64 __fastcall sub_1000642D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  void *v8; // rdi
  void *v9; // rdi
  unsigned __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r14
  char *v14; // r12
  void *v15; // rdi
  __int64 v16; // rbx
  char *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  const void **v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rsi
  const void **v23; // rcx
  unsigned __int64 v24; // rdx
  size_t v25; // r14
  char *v26; // r12
  const void *v27; // rsi
  unsigned __int64 v28; // rdx
  void *v29; // rax
  __int64 *v32; // [rsp+20h] [rbp-30h]

  v32 = a1 + 35;
  v5 = a1[36];
  if ( v5 )
  {
    v6 = 8;
    do
    {
      v7 = *v32;
      v8 = *(void **)(*v32 + v6 + 32);
      if ( v8 )
      {
        *(_QWORD *)(v7 + v6 + 40) = 0;
        qfree(v8);
        *(_QWORD *)(v7 + v6 + 32) = 0;
        *(_QWORD *)(v7 + v6 + 48) = 0;
      }
      v9 = *(void **)(v7 + v6);
      if ( v9 )
      {
        *(_QWORD *)(v7 + v6 + 8) = 0;
        qfree(v9);
        *(_QWORD *)(v7 + v6) = 0;
        *(_QWORD *)(v7 + v6 + 16) = 0;
      }
      v6 += 64;
      --v5;
    }
    while ( v5 );
  }
  a1[36] = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 24))(a1, v32, a3);
  v10 = a1[36];
  v11 = a2;
  v12 = *(_QWORD *)(a2 + 8);
  if ( v12 )
  {
    v13 = 8;
    do
    {
      v14 = *(char **)a2;
      v15 = *(void **)(*(_QWORD *)a2 + v13);
      if ( v15 )
      {
        *(_QWORD *)&v14[v13 + 8] = 0;
        qfree(v15);
        *(_QWORD *)&v14[v13] = 0;
        *(_QWORD *)&v14[v13 + 16] = 0;
      }
      v13 += 32;
      --v12;
    }
    while ( v12 );
  }
  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)(a2 + 16) >= v10 )
  {
    if ( !v10 )
      return 1;
  }
  else
  {
    *(_QWORD *)a2 = qvector_reserve(a2, *(void **)a2, v10, 0x20u);
  }
  v16 = 0;
  do
  {
    v17 = *(char **)v11;
    v18 = *(_QWORD *)(v11 + 8);
    if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v18 + 1) )
    {
      v17 = (char *)qvector_reserve(v11, *(void **)v11, v18 + 1, 0x20u);
      *(_QWORD *)v11 = v17;
      v18 = *(_QWORD *)(v11 + 8);
    }
    v19 = 32 * v18;
    *(_OWORD *)&v17[v19 + 8] = 0;
    *(_QWORD *)&v17[v19 + 24] = 0;
    ++*(_QWORD *)(v11 + 8);
    v20 = (const void **)&v17[v19 + 8];
    v21 = *v32;
    *(_DWORD *)&v17[v19] = *(_DWORD *)(*v32 + v16);
    v22 = 32 * (unsigned int)(*(_QWORD *)(v21 + v16 + 48) >= 2u);
    v23 = (const void **)(v22 + v21 + v16 + 8);
    if ( v23 != v20 )
    {
      v24 = *(_QWORD *)(v16 + (v22 | 8) + v21 + 8);
      v25 = v24 - 1;
      if ( !v24 )
        v25 = 0;
      v26 = &v17[v19];
      if ( v24 < 2 )
      {
        *((_QWORD *)v26 + 2) = 0;
      }
      else
      {
        v27 = *v23;
        v28 = v25 + 1;
        v29 = *((void **)v26 + 1);
        if ( *((_QWORD *)v26 + 3) <= v25 )
        {
          v29 = qvector_reserve((__int64)v20, v29, v28, 1u);
          v28 = v25 + 1;
          *v20 = v29;
        }
        *((_QWORD *)v26 + 2) = v28;
        memmove(v29, v27, v25);
        *(_BYTE *)(*((_QWORD *)v26 + 1) + v25) = 0;
      }
    }
    v16 += 64;
    --v10;
    v11 = a2;
  }
  while ( v10 );
  return 1;
}
