__int64 __fastcall sub_4DBD20(__int64 a1, unsigned int a2)
{
  char **exception; // r14
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  void *v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 (*v11)(); // rax
  int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // ebp
  size_t v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rcx
  __int64 v19; // r11
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r13
  const __m128i *v24; // rbp
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rsi
  unsigned int *v27; // r8
  __m128i v28; // xmm1
  __int64 *v29; // rdi
  unsigned int v30; // ecx
  unsigned __int64 v31; // rcx
  const __m128i *v32; // rax
  __m128d v33; // xmm0
  unsigned __int64 v34; // rcx
  __int64 result; // rax
  __int64 v36; // rbp
  __int64 v37; // rdx
  unsigned int v38; // r15d
  __int64 v39; // rax
  __int64 v40; // rdi
  void (*v41)(void); // rax
  __int64 v42; // rdx
  int v43; // ecx
  char *v44; // rax
  char *v45; // rsi
  __int64 v46; // rcx
  char *v47; // r9
  char *v48; // rdx
  int v49; // ecx
  size_t v50; // rcx
  _BYTE *v51; // rsi
  _QWORD *v52; // r12
  _QWORD *v53; // rax
  int v54; // edx
  unsigned int v55; // eax
  _QWORD *v56; // rax
  const __m128i *v57; // rcx
  unsigned int *v58; // r8
  __m128i v59; // xmm1
  __int64 *v60; // r9
  unsigned int v61; // edi
  unsigned __int64 v62; // rdi
  const __m128i *v63; // rax
  __m128d v64; // xmm0
  unsigned __int64 v65; // rdi
  __m128i v66; // xmm1
  unsigned int v67; // edx
  __int8 *v68; // rax
  unsigned int v69; // esi
  __m128i v70; // xmm0
  __int8 *v71; // rdi
  unsigned int v72; // edx
  unsigned int *j; // rax
  __m128i v74; // xmm0
  unsigned int v75; // edx
  unsigned int *i; // rax
  __m128i v77; // xmm0
  unsigned __int64 v78; // rdi
  char *v79; // rdx
  __int64 *v80; // rdi
  void *dest; // [rsp+8h] [rbp-90h]
  unsigned int *v82; // [rsp+18h] [rbp-80h]
  __int64 v83; // [rsp+18h] [rbp-80h]
  size_t v84; // [rsp+18h] [rbp-80h]
  unsigned int *v85; // [rsp+20h] [rbp-78h]
  char *v86; // [rsp+20h] [rbp-78h]
  __int64 v87; // [rsp+28h] [rbp-70h]
  size_t v88; // [rsp+28h] [rbp-70h]
  int v90; // [rsp+3Ch] [rbp-5Ch]
  void *v91; // [rsp+40h] [rbp-58h] BYREF
  size_t v92; // [rsp+48h] [rbp-50h]
  _QWORD v93[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 )
  {
    v90 = 0;
    goto LABEL_33;
  }
  v90 = *(v4 - 1);
  if ( !v90 )
  {
    v4 = nullptr;
    goto LABEL_33;
  }
  v5 = *(_QWORD *)v4;
  dest = (void *)*(v4 - 1);
  if ( !*(_QWORD *)v4 )
  {
    v87 = 0;
    v7 = 0;
    v6 = nullptr;
    v12 = 0;
    goto LABEL_69;
  }
  v87 = 0;
  v6 = nullptr;
  v4 = nullptr;
  v7 = 0;
LABEL_10:
  v11 = *(__int64 (**)())(*(_QWORD *)v5 + 104LL);
  if ( v11 == sub_4D9540 )
  {
    v12 = -1;
    v87 += 0xFFFFFFFFLL;
    if ( v4 )
      goto LABEL_12;
LABEL_69:
    v56 = (_QWORD *)sub_186B270(0x18u);
    *v56 = 2;
    v8 = (unsigned int *)(v56 + 1);
    v4 = v8;
    goto LABEL_6;
  }
  v55 = v11();
  v87 += v55;
  v12 = v55;
  if ( !v4 )
    goto LABEL_69;
  while ( 1 )
  {
LABEL_12:
    v13 = *(v4 - 1);
    if ( (_DWORD)v13 == *(v4 - 2) )
    {
      v14 = (unsigned int)(3 * v13 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_4D9940((__int64 *)&v91, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v91);
        sub_233E40((__int64)&v91);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = sub_186B270(v15);
      v17 = *(v4 - 1);
      v18 = (unsigned int *)v16;
      v19 = v16 + 8;
      *(_DWORD *)(v16 + 4) = v17;
      v20 = 0;
      v21 = 8 * v17;
      if ( v21 )
      {
        do
        {
          *(_QWORD *)&v18[v20 / 4 + 2] = *(_QWORD *)&v4[v20 / 4];
          v20 += 8LL;
        }
        while ( v21 != v20 );
      }
      v85 = (unsigned int *)v19;
      v82 = v18;
      sub_186B220(v4 - 2);
      v22 = v82[1];
      *v82 = v14;
      v4 = v85;
      v8 = &v85[2 * v22];
    }
    else
    {
      v8 = &v4[2 * v13];
    }
LABEL_6:
    *v8 = v7;
    v6 = (char *)v6 + 1;
    v8[1] = v12;
    v9 = *(v4 - 1) + 1;
    *(v4 - 1) = v9;
    if ( v6 == dest )
      break;
    v10 = *(_QWORD *)(a1 + 8);
    v7 = (unsigned int)v6;
    if ( v10 )
    {
      if ( (unsigned int)v6 < *(_DWORD *)(v10 - 4) )
      {
        v5 = *(_QWORD *)(v10 + 8LL * (_QWORD)v6);
        if ( v5 )
          goto LABEL_10;
      }
    }
    v12 = 0;
  }
  v23 = 8 * v9;
  v24 = (const __m128i *)&v4[2 * v9];
  if ( v4 == (unsigned int *)v24 )
    goto LABEL_33;
  _BitScanReverse64(&v25, v23 >> 3);
  sub_4D99D0(v4, (__m128i *)&v4[2 * v9], 2LL * (int)v25);
  v26 = (const __m128i *)(v4 + 2);
  if ( (unsigned __int64)v23 <= 0x80 )
  {
    if ( v23 == 8 )
      goto LABEL_33;
    v27 = v4;
    while ( 2 )
    {
      v28 = _mm_loadl_epi64(v26);
      v29 = (__int64 *)v26;
      v30 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v28, 229));
      if ( v4[1] >= v30 )
      {
        v75 = v26[-1].m128i_u32[3];
        for ( i = v27; v75 < v30; v75 = i[1] )
        {
          v77 = _mm_cvtsi32_si128(*i);
          v29 = (__int64 *)i;
          i -= 2;
          *((_QWORD *)i + 2) = _mm_unpacklo_epi32(v77, _mm_cvtsi32_si128(v75)).m128i_u64[0];
        }
        *v29 = v28.m128i_i64[0];
      }
      else
      {
        v31 = ((char *)v26 - (char *)v4) >> 3;
        if ( (char *)v26 - (char *)v4 > 0 )
        {
          if ( (char *)v26 - (char *)v4 <= 8 )
          {
            v34 = 0;
LABEL_30:
            v26->m128i_i64[~v34 + 1] = v26->m128i_i64[~v34];
          }
          else
          {
            v32 = v26;
            do
            {
              --v32;
              v33 = (__m128d)_mm_loadh_ps((const double *)v32->m128i_i64);
              *(__m128d *)((char *)v32 + 8) = _mm_shuffle_pd(v33, v33, 1);
            }
            while ( v32 != &v26[-(v31 >> 1)] );
            if ( (v31 & 1) != 0 )
            {
              v34 = v31 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_30;
            }
          }
        }
        *(_QWORD *)v4 = v28.m128i_i64[0];
      }
      v26 = (const __m128i *)((char *)v26 + 8);
      v27 += 2;
      if ( v24 == v26 )
        goto LABEL_33;
      continue;
    }
  }
  v57 = (const __m128i *)(v4 + 32);
  v58 = v4;
  while ( 2 )
  {
    v59 = _mm_loadl_epi64(v26);
    v60 = (__int64 *)v26;
    v61 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v59, 229));
    if ( v4[1] >= v61 )
    {
      v72 = v26[-1].m128i_u32[3];
      for ( j = v58; v72 < v61; v72 = j[1] )
      {
        v74 = _mm_cvtsi32_si128(*j);
        v60 = (__int64 *)j;
        j -= 2;
        *((_QWORD *)j + 2) = _mm_unpacklo_epi32(v74, _mm_cvtsi32_si128(v72)).m128i_u64[0];
      }
      *v60 = v59.m128i_i64[0];
    }
    else
    {
      v62 = ((char *)v26 - (char *)v4) >> 3;
      if ( (char *)v26 - (char *)v4 > 0 )
      {
        if ( (char *)v26 - (char *)v4 <= 8 )
        {
          v65 = 0;
LABEL_78:
          v26->m128i_i64[~v65 + 1] = v26->m128i_i64[~v65];
        }
        else
        {
          v63 = v26;
          do
          {
            --v63;
            v64 = (__m128d)_mm_loadh_ps((const double *)v63->m128i_i64);
            *(__m128d *)((char *)v63 + 8) = _mm_shuffle_pd(v64, v64, 1);
          }
          while ( v63 != &v26[-(v62 >> 1)] );
          if ( (v62 & 1) != 0 )
          {
            v65 = v62 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_78;
          }
        }
      }
      *(_QWORD *)v4 = v59.m128i_i64[0];
    }
    v26 = (const __m128i *)((char *)v26 + 8);
    v58 += 2;
    if ( v57 != v26 )
      continue;
    break;
  }
  do
  {
    while ( 1 )
    {
      v66 = _mm_loadl_epi64(v57);
      v67 = v57[-1].m128i_u32[3];
      v68 = &v57[-1].m128i_i8[8];
      v69 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v66, 229));
      if ( v67 < v69 )
        break;
      v80 = (__int64 *)v57;
      v57 = (const __m128i *)((char *)v57 + 8);
      *v80 = v66.m128i_i64[0];
      if ( v24 == v57 )
        goto LABEL_33;
    }
    do
    {
      v70 = _mm_cvtsi32_si128(*(_DWORD *)v68);
      v71 = v68;
      v68 -= 8;
      *((_QWORD *)v68 + 2) = _mm_unpacklo_epi32(v70, _mm_cvtsi32_si128(v67)).m128i_u64[0];
      v67 = *((_DWORD *)v68 + 1);
    }
    while ( v67 < v69 );
    v57 = (const __m128i *)((char *)v57 + 8);
    *(_QWORD *)v71 = v66.m128i_i64[0];
  }
  while ( v24 != v57 );
