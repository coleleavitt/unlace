void __fastcall sub_1E6890(__int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v6; // rdx
  _DWORD *v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rax
  int v10; // r14d
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // r13
  __int64 *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rsi
  size_t v19; // rcx
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 v22; // rbp
  __m128i *v23; // rbp
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 i; // rbp
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  void *v29; // rax
  __int8 v30; // al
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  size_t n; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]

  if ( a2 != a3 )
  {
    v3 = a2;
    v4 = 8LL * a2;
    v6 = a1[4];
    if ( a2 >= v6 )
    {
      do
      {
        v10 = v6;
        v11 = a1[3];
        v12 = v6 + 1;
        if ( a1[5] < v12 )
        {
          v8 = qvector_reserve(a1 + 3, v11, v12, 8);
          a1[3] = v8;
          v11 = v8;
        }
        v9 = (_DWORD *)(v11 + 8 * a1[4]);
        *v9 = v10;
        v9[1] = 0;
        v6 = a1[4] + 1;
        a1[4] = v6;
      }
      while ( v3 >= v6 );
      v7 = (_DWORD *)(a1[3] + v4);
    }
    else
    {
      v7 = (_DWORD *)(a1[3] + v4);
      if ( *v7 != a2 )
      {
        if ( !under_debugger )
          sub_37E160(51106);
        BUG();
      }
    }
    v13 = *a1;
    *v7 = a3;
    v14 = (__int64 *)(v13 + 24 * v3);
    v15 = (__int64 *)(v13 + 24LL * a3);
    v7[1] = v15[1];
    v16 = *v14;
    v17 = v14[1] << 6;
    v35 = v17 >> 6;
    if ( v17 >> 6 )
    {
      v18 = *v15;
      v19 = 0;
      v20 = v15[1];
      v21 = (v17 >> 6) + v20;
      v22 = v20 << 6;
      if ( v15[2] < v21 )
      {
        n = v14[1] << 6;
        v32 = qvector_reserve(v15, v18, v21, 64);
        v33 = v15[1];
        v17 = n;
        *v15 = v32;
        v18 = v32;
        v19 = (v33 << 6) - v22;
      }
      v23 = (__m128i *)(v18 + v22);
      v24 = v16 + v17;
      memmove(&v23->m128i_i8[v17], v23, v19);
      for ( ; v24 != v16; v23[-1].m128i_i8[8] = v30 )
      {
        *v23 = _mm_loadu_si128((const __m128i *)v16);
        sub_5FE00(v23[1].m128i_i64, v16 + 16);
        v23[2].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v23[2] + 8) = 0;
        v31 = *(_QWORD *)(v16 + 40);
        if ( v31 )
        {
          v29 = (void *)qalloc_or_throw(16 * v31);
          v23[2].m128i_i64[0] = (__int64)v29;
          v23[3].m128i_i64[0] = v31;
          memcpy(v29, *(const void **)(v16 + 32), 16 * v31);
          v23[2].m128i_i64[1] = v31;
        }
        v30 = *(_BYTE *)(v16 + 56);
        v16 += 64;
        v23 += 4;
      }
      v15[1] += v35;
      v16 = *v14;
    }
    if ( v16 )
    {
      v25 = v14[1];
      if ( v25 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v27 = (_QWORD *)((i << 6) + v16);
          v28 = v27[4];
          if ( v28 )
          {
            v27[5] = 0;
            qfree(v28);
          }
          qfree(v27[2]);
          v16 = *v14;
        }
      }
      v14[1] = 0;
      qfree(v16);
      *v14 = 0;
      v14[2] = 0;
    }
  }
}
