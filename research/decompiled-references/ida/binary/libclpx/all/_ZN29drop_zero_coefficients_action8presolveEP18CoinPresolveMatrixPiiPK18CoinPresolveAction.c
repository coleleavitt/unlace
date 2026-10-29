__int64 __fastcall drop_zero_coefficients_action::presolve(
        drop_zero_coefficients_action *this,
        CoinPresolveMatrix *a2,
        int *a3,
        __int64 a4,
        const CoinPresolveAction *a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  int v7; // r11d
  CoinPresolveMatrix *v8; // r14
  int v9; // r12d
  __int64 v10; // r8
  int v11; // r15d
  int v12; // ebx
  __m128i v13; // xmm3
  int v14; // edx
  int v15; // esi
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r10d
  unsigned int v20; // esi
  __m128i v21; // xmm2
  __int64 v22; // rax
  unsigned int v23; // ecx
  __m128d *v24; // rax
  __m128d v25; // xmm0
  __m128i v26; // xmm2
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  __int64 v31; // rax
  __int64 result; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  CoinPresolveMatrix *v35; // r15
  CoinPresolveMatrix *v36; // r8
  int v37; // esi
  char *v38; // rbp
  CoinPresolveMatrix *v39; // r12
  char *v40; // r14
  int v41; // ebx
  int v42; // edx
  char *v43; // rax
  CoinPresolveMatrix *v44; // rax
  CoinPresolveMatrix *v45; // rbx
  char *v46; // r15
  int *v47; // rax
  int v48; // edx
  __int64 v49; // rsi
  int *v50; // r12
  CoinPresolveMatrix *v51; // r9
  __m128i si128; // xmm3
  __int64 v53; // rax
  int v54; // edx
  int v55; // esi
  int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 v58; // rax
  int v59; // r11d
  unsigned int v60; // esi
  __m128i v61; // xmm2
  __int64 v62; // rax
  unsigned int v63; // ecx
  __m128d *v64; // rax
  __m128d v65; // xmm0
  __m128i v66; // xmm2
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // r12
  CoinPresolveMatrix *v73; // r11
  __int64 v74; // r15
  __int64 v75; // r14
  int *v76; // rdi
  int v77; // eax
  int v78; // r10d
  int v79; // ecx
  int v80; // edx
  __int64 i; // rsi
  double *v82; // rcx
  __int64 v83; // r8
  _DWORD *v84; // r9
  _DWORD *v85; // r8
  int *v86; // rdx
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // r10
  __int64 v91; // r13
  __int64 v92; // r14
  int *v93; // r11
  __int64 v94; // rbp
  int *v95; // r8
  int v96; // eax
  int v97; // ecx
  int v98; // edx
  double *v99; // rcx
  __int64 v100; // r9
  int *v101; // rdx
  int v102; // ecx
  __int64 v103; // rax
  CoinPresolveMatrix *v104; // r14
  int v105; // r12d
  int v106; // edx
  CoinPresolveMatrix *v107; // rax
  int v108; // esi
  int v109; // edx
  _DWORD *v110; // rax
  __int64 v111; // [rsp+8h] [rbp-80h]
  CoinPresolveMatrix *v112; // [rsp+10h] [rbp-78h]
  __int64 v113; // [rsp+10h] [rbp-78h]
  __int64 v114; // [rsp+18h] [rbp-70h]
  __int64 v115; // [rsp+20h] [rbp-68h]
  __int64 v118; // [rsp+38h] [rbp-50h]
  __int64 v119; // [rsp+40h] [rbp-48h]
  int v120; // [rsp+40h] [rbp-48h]
  int v121; // [rsp+4Ch] [rbp-3Ch]

  v5 = *((_QWORD *)this + 8);
  v6 = *((_QWORD *)this + 7);
  v114 = *((_QWORD *)this + 5);
  v7 = *(_DWORD *)this;
  v111 = *((_QWORD *)this + 6);
  v115 = *((_QWORD *)this + 32);
  v118 = *((_QWORD *)this + 33);
  if ( !(_DWORD)a3 )
    return a4;
  v8 = a2;
  v9 = (int)a3;
  if ( (_DWORD)a3 == v7 )
  {
    if ( v7 <= 0 )
      return a4;
    goto LABEL_4;
  }
  v33 = 4LL * (int)a3;
  if ( (CoinPresolveMatrix *)((char *)a2 + v33) == a2 )
    goto LABEL_42;
  v119 = 4LL * (int)a3;
  _BitScanReverse64(&v34, v33 >> 2);
  v112 = (CoinPresolveMatrix *)((char *)a2 + v33);
  v35 = (CoinPresolveMatrix *)((char *)a2 + 4);
  sub_267000((char *)a2, (char *)a2 + v33, 2 * (63LL - (int)(v34 ^ 0x3F)));
  v36 = v112;
  if ( v119 > 64 )
  {
    v121 = v9;
    v104 = (CoinPresolveMatrix *)((char *)a2 + 4);
    do
    {
      v105 = *(_DWORD *)v104;
      if ( *(_DWORD *)v104 < *(_DWORD *)a2 )
      {
        if ( v104 != a2 )
          memmove(v35, a2, v104 - a2);
        *(_DWORD *)a2 = v105;
      }
      else
      {
        v106 = *((_DWORD *)v104 - 1);
        v107 = (CoinPresolveMatrix *)((char *)v104 - 4);
        if ( v106 > v105 )
        {
          while ( 1 )
          {
            *((_DWORD *)v107 + 1) = v106;
            v106 = *((_DWORD *)v107 - 1);
            if ( v105 >= v106 )
              break;
            v107 = (CoinPresolveMatrix *)((char *)v107 - 4);
          }
        }
        else
        {
          v107 = v104;
        }
        *(_DWORD *)v107 = v105;
      }
      v104 = (CoinPresolveMatrix *)((char *)v104 + 4);
    }
    while ( (CoinPresolveMatrix *)((char *)a2 + 64) != v104 );
    v9 = v121;
    v45 = v104;
    v8 = a2;
    if ( v112 != (CoinPresolveMatrix *)((char *)a2 + 64) )
    {
      do
      {
        while ( 1 )
        {
          v108 = *(_DWORD *)v45;
          v109 = *((_DWORD *)v45 - 1);
          v110 = (_DWORD *)((char *)v45 - 4);
          if ( *(_DWORD *)v45 < v109 )
            break;
          v44 = v45;
          v45 = (CoinPresolveMatrix *)((char *)v45 + 4);
          *(_DWORD *)v44 = v108;
          if ( v112 == v45 )
            goto LABEL_42;
        }
        while ( 1 )
        {
          v110[1] = v109;
          v109 = *(v110 - 1);
          if ( v108 >= v109 )
            break;
          --v110;
        }
        v45 = (CoinPresolveMatrix *)((char *)v45 + 4);
        *v110 = v108;
      }
      while ( v112 != v45 );
    }
LABEL_42:
    v37 = *(_DWORD *)v8;
    goto LABEL_43;
  }
  v37 = *(_DWORD *)a2;
  if ( v112 != v35 )
  {
    v113 = v5;
    v120 = v9;
    v38 = (char *)v36;
    v39 = v8;
    v40 = (char *)v8 + 4;
    do
    {
      v41 = *(_DWORD *)v40;
      if ( *(_DWORD *)v40 < v37 )
      {
        if ( v40 != (char *)v39 )
          memmove(v35, v39, v40 - (char *)v39);
        *(_DWORD *)v39 = v41;
        v37 = v41;
      }
      else
      {
        v42 = *((_DWORD *)v40 - 1);
        v43 = v40 - 4;
        if ( v41 < v42 )
        {
          while ( 1 )
          {
            *((_DWORD *)v43 + 1) = v42;
            v42 = *((_DWORD *)v43 - 1);
            if ( v41 >= v42 )
              break;
            v43 -= 4;
          }
        }
        else
        {
          v43 = v40;
        }
        *(_DWORD *)v43 = v41;
        v37 = *(_DWORD *)v39;
      }
      v40 += 4;
    }
    while ( v38 != v40 );
    v8 = v39;
    v5 = v113;
    v9 = v120;
  }
LABEL_43:
  if ( v9 <= 1 )
  {
    v7 = *(_DWORD *)this;
    if ( *(_DWORD *)this != 1 )
    {
      v7 = 1;
      v46 = (char *)v8 + 4;
LABEL_49:
      v50 = (int *)&v46[4 * (v7 - 1)];
      v51 = v8;
      v11 = 0;
      v12 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D790);
      while ( 1 )
      {
        v53 = *(int *)v51;
        v54 = *(_DWORD *)(v114 + 4 * v53);
        v55 = *(_DWORD *)(v111 + 4 * v53);
        v56 = v54 + v55;
        if ( v54 >= v54 + v55 )
          goto LABEL_69;
        v57 = v54;
        v58 = ((unsigned __int64)(v5 + 8LL * v54) >> 3) & 1;
        v59 = 0;
        if ( (unsigned int)(v55 - 1) > 4 )
        {
          if ( (_DWORD)v58 )
            v59 = fabs(*(double *)(v5 + 8LL * v54++)) < 1.0e-12;
          v60 = v55 - v58;
          v61 = 0;
          v62 = v57 + v58;
          v63 = 0;
          v64 = (__m128d *)(v5 + 8 * v62);
          do
          {
            v65 = *v64;
            ++v63;
            v64 += 2;
            v61 = _mm_add_epi32(
                    v61,
                    (__m128i)_mm_shuffle_ps(
                               (__m128)_mm_and_si128(
                                         (__m128i)_mm_cmplt_pd(
                                                    _mm_and_pd(v65, (__m128d)xmmword_28E010),
                                                    (__m128d)xmmword_29A840),
                                         si128),
                               (__m128)_mm_and_si128(
                                         (__m128i)_mm_cmplt_pd(
                                                    _mm_and_pd(v64[-1], (__m128d)xmmword_28E010),
                                                    (__m128d)xmmword_29A840),
                                         si128),
                               136));
          }
          while ( v63 < v60 >> 2 );
          v66 = _mm_add_epi32(v61, _mm_srli_si128(v61, 8));
          v59 += _mm_cvtsi128_si32(_mm_add_epi32(v66, _mm_srli_si128(v66, 4)));
          v54 += v60 & 0xFFFFFFFC;
          if ( (v60 & 0xFFFFFFFC) == v60 )
            goto LABEL_67;
          v57 = v54;
        }
        if ( fabs(*(double *)(v5 + 8 * v57)) >= 1.0e-12 )
        {
          v67 = v54 + 1;
          if ( v56 <= v67 )
            goto LABEL_67;
        }
        else
        {
          v67 = v54 + 1;
          ++v59;
          if ( v56 <= v67 )
            goto LABEL_68;
        }
        if ( fabs(*(double *)(v5 + 8LL * v67)) >= 1.0e-12 )
        {
          v68 = v67 + 1;
          if ( v56 <= v68 )
            goto LABEL_67;
        }
        else
        {
          v68 = v67 + 1;
          ++v59;
          if ( v56 <= v68 )
            goto LABEL_68;
        }
        if ( fabs(*(double *)(v5 + 8LL * v68)) >= 1.0e-12 )
        {
          v69 = v68 + 1;
          if ( v56 <= v69 )
            goto LABEL_67;
        }
        else
        {
          v69 = v68 + 1;
          ++v59;
          if ( v56 <= v69 )
            goto LABEL_68;
        }
        if ( fabs(*(double *)(v5 + 8LL * v69)) < 1.0e-12 )
        {
          v70 = v69 + 1;
          ++v59;
          if ( v56 <= v70 )
            goto LABEL_68;
LABEL_66:
          v59 += fabs(*(double *)(v5 + 8LL * v70)) < 1.0e-12;
          goto LABEL_67;
        }
        v70 = v69 + 1;
        if ( v56 > v70 )
          goto LABEL_66;
LABEL_67:
        if ( v59 )
        {
LABEL_68:
          v71 = v12;
          v11 += v59;
          ++v12;
          *((_DWORD *)v8 + v71) = *(_DWORD *)v51;
        }
LABEL_69:
        v51 = (CoinPresolveMatrix *)((char *)v51 + 4);
        if ( v50 == (int *)v51 )
        {
          if ( v11 )
            goto LABEL_71;
          return a4;
        }
      }
    }
  }
  else
  {
    v46 = (char *)v8 + 4;
    v7 = 1;
    v47 = (int *)((char *)v8 + 4);
    do
    {
      v48 = *v47;
      if ( *v47 != v37 )
      {
        v49 = v7++;
        *((_DWORD *)v8 + v49) = v48;
      }
      ++v47;
      v37 = v48;
    }
    while ( (int *)((char *)v8 + 4 * (unsigned int)(v9 - 2) + 8) != v47 );
    if ( *(_DWORD *)this != v7 )
      goto LABEL_49;
  }
