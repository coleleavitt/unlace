/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067170
// Address: 0x0000000100067170

//----- (0000000100067170) ----------------------------------------------------
__int64 __fastcall sub_100067170(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r15
  void *v7; // rdi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rax
  size_t v10; // r12
  void *v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r15
  size_t v17; // r12
  _QWORD *v18; // r14
  void *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  bool v22; // cc
  unsigned __int64 v23; // rbx
  __int64 v24; // r15
  char *v25; // r13
  void *v26; // rax
  __int64 v28; // [rsp+0h] [rbp-70h]
  void *__src; // [rsp+10h] [rbp-60h]

  v3 = (__int64 *)a1;
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v8 = (_QWORD *)a3;
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 32 * v9 > a3 )
      {
        v28 = *(_QWORD *)a3;
        v10 = *(_QWORD *)(a3 + 16);
        if ( v10 )
        {
          __src = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          memcpy(__src, *(const void **)(a3 + 8), v10);
          v9 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          __src = nullptr;
        }
        v20 = a2;
        if ( v9 < a2 )
        {
          *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
          v20 = a2;
        }
        v21 = *(_QWORD *)(a1 + 8);
        v22 = v20 <= v21;
        v23 = v20 - v21;
        if ( !v22 )
        {
          v24 = (32 * v21) | 0x18;
          do
          {
            v25 = *(char **)a1;
            *(_QWORD *)&v25[v24 - 24] = v28;
            *(_OWORD *)&v25[v24 - 16] = 0;
            *(_QWORD *)&v25[v24] = 0;
            if ( v10 )
            {
              v26 = qalloc_or_throw(v10);
              *(_QWORD *)&v25[v24 - 16] = v26;
              *(_QWORD *)&v25[v24] = v10;
              memcpy(v26, __src, v10);
              *(_QWORD *)&v25[v24 - 8] = v10;
            }
            v24 += 32;
            --v23;
          }
          while ( v23 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( __src )
          qfree(__src);
      }
      else
      {
        if ( v9 < a2 )
        {
          v13 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
          v8 = (_QWORD *)a3;
          *(_QWORD *)a1 = v13;
          v4 = *(_QWORD *)(a1 + 8);
        }
        v14 = a2 - v4;
        if ( a2 > v4 )
        {
          v15 = (32 * v4) | 0x18;
          do
          {
            v16 = *v3;
            *(_QWORD *)(v16 + v15 - 24) = *v8;
            *(_OWORD *)(v16 + v15 - 16) = 0;
            *(_QWORD *)(v16 + v15) = 0;
            v17 = v8[2];
            if ( v17 )
            {
              v18 = v8;
              v19 = qalloc_or_throw(v8[2]);
              *(_QWORD *)(v16 + v15 - 16) = v19;
              *(_QWORD *)(v16 + v15) = v17;
              memcpy(v19, (const void *)v18[1], v17);
              v8 = v18;
              v3 = (__int64 *)a1;
              *(_QWORD *)(v16 + v15 - 8) = v17;
            }
            v15 += 32;
            --v14;
          }
          while ( v14 );
        }
        v3[1] = a2;
      }
    }
  }
  else
  {
    v5 = (32 * a2) | 8;
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
      v5 += 32;
    }
    while ( a2 != v4 );
    v3[1] = a2;
  }
  return __stack_chk_guard;
}
