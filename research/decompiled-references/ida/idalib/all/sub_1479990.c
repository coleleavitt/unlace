void __fastcall sub_1479990(__int64 a1, const __m128i *a2, unsigned __int8 a3)
{
  const __m128i *v3; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  __m128i *v15; // r12
  __m128i *v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int8 *v22; // rbp
  __int64 v23; // rsi
  __int8 *v24; // rbp
  __int64 v25; // rax

  v3 = a2;
  if ( *(_DWORD *)(a1 + 1012) )
  {
    v6 = operator new[](0x18u);
    v7 = _mm_loadu_si128(a2);
    *(_DWORD *)(v6 + 16) = a2[1].m128i_i32[0];
    *(__m128i *)v6 = v7;
    sub_14368B0(a1, (char *)v6, 1, 1u, 1u, a3);
  }
  else
  {
    sub_1417F90((_QWORD *)a1);
    v8 = *(unsigned int *)(a1 + 2912);
    v9 = a1 + 2904;
    v10 = *(_QWORD *)(a1 + 2904);
    v11 = 3 * v8;
    v12 = v8 + 1;
    v13 = 24LL * *(_QWORD *)(a1 + 2944);
    v14 = 8 * v11;
    v15 = (__m128i *)(v10 + v13);
    v16 = (__m128i *)(v10 + v14);
    if ( v10 + v13 == v10 + v14 )
    {
      if ( v12 > *(unsigned int *)(a1 + 2916) )
      {
        v23 = a1 + 2920;
        if ( v10 > (unsigned __int64)v3 || v16 <= v3 )
        {
          sub_2237220(v9, v23, v12, 24);
          v16 = (__m128i *)(*(_QWORD *)(a1 + 2904) + 24LL * *(unsigned int *)(a1 + 2912));
        }
        else
        {
          v24 = &v3->m128i_i8[-v10];
          sub_2237220(v9, v23, v12, 24);
          v25 = *(_QWORD *)(a1 + 2904);
          v3 = (const __m128i *)&v24[v25];
          v16 = (__m128i *)(v25 + 24LL * *(unsigned int *)(a1 + 2912));
        }
      }
      *v16 = _mm_loadu_si128(v3);
      v16[1].m128i_i64[0] = v3[1].m128i_i64[0];
      ++*(_DWORD *)(a1 + 2912);
    }
    else
    {
      if ( v12 > *(unsigned int *)(a1 + 2916) )
      {
        v21 = a1 + 2920;
        if ( v10 > (unsigned __int64)v3 || v16 <= v3 )
        {
          sub_2237220(v9, v21, v12, 24);
          v10 = *(_QWORD *)(a1 + 2904);
        }
        else
        {
          v22 = &v3->m128i_i8[-v10];
          sub_2237220(v9, v21, v12, 24);
          v10 = *(_QWORD *)(a1 + 2904);
          v3 = (const __m128i *)&v22[v10];
        }
        v15 = (__m128i *)(v10 + v13);
        v14 = 24LL * *(unsigned int *)(a1 + 2912);
        v16 = (__m128i *)(v10 + v14);
      }
      *v16 = _mm_loadu_si128((const __m128i *)(v10 + v14 - 24));
      v16[1].m128i_i64[0] = *(_QWORD *)(v10 + v14 - 8);
      v17 = *(_QWORD *)(a1 + 2904);
      v18 = *(_DWORD *)(a1 + 2912);
      v19 = 24LL * v18;
      if ( (__m128i *)(v17 + v19 - 24) != v15 )
      {
        memmove(&v15[1].m128i_u64[1], v15, v17 + v19 - 24 - (_QWORD)v15);
        v18 = *(_DWORD *)(a1 + 2912);
        v17 = *(_QWORD *)(a1 + 2904);
      }
      v20 = v18 + 1;
      *(_DWORD *)(a1 + 2912) = v20;
      if ( v15 <= v3 && (unsigned __int64)v3 < v17 + 24 * v20 )
        v3 = (const __m128i *)((char *)v3 + 24);
      *v15 = _mm_loadu_si128(v3);
      v15[1].m128i_i32[0] = v3[1].m128i_i32[0];
    }
  }
}