LABEL_4:
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = _mm_load_si128((const __m128i *)&xmmword_28D790);
  do
  {
    v14 = *(_DWORD *)(v114 + 4 * v10);
    v15 = *(_DWORD *)(v111 + 4 * v10);
    v16 = v14 + v15;
    if ( v14 >= v14 + v15 )
      goto LABEL_24;
    v17 = v14;
    v18 = ((unsigned __int64)(v5 + 8LL * v14) >> 3) & 1;
    v19 = 0;
    if ( (unsigned int)(v15 - 1) > 4 )
    {
      if ( (_DWORD)v18 )
        v19 = fabs(*(double *)(v5 + 8LL * v14++)) < 1.0e-12;
      v20 = v15 - v18;
      v21 = 0;
      v22 = v17 + v18;
      v23 = 0;
      v24 = (__m128d *)(v5 + 8 * v22);
      do
      {
        v25 = *v24;
        ++v23;
        v24 += 2;
        v21 = _mm_add_epi32(
                v21,
                (__m128i)_mm_shuffle_ps(
                           (__m128)_mm_and_si128(
                                     (__m128i)_mm_cmplt_pd(
                                                _mm_and_pd(v25, (__m128d)xmmword_28E010),
                                                (__m128d)xmmword_29A840),
                                     v13),
                           (__m128)_mm_and_si128(
                                     (__m128i)_mm_cmplt_pd(
                                                _mm_and_pd(v24[-1], (__m128d)xmmword_28E010),
                                                (__m128d)xmmword_29A840),
                                     v13),
                           136));
      }
      while ( v23 < v20 >> 2 );
      v26 = _mm_add_epi32(v21, _mm_srli_si128(v21, 8));
      v19 += _mm_cvtsi128_si32(_mm_add_epi32(v26, _mm_srli_si128(v26, 4)));
      v14 += v20 & 0xFFFFFFFC;
      if ( (v20 & 0xFFFFFFFC) == v20 )
        goto LABEL_22;
      v17 = v14;
    }
    if ( fabs(*(double *)(v5 + 8 * v17)) >= 1.0e-12 )
    {
      v27 = v14 + 1;
      if ( v16 <= v27 )
        goto LABEL_22;
    }
    else
    {
      v27 = v14 + 1;
      ++v19;
      if ( v16 <= v27 )
        goto LABEL_23;
    }
    if ( fabs(*(double *)(v5 + 8LL * v27)) >= 1.0e-12 )
    {
      v28 = v27 + 1;
      if ( v16 <= v28 )
        goto LABEL_22;
    }
    else
    {
      v28 = v27 + 1;
      ++v19;
      if ( v16 <= v28 )
        goto LABEL_23;
    }
    if ( fabs(*(double *)(v5 + 8LL * v28)) >= 1.0e-12 )
    {
      v29 = v28 + 1;
      if ( v16 <= v29 )
        goto LABEL_22;
    }
    else
    {
      v29 = v28 + 1;
      ++v19;
      if ( v16 <= v29 )
        goto LABEL_23;
    }
    if ( fabs(*(double *)(v5 + 8LL * v29)) >= 1.0e-12 )
    {
      v30 = v29 + 1;
      if ( v16 > v30 )
LABEL_21:
        v19 += fabs(*(double *)(v5 + 8LL * v30)) < 1.0e-12;
LABEL_22:
      if ( !v19 )
        goto LABEL_24;
      goto LABEL_23;
    }
    v30 = v29 + 1;
    ++v19;
    if ( v16 > v30 )
      goto LABEL_21;
LABEL_23:
    v31 = v12;
    v11 += v19;
    ++v12;
    *((_DWORD *)v8 + v31) = v10;
LABEL_24:
    ++v10;
  }
  while ( v7 > (int)v10 );
  if ( !v11 )
    return a4;
