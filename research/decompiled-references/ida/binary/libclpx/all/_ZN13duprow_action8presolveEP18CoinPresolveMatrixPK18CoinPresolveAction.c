CoinPresolveMatrix *__fastcall duprow_action::presolve(
        duprow_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  unsigned __int64 v4; // r13
  int *v5; // r12
  __int64 v6; // r14
  int *v7; // rax
  int v8; // r12d
  int *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  int *v12; // rax
  int v13; // r15d
  bool v14; // zf
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  double *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdi
  double v24; // xmm1_8
  char *v25; // rsi
  __int64 v26; // rax
  double v27; // xmm0_8
  double v28; // xmm8_8
  double v29; // xmm0_8
  unsigned __int64 v30; // rax
  double v31; // xmm1_8
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // edi
  int v35; // r15d
  int v36; // r11d
  int v37; // ecx
  __int64 v38; // rsi
  int v39; // edi
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  double *v44; // rdx
  double v45; // xmm0_8
  double *v46; // r9
  double v47; // xmm7_8
  double v48; // xmm5_8
  double v49; // xmm6_8
  const CoinPresolveAction *v50; // r8
  CoinPresolveMatrix *v51; // rbx
  unsigned __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rax
  unsigned int v56; // edx
  int v57; // r8d
  int v58; // edi
  __m128i v59; // xmm1
  const __m128i *v60; // rdx
  int v61; // esi
  unsigned int v62; // ecx
  unsigned int v63; // eax
  unsigned int v64; // ecx
  __m128i si128; // xmm0
  __m128i v66; // xmm1
  unsigned int v67; // eax
  int v68; // ebx
  int v69; // ebx
  int v70; // ebx
  int v71; // ebx
  int v72; // eax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  int v76; // esi
  int v77; // r8d
  __m128i v78; // xmm1
  const __m128i *v79; // rdx
  int v80; // edi
  unsigned int v81; // r9d
  unsigned int v82; // eax
  unsigned int v83; // r9d
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  unsigned int v86; // eax
  int v87; // ebx
  int v88; // ebx
  int v89; // ebx
  int v90; // ebx
  int v91; // eax
  int v92; // r8d
  unsigned __int64 v93; // rdi
  __int64 v94; // rax
  unsigned int v95; // edx
  int v96; // r10d
  int v97; // r11d
  __m128i v98; // xmm2
  const __m128i *v99; // rdx
  unsigned int v100; // r9d
  unsigned int v101; // eax
  __m128i v102; // xmm0
  __m128i v103; // xmm2
  unsigned int v104; // eax
  int v105; // esi
  int v106; // eax
  signed int v107; // edi
  int v108; // esi
  unsigned __int64 v109; // rcx
  __int64 v110; // rax
  unsigned int v111; // edx
  int v112; // r10d
  int v113; // r11d
  __m128i v114; // xmm2
  const __m128i *v115; // rdx
  unsigned int v116; // r9d
  unsigned int v117; // eax
  __m128i v118; // xmm0
  __m128i v119; // xmm2
  unsigned int v120; // eax
  int v121; // edx
  signed int v122; // eax
  double *v123; // r14
  CoinMessageHandler *v124; // rax
  CoinMessageHandler *v125; // rax
  CoinMessageHandler *v126; // rax
  double v127; // xmm0_8
  __int64 v128; // rax
  __int64 v129; // [rsp+0h] [rbp-148h]
  CoinMessageHandler *v130; // [rsp+8h] [rbp-140h]
  CoinMessageHandler *v131; // [rsp+8h] [rbp-140h]
  __int64 v132; // [rsp+10h] [rbp-138h]
  __int64 v133; // [rsp+18h] [rbp-130h]
  int v134; // [rsp+20h] [rbp-128h]
  double *v135; // [rsp+20h] [rbp-128h]
  int v136; // [rsp+2Ch] [rbp-11Ch]
  int v137; // [rsp+30h] [rbp-118h]
  int v138; // [rsp+34h] [rbp-114h]
  unsigned int v139; // [rsp+34h] [rbp-114h]
  double v141; // [rsp+60h] [rbp-E8h]
  __int64 v142; // [rsp+68h] [rbp-E0h]
  __int64 v143; // [rsp+70h] [rbp-D8h]
  int v144; // [rsp+78h] [rbp-D0h]
  int v145; // [rsp+7Ch] [rbp-CCh]
  struct rusage usage; // [rsp+80h] [rbp-C8h] BYREF

  if ( !*((_BYTE *)this + 321) )
  {
    v4 = *((_QWORD *)this + 36);
    v136 = 0;
    v137 = 0;
    v138 = *(_DWORD *)this;
    v141 = 0.0;
    v134 = *((_DWORD *)this + 1);
    goto LABEL_3;
  }
  getrusage(RUSAGE_SELF, &usage);
  v54 = *((_DWORD *)this + 1);
  v4 = *((_QWORD *)this + 36);
  v134 = v54;
  v141 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  if ( v54 <= 0 )
  {
    v137 = 0;
    goto LABEL_63;
  }
  v55 = -(int)(v4 >> 2) & 3;
  v56 = v55 + 3;
  if ( (unsigned int)(v55 + 3) < 5 )
    v56 = 5;
  if ( v56 > v54 - 1 )
  {
    v137 = 0;
    v67 = 0;
LABEL_57:
    v137 += *(_DWORD *)(v4 + 4LL * (int)v67) == 0;
    if ( v54 > (int)(v67 + 1) )
    {
      v68 = (*(_DWORD *)(v4 + 4LL * (int)(v67 + 1)) == 0) + v137;
      v137 = v68;
      if ( v134 > (int)(v67 + 2) )
      {
        v69 = (*(_DWORD *)(v4 + 4LL * (int)(v67 + 2)) == 0) + v68;
        v137 = v69;
        if ( v134 > (int)(v67 + 3) )
        {
          v70 = (*(_DWORD *)(v4 + 4LL * (int)(v67 + 3)) == 0) + v69;
          v137 = v70;
          if ( v134 > (int)(v67 + 4) )
          {
            v71 = (*(_DWORD *)(v4 + 4LL * (int)(v67 + 4)) == 0) + v70;
            v72 = v67 + 5;
            v137 = v71;
            if ( v134 > v72 )
              v137 = (*(_DWORD *)(v4 + 4LL * v72) == 0) + v71;
          }
        }
      }
    }
    goto LABEL_63;
  }
  if ( (_DWORD)v55 )
  {
    v57 = 1;
    v58 = *(_DWORD *)v4 == 0;
    if ( (_DWORD)v55 != 1 )
    {
      v57 = 2;
      v58 += *(_DWORD *)(v4 + 4) == 0;
      if ( (_DWORD)v55 != 2 )
      {
        v57 = 3;
        v58 += *(_DWORD *)(v4 + 8) == 0;
      }
    }
  }
  else
  {
    v58 = 0;
    v57 = 0;
  }
  v59 = 0;
  v60 = (const __m128i *)(v4 + 4 * v55);
  v61 = v54 - v55;
  v62 = v54 - v55;
  v63 = 0;
  v64 = v62 >> 2;
  do
  {
    si128 = _mm_load_si128(v60);
    ++v63;
    ++v60;
    v59 = _mm_sub_epi32(v59, _mm_cmpeq_epi32(si128, (__m128i)0LL));
  }
  while ( v64 > v63 );
  v66 = _mm_add_epi32(v59, _mm_srli_si128(v59, 8));
  v137 = v58 + _mm_cvtsi128_si32(_mm_add_epi32(v66, _mm_srli_si128(v66, 4)));
  v67 = (v61 & 0xFFFFFFFC) + v57;
  if ( (v61 & 0xFFFFFFFC) != v61 )
    goto LABEL_57;
LABEL_63:
  v138 = *(_DWORD *)this;
  if ( *(int *)this <= 0 )
  {
    v136 = 0;
  }
  else
  {
    v73 = *((_QWORD *)this + 6);
    v74 = -(int)(v73 >> 2) & 3;
    v75 = v74 + 3;
    if ( (unsigned int)(v74 + 3) < 5 )
      v75 = 5;
    if ( v75 > *(_DWORD *)this - 1 )
    {
      v136 = 0;
      v86 = 0;
    }
    else
    {
      if ( (_DWORD)v74 )
      {
        v76 = 1;
        v77 = *(_DWORD *)v73 == 0;
        if ( (_DWORD)v74 != 1 )
        {
          v76 = 2;
          v77 += *(_DWORD *)(v73 + 4) == 0;
          if ( (_DWORD)v74 != 2 )
          {
            v76 = 3;
            v77 += *(_DWORD *)(v73 + 8) == 0;
          }
        }
      }
      else
      {
        v77 = 0;
        v76 = 0;
      }
      v78 = 0;
      v79 = (const __m128i *)(v73 + 4 * v74);
      v80 = v138 - v74;
      v81 = v138 - v74;
      v82 = 0;
      v83 = v81 >> 2;
      do
      {
        v84 = _mm_load_si128(v79);
        ++v82;
        ++v79;
        v78 = _mm_sub_epi32(v78, _mm_cmpeq_epi32(v84, (__m128i)0LL));
      }
      while ( v83 > v82 );
      v85 = _mm_add_epi32(v78, _mm_srli_si128(v78, 8));
      v136 = v77 + _mm_cvtsi128_si32(_mm_add_epi32(v85, _mm_srli_si128(v85, 4)));
      v86 = (v80 & 0xFFFFFFFC) + v76;
      if ( (v80 & 0xFFFFFFFC) == v80 )
        goto LABEL_3;
    }
    v136 += *(_DWORD *)(v73 + 4LL * (int)v86) == 0;
    if ( v138 > (int)(v86 + 1) )
    {
      v87 = (*(_DWORD *)(v73 + 4LL * (int)(v86 + 1)) == 0) + v136;
      v136 = v87;
      if ( v138 > (int)(v86 + 2) )
      {
        v88 = (*(_DWORD *)(v73 + 4LL * (int)(v86 + 2)) == 0) + v87;
        v136 = v88;
        if ( v138 > (int)(v86 + 3) )
        {
          v89 = (*(_DWORD *)(v73 + 4LL * (int)(v86 + 3)) == 0) + v88;
          v136 = v89;
          if ( v138 > (int)(v86 + 4) )
          {
            v90 = (*(_DWORD *)(v73 + 4LL * (int)(v86 + 4)) == 0) + v89;
            v91 = v86 + 5;
            v136 = v90;
            if ( v138 > v91 )
              v136 = (*(_DWORD *)(v73 + 4LL * v91) == 0) + v90;
          }
        }
      }
    }
  }
LABEL_3:
  v130 = *((CoinMessageHandler **)this + 37);
  v133 = *((_QWORD *)this + 38);
  v132 = *((_QWORD *)this + 35);
  if ( (unsigned __int64)v134 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_145;
  v5 = (int *)operator new[](4LL * v134);
  if ( v134 <= 0 )
    goto LABEL_80;
  v6 = 0;
  v7 = v5;
  v8 = 0;
  v9 = v7;
  do
  {
    v10 = *(int *)(v4 + 4 * v6);
    if ( (_DWORD)v10 && (!*((_BYTE *)this + 440) || (*(_BYTE *)(*((_QWORD *)this + 50) + v6) & 2) == 0) )
    {
      CoinSort_2<int,double>(
        v133 + 4LL * *(int *)(v132 + 4 * v6),
        v133 + 4 * (*(int *)(v132 + 4 * v6) + v10),
        (char *)v130 + 8 * *(int *)(v132 + 4 * v6));
      v11 = v8++;
      v9[v11] = v6;
    }
    ++v6;
  }
  while ( v6 != (unsigned int)(v134 - 1) + 1LL );
  v12 = v9;
  v13 = v8;
  v14 = v8 == 0;
  v5 = v12;
  if ( v14 )
  {
LABEL_80:
    operator delete[](v5);
    return a2;
  }
  v15 = v134 + 1;
  if ( v15 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_145;
  v16 = operator new[](8 * v15);
  v17 = *((double **)this + 60);
  v135 = (double *)v16;
  if ( !v17 )
  {
    v53 = v138 + 1;
    if ( v53 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v17 = (double *)operator new[](8 * v53);
      coin_init_random_vec(v17, v138);
      goto LABEL_14;
    }
LABEL_145:
    __cxa_throw_bad_array_new_length();
  }
LABEL_14:
  v18 = 0;
  v19 = (unsigned int)(v13 - 1) + 1LL;
  do
  {
    while ( 1 )
    {
      v20 = v5[v18];
      v21 = *(int *)(v132 + 4 * v20);
      v22 = *(_DWORD *)(v4 + 4 * v20);
      if ( (int)v21 < (int)v21 + v22 )
        break;
      v135[v18++] = 0.0;
      if ( v18 == v19 )
        goto LABEL_19;
    }
    v23 = v133 + 4 * v21;
    v24 = 0.0;
    v25 = (char *)v130 + 8 * v21;
    v26 = 0;
    do
    {
      v27 = v17[*(int *)(v23 + 4 * v26)] * *(double *)&v25[8 * v26];
      ++v26;
      v24 = v24 + v27;
    }
    while ( v26 != (unsigned int)(v22 - 1) + 1LL );
    v135[v18++] = v24;
  }
  while ( v18 != v19 );
LABEL_19:
  CoinSort_2<double,int>(v135, &v135[v13], v5);
  v28 = *((double *)this + 42);
  v29 = *v135;
  v142 = *((_QWORD *)this + 13);
  v143 = *((_QWORD *)this + 14);
  v144 = *((_DWORD *)this + 109) & 0x10;
  v145 = *((_DWORD *)this + 109) & 0x4000;
  if ( v13 == 1 )
  {
    operator delete[](v135);
    if ( v17 != *((double **)this + 60) )
      operator delete[](v17);
LABEL_37:
    v51 = a2;
    goto LABEL_38;
  }
  v139 = 0;
  v129 = 4LL * (unsigned int)(v13 - 2) + 4;
  v30 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v31 = v135[v30 / 4 + 1];
      if ( v31 == v29 )
      {
        v32 = v5[v30 / 4 + 1];
        v33 = v5[v30 / 4];
        v34 = *(_DWORD *)(v4 + 4 * v32);
        v35 = v5[v30 / 4 + 1];
        v36 = v5[v30 / 4];
        if ( v34 == *(_DWORD *)(v4 + 4 * v33) )
        {
          v37 = *(_DWORD *)(v132 + 4 * v32);
          v38 = *(int *)(v132 + 4 * v33);
          v39 = v37 + v34;
          v40 = *(_DWORD *)(v132 + 4 * v33) - v37;
          if ( v37 < v39 )
          {
            if ( *(_DWORD *)(v133 + 4LL * v37) == *(_DWORD *)(v133 + 4 * v38) )
            {
              v41 = v37 + (__int64)v40 + 1;
              v42 = -(__int64)v40;
              while ( fabs(*((double *)v130 + v42 + v41 - 1) - *((double *)v130 + v38)) <= 1.0e-14 )
              {
                if ( v39 == ++v37 )
                  goto LABEL_31;
                v38 = v41;
                if ( *(_DWORD *)(v133 + 4 * v42 + 4 * v41) != *(_DWORD *)(v133 + 4 * (v41 + 1) - 4) )
                  goto LABEL_21;
                ++v41;
              }
            }
            goto LABEL_21;
          }
          if ( v37 == v39 )
            break;
        }
      }
LABEL_21:
      v30 += 4LL;
      v29 = v31;
      if ( v30 == v129 )
        goto LABEL_35;
    }
LABEL_31:
    v43 = 8 * v32;
    v44 = (double *)(v142 + v43);
    v45 = *(double *)(v142 + 8 * v33);
    v46 = (double *)(v143 + v43);
    v47 = *(double *)(v143 + 8 * v33);
    v48 = *v44;
    v49 = *v46;
    if ( *v44 < v45 )
      break;
    if ( v47 >= v49 )
      goto LABEL_33;
    if ( fabs(v45 - v48) < 1.0e-12 )
    {
LABEL_121:
      v5[v30 / 4 + 1] = v36;
      v5[v30 / 4] = v35;
      v36 = v35;
      goto LABEL_33;
    }
    if ( v48 - v28 > v47 && !v145 )
      goto LABEL_125;
    if ( !v144 )
      goto LABEL_21;
    *v46 = v47;
    v31 = v135[v30 / 4 + 1];
LABEL_33:
    if ( v36 < 0 )
      goto LABEL_21;
    v30 += 4LL;
    v29 = v31;
    v5[v139++] = v36;
    if ( v30 == v129 )
      goto LABEL_35;
  }
  if ( v49 >= v47 )
    goto LABEL_121;
  if ( v45 - v28 <= v49 || v145 )
  {
    if ( !v144 )
      goto LABEL_21;
    *v44 = v45;
    v31 = v135[v30 / 4 + 1];
    goto LABEL_33;
  }
LABEL_125:
  v123 = v46;
  *((_DWORD *)this + 86) |= 1u;
  v131 = *((CoinMessageHandler **)this + 26);
  CoinMessages::CoinMessages((CoinMessages *)&usage, (duprow_action *)((char *)this + 224));
  v124 = (CoinMessageHandler *)CoinMessageHandler::message(v131, 16, (const CoinMessages *)&usage);
  v125 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v124);
  v126 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v125);
  v127 = *v123;
  v128 = CoinMessageHandler::operator<<(v126);
  CoinMessageHandler::operator<<(v128, 0, v127);
  CoinMessages::~CoinMessages((CoinMessages *)&usage);
