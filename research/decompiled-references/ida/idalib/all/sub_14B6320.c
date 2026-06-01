void __fastcall sub_14B6320(const __m128i *a1, const __m128i *a2)
{
  const __m128i *v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __m128i v8; // xmm1
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __m128i *v19; // r13
  __m128i *v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r13
  __int64 v31; // rax
  __m128i *v32; // rbp
  __m128i *v33; // r8
  __m128i *v34; // r14
  __m128i *v35; // rcx
  __int64 v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rax
  __m128i *v40; // rbp
  __int64 v41; // rsi
  __int8 *v42; // r12
  __int64 v43; // rsi
  __int8 *v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rsi
  __int8 *v48; // r12
  __int64 v49; // rax
  __m128i *v50; // [rsp+8h] [rbp-60h]
  __m128i v51; // [rsp+10h] [rbp-58h] BYREF
  __int64 v52; // [rsp+20h] [rbp-48h]

  v2 = a2;
  v4 = a1->m128i_i64[1];
  v5 = a1[2].m128i_i64[0];
  v6 = *(_DWORD *)(v4 + 1012);
  v51 = _mm_loadu_si128(a1 + 1);
  v52 = v5;
  if ( v6 )
  {
    v7 = operator new[](0x18u);
    v8 = _mm_loadu_si128(a2);
    *(_DWORD *)(v7 + 16) = a2[1].m128i_i32[0];
    *(__m128i *)v7 = v8;
    sub_14368B0(v4, (char *)v7, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)v4);
    v12 = *(unsigned int *)(v4 + 2912);
    v13 = v4 + 2904;
    v14 = *(_QWORD *)(v4 + 2904);
    v15 = 3 * v12;
    v16 = v12 + 1;
    v17 = 24LL * *(_QWORD *)(v4 + 2944);
    v18 = 8 * v15;
    v19 = (__m128i *)(v14 + v17);
    v20 = (__m128i *)(v14 + v18);
    if ( v14 + v17 == v14 + v18 )
    {
      if ( v16 > *(unsigned int *)(v4 + 2916) )
      {
        v47 = v4 + 2920;
        if ( v14 > (unsigned __int64)v2 || v20 <= v2 )
        {
          sub_2237220(v13, v47, v16, 24);
          v20 = (__m128i *)(*(_QWORD *)(v4 + 2904) + 24LL * *(unsigned int *)(v4 + 2912));
        }
        else
        {
          v48 = &v2->m128i_i8[-v14];
          sub_2237220(v13, v47, v16, 24);
          v49 = *(_QWORD *)(v4 + 2904);
          v2 = (const __m128i *)&v48[v49];
          v20 = (__m128i *)(v49 + 24LL * *(unsigned int *)(v4 + 2912));
        }
      }
      *v20 = _mm_loadu_si128(v2);
      v20[1].m128i_i64[0] = v2[1].m128i_i64[0];
      ++*(_DWORD *)(v4 + 2912);
    }
    else
    {
      if ( v16 > *(unsigned int *)(v4 + 2916) )
      {
        v41 = v4 + 2920;
        if ( v14 > (unsigned __int64)v2 || v20 <= v2 )
        {
          sub_2237220(v13, v41, v16, 24);
          v14 = *(_QWORD *)(v4 + 2904);
        }
        else
        {
          v42 = &v2->m128i_i8[-v14];
          sub_2237220(v13, v41, v16, 24);
          v14 = *(_QWORD *)(v4 + 2904);
          v2 = (const __m128i *)&v42[v14];
        }
        v19 = (__m128i *)(v14 + v17);
        v18 = 24LL * *(unsigned int *)(v4 + 2912);
        v20 = (__m128i *)(v14 + v18);
      }
      *v20 = _mm_loadu_si128((const __m128i *)(v14 + v18 - 24));
      v20[1].m128i_i64[0] = *(_QWORD *)(v14 + v18 - 8);
      v21 = *(_QWORD *)(v4 + 2904);
      v22 = *(_DWORD *)(v4 + 2912);
      v23 = 24LL * v22;
      if ( (__m128i *)(v21 + v23 - 24) != v19 )
      {
        memmove(&v19[1].m128i_u64[1], v19, v21 + v23 - 24 - (_QWORD)v19);
        v22 = *(_DWORD *)(v4 + 2912);
        v21 = *(_QWORD *)(v4 + 2904);
      }
      v24 = v22 + 1;
      *(_DWORD *)(v4 + 2912) = v24;
      if ( v19 <= v2 && (unsigned __int64)v2 < v21 + 24 * v24 )
        v2 = (const __m128i *)((char *)v2 + 24);
      *v19 = _mm_loadu_si128(v2);
      v19[1].m128i_i32[0] = v2[1].m128i_i32[0];
    }
  }
  sub_14634E0((__int64 *)a1->m128i_i64[1], a1[1].m128i_i32);
  v9 = a1->m128i_i64[1];
  if ( *(_DWORD *)(v9 + 1012) )
  {
    v10 = operator new[](0x18u);
    v11 = _mm_load_si128(&v51);
    *(_DWORD *)(v10 + 16) = v52;
    *(__m128i *)v10 = v11;
    sub_14368B0(v9, (char *)v10, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)a1->m128i_i64[1]);
    v25 = *(unsigned int *)(v9 + 2912);
    v26 = v9 + 2904;
    v27 = *(_QWORD *)(v9 + 2904);
    v28 = 3 * v25;
    v29 = v25 + 1;
    v30 = 24LL * *(_QWORD *)(v9 + 2944);
    v31 = 8 * v28;
    v32 = (__m128i *)(v27 + v30);
    v33 = (__m128i *)(v27 + v31);
    if ( v27 + v30 == v27 + v31 )
    {
      v40 = &v51;
      if ( v29 > *(unsigned int *)(v9 + 2916) )
      {
        v45 = v9 + 2920;
        if ( v27 > (unsigned __int64)&v51 || v33 <= &v51 )
        {
          sub_2237220(v26, v45, v29, 24);
          v33 = (__m128i *)(*(_QWORD *)(v9 + 2904) + 24LL * *(unsigned int *)(v9 + 2912));
        }
        else
        {
          sub_2237220(v26, v45, v29, 24);
          v46 = *(_QWORD *)(v9 + 2904);
          v40 = (__m128i *)((char *)&v51 + v46 - v27);
          v33 = (__m128i *)(v46 + 24LL * *(unsigned int *)(v9 + 2912));
        }
      }
      *v33 = _mm_loadu_si128(v40);
      v33[1].m128i_i64[0] = v40[1].m128i_i64[0];
      ++*(_DWORD *)(v9 + 2912);
    }
    else
    {
      v34 = &v51;
      v35 = &v51;
      if ( v29 > *(unsigned int *)(v9 + 2916) )
      {
        v43 = v9 + 2920;
        if ( v27 > (unsigned __int64)&v51 || v33 <= &v51 )
        {
          sub_2237220(v26, v43, v29, 24);
          v27 = *(_QWORD *)(v9 + 2904);
          v35 = &v51;
          v32 = (__m128i *)(v27 + v30);
          v31 = 24LL * *(unsigned int *)(v9 + 2912);
          v33 = (__m128i *)(v27 + v31);
        }
        else
        {
          v44 = &v51.m128i_i8[-v27];
          sub_2237220(v26, v43, v29, 24);
          v27 = *(_QWORD *)(v9 + 2904);
          v35 = (__m128i *)&v44[v27];
          v31 = 24LL * *(unsigned int *)(v9 + 2912);
          v32 = (__m128i *)(v27 + v30);
          v34 = (__m128i *)&v44[v27];
          v33 = (__m128i *)(v27 + v31);
        }
      }
      *v33 = _mm_loadu_si128((const __m128i *)(v27 + v31 - 24));
      v33[1].m128i_i64[0] = *(_QWORD *)(v27 + v31 - 8);
      v36 = *(_QWORD *)(v9 + 2904);
      v37 = *(_DWORD *)(v9 + 2912);
      v38 = 24LL * v37;
      if ( (__m128i *)(v36 + v38 - 24) != v32 )
      {
        v50 = v35;
        memmove(&v32[1].m128i_u64[1], v32, v36 + v38 - 24 - (_QWORD)v32);
        v37 = *(_DWORD *)(v9 + 2912);
        v35 = v50;
        v36 = *(_QWORD *)(v9 + 2904);
      }
      v39 = v37 + 1;
      *(_DWORD *)(v9 + 2912) = v39;
      if ( v32 <= v34 && v36 + 24 * v39 > (unsigned __int64)v34 )
        v35 = (__m128i *)((char *)v35 + 24);
      *v32 = _mm_loadu_si128(v35);
      v32[1].m128i_i32[0] = v35[1].m128i_i32[0];
    }
  }
}
