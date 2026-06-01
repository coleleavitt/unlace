void __fastcall sub_62D3C0(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r14
  __m128i *v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r13
  __m128i *v12; // rdx
  __int64 v13; // rax
  const __m128i *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __m128i v20; // xmm1
  unsigned __int64 v21; // rax
  __m128i *v22; // rdx
  const __m128i *v23; // rax
  __int64 v24; // rsi
  __m128i v25; // xmm1
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // rdx
  const __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rsi
  __int64 v32; // [rsp+8h] [rbp-40h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v2->m128i_i64 - *(_QWORD *)a1) >> 3);
  if ( v4 == 0x555555555555555LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v5 = 1;
  if ( v4 )
    v5 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v6 = __CFADD__(v5, v4);
  v7 = v5 - 0x5555555555555555LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v6 )
  {
    v8 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v7 > 0x555555555555555LL )
      v7 = 0x555555555555555LL;
    v8 = 24 * v7;
  }
  v32 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v9 = operator new(v8);
  v10 = _mm_loadu_si128(a2);
  v11 = v9;
  v12 = (__m128i *)(v9 + v32);
  v13 = a2[1].m128i_i64[0];
  a2[1].m128i_i64[0] = 0;
  *v12 = v10;
  v12[1].m128i_i64[0] = v13;
  *a2 = 0;
  if ( v3 == v2 )
  {
    v26 = v11;
  }
  else
  {
    v14 = v3;
    v15 = (0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v2[-2].m128i_u64[1] - (char *)v3) >> 3))
        & 0x1FFFFFFFFFFFFFFFLL;
    if ( v15 && (unsigned __int64)&v3[2].m128i_u64[1] - v11 + 7 > 0x5E )
    {
      v16 = v15 + 1;
      v17 = v11;
      do
      {
        v18 = _mm_loadu_si128(v14 + 1);
        v19 = _mm_loadu_si128(v14);
        v14[1] = 0;
        v14 += 3;
        v20 = _mm_loadu_si128(v14 - 1);
        v14[-3] = 0;
        v17 += 48;
        *(__m128i *)(v17 - 48) = v19;
        *(__m128i *)(v17 - 32) = v18;
        *(__m128i *)(v17 - 16) = v20;
        v14[-1] = 0;
      }
      while ( v14 != &v3[3 * (v16 >> 1)] );
      if ( (v16 & 1) != 0 )
      {
        v21 = 24 * (v16 & 0xFFFFFFFFFFFFFFFELL);
        v22 = (__m128i *)(v11 + v21);
        v23 = (__m128i *)((char *)v3 + v21);
        v24 = v23[1].m128i_i64[0];
        v25 = _mm_loadu_si128(v23);
        v23[1].m128i_i64[0] = 0;
        *v23 = 0;
        v22[1].m128i_i64[0] = v24;
        *v22 = v25;
      }
    }
    else
    {
      v28 = v11;
      v29 = v3;
      do
      {
        v30 = _mm_loadu_si128(v29);
        v31 = v29[1].m128i_i64[0];
        *v29 = 0;
        v29 = (const __m128i *)((char *)v29 + 24);
        v29[-1].m128i_i64[1] = 0;
        v28 += 24;
        *(__m128i *)(v28 - 24) = v30;
        *(_QWORD *)(v28 - 8) = v31;
      }
      while ( v29 != v2 );
      v16 = v15 + 1;
    }
    v26 = v11 + 24 * v16;
  }
  v27 = v26 + 24;
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v11;
  *(_QWORD *)(a1 + 8) = v27;
  *(_QWORD *)(a1 + 16) = v8 + v11;
}

