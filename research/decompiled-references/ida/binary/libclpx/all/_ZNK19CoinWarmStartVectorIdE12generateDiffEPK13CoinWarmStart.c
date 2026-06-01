__int64 __fastcall CoinWarmStartVector<double>::generateDiff(__int64 a1, const void *a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // r15
  unsigned __int64 v5; // r12
  int v6; // ebp
  int v7; // r14d
  _DWORD *v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  signed int v13; // ebx
  double v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // esi
  int *v21; // r11
  unsigned int v22; // r8d
  unsigned int v23; // esi
  __int64 v24; // xmm0_8
  signed int v25; // r8d
  signed int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // xmm0_8
  __int64 v29; // r10
  __int64 v30; // xmm0_8
  __int64 v31; // r10
  __int64 v32; // rcx
  __m128i si128; // xmm2
  unsigned int v34; // esi
  char *v35; // rbx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __m128i v38; // xmm6
  unsigned int v39; // r10d
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  __int64 v42; // rax
  char *v43; // rdi
  __int64 v44; // rcx
  __int128 v45; // xmm4
  __m128i v46; // xmm5
  __int128 v47; // xmm3
  __m128i v48; // xmm5
  int v49; // r15d
  int v50; // eax
  __int64 v51; // xmm0_8
  __int64 v52; // rcx
  __int64 v53; // xmm0_8
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // xmm0_8
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // xmm0_8
  int v60; // eax
  __int64 v61; // rcx
  int v62; // ebp
  __int64 v63; // rax
  __int64 v64; // rbp
  void *v65; // rax
  size_t v66; // rdx
  unsigned __int64 v67; // r15
  void *v68; // rax
  __int64 v70; // rbx
  char *v71; // rcx
  __int64 v72; // rdx
  char *v73; // rdi
  __int64 v74; // xmm0_8
  void *exception; // r13
  int v76; // [rsp+Ch] [rbp-6Ch]
  __int64 v77; // [rsp+20h] [rbp-58h]
  __int64 v78; // [rsp+28h] [rbp-50h]
  __int64 v79; // [rsp+30h] [rbp-48h]

  if ( !a2
    || (v3 = __dynamic_cast(
               a2,
               (const struct __class_type_info *)&`typeinfo for'CoinWarmStart,
               (const struct __class_type_info *)&`typeinfo for'CoinWarmStartVector<double>,
               -1),
        (v4 = v3) == nullptr) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v77 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v77 - 24);
    if ( (_UNKNOWN *)(v78 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v78 - 24);
    if ( (_UNKNOWN *)(v79 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_281C70(v79 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v5 = *(int *)(a1 + 8);
  v6 = v3[2];
  v7 = *(_DWORD *)(a1 + 8);
  if ( v5 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v8 = (_DWORD *)operator new[](4 * v5);
  v9 = (_QWORD *)operator new[](8 * v5);
  v10 = *((_QWORD *)v4 + 2);
  v11 = *(_QWORD *)(a1 + 16);
  if ( v6 <= 0 )
  {
    if ( v7 <= 0 )
    {
      v64 = operator new(0x20u);
      *(_DWORD *)(v64 + 8) = 0;
      *(_QWORD *)(v64 + 16) = 0;
      *(_QWORD *)(v64 + 24) = 0;
      *(_QWORD *)v64 = &off_4D2628;
      goto LABEL_33;
    }
    v6 = 0;
    v13 = 0;
LABEL_10:
    v16 = v13;
    v17 = v6;
    v18 = 8LL * v6;
    v19 = v13;
    if ( (v11 + v18 >= (unsigned __int64)&v9[v19 + 4] || (unsigned __int64)&v9[v19] >= v11 + v18 + 32)
      && (unsigned int)(v7 - v6) > 0xA
      && v7 > v6 )
    {
      v20 = 1;
      v21 = &v8[v13];
      if ( v7 > v6 )
        v20 = v7 - v6;
      v76 = v20;
      v22 = v7 - 1 - v6;
      v23 = -(int)((unsigned __int64)v21 >> 2) & 3;
      if ( v7 <= v6 )
        v22 = 0;
      if ( v22 >= v23 + 3 )
      {
        if ( v23 )
        {
          v24 = *(_QWORD *)(v11 + 8LL * v6);
          *v21 = v6;
          v25 = v13 + 1;
          v26 = v6 + 1;
          v9[v13] = v24;
          if ( v23 != 1 )
          {
            v27 = v25;
            v25 = v13 + 2;
            v8[v27] = v26;
            v28 = *(_QWORD *)(v11 + 8LL * v26);
            v26 = v6 + 2;
            v9[v27] = v28;
            if ( v23 != 2 )
            {
              v29 = v25;
              v25 = v13 + 3;
              v8[v29] = v26;
              v30 = *(_QWORD *)(v11 + 8LL * v26);
              v26 = v6 + 3;
              v9[v29] = v30;
            }
          }
        }
        else
        {
          v26 = v6;
          v25 = v13;
        }
        v31 = v23;
        v32 = v23 + (__int64)v13;
        si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
        v34 = v76 - v23;
        v35 = (char *)&v8[v32];
        v36 = v31;
        v37 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v25), 0), si128);
        v38 = _mm_load_si128((const __m128i *)&xmmword_289C00);
        v39 = 0;
        v40 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v26), 0), si128);
        v41 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v42 = v11 + v36 * 8 + v18;
        v43 = (char *)&v9[v36 + v19];
        v44 = 0;
        do
        {
          v45 = *(_OWORD *)(v42 + 2 * v44);
          v46 = v37;
          v37 = _mm_add_epi32(v37, v41);
          ++v39;
          v47 = *(_OWORD *)(v42 + 2 * v44 + 16);
          v48 = _mm_add_epi32(v46, v38);
          *(__m128i *)&v35[v44] = v40;
          v40 = _mm_add_epi32(v40, v41);
          *(_OWORD *)&v43[2 * v44] = v45;
          *(_OWORD *)&v43[2 * v44 + 16] = v47;
          v44 += 16;
        }
        while ( v34 >> 2 > v39 );
        v13 = v25 + (v34 & 0xFFFFFFFC);
        v6 = v26 + (v34 & 0xFFFFFFFC);
        v49 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v48, 255));
        if ( v34 == (v34 & 0xFFFFFFFC) )
          goto LABEL_31;
        v16 = v13;
        v17 = v6;
      }
      v50 = v6 + 1;
      v51 = *(_QWORD *)(v11 + 8 * v17);
      v8[v16] = v6;
      v49 = v13 + 1;
      v9[v16] = v51;
      if ( v6 + 1 < v7 )
      {
        v52 = v49;
        v49 = v13 + 2;
        v8[v52] = v50;
        v53 = *(_QWORD *)(v11 + 8LL * v50);
        v54 = v6 + 2;
        v9[v52] = v53;
        if ( v7 > v6 + 2 )
        {
          v55 = v49;
          v49 = v13 + 3;
          v8[v55] = v54;
          v56 = *(_QWORD *)(v11 + 8LL * v54);
          v57 = v6 + 3;
          v9[v55] = v56;
          if ( v7 > v6 + 3 )
          {
            v58 = v49;
            v49 = v13 + 4;
            v8[v58] = v57;
            v59 = *(_QWORD *)(v11 + 8LL * v57);
            v60 = v6 + 4;
            v9[v58] = v59;
            if ( v7 > v6 + 4 )
            {
              v61 = v49;
              v62 = v6 + 5;
              v49 = v13 + 5;
              v8[v61] = v60;
              v9[v61] = *(_QWORD *)(v11 + 8LL * v60);
              if ( v7 > v62 )
              {
                v63 = v49;
                v49 = v13 + 6;
                v8[v63] = v62;
                v9[v63] = *(_QWORD *)(v11 + 8LL * v62);
              }
            }
          }
        }
      }
    }
    else
    {
      v70 = v13 + 1;
      v71 = (char *)v8 + 4 * v16 - 4 * v70;
      v72 = -8 * v70 + v18 + v11;
      v73 = (char *)&v9[v19 - v70];
      do
      {
        v74 = *(_QWORD *)(v72 + 8 * v70);
        *(_DWORD *)&v71[4 * v70] = v6++;
        v49 = v70;
        *(_QWORD *)&v73[8 * v70++] = v74;
      }
      while ( v7 > v6 );
    }
