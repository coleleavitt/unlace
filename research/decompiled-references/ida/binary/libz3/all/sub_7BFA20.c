void __fastcall sub_7BFA20(__int64 a1, __int64 a2, __m128i a3, double a4, double a5)
{
  int v5; // edx
  _QWORD *v6; // r12
  _DWORD *v8; // rbp
  char *v9; // rdi
  _DWORD *i; // rcx
  char *v11; // rax
  unsigned int v12; // eax
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned int j; // edx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm1
  const __m128i *v28; // rax
  const __m128i *v29; // rdx
  __m128 v30; // xmm0
  __m128 v31; // xmm4
  __m128i v32; // xmm3
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rdi
  unsigned int *v37; // rbp
  unsigned int *v38; // r14
  __int64 v39; // rax
  unsigned int v40; // r15d
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  __m128i v49; // xmm1
  const __m128i *v50; // rax
  const __m128i *v51; // rdx
  __m128 v52; // xmm0
  __m128 v53; // xmm5
  __m128i v54; // xmm3
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rbp
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 v60; // [rsp+8h] [rbp-40h]
  __int64 v61; // [rsp+8h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 784);
  v6 = *(_QWORD **)(a1 + 24);
  if ( !v5 )
    return;
  v8 = (_DWORD *)v6[473];
  v9 = (char *)v6[414];
  if ( byte_1C7EBD0 )
  {
    do
    {
      while ( 1 )
      {
        v13 = &v9[v8[(unsigned int)a2] >> 1];
        if ( *v13 )
          break;
        LODWORD(a2) = a2 - 1;
      }
      --v5;
      *v13 = 0;
      LODWORD(a2) = a2 - 1;
      *(_DWORD *)(a1 + 784) = v5;
    }
    while ( v5 );
    return;
  }
  a2 = (unsigned int)a2;
  for ( i = &v8[(unsigned int)a2]; ; --i )
  {
    v11 = &v9[*i >> 1];
    if ( !*v11 )
      break;
LABEL_7:
    --v5;
    *v11 = 0;
    *(_DWORD *)(a1 + 784) = v5;
    if ( i == v8 )
      goto LABEL_8;
    if ( !v5 )
      return;
  }
  while ( i != v8 )
  {
    v12 = *--i;
    v11 = &v9[v12 >> 1];
    if ( *v11 )
      goto LABEL_7;
  }
LABEL_8:
  if ( v5 )
  {
    v14 = v6[412];
    byte_1C7EBD0 = 1;
    v15 = qword_1C7EBC8;
    if ( !v14 )
      goto LABEL_19;
    v16 = *(_DWORD *)(v14 - 4);
    if ( qword_1C7EBC8 )
    {
      v17 = *(unsigned int *)(qword_1C7EBC8 - 4);
      if ( (unsigned int)v17 >= v16 )
        goto LABEL_19;
      v58 = 4 * v17;
    }
    else
    {
      if ( !v16 )
        goto LABEL_19;
      v58 = 0;
    }
    while ( !v15 || *(_DWORD *)(v15 - 8) < v16 )
    {
      sub_2FD3F0((unsigned int **)&qword_1C7EBC8);
      v15 = qword_1C7EBC8;
    }
    *(_DWORD *)(v15 - 4) = v16;
    v9 = (char *)(v15 + v58);
    v8 = (_DWORD *)v6[473];
    v59 = 4LL * v16;
    if ( v59 != v58 )
    {
      a2 = 0;
      memset(v9, 0, v59 - v58);
    }
    if ( !v8 )
    {
LABEL_21:
      sub_180B130(v9);
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        sub_180B150(v9, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v19 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v19, "\n");
      }
      else
      {
        sub_180B150(v9, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v19 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
      }
      sub_180B130(v19);
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
      {
        sub_186A4C0(*(double *)a3.m128i_i64);
        v42 = *(_QWORD *)(a1 + 1000);
        v43 = *(unsigned int *)(a1 + 808);
        if ( v42 )
          *(_DWORD *)(v42 - 4) = 0;
        *(_QWORD *)(a1 + 1008) = v43;
        v44 = a1;
        v45 = a1 + 1000;
        sub_7BC8D0(a1, (_QWORD *)(a1 + 1000));
        v46 = *(_QWORD *)(a1 + 1000);
        if ( v46 )
        {
          v47 = 8LL * *(unsigned int *)(v46 - 4);
          v45 = v46 + v47;
          if ( v46 + v47 != v46 )
          {
            v48 = v47 - 8;
            v44 = v48 >> 3;
            if ( v48 > 0x18 )
            {
              v49 = 0;
              a5 = 0.0;
              v50 = *(const __m128i **)(a1 + 1000);
              v51 = (const __m128i *)(v46 + (v48 & 0xFFFFFFFFFFFFFFE0LL));
              do
              {
                v52 = (__m128)_mm_loadu_si128(v50);
                v53 = (__m128)_mm_loadu_si128(v50 + 1);
                v50 += 2;
                v54 = (__m128i)_mm_shuffle_ps(v52, v53, 136);
                v49 = _mm_add_epi64(
                        v49,
                        _mm_add_epi64(_mm_unpacklo_epi32(v54, (__m128i)0LL), _mm_unpackhi_epi32(v54, (__m128i)0LL)));
              }
              while ( v50 != v51 );
              v44 &= 0xFFFFFFFFFFFFFFFCLL;
              a3 = _mm_srli_si128(v49, 8);
              *(_QWORD *)&a4 = _mm_add_epi64(v49, a3).m128i_u64[0];
            }
          }
        }
        sub_180B150(v44, v45);
        std::__ostream_insert<char,std::char_traits<char>>();
        v55 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        v56 = sub_180B150(v55, "\n");
        sub_7B36E0((_QWORD *)a1, v56, (__int64 *)(a1 + 1000), 1);
        v57 = sub_180B150(a1, v56);
        std::__ostream_insert<char,std::char_traits<char>>();
        v36 = sub_7C5DC0(v57, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 3216LL));
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v36, "\n");
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 1000);
        v21 = *(unsigned int *)(a1 + 808);
        if ( v20 )
          *(_DWORD *)(v20 - 4) = 0;
        *(_QWORD *)(a1 + 1008) = v21;
        v22 = a1;
        v23 = a1 + 1000;
        sub_7BC8D0(a1, (_QWORD *)(a1 + 1000));
        v24 = *(_QWORD *)(a1 + 1000);
        if ( v24 )
        {
          v25 = 8LL * *(unsigned int *)(v24 - 4);
          v23 = v24 + v25;
          if ( v24 + v25 != v24 )
          {
            v26 = v25 - 8;
            v22 = v26 >> 3;
            if ( v26 > 0x18 )
            {
              v27 = 0;
              a5 = 0.0;
              v28 = *(const __m128i **)(a1 + 1000);
              v29 = (const __m128i *)(v24 + (v26 & 0xFFFFFFFFFFFFFFE0LL));
              do
              {
                v30 = (__m128)_mm_loadu_si128(v28);
                v31 = (__m128)_mm_loadu_si128(v28 + 1);
                v28 += 2;
                v32 = (__m128i)_mm_shuffle_ps(v30, v31, 136);
                v27 = _mm_add_epi64(
                        v27,
                        _mm_add_epi64(_mm_unpacklo_epi32(v32, (__m128i)0LL), _mm_unpackhi_epi32(v32, (__m128i)0LL)));
              }
              while ( v28 != v29 );
              v22 &= 0xFFFFFFFFFFFFFFFCLL;
              a3 = _mm_srli_si128(v27, 8);
              *(_QWORD *)&a4 = _mm_add_epi64(v27, a3).m128i_u64[0];
            }
          }
        }
        sub_180B150(v22, v23);
        std::__ostream_insert<char,std::char_traits<char>>();
        v33 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v34 = sub_180B150(v33, "\n");
        sub_7B36E0((_QWORD *)a1, v34, (__int64 *)(a1 + 1000), 1);
        v35 = sub_180B150(a1, v34);
        std::__ostream_insert<char,std::char_traits<char>>();
        v36 = sub_7C5DC0(v35, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 3216LL));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v37 = (unsigned int *)v6[473];
      if ( v37 )
      {
        v38 = &v37[*(v37 - 1)];
        if ( v38 != v37 )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3312LL);
          do
          {
            while ( 1 )
            {
              v40 = *v37;
              v41 = *v37 >> 1;
              if ( *(_BYTE *)(v39 + v41) )
                break;
              if ( v38 == ++v37 )
                goto LABEL_41;
            }
            sub_180B130(v36);
            if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
            {
              sub_186A4C0(*(double *)a3.m128i_i64);
              v60 = sub_180B150(v36, "\n");
              std::__ostream_insert<char,std::char_traits<char>>();
              v36 = sub_7C5DC0(v60, v40);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v36, "\n");
            }
            else
            {
              v61 = sub_180B150(v36, "\n");
              std::__ostream_insert<char,std::char_traits<char>>();
              v36 = sub_7C5DC0(v61, v40);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            ++v37;
            v39 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3312LL);
            *(_BYTE *)(v39 + v41) = 0;
          }
          while ( v38 != v37 );
        }
      }
LABEL_41:
      *(_DWORD *)(a1 + 784) = 0;
      (*(void (__fastcall **)(__int64, char *, double, double, double))(*(_QWORD *)a1 + 136LL))(
        a1,
        "\n",
        *(double *)a3.m128i_i64,
        a4,
        a5);
      exit(0);
    }
LABEL_19:
    for ( j = 0; j < *(v8 - 1); ++j )
      *(_DWORD *)(v15 + 4LL * (v8[j] >> 1)) = j;
    goto LABEL_21;
  }
}

