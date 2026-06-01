void __fastcall sub_15655A0(const __m128i *a1, __int64 *a2, char a3)
{
  const __m128i *v3; // r14
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __m128i *v19; // r15
  __m128i *v20; // r11
  unsigned __int64 v21; // r9
  const __m128i *v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  const __m128i *v27; // r15
  __int64 v28; // rsi
  __int8 *v29; // r15
  __int64 v30; // rsi
  __int8 *v31; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+0h] [rbp-48h]
  const __m128i *v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+8h] [rbp-40h]

  v3 = a1 + 1;
  v7 = a1->m128i_i64[1];
  if ( *(_QWORD *)(v7 + 2960) == *(_QWORD *)(v7 + 2952) )
  {
    if ( *(_DWORD *)(v7 + 1012) )
    {
      v10 = operator new[](0x18u);
      v11 = _mm_loadu_si128(a1 + 1);
      *(_DWORD *)(v10 + 16) = a1[2].m128i_i32[0];
      *(__m128i *)v10 = v11;
      sub_14368B0(v7, (char *)v10, 1, 1u, 1u, 1u);
    }
    else
    {
      sub_1417F90((_QWORD *)a1->m128i_i64[1]);
      v12 = *(unsigned int *)(v7 + 2912);
      v13 = v7 + 2904;
      v14 = *(_QWORD *)(v7 + 2904);
      v15 = 3 * v12;
      v16 = v12 + 1;
      v17 = 24LL * *(_QWORD *)(v7 + 2944);
      v18 = 8 * v15;
      v19 = (__m128i *)(v14 + v17);
      v20 = (__m128i *)(v14 + v18);
      if ( v14 + v17 == v14 + v18 )
      {
        v27 = v3;
        if ( v16 > *(unsigned int *)(v7 + 2916) )
        {
          v30 = v7 + 2920;
          if ( v14 <= (unsigned __int64)v3 && v20 > v3 )
          {
            v31 = &v3->m128i_i8[-v14];
            sub_2237220(v13, v30, v16, 24);
            v32 = *(_QWORD *)(v7 + 2904);
            v27 = (const __m128i *)&v31[v32];
            v20 = (__m128i *)(v32 + 24LL * *(unsigned int *)(v7 + 2912));
          }
          else
          {
            sub_2237220(v13, v30, v16, 24);
            v20 = (__m128i *)(*(_QWORD *)(v7 + 2904) + 24LL * *(unsigned int *)(v7 + 2912));
          }
        }
        *v20 = _mm_loadu_si128(v27);
        v20[1].m128i_i64[0] = v27[1].m128i_i64[0];
        ++*(_DWORD *)(v7 + 2912);
      }
      else
      {
        v21 = (unsigned __int64)v3;
        v22 = v3;
        if ( v16 > *(unsigned int *)(v7 + 2916) )
        {
          v28 = v7 + 2920;
          if ( v14 > (unsigned __int64)v3 || v20 <= v3 )
          {
            v36 = 24LL * *(_QWORD *)(v7 + 2944);
            sub_2237220(v13, v28, v16, 24);
            v22 = v3;
            v14 = *(_QWORD *)(v7 + 2904);
            v21 = (unsigned __int64)v3;
            v18 = 24LL * *(unsigned int *)(v7 + 2912);
            v19 = (__m128i *)(v14 + v36);
            v20 = (__m128i *)(v14 + v18);
          }
          else
          {
            v34 = 24LL * *(_QWORD *)(v7 + 2944);
            v29 = &v3->m128i_i8[-v14];
            sub_2237220(v13, v28, v16, 24);
            v14 = *(_QWORD *)(v7 + 2904);
            v22 = (const __m128i *)&v29[v14];
            v18 = 24LL * *(unsigned int *)(v7 + 2912);
            v19 = (__m128i *)(v14 + v34);
            v21 = (unsigned __int64)v22;
            v20 = (__m128i *)(v14 + v18);
          }
        }
        *v20 = _mm_loadu_si128((const __m128i *)(v14 + v18 - 24));
        v20[1].m128i_i64[0] = *(_QWORD *)(v14 + v18 - 8);
        v23 = *(_QWORD *)(v7 + 2904);
        v24 = *(_DWORD *)(v7 + 2912);
        v25 = 24LL * v24;
        if ( v19 != (__m128i *)(v23 + v25 - 24) )
        {
          v35 = v22;
          v33 = v21;
          memmove(&v19[1].m128i_u64[1], v19, v23 + v25 - 24 - (_QWORD)v19);
          v24 = *(_DWORD *)(v7 + 2912);
          v23 = *(_QWORD *)(v7 + 2904);
          v22 = v35;
          v21 = v33;
        }
        v26 = v24 + 1;
        *(_DWORD *)(v7 + 2912) = v26;
        if ( (unsigned __int64)v19 <= v21 && v21 < v23 + 24 * v26 )
          v22 = (const __m128i *)((char *)v22 + 24);
        *v19 = _mm_loadu_si128(v22);
        v19[1].m128i_i32[0] = v22[1].m128i_i32[0];
      }
    }
  }
  else
  {
    --*(_QWORD *)(v7 + 2944);
  }
  v8 = a1[6].m128i_i64[0];
  a1[2].m128i_i16[0] = 416;
  a1[1].m128i_i64[1] = sub_169FAE0(v8, a2);
  a1[1].m128i_i64[0] = *a2;
  if ( a3 )
  {
    v9 = (_QWORD *)a1->m128i_i64[1];
    if ( v9[368] )
    {
      if ( v9[370] != v9[369] )
        sub_1417320((__int64)v9, v3);
    }
  }
}
