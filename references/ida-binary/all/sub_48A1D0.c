unsigned __int64 __fastcall sub_48A1D0(__int64 *a1, const char **a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned __int64 v7; // rdx
  const __m128i *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm1
  const char *v16; // rsi
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __m128i v25; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v26 = __readfsqword(0x28u);
  v7 = v5 + a1[1];
  if ( a1[2] < v7 )
  {
    *a1 = qvector_reserve(a1, *a1, v7, 40);
    v5 = *(_QWORD *)(a3 + 8);
  }
  v8 = *(const __m128i **)a3;
  v9 = *(_QWORD *)a3 + 16 * v5;
  if ( *(_QWORD *)a3 != v9 )
  {
    do
    {
      if ( v8->m128i_i64[0] != -1 || v8->m128i_i64[1] )
      {
        v10 = a1[1];
        v11 = *a1 + 40 * v10;
        if ( *a1 == v11 )
          goto LABEL_15;
        v12 = *a1;
        while ( *(_QWORD *)(v12 + 32) != v8->m128i_i64[1] || *(_QWORD *)(v12 + 24) != v8->m128i_i64[0] )
        {
          v12 += 40;
          if ( v11 == v12 )
            goto LABEL_15;
        }
        if ( !v12 )
        {
LABEL_15:
          v14 = v10 + 1;
          if ( a1[2] < v14 )
          {
            v21 = qvector_reserve(a1, *a1, v14, 40);
            v22 = a1[1];
            *a1 = v21;
            v11 = v21 + 40 * v22;
          }
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          *(_OWORD *)(v11 + 24) = -1;
          ++a1[1];
          v15 = _mm_loadu_si128(v8);
          v24 = 0;
          *(__m128i *)(v11 + 24) = v15;
          v16 = *a2;
          v25 = 0;
          dirtree_get_abspath_by_cursor(&v24, v16, v8, 0);
          v17 = v24;
          v18 = _mm_loadu_si128(&v25);
          v24 = 0;
          v25 = 0;
          v19 = *(_QWORD *)v11;
          if ( *(_QWORD *)v11 )
          {
            *(_QWORD *)(v11 + 8) = 0;
            v23 = v18;
            qfree(v19, v16);
            v18 = _mm_load_si128(&v23);
          }
          *(_QWORD *)v11 = v17;
          v20 = v24;
          *(__m128i *)(v11 + 8) = v18;
          if ( v20 )
          {
            v25.m128i_i64[0] = 0;
            qfree(v20, v16);
          }
        }
      }
      ++v8;
    }
    while ( (const __m128i *)v9 != v8 );
  }
  return v26 - __readfsqword(0x28u);
}