LABEL_31:
    v64 = operator new(0x20u);
    *(_DWORD *)(v64 + 8) = v49;
    *(_QWORD *)(v64 + 16) = 0;
    *(_QWORD *)(v64 + 24) = 0;
    *(_QWORD *)v64 = &off_4D2628;
    goto LABEL_32;
  }
  v12 = 0;
  v13 = 0;
  do
  {
    v14 = *(double *)(v11 + 8 * v12);
    if ( v14 != *(double *)(v10 + 8 * v12) )
    {
      v15 = v13++;
      *(double *)&v9[v15] = v14;
      v8[v15] = v12;
    }
    ++v12;
  }
  while ( v12 != (unsigned int)(v6 - 1) + 1LL );
  if ( v6 < v7 )
    goto LABEL_10;
  v64 = operator new(0x20u);
  *(_DWORD *)(v64 + 8) = v13;
  *(_QWORD *)(v64 + 16) = 0;
  *(_QWORD *)(v64 + 24) = 0;
  *(_QWORD *)v64 = &off_4D2628;
  if ( !v13 )
    goto LABEL_33;
  v49 = v13;
LABEL_32:
  v65 = (void *)operator new[](4LL * v49);
  *(_QWORD *)(v64 + 16) = v65;
  v66 = 4LL * v49;
  v67 = 8LL * v49;
  memcpy(v65, v8, v66);
  v68 = (void *)operator new[](v67);
  *(_QWORD *)(v64 + 24) = v68;
  memcpy(v68, v9, v67);
LABEL_33:
  operator delete[](v8);
  operator delete[](v9);
  return *(_QWORD *)(*(_QWORD *)v64 - 40LL) + v64;
}