LABEL_33:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v36 = 0;
  if ( v90 )
  {
LABEL_34:
    v37 = *(_QWORD *)(a1 + 8);
    v38 = v4[2 * v36 + 1];
    if ( v37 )
    {
      v39 = v4[2 * v36];
      if ( (unsigned int)v39 < *(_DWORD *)(v37 - 4) )
      {
        v40 = *(_QWORD *)(v37 + 8 * v39);
        if ( v40 )
        {
          v41 = *(void (**)(void))(*(_QWORD *)v40 + 96LL);
          if ( (char *)v41 != (char *)sub_4D9530 )
            v41();
        }
      }
    }
    if ( v38 < a2 )
      goto LABEL_56;
    v42 = *(unsigned int *)(a1 + 24);
    LOBYTE(v93[0]) = 0;
    v43 = v42 - 1;
    v91 = v93;
    v44 = *(char **)(a1 + 16);
    v92 = 0;
    v42 *= 48;
    v45 = &v44[v42];
    v46 = 48LL * ((unsigned int)v36 & v43);
    v47 = &v44[v46];
    if ( v46 == v42 )
    {
LABEL_60:
      if ( v44 != v47 )
      {
        while ( 1 )
        {
          v54 = *((_DWORD *)v44 + 1);
          if ( v54 == 2 )
          {
            if ( *(_DWORD *)v44 == (_DWORD)v36 && *((_DWORD *)v44 + 2) == (_DWORD)v36 )
            {
              v48 = v44;
              goto LABEL_47;
            }
          }
          else if ( !v54 )
          {
            goto LABEL_54;
          }
          v44 += 48;
          if ( v47 == v44 )
            goto LABEL_54;
        }
      }
      goto LABEL_54;
    }
    v48 = &v44[v46];
    while ( 1 )
    {
      v49 = *((_DWORD *)v48 + 1);
      if ( v49 == 2 )
      {
        if ( *(_DWORD *)v48 == (_DWORD)v36 && *((_DWORD *)v48 + 2) == (_DWORD)v36 )
        {
LABEL_47:
          if ( &v91 == (void **)(v48 + 16) )
            goto LABEL_54;
          v50 = *((_QWORD *)v48 + 3);
          if ( v50 > 0xF )
          {
            if ( (v50 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            if ( v50 <= 0x1D )
            {
              v83 = 30;
              v78 = 31;
            }
            else
            {
              v78 = v50 + 1;
              if ( (__int64)(v50 + 1) < 0 )
                std::__throw_bad_alloc();
              v83 = *((_QWORD *)v48 + 3);
            }
            v88 = *((_QWORD *)v48 + 3);
            v86 = v48;
            v52 = (_QWORD *)operator new(v78);
            v79 = v86;
            v50 = v88;
            if ( v91 != v93 )
            {
              operator delete(v91, v93[0] + 1LL);
              v50 = v88;
              v79 = v86;
            }
            v91 = v52;
            v93[0] = v83;
            v51 = *((_BYTE **)v79 + 2);
LABEL_98:
            v84 = v50;
            memcpy(v52, v51, v50);
            v53 = v91;
            v50 = v84;
            goto LABEL_53;
          }
          if ( !v50 )
            goto LABEL_52;
          v51 = *((_BYTE **)v48 + 2);
          v52 = v93;
          if ( v50 != 1 )
            goto LABEL_98;
          LOBYTE(v93[0]) = *v51;
LABEL_52:
          v53 = v93;
LABEL_53:
          v92 = v50;
          *((_BYTE *)v53 + v50) = 0;
LABEL_54:
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v91 != v93 )
            operator delete(v91, v93[0] + 1LL);
LABEL_56:
          if ( ++v36 == v90 )
            return sub_186B220(v4 - 2);
          goto LABEL_34;
        }
      }
      else if ( !v49 )
      {
        goto LABEL_54;
      }
      v48 += 48;
      if ( v45 == v48 )
        goto LABEL_60;
    }
  }
  if ( v4 )
    return sub_186B220(v4 - 2);
  return result;
}

