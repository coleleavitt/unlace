/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E340
// Address: 0x000000010002E340

//----- (000000010002E340) ----------------------------------------------------
__int64 __fastcall sub_10002E340(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rbx
  void *v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  void *v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rbx
  size_t v17; // r12
  const void **v18; // r14
  void *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r13
  char *v23; // r12
  void *v24; // rax
  void *__src; // [rsp+18h] [rbp-58h]
  size_t v27; // [rsp+30h] [rbp-40h]

  v3 = (__int64 *)a1;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 24 * a2;
    do
    {
      v6 = *v3;
      v7 = *(void **)(*v3 + v5);
      if ( v7 )
      {
        *(_QWORD *)(v6 + v5 + 8) = 0;
        qfree(v7);
        *(_QWORD *)(v6 + v5) = 0;
        *(_QWORD *)(v6 + v5 + 16) = 0;
      }
      --v4;
      v5 += 24;
    }
    while ( a2 != v4 );
    v3[1] = a2;
    return __stack_chk_guard;
  }
  if ( v4 >= a2 )
    return __stack_chk_guard;
  v8 = a3;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 24 * v9 > a3 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
    {
      v27 = *(_QWORD *)(a3 + 8);
      __src = qalloc_or_throw(v27);
      memcpy(__src, *(const void **)a3, v27);
      v10 = v27;
      if ( *(_QWORD *)(a1 + 16) >= a2 )
        goto LABEL_22;
    }
    else
    {
      __src = nullptr;
      if ( v9 >= a2 )
      {
LABEL_22:
        v20 = *(_QWORD *)(a1 + 8);
        v21 = a2 - v20;
        if ( a2 > v20 )
        {
          v22 = 24 * v20;
          do
          {
            v23 = *(char **)a1;
            *(_OWORD *)&v23[v22] = 0;
            *(_QWORD *)&v23[v22 + 16] = 0;
            if ( v10 )
            {
              v24 = qalloc_or_throw(v10);
              *(_QWORD *)&v23[v22] = v24;
              *(_QWORD *)&v23[v22 + 16] = v10;
              memcpy(v24, __src, v10);
              *(_QWORD *)&v23[v22 + 8] = v10;
            }
            v22 += 24;
            --v21;
          }
          while ( v21 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( __src )
          qfree(__src);
        return __stack_chk_guard;
      }
    }
    *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x18u);
    goto LABEL_22;
  }
  if ( v9 < a2 )
  {
    v13 = qvector_reserve(a1, *(void **)a1, a2, 0x18u);
    v8 = a3;
    *(_QWORD *)a1 = v13;
    v4 = *(_QWORD *)(a1 + 8);
  }
  v14 = a2 - v4;
  if ( a2 > v4 )
  {
    v15 = 24 * v4;
    do
    {
      v16 = *v3;
      *(_OWORD *)(v16 + v15) = 0;
      *(_QWORD *)(v16 + v15 + 16) = 0;
      v17 = *(_QWORD *)(v8 + 8);
      if ( v17 )
      {
        v18 = (const void **)v8;
        v19 = qalloc_or_throw(*(_QWORD *)(v8 + 8));
        *(_QWORD *)(v16 + v15) = v19;
        *(_QWORD *)(v16 + v15 + 16) = v17;
        memcpy(v19, *v18, v17);
        v8 = (unsigned __int64)v18;
        v3 = (__int64 *)a1;
        *(_QWORD *)(v16 + v15 + 8) = v17;
      }
      v15 += 24;
      --v14;
    }
    while ( v14 );
  }
  v3[1] = a2;
  return __stack_chk_guard;
}
