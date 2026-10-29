/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005EE50
// Address: 0x000000010005EE50

//----- (000000010005EE50) ----------------------------------------------------
__int64 __fastcall sub_10005EE50(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r15
  char *v6; // rbx
  void *v7; // rdi
  unsigned __int64 v8; // rax
  size_t v9; // rbx
  void *v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // r15
  char *v13; // rbx
  size_t v14; // r12
  void *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r13
  char *v19; // r12
  void *v20; // rax
  __int64 v22; // [rsp+10h] [rbp-80h]
  unsigned __int64 v23; // [rsp+10h] [rbp-80h]
  void *__src; // [rsp+18h] [rbp-78h]
  unsigned __int64 v25; // [rsp+20h] [rbp-70h]
  __int128 v26; // [rsp+48h] [rbp-48h]
  int v27; // [rsp+58h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 <= a2 )
  {
    if ( v4 < a2 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v25 = a3;
      if ( *(_QWORD *)a1 <= a3 && *(_QWORD *)a1 + 56 * v8 > a3 )
      {
        v22 = *(_QWORD *)a3;
        v9 = *(_QWORD *)(a3 + 16);
        if ( v9 )
        {
          __src = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          memcpy(__src, *(const void **)(v25 + 8), v9);
          a3 = v25;
          v8 = *(_QWORD *)(a1 + 16);
        }
        else
        {
          __src = nullptr;
        }
        v27 = *(_DWORD *)(a3 + 48);
        v26 = *(_OWORD *)(a3 + 32);
        if ( v8 < a2 )
          *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x38u);
        v16 = *(_QWORD *)(a1 + 8);
        v17 = a2 - v16;
        if ( a2 > v16 )
        {
          v18 = 56 * v16 + 32;
          do
          {
            v19 = *(char **)a1;
            *(_QWORD *)&v19[v18 - 32] = v22;
            *(_OWORD *)&v19[v18 - 24] = 0;
            *(_QWORD *)&v19[v18 - 8] = 0;
            if ( v9 )
            {
              v20 = qalloc_or_throw(v9);
              *(_QWORD *)&v19[v18 - 24] = v20;
              *(_QWORD *)&v19[v18 - 8] = v9;
              memcpy(v20, __src, v9);
              *(_QWORD *)&v19[v18 - 16] = v9;
            }
            *(_DWORD *)&v19[v18 + 16] = v27;
            *(_OWORD *)&v19[v18] = v26;
            v18 += 56;
            --v17;
          }
          while ( v17 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        if ( __src )
          qfree(__src);
      }
      else
      {
        if ( v8 < a2 )
        {
          v10 = qvector_reserve(a1, *(void **)a1, a2, 0x38u);
          a3 = v25;
          *(_QWORD *)a1 = v10;
          v4 = *(_QWORD *)(a1 + 8);
        }
        v11 = a2 - v4;
        if ( a2 > v4 )
        {
          v23 = a3 + 32;
          v12 = 56 * v4 + 32;
          do
          {
            v13 = *(char **)a1;
            *(_QWORD *)&v13[v12 - 32] = *(_QWORD *)a3;
            *(_OWORD *)&v13[v12 - 24] = 0;
            *(_QWORD *)&v13[v12 - 8] = 0;
            v14 = *(_QWORD *)(a3 + 16);
            if ( v14 )
            {
              v15 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
              *(_QWORD *)&v13[v12 - 24] = v15;
              *(_QWORD *)&v13[v12 - 8] = v14;
              memcpy(v15, *(const void **)(v25 + 8), v14);
              a3 = v25;
              *(_QWORD *)&v13[v12 - 16] = v14;
            }
            *(_DWORD *)&v13[v12 + 16] = *(_DWORD *)(v23 + 16);
            *(_OWORD *)&v13[v12] = *(_OWORD *)v23;
            v12 += 56;
            --v11;
          }
          while ( v11 );
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
    }
  }
  else
  {
    v5 = 56 * a2 + 8;
    do
    {
      v6 = *(char **)a1;
      v7 = *(void **)(*(_QWORD *)a1 + v5);
      if ( v7 )
      {
        *(_QWORD *)&v6[v5 + 8] = 0;
        qfree(v7);
        *(_QWORD *)&v6[v5] = 0;
        *(_QWORD *)&v6[v5 + 16] = 0;
      }
      --v4;
      v5 += 56;
    }
    while ( a2 != v4 );
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __stack_chk_guard;
}