LABEL_35:
  operator delete[](v135);
  if ( v17 != *((double **)this + 60) )
  {
    operator delete[](v17);
    if ( v139 )
      goto LABEL_45;
    goto LABEL_37;
  }
  if ( !v139 )
    goto LABEL_37;
LABEL_45:
  v51 = (CoinPresolveMatrix *)useless_constraint_action::presolve(
                                this,
                                (CoinPresolveMatrix *)v5,
                                (const int *)v139,
                                (int)a2,
                                v50);
LABEL_38:
  operator delete[](v5);
  if ( *((_BYTE *)this + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v92 = *((_DWORD *)this + 1);
    if ( v92 <= 0 )
    {
      v105 = 0;
      goto LABEL_98;
    }
    v93 = *((_QWORD *)this + 36);
    v94 = -(int)(v93 >> 2) & 3;
    v95 = v94 + 3;
    if ( (unsigned int)(v94 + 3) < 5 )
      v95 = 5;
    if ( v95 > v92 - 1 )
    {
      v105 = 0;
      v104 = 0;
    }
    else
    {
      if ( (_DWORD)v94 )
      {
        v96 = 1;
        v97 = *(_DWORD *)v93 == 0;
        if ( (_DWORD)v94 != 1 )
        {
          v96 = 2;
          v97 += *(_DWORD *)(v93 + 4) == 0;
          if ( (_DWORD)v94 != 2 )
          {
            v96 = 3;
            v97 += *(_DWORD *)(v93 + 8) == 0;
          }
        }
      }
      else
      {
        v97 = 0;
        v96 = 0;
      }
      v98 = 0;
      v99 = (const __m128i *)(v93 + 4 * v94);
      v100 = v92 - v94;
      v101 = 0;
      do
      {
        v102 = _mm_load_si128(v99);
        ++v101;
        ++v99;
        v98 = _mm_sub_epi32(v98, _mm_cmpeq_epi32(v102, (__m128i)0LL));
      }
      while ( v100 >> 2 > v101 );
      v103 = _mm_add_epi32(v98, _mm_srli_si128(v98, 8));
      v104 = (v100 & 0xFFFFFFFC) + v96;
      v105 = v97 + _mm_cvtsi128_si32(_mm_add_epi32(v103, _mm_srli_si128(v103, 4)));
      if ( (v100 & 0xFFFFFFFC) == v100 )
      {
LABEL_98:
        v107 = *(_DWORD *)this;
        v108 = v105 - v137;
        if ( *(int *)this <= 0 )
        {
          v121 = 0;
        }
        else
        {
          v109 = *((_QWORD *)this + 6);
          v110 = -(int)(v109 >> 2) & 3;
          v111 = v110 + 3;
          if ( (unsigned int)(v110 + 3) < 5 )
            v111 = 5;
          if ( v111 > v107 - 1 )
          {
            v121 = 0;
            v120 = 0;
          }
          else
          {
            if ( (_DWORD)v110 )
            {
              v112 = 1;
              v113 = *(_DWORD *)v109 == 0;
              if ( (_DWORD)v110 != 1 )
              {
                v112 = 2;
                v113 += *(_DWORD *)(v109 + 4) == 0;
                if ( (_DWORD)v110 != 2 )
                {
                  v112 = 3;
                  v113 += *(_DWORD *)(v109 + 8) == 0;
                }
              }
            }
            else
            {
              v113 = 0;
              v112 = 0;
            }
            v114 = 0;
            v115 = (const __m128i *)(v109 + 4 * v110);
            v116 = v107 - v110;
            v117 = 0;
            do
            {
              v118 = _mm_load_si128(v115);
              ++v117;
              ++v115;
              v114 = _mm_sub_epi32(v114, _mm_cmpeq_epi32(v118, (__m128i)0LL));
            }
            while ( v116 >> 2 > v117 );
            v119 = _mm_add_epi32(v114, _mm_srli_si128(v114, 8));
            v120 = (v116 & 0xFFFFFFFC) + v112;
            v121 = v113 + _mm_cvtsi128_si32(_mm_add_epi32(v119, _mm_srli_si128(v119, 4)));
            if ( (v116 & 0xFFFFFFFC) == v116 )
              goto LABEL_115;
          }
          v121 += *(_DWORD *)(v109 + 4LL * (int)v120) == 0;
          if ( v107 > (int)(v120 + 1) )
          {
            v121 += *(_DWORD *)(v109 + 4LL * (int)(v120 + 1)) == 0;
            if ( v107 > (int)(v120 + 2) )
            {
              v121 += *(_DWORD *)(v109 + 4LL * (int)(v120 + 2)) == 0;
              if ( v107 > (int)(v120 + 3) )
              {
                v121 += *(_DWORD *)(v109 + 4LL * (int)(v120 + 3)) == 0;
                if ( v107 > (int)(v120 + 4) )
                {
                  v121 += *(_DWORD *)(v109 + 4LL * (int)(v120 + 4)) == 0;
                  v122 = v120 + 5;
                  if ( v107 > v122 )
                    v121 += *(_DWORD *)(v109 + 4LL * v122) == 0;
                }
              }
            }
          }
        }
LABEL_115:
        printf(
          "CoinPresolveDuprow(256) - %d rows, %d columns dropped in time %g, total %g\n",
          v108,
          v121 - v136,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) - v141,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
        + (double)SLODWORD(usage.ru_utime.tv_sec)
        - *((double *)this + 41));
        return v51;
      }
    }
    v105 += *(_DWORD *)(v93 + 4LL * (int)v104) == 0;
    if ( v92 > (int)(v104 + 1) )
    {
      v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 1)) == 0;
      if ( v92 > (int)(v104 + 2) )
      {
        v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 2)) == 0;
        if ( v92 > (int)(v104 + 3) )
        {
          v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 3)) == 0;
          if ( v92 > (int)(v104 + 4) )
          {
            v105 += *(_DWORD *)(v93 + 4LL * (int)(v104 + 4)) == 0;
            v106 = v104 + 5;
            if ( v92 > v106 )
              v105 += *(_DWORD *)(v93 + 4LL * v106) == 0;
          }
        }
      }
    }
    goto LABEL_98;
  }
  return v51;
}

