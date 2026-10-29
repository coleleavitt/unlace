__int64 __fastcall sub_B753D0(_QWORD *a1)
{
  _QWORD *exception; // r13
  _QWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  _DWORD *i; // rbx
  unsigned int v7; // r12d
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  size_t v10; // rsi
  unsigned int *v11; // rax
  unsigned int v12; // eax
  unsigned int **v13; // rcx
  unsigned int **v14; // rsi
  __m128i v15; // xmm4
  unsigned int *v16; // rdi
  unsigned int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // r9d
  __m128i v20; // xmm5
  unsigned int *v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm2
  __m128i v30; // xmm1
  unsigned int v31; // edx
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int **v36; // rsi
  unsigned int **v37; // rdi
  __m128i v38; // xmm4
  unsigned int *v39; // r8
  unsigned int v40; // r9d
  __int64 v41; // rax
  unsigned int v42; // ecx
  __m128i v43; // xmm6
  unsigned int *v44; // rax
  __m128i v45; // xmm1
  __m128i v46; // xmm2
  __m128i v47; // xmm2
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __m128i v53; // xmm1
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // r14
  __int64 result; // rax
  _QWORD *v61; // [rsp+20h] [rbp-58h] BYREF
  __int64 v62; // [rsp+28h] [rbp-50h]
  _QWORD v63[9]; // [rsp+30h] [rbp-48h] BYREF

  i = (_DWORD *)a1[1070];
  if ( i )
  {
    v7 = *(i - 1);
    if ( v7 )
    {
      v8 = (_QWORD *)sub_186B270(0x10u);
      *v8 = 2;
      for ( i = v8 + 1; ; i = v11 + 2 )
      {
        v12 = *(i - 2);
        if ( v12 >= v7 )
          break;
        v9 = (3 * v12 + 1) >> 1;
        v10 = 4 * v9 + 8;
        if ( 4 * v12 + 8 >= (unsigned int)v10 || v12 >= v9 )
        {
          exception = __cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v61, "Overflow encountered when expanding vector");
          v2 = v61;
          exception[1] = exception + 3;
          v3 = v62;
          *exception = off_1C63128;
          if ( v2 == v63 )
          {
            qmemcpy(exception + 3, v63, (unsigned int)(v3 + 1));
          }
          else
          {
            v4 = v63[0];
            exception[1] = v2;
            exception[3] = v4;
          }
          exception[2] = v3;
          v62 = 0;
          v61 = v63;
          LOBYTE(v63[0]) = 0;
          sub_233E40((__int64)&v61);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v11 = (unsigned int *)sub_186B300(i - 2, v10);
        *v11 = v9;
      }
      *(i - 1) = v7;
      memset(i, 0, 4LL * v7);
    }
    else
    {
      i = nullptr;
    }
  }
  else
  {
    v7 = 0;
  }
  v13 = (unsigned int **)a1[1111];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 != v14 )
    {
      v15 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
      do
      {
        v16 = *v13;
        v17 = **v13;
        v18 = (*v13)[2] >> 1;
        if ( v17 > 1 )
        {
          v19 = v17 - 1;
          if ( v17 - 2 <= 2 )
          {
            v31 = 1;
            goto LABEL_18;
          }
          v20 = _mm_cvtsi32_si128(v18);
          v21 = *v13;
          v22 = _mm_shuffle_epi32(v20, 0);
          do
          {
            v23 = _mm_loadu_si128((const __m128i *)(v21 + 3));
            v21 += 4;
            v24 = _mm_srli_epi32(v23, 1u);
            v25 = _mm_cmpgt_epi32(_mm_sub_epi32(v24, v15), _mm_sub_epi32(v22, v15));
            v22 = _mm_or_si128(_mm_and_si128(v22, v25), _mm_andnot_si128(v25, v24));
          }
          while ( &v16[4 * (v19 >> 2)] != v21 );
          v26 = _mm_srli_si128(v22, 8);
          v27 = _mm_cmpgt_epi32(_mm_sub_epi32(v26, v15), _mm_sub_epi32(v22, v15));
          v28 = _mm_or_si128(_mm_andnot_si128(v27, v26), _mm_and_si128(v22, v27));
          v29 = _mm_srli_si128(v28, 4);
          v30 = _mm_cmpgt_epi32(_mm_sub_epi32(v29, v15), _mm_sub_epi32(v28, v15));
          v18 = (unsigned int)_mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v30, v29), _mm_and_si128(v28, v30)));
          if ( (v19 & 3) != 0 )
          {
            v31 = (v19 & 0xFFFFFFFC) + 1;
LABEL_18:
            if ( (unsigned int)v18 > v16[v31 + 2] >> 1 )
              v18 = v16[v31 + 2] >> 1;
            v32 = v31 + 1;
            if ( (unsigned int)v32 < v17 )
            {
              v33 = v16[v32 + 2] >> 1;
              if ( (unsigned int)v18 > (unsigned int)v33 )
                v18 = v33;
              v34 = v31 + 2;
              if ( (unsigned int)v34 < v17 )
              {
                v35 = v16[v34 + 2] >> 1;
                if ( (unsigned int)v18 > (unsigned int)v35 )
                  v18 = v35;
              }
            }
          }
        }
        ++v13;
        ++i[v18];
      }
      while ( v14 != v13 );
    }
  }
  v36 = (unsigned int **)a1[1112];
  if ( v36 )
  {
    v37 = &v36[*((unsigned int *)v36 - 1)];
    if ( v36 != v37 )
    {
      v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0x80000000), 0);
      do
      {
        v39 = *v36;
        v40 = **v36;
        v41 = (*v36)[2] >> 1;
        if ( v40 > 1 )
        {
          v42 = v40 - 1;
          if ( v40 - 2 <= 2 )
          {
            v54 = 1;
            goto LABEL_36;
          }
          v43 = _mm_cvtsi32_si128(v41);
          v44 = *v36;
          v45 = _mm_shuffle_epi32(v43, 0);
          do
          {
            v46 = _mm_loadu_si128((const __m128i *)(v44 + 3));
            v44 += 4;
            v47 = _mm_srli_epi32(v46, 1u);
            v48 = _mm_cmpgt_epi32(_mm_sub_epi32(v47, v38), _mm_sub_epi32(v45, v38));
            v45 = _mm_or_si128(_mm_and_si128(v45, v48), _mm_andnot_si128(v48, v47));
          }
          while ( v44 != &v39[4 * (v42 >> 2)] );
          v49 = _mm_srli_si128(v45, 8);
          v50 = _mm_cmpgt_epi32(_mm_sub_epi32(v49, v38), _mm_sub_epi32(v45, v38));
          v51 = _mm_or_si128(_mm_andnot_si128(v50, v49), _mm_and_si128(v45, v50));
          v52 = _mm_srli_si128(v51, 4);
          v53 = _mm_cmpgt_epi32(_mm_sub_epi32(v52, v38), _mm_sub_epi32(v51, v38));
          v41 = (unsigned int)_mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v53, v52), _mm_and_si128(v51, v53)));
          if ( (v42 & 3) != 0 )
          {
            v54 = (v42 & 0xFFFFFFFC) + 1;
LABEL_36:
            if ( (unsigned int)v41 > v39[v54 + 2] >> 1 )
              v41 = v39[v54 + 2] >> 1;
            v55 = v54 + 1;
            if ( (unsigned int)v55 < v40 )
            {
              v56 = v39[v55 + 2] >> 1;
              if ( (unsigned int)v41 > (unsigned int)v56 )
                v41 = v56;
              v57 = v54 + 2;
              if ( (unsigned int)v57 < v40 )
              {
                v58 = v39[v57 + 2] >> 1;
                if ( (unsigned int)v41 > (unsigned int)v58 )
                  v41 = v58;
              }
            }
          }
        }
        ++v36;
        ++i[v41];
      }
      while ( v36 != v37 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v59 = 0;
  if ( v7 )
  {
    do
    {
      while ( !i[v59] )
      {
        if ( ++v59 == v7 )
          goto LABEL_50;
      }
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v59;
    }
    while ( v59 != v7 );
LABEL_50:
    std::__ostream_insert<char,std::char_traits<char>>();
    return sub_186B220(i - 2);
  }
  result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( i )
    return sub_186B220(i - 2);
  return result;
}

