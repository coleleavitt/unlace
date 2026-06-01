char *__fastcall CoinWarmStartBasis::generateDiff(__int64 a1, const void *a2)
{
  _DWORD *v2; // r15
  signed int v3; // r13d
  int v4; // esi
  int v5; // r14d
  unsigned __int64 v6; // rdi
  unsigned int *v7; // rbp
  const unsigned int *v8; // r12
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  signed int v19; // r11d
  __int64 v20; // rdx
  int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned int v27; // ecx
  unsigned int v28; // edi
  __int64 v29; // rdx
  __m128i si128; // xmm1
  unsigned int *v31; // r10
  __int64 v32; // r9
  __m128i v33; // xmm3
  unsigned int *v34; // r11
  __int64 v35; // rdx
  __m128i v36; // xmm0
  __m128i v37; // xmm2
  int v38; // esi
  int v39; // ecx
  int v40; // edx
  int v41; // edi
  int v42; // edx
  int v43; // ecx
  int v44; // edx
  int v45; // edi
  int v46; // edx
  int v47; // r13d
  int v48; // esi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // r13
  int v55; // edi
  __int64 v56; // r15
  unsigned __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // ecx
  signed int v61; // esi
  __int64 v62; // r8
  __int64 v63; // r8
  unsigned int v64; // r8d
  __int64 v65; // rdx
  __m128i v66; // xmm1
  unsigned int *v67; // r10
  __int64 v68; // r11
  unsigned int v69; // r13d
  unsigned int *v70; // r14
  __int64 v71; // rdx
  __m128i v72; // xmm0
  int v73; // ecx
  int v74; // r8d
  int v75; // edx
  int v76; // esi
  int v77; // edx
  int v78; // r8d
  int v79; // edx
  int v80; // esi
  int v81; // edx
  int v82; // ecx
  int v83; // edx
  CoinWarmStartBasisDiff *v84; // r13
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // r9
  char *v89; // r10
  char *v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  char *v93; // r9
  char *v94; // r8
  __int64 v95; // rdi
  int v96; // [rsp+0h] [rbp-88h]
  unsigned __int64 v97; // [rsp+0h] [rbp-88h]
  __int64 v99; // [rsp+10h] [rbp-78h]
  const unsigned int *v100; // [rsp+18h] [rbp-70h]
  __int64 v101; // [rsp+18h] [rbp-70h]
  __int64 v102; // [rsp+20h] [rbp-68h]
  int v103; // [rsp+28h] [rbp-60h]
  signed int v104; // [rsp+2Ch] [rbp-5Ch]
  int v105; // [rsp+38h] [rbp-50h]
  int v106; // [rsp+3Ch] [rbp-4Ch]
  int v107; // [rsp+44h] [rbp-44h]
  __int64 v108; // [rsp+48h] [rbp-40h]

  if ( !a2 )
    BUG();
  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStart,
         (const struct __class_type_info *)&`typeinfo for'CoinWarmStartBasis,
         -1);
  v107 = *(_DWORD *)(a1 + 8);
  v3 = (v2[3] + 15) >> 4;
  v96 = (*(_DWORD *)(a1 + 12) + 15) >> 4;
  v4 = ((v107 + 15) >> 4) + v96;
  v103 = (v107 + 15) >> 4;
  v5 = (v2[2] + 15) >> 4;
  v106 = v4;
  v6 = 2 * v4;
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v7 = (unsigned int *)operator new[](4 * v6);
  v8 = &v7[v4];
  v102 = v4;
  v9 = *((_QWORD *)v2 + 4);
  v10 = *(_QWORD *)(a1 + 32);
  if ( v3 <= 0 )
  {
    v3 = 0;
    v12 = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      if ( *(_DWORD *)(v9 + 4 * v11) != *(_DWORD *)(v10 + 4 * v11) )
      {
        v13 = v12++;
        v7[v13] = v11 | 0x80000000;
        v8[v13] = *(_DWORD *)(v10 + 4 * v11);
      }
      ++v11;
    }
    while ( v11 != (unsigned int)(v3 - 1) + 1LL );
  }
  if ( v96 > v3 )
  {
    v14 = v3;
    v15 = 4LL * v12;
    v104 = v3;
    v16 = v4 + (__int64)v12;
    v105 = v96 - v3;
    v17 = 4 * (v16 + 4);
    v108 = 4LL * v3;
    v99 = v16;
    v18 = v3;
    v100 = (const unsigned int *)(v10 + v108);
    if ( (v17 <= v15 || v15 + 16 <= 4 * v16)
      && (unsigned int)(v96 - v3) > 8
      && (v100 >= &v7[(unsigned __int64)v15 / 4 + 4] || v100 + 4 <= &v7[(unsigned __int64)v15 / 4])
      && (v100 + 4 <= &v7[v99] || v100 >= &v7[(unsigned __int64)v17 / 4]) )
    {
      v19 = v3;
      v20 = -(int)((unsigned __int64)&v7[(unsigned __int64)v15 / 4] >> 2) & 3;
      if ( v96 - 1 - v3 < (unsigned int)(v20 + 3) )
      {
        v38 = v12;
      }
      else
      {
        if ( (_DWORD)v20 )
        {
          v21 = v12 + 1;
          v22 = v3++ | 0x80000000;
          v7[v12] = v22;
          v8[v12] = *v100;
          if ( (_DWORD)v20 != 1 )
          {
            v23 = v21;
            v7[v21] = v3 | 0x80000000;
            v24 = *(_DWORD *)(v10 + 4LL * v3);
            v21 = v12 + 2;
            v3 = v19 + 2;
            v8[v23] = v24;
            if ( (_DWORD)v20 != 2 )
            {
              v25 = v21;
              v7[v21] = v3 | 0x80000000;
              v26 = *(_DWORD *)(v10 + 4LL * v3);
              v21 = v12 + 3;
              v3 = v19 + 3;
              v8[v25] = v26;
            }
          }
        }
        else
        {
          v21 = v12;
        }
        v27 = 0;
        v28 = v105 - v20;
        v29 = v20;
        si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v31 = &v7[v29 + (unsigned __int64)v15 / 4];
        v32 = v10 + v29 * 4 + v108;
        v33 = _mm_load_si128((const __m128i *)&xmmword_29B4F0);
        v34 = &v7[v99 + v29];
        v35 = 0;
        v36 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v3), 0), (__m128i)xmmword_289BB0);
        do
        {
          v37 = v36;
          ++v27;
          v36 = _mm_add_epi32(v36, si128);
          *(__m128i *)&v31[v35] = _mm_or_si128(v37, v33);
          *(__m128i *)&v34[v35] = _mm_loadu_si128((const __m128i *)(v32 + v35 * 4));
          v35 += 4;
        }
        while ( v28 >> 2 > v27 );
        v3 += v28 & 0xFFFFFFFC;
        v38 = (v28 & 0xFFFFFFFC) + v21;
        v14 = v3;
        if ( v28 == (v28 & 0xFFFFFFFC) )
          goto LABEL_25;
      }
      v7[v38] = v3 | 0x80000000;
      v39 = v38 + 1;
      v8[v38] = *(_DWORD *)(v10 + 4 * v14);
      v40 = v3 + 1;
      if ( v96 > v3 + 1 )
      {
        v7[v39] = v40 | 0x80000000;
        v41 = v38 + 2;
        v8[v39] = *(_DWORD *)(v10 + 4LL * v40);
        v42 = v3 + 2;
        if ( v96 > v3 + 2 )
        {
          v7[v41] = v42 | 0x80000000;
          v43 = v38 + 3;
          v8[v41] = *(_DWORD *)(v10 + 4LL * v42);
          v44 = v3 + 3;
          if ( v96 > v3 + 3 )
          {
            v7[v43] = v44 | 0x80000000;
            v45 = v38 + 4;
            v8[v43] = *(_DWORD *)(v10 + 4LL * v44);
            v46 = v3 + 4;
            if ( v96 > v3 + 4 )
            {
              v47 = v3 + 5;
              v48 = v38 + 5;
              v7[v45] = v46 | 0x80000000;
              v8[v45] = *(_DWORD *)(v10 + 4LL * v46);
              if ( v96 > v47 )
              {
                v7[v48] = v47 | 0x80000000;
                v8[v48] = *(_DWORD *)(v10 + 4LL * v47);
              }
            }
          }
        }
      }
    }
    else
    {
      v91 = v3 + 1LL;
      v92 = v15 - 4LL * v3;
      v93 = (char *)v7 + v92;
      v94 = (char *)v8 + v92;
      v95 = v91 + (unsigned int)(v96 - 1 - v3);
      while ( 1 )
      {
        *(_DWORD *)&v93[4 * v18] = v18 | 0x80000000;
        *(_DWORD *)&v94[4 * v18] = *(_DWORD *)(v10 + 4 * v18);
        v18 = v91;
        if ( v91 == v95 )
          break;
        ++v91;
      }
    }
LABEL_25:
    v12 = v96 + v12 - v104;
  }
  v49 = *((_QWORD *)v2 + 3);
  v50 = *(_QWORD *)(a1 + 24);
  if ( v5 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v51 = 0;
    do
    {
      if ( *(_DWORD *)(v49 + 4 * v51) != *(_DWORD *)(v50 + 4 * v51) )
      {
        v52 = v12++;
        v7[v52] = v51;
        v8[v52] = *(_DWORD *)(v50 + 4 * v51);
      }
      ++v51;
    }
    while ( v51 != (unsigned int)(v5 - 1) + 1LL );
  }
  if ( v103 > v5 )
  {
    v53 = v5;
    v54 = 4LL * v5;
    v55 = v5;
    v56 = 4LL * v12;
    v57 = v50 + v54 + 16;
    v101 = 4 * (v102 + v12 + 4);
    v97 = 4 * (v12 + v102);
    v58 = v5;
    if ( (v56 >= v101 || (__int64)v97 >= v56 + 16)
      && (unsigned int)(v103 - v5) > 9
      && (v50 + v54 >= (unsigned __int64)&v7[(unsigned __int64)v56 / 4 + 4]
       || v57 <= (unsigned __int64)&v7[(unsigned __int64)v56 / 4])
      && (v50 + v54 >= (unsigned __int64)&v7[(unsigned __int64)v101 / 4] || v57 <= (unsigned __int64)&v7[v97 / 4]) )
    {
      v59 = -(int)((unsigned __int64)&v7[(unsigned __int64)v56 / 4] >> 2) & 3;
      if ( v103 - 1 - v5 < (unsigned int)(v59 + 3) )
      {
        v73 = v12;
      }
      else
      {
        if ( (_DWORD)v59 )
        {
          v7[v12] = v5;
          v60 = v12 + 1;
          v8[v12] = *(_DWORD *)(v50 + 4LL * v5);
          v61 = v5 + 1;
          if ( (_DWORD)v59 != 1 )
          {
            v62 = v60;
            v60 = v12 + 2;
            v7[v62] = v61;
            v8[v62] = *(_DWORD *)(v50 + 4LL * v61);
            v61 = v5 + 2;
            if ( (_DWORD)v59 != 2 )
            {
              v63 = v60;
              v60 = v12 + 3;
              v7[v63] = v61;
              v8[v63] = *(_DWORD *)(v50 + 4LL * v61);
              v61 = v5 + 3;
            }
          }
        }
        else
        {
          v61 = v5;
          v60 = v12;
        }
        v64 = v103 - v5 - v59;
        v65 = v59;
        v66 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
        v67 = &v7[v65 + (unsigned __int64)v56 / 4];
        v68 = v50 + v54 + v65 * 4;
        v69 = 0;
        v70 = &v7[v97 / 4 + v65];
        v71 = 0;
        v72 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v61), 0), (__m128i)xmmword_289BB0);
        do
        {
          *(__m128i *)&v67[v71] = v72;
          v72 = _mm_add_epi32(v72, v66);
          ++v69;
          *(__m128i *)&v70[v71] = _mm_loadu_si128((const __m128i *)(v68 + v71 * 4));
          v71 += 4;
        }
        while ( v64 >> 2 > v69 );
        v5 = v61 + (v64 & 0xFFFFFFFC);
        v73 = (v64 & 0xFFFFFFFC) + v60;
        v53 = v5;
        if ( v64 == (v64 & 0xFFFFFFFC) )
          goto LABEL_48;
      }
      v74 = v73 + 1;
      v7[v73] = v5;
      v8[v73] = *(_DWORD *)(v50 + 4 * v53);
      v75 = v5 + 1;
      if ( v5 + 1 < v103 )
      {
        v76 = v73 + 2;
        v7[v74] = v75;
        v8[v74] = *(_DWORD *)(v50 + 4LL * v75);
        v77 = v5 + 2;
        if ( v5 + 2 < v103 )
        {
          v78 = v73 + 3;
          v7[v76] = v77;
          v8[v76] = *(_DWORD *)(v50 + 4LL * v77);
          v79 = v5 + 3;
          if ( v103 > v5 + 3 )
          {
            v80 = v73 + 4;
            v7[v78] = v79;
            v8[v78] = *(_DWORD *)(v50 + 4LL * v79);
            v81 = v5 + 4;
            if ( v103 > v5 + 4 )
            {
              v82 = v73 + 5;
              v7[v80] = v81;
              v8[v80] = *(_DWORD *)(v50 + 4LL * v81);
              v83 = v5 + 5;
              if ( v103 > v5 + 5 )
              {
                v7[v82] = v83;
                v8[v82] = *(_DWORD *)(v50 + 4LL * v83);
              }
            }
          }
        }
      }
    }
    else
    {
      v86 = v5 + 1LL;
      v87 = v86 + (unsigned int)(v103 - 1 - v5);
      v88 = v56 - 4LL * v5;
      v89 = (char *)v7 + v88;
      v90 = (char *)v8 + v88;
      while ( 1 )
      {
        *(_DWORD *)&v89[4 * v58] = v58;
        *(_DWORD *)&v90[4 * v58] = *(_DWORD *)(v50 + 4 * v58);
        v58 = v86;
        if ( v86 == v87 )
          break;
        ++v86;
      }
    }
LABEL_48:
    v12 = v103 + v12 - v55;
  }
  if ( 2 * v12 > v106 && v107 )
  {
    v84 = (CoinWarmStartBasisDiff *)operator new(0x18u);
    CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(v84, (const CoinWarmStartBasis *)a1);
  }
  else
  {
    v84 = (CoinWarmStartBasisDiff *)operator new(0x18u);
    CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(v84, v12, v7, v8);
  }
  operator delete[](v7);
  return (char *)v84 + *(_QWORD *)(*(_QWORD *)v84 - 40LL);
}