LABEL_71:
  v72 = operator new[](8LL * v11);
  if ( v12 )
  {
    v73 = v8;
    v74 = (__int64)v8 + 4 * (unsigned int)(v12 - 1) + 4;
    v12 = 0;
    do
    {
      v75 = *(int *)v73;
      v76 = (int *)(v111 + 4 * v75);
      v77 = *(_DWORD *)(v114 + 4 * v75);
      v78 = *(_DWORD *)v73;
      v79 = *v76;
      v80 = v77 + *v76;
      if ( v77 < v80 )
      {
        for ( i = v77; ; i = v77 )
        {
          while ( 1 )
          {
            v82 = (double *)(v5 + 8 * i);
            if ( fabs(*v82) >= 1.0e-12 )
              break;
            v83 = v12;
            --v80;
            ++v12;
            v84 = (_DWORD *)(v72 + 8 * v83);
            v85 = (_DWORD *)(v6 + 4 * i);
            v84[1] = v78;
            *v84 = *v85;
            *v82 = *(double *)(v5 + 8LL * v80);
            *v85 = *(_DWORD *)(v6 + 4LL * v80);
            --*v76;
            if ( v80 <= v77 )
              goto LABEL_77;
          }
          if ( ++v77 >= v80 )
            break;
        }
LABEL_77:
        v79 = *v76;
      }
      if ( !v79 )
      {
        v86 = (int *)(v115 + 8 * v75);
        v87 = *v86;
        v88 = v86[1];
        if ( *v86 >= 0 )
          *(_DWORD *)(v115 + 8LL * v87 + 4) = v88;
        if ( (int)v88 >= 0 )
          *(_DWORD *)(v115 + 8 * v88) = v87;
        *(_QWORD *)v86 = 0xFC06BF56FC06BF56LL;
      }
      v73 = (CoinPresolveMatrix *)((char *)v73 + 4);
    }
    while ( (CoinPresolveMatrix *)v74 != v73 );
    v89 = *((_QWORD *)this + 37);
    v90 = *((_QWORD *)this + 38);
    v91 = *((_QWORD *)this + 35);
    v92 = *((_QWORD *)this + 36);
    if ( v12 )
    {
      v93 = (int *)v72;
      do
      {
        v94 = *v93;
        v95 = (int *)(v92 + 4 * v94);
        v96 = *(_DWORD *)(v91 + 4 * v94);
        v97 = *v95;
        v98 = v96 + *v95;
        if ( v96 < v98 )
        {
          do
          {
            while ( 1 )
            {
              v99 = (double *)(v89 + 8LL * v96);
              if ( fabs(*v99) >= 1.0e-12 )
                break;
              v100 = v98--;
              *v99 = *(double *)(v89 + 8 * v100 - 8);
              *(_DWORD *)(v90 + 4LL * v96) = *(_DWORD *)(v90 + 4 * v100 - 4);
              --*v95;
              if ( v98 <= v96 )
                goto LABEL_90;
            }
            ++v96;
          }
          while ( v96 < v98 );
LABEL_90:
          v97 = *v95;
        }
        if ( !v97 )
        {
          v101 = (int *)(v118 + 8 * v94);
          v102 = *v101;
          v103 = v101[1];
          if ( *v101 >= 0 )
            *(_DWORD *)(v118 + 8LL * v102 + 4) = v103;
          if ( (int)v103 >= 0 )
            *(_DWORD *)(v118 + 8 * v103) = v102;
          *(_QWORD *)v101 = 0xFC06BF56FC06BF56LL;
        }
        v93 += 2;
      }
      while ( (int *)(v72 + 8LL * (unsigned int)(v12 - 1) + 8) != v93 );
    }
  }
  result = operator new(0x20u);
  *(_DWORD *)(result + 16) = v12;
  *(_QWORD *)(result + 24) = v72;
  *(_QWORD *)(result + 8) = a4;
  *(_QWORD *)result = &off_4D2118;
  return result;
}

