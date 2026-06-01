// Alternative name is '_ZN10ClpSimplexC1EPS_iPKi'
void __fastcall ClpSimplex::ClpSimplex(
        ClpSimplex *this,
        ClpSimplex *a2,
        signed int a3,
        const int *a4,
        double a5,
        __m128i si128)
{
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  _DWORD *v12; // r12
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // r8d
  __m128i *v17; // rdx
  __m128i v18; // xmm0
  signed int v19; // eax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdi
  ClpPrimalColumnSteepest *v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  _DWORD *v27; // rax
  int v28; // r14d
  _DWORD *v29; // r12
  int v30; // esi
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  int v34; // r8d
  __m128i v35; // xmm3
  __m128i *v36; // rdx
  unsigned int v37; // edi
  unsigned int v38; // eax
  __m128i v39; // xmm0
  unsigned int v40; // eax
  signed int v41; // ecx
  __int64 v42; // rax
  int v43; // r14d
  __int64 v44; // rdx
  _QWORD *v45; // r10
  __int64 v46; // rsi
  _QWORD *v47; // r9
  __int64 v48; // rcx
  __int64 *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // xmm0_8
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rcx
  signed int v56; // r15d
  __int64 v57; // rdx
  int v58; // eax
  int *v59; // rcx
  signed int v60; // eax
  int v61; // r14d
  __int64 v62; // r9
  int v63; // edi
  unsigned int v64; // ecx
  __int64 v65; // rdx
  unsigned int v66; // esi
  signed int v67; // esi
  unsigned int v68; // edi
  __m128i *v69; // rdx
  unsigned int v70; // eax
  __m128i v71; // xmm3
  __m128i v72; // xmm0
  int v73; // edx
  int v74; // eax
  __int64 v75; // rax
  int *v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rax
  int *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rax
  int *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // r14
  int *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rsi
  unsigned __int64 v91; // rdi
  __int64 v92; // r15
  void *v93; // r13
  int *v94; // rax
  __int64 v95; // rdx
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // rax
  double v99; // xmm0_8
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // rdx
  double v104; // xmm0_8
  double v105; // xmm1_8
  double v106; // xmm0_8
  int v107; // edi
  __int64 v108; // rax
  __int64 v109; // rax
  int *v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  int *v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rdi
  ClpNonLinearCost *v124; // r12
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  int v132; // edi
  int v134; // [rsp+4h] [rbp-64h]
  __int64 v135; // [rsp+8h] [rbp-60h]
  __int64 v136; // [rsp+20h] [rbp-48h]

  ClpModel::ClpModel(this, 0);
  ClpSimplexProgress::ClpSimplexProgress((ClpSimplex *)((char *)this + 1408));
  v9 = *((int *)a2 + 26);
  *((_DWORD *)this + 26) = v9;
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v10 = operator new[](4 * v9);
  v11 = *((unsigned int *)this + 26);
  v12 = (_DWORD *)v10;
  if ( (int)v11 > 0 )
  {
    v13 = -(int)(v10 >> 2) & 3;
    if ( (unsigned int)(v11 - 1) <= 5 )
    {
      v19 = 0;
LABEL_11:
      v12[v19] = v19;
      if ( v19 + 1 < (int)v11 )
      {
        v12[v19 + 1] = v19 + 1;
        if ( (int)v11 > v19 + 2 )
        {
          v12[v19 + 2] = v19 + 2;
          if ( (int)v11 > v19 + 3 )
          {
            v12[v19 + 3] = v19 + 3;
            v20 = v19 + 4;
            if ( (int)v11 > v19 + 4 )
            {
              v21 = v19 + 5;
              v12[v20] = v20;
              if ( (int)v11 > v21 )
                v12[v21] = v21;
            }
          }
        }
      }
      goto LABEL_17;
    }
    v14 = 0;
    if ( (_DWORD)v13 )
    {
      *(_DWORD *)v10 = 0;
      v14 = 1;
      if ( (_DWORD)v13 != 1 )
      {
        *(_DWORD *)(v10 + 4) = 1;
        v14 = 2;
        if ( (_DWORD)v13 != 2 )
        {
          *(_DWORD *)(v10 + 8) = 2;
          v14 = 3;
        }
      }
    }
    v15 = 0;
    v16 = v11 - v13;
    v17 = (__m128i *)&v12[v13];
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v18 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v14), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v15;
      ++v17;
      v17[-1] = v18;
      v18 = _mm_add_epi32(v18, si128);
    }
    while ( v16 >> 2 > v15 );
    v19 = (v16 & 0xFFFFFFFC) + v14;
    if ( (v16 & 0xFFFFFFFC) != v16 )
      goto LABEL_11;
  }
LABEL_17:
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)this + 25) = *((_QWORD *)a2 + 25);
  v22 = *((_QWORD *)a2 + 25);
  if ( v22 )
  {
    *((_QWORD *)a2 + 25) = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *, _QWORD, const int *))(*(_QWORD *)v22 + 448LL))(
                             v22,
                             v11,
                             v12,
                             (unsigned int)a3,
                             a4);
    v11 = *((unsigned int *)this + 26);
  }
  *((_DWORD *)this + 79) &= 0xFFFF0000;
  *((_QWORD *)a2 + 24) = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, _QWORD, const int *))(**((_QWORD **)a2 + 24) + 448LL))(
                           *((_QWORD *)a2 + 24),
                           v11,
                           v12,
                           (unsigned int)a3,
                           a4);
  operator delete[](v12);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  v23 = *((_QWORD *)a2 + 156);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
  v24 = (ClpPrimalColumnSteepest *)operator new(0x70u);
  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v24, 0);
  v25 = *((_QWORD *)a2 + 165);
  *((_QWORD *)a2 + 156) = v24;
  *((_QWORD *)this + 165) = v25;
  LODWORD(v25) = *((_DWORD *)this + 26);
  v134 = v25 + a3;
  v26 = *((_DWORD *)this + 27) + (int)v25;
  if ( v26 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v27 = (_DWORD *)operator new[](4 * v26);
  v28 = *((_DWORD *)this + 27);
  v29 = v27;
  if ( v28 > 0 )
    memset(v27, 255, 4LL * (unsigned int)(v28 - 1) + 4);
  v30 = *((_DWORD *)this + 26);
  if ( v30 > 0 )
  {
    v31 = -(int)((unsigned __int64)&v29[v28] >> 2) & 3;
    v32 = v31 + 3;
    if ( (unsigned int)(v31 + 3) < 5 )
      v32 = 5;
    v33 = 0;
    if ( v32 > v30 - 1 )
      goto LABEL_35;
    if ( (_DWORD)v31 )
    {
      v33 = 1;
      v29[v28] = a3;
      if ( (_DWORD)v31 != 1 )
      {
        v29[v28 + 1] = a3 + 1;
        v33 = 2;
        if ( (_DWORD)v31 != 2 )
        {
          v29[v28 + 2] = a3 + 2;
          v33 = 3;
        }
      }
    }
    v34 = v30 - v31;
    v35 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
    v36 = (__m128i *)&v29[v28 + v31];
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v37 = (unsigned int)(v30 - v31) >> 2;
    v38 = 0;
    v39 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v33), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v38;
      ++v36;
      v36[-1] = _mm_add_epi32(v35, v39);
      v39 = _mm_add_epi32(v39, si128);
    }
    while ( v37 > v38 );
    v33 += v34 & 0xFFFFFFFC;
    if ( (v34 & 0xFFFFFFFC) != v34 )
    {
LABEL_35:
      v29[v28 + v33] = a3 + v33;
      if ( (int)(v33 + 1) < v30 )
      {
        v29[v28 + v33 + 1] = a3 + v33 + 1;
        if ( (int)(v33 + 2) < v30 )
        {
          v29[v33 + 2 + v28] = a3 + v33 + 2;
          if ( (int)(v33 + 3) < v30 )
          {
            v29[v33 + 3 + v28] = a3 + v33 + 3;
            v40 = v33 + 4;
            if ( (int)(v33 + 4) < v30 )
            {
              v41 = v33 + 5;
              v29[v40 + v28] = a3 + v40;
              if ( v41 < v30 )
                v29[v41 + v28] = a3 + v41;
            }
          }
        }
      }
    }
  }
  ClpSimplex::createRim(a2, 5, 0, 0);
  *((_QWORD *)this + 123) = *((_QWORD *)a2 + 123);
  if ( (unsigned __int64)v134 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v135 = 8LL * v134;
  v42 = operator new[](v135);
  *((_QWORD *)a2 + 123) = v42;
  v43 = *((_DWORD *)this + 26);
  v44 = *((int *)this + 27);
  v136 = 8LL * a3;
  v45 = (_QWORD *)(v42 + v136);
  v46 = *((_QWORD *)this + 123);
  v47 = (_QWORD *)(v46 + 8 * v44);
  if ( v43 && v45 != v47 )
  {
    if ( v43 >> 3 > 0 )
    {
      v48 = v42 + v136;
      v49 = (__int64 *)(v46 + 8 * v44);
      v50 = (unsigned int)((v43 >> 3) - 1);
      do
      {
        v51 = *v49;
        v49 += 8;
        v48 += 64;
        *(_QWORD *)(v48 - 64) = v51;
        *(_QWORD *)(v48 - 56) = *(v49 - 7);
        *(_QWORD *)(v48 - 48) = *(v49 - 6);
        *(_QWORD *)(v48 - 40) = *(v49 - 5);
        *(_QWORD *)(v48 - 32) = *(v49 - 4);
        *(_QWORD *)(v48 - 24) = *(v49 - 3);
        *(_QWORD *)(v48 - 16) = *(v49 - 2);
        *(_QWORD *)(v48 - 8) = *(v49 - 1);
      }
      while ( v49 != &v47[8 * v50 + 8] );
      v52 = ((int)v50 + 1LL) << 6;
      v47 = (_QWORD *)((char *)v47 + v52);
      v45 = (_QWORD *)((char *)v45 + v52);
    }
    switch ( v43 % 8 )
    {
      case 1:
        goto LABEL_55;
      case 2:
        goto LABEL_54;
      case 3:
        goto LABEL_53;
      case 4:
        goto LABEL_52;
      case 5:
        goto LABEL_51;
      case 6:
        goto LABEL_50;
      case 7:
        v45[6] = v47[6];
LABEL_50:
        v45[5] = v47[5];
LABEL_51:
        v45[4] = v47[4];
LABEL_52:
        v45[3] = v47[3];
LABEL_53:
        v45[2] = v47[2];
LABEL_54:
        v45[1] = v47[1];
LABEL_55:
        *v45 = *v47;
        break;
      default:
        break;
    }
  }
  if ( a3 <= 0 )
  {
    if ( v43 <= 0 )
      goto LABEL_136;
  }
  else
  {
    v53 = 0;
    v54 = (unsigned int)(a3 - 1);
    while ( 1 )
    {
      v55 = a4[v53];
      *(_QWORD *)(v42 + 8 * v53) = *(_QWORD *)(v46 + 8 * v55);
      v29[v55] = v53++;
      if ( v53 == v54 + 1 )
        break;
      v46 = *((_QWORD *)this + 123);
      v42 = *((_QWORD *)a2 + 123);
    }
    v43 = *((_DWORD *)this + 26);
    v56 = a3;
    if ( v43 <= 0 )
      goto LABEL_65;
  }
  v57 = 0;
  v58 = 0;
  do
  {
    ++v58;
    v59 = (int *)(v57 + *((_QWORD *)a2 + 157));
    v57 += 4;
    *v59 = v29[*v59];
    v43 = *((_DWORD *)this + 26);
  }
  while ( v43 > v58 );
  if ( a3 > 0 )
  {
    v54 = (unsigned int)(a3 - 1);
    v56 = a3;
LABEL_65:
    memcpy(v29, a4, 4 * v54 + 4);
    v60 = v56;
    goto LABEL_66;
  }
LABEL_136:
  v60 = 0;
LABEL_66:
  v61 = a3 + v43;
  if ( v61 <= v60 )
    goto LABEL_84;
  v62 = v60;
  v63 = v61 - v60;
  v64 = *((_DWORD *)this + 27) - a3;
  v65 = -(int)((unsigned __int64)&v29[v60] >> 2) & 3;
  v66 = v65 + 3;
  if ( (unsigned int)(v65 + 3) < 5 )
    v66 = 5;
  if ( v66 > v63 - 1 )
    goto LABEL_78;
  v67 = v60;
  if ( (_DWORD)v65 )
  {
    v67 = v60 + 1;
    v29[v60] = v64 + v60;
    if ( (_DWORD)v65 != 1 )
    {
      v29[v67] = v64 + v67;
      v67 = v60 + 2;
      if ( (_DWORD)v65 != 2 )
      {
        v29[v67] = v64 + v67;
        v67 = v60 + 3;
      }
    }
  }
  v68 = v63 - v65;
  v69 = (__m128i *)&v29[v60 + v65];
  v70 = 0;
  v71 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v64), 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
  v72 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v67), 0), (__m128i)xmmword_289BB0);
  do
  {
    ++v70;
    ++v69;
    v69[-1] = _mm_add_epi32(v71, v72);
    v72 = _mm_add_epi32(v72, si128);
  }
  while ( v68 >> 2 > v70 );
  v60 = (v68 & 0xFFFFFFFC) + v67;
  if ( (v68 & 0xFFFFFFFC) != v68 )
  {
    v62 = v60;
LABEL_78:
    v29[v62] = v64 + v60;
    if ( v61 > v60 + 1 )
    {
      v29[v60 + 1] = v64 + v60 + 1;
      if ( v61 > v60 + 2 )
      {
        v29[v60 + 2] = v64 + v60 + 2;
        if ( v61 > v60 + 3 )
        {
          v29[v60 + 3] = v64 + v60 + 3;
          v73 = v60 + 4;
          if ( v61 > v60 + 4 )
          {
            v74 = v60 + 5;
            v29[v73] = v64 + v73;
            if ( v61 > v74 )
              v29[v74] = v64 + v74;
          }
        }
      }
    }
  }
LABEL_84:
  *((_QWORD *)this + 19) = v29;
  *((_QWORD *)this + 126) = *((_QWORD *)a2 + 126);
  v75 = operator new[](v135);
  *((_QWORD *)a2 + 126) = v75;
  if ( v134 > 0 )
  {
    v76 = v29;
    v77 = 0;
    while ( 1 )
    {
      v78 = *v76++;
      *(_QWORD *)(v75 + v77) = *(_QWORD *)(*((_QWORD *)this + 126) + 8 * v78);
      v77 += 8;
      if ( v76 == &v29[v134 - 1 + 1] )
        break;
      v75 = *((_QWORD *)a2 + 126);
    }
  }
  *((_QWORD *)this + 129) = *((_QWORD *)a2 + 129);
  v79 = operator new[](v135);
  *((_QWORD *)a2 + 129) = v79;
  if ( v134 > 0 )
  {
    v80 = v29;
    v81 = 0;
    while ( 1 )
    {
      v82 = *v80++;
      *(_QWORD *)(v79 + v81) = *(_QWORD *)(*((_QWORD *)this + 129) + 8 * v82);
      v81 += 8;
      if ( v80 == &v29[v134 - 1 + 1] )
        break;
      v79 = *((_QWORD *)a2 + 129);
    }
  }
  *((_QWORD *)this + 147) = *((_QWORD *)a2 + 147);
  v83 = operator new[](v135);
  *((_QWORD *)a2 + 147) = v83;
  if ( v134 > 0 )
  {
    v84 = v29;
    v85 = 0;
    while ( 1 )
    {
      v86 = *v84++;
      *(_QWORD *)(v83 + v85) = *(_QWORD *)(*((_QWORD *)this + 147) + 8 * v86);
      v85 += 8;
      if ( v84 == &v29[v134 - 1 + 1] )
        break;
      v83 = *((_QWORD *)a2 + 147);
    }
  }
  *((_QWORD *)this + 150) = *((_QWORD *)a2 + 150);
  v87 = operator new[](v135);
  *((_QWORD *)a2 + 150) = v87;
  if ( v134 > 0 )
  {
    v88 = v29;
    v89 = 0;
    do
    {
      v90 = *v88++;
      *(_QWORD *)(v87 + v89) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v90);
      v89 += 8;
      v87 = *((_QWORD *)a2 + 150);
    }
    while ( v88 != &v29[v134 - 1 + 1] );
  }
  v91 = *((int *)this + 26);
  v92 = *((_QWORD *)this + 150);
  if ( v91 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v93 = (void *)operator new[](8 * v91);
  memset(v93, 0, 8LL * *((int *)this + 26));
  if ( a3 > 0 )
  {
    v94 = v29;
    do
    {
      v95 = *v94++;
      *(_QWORD *)(v92 + 8 * v95) = 0;
    }
    while ( v94 != &v29[a3 - 1 + 1] );
  }
  v96 = *((_DWORD *)this + 27);
  if ( v96 > 0 )
  {
    si128.m128i_i64[0] = 0;
    v97 = 8LL * (unsigned int)(v96 - 1) + 8;
    v98 = 0;
    do
    {
      v99 = *(double *)(v92 + v98) * *(double *)(*((_QWORD *)this + 129) + v98);
      v98 += 8;
      *(double *)si128.m128i_i64 = *(double *)si128.m128i_i64 + v99;
    }
    while ( v98 != v97 );
  }
  ClpModel::setDblParam(a2, 4);
  ClpModel::setDblParam(this, 4);
  (*(void (__fastcall **)(_QWORD, __int64, void *, _QWORD, _QWORD, double, double))(**((_QWORD **)this + 24) + 368LL))(
    *((_QWORD *)this + 24),
    v92,
    v93,
    *((_QWORD *)a2 + 28),
    *((_QWORD *)a2 + 29),
    1.0,
    *(double *)si128.m128i_i64);
  if ( *((int *)this + 26) > 0 )
  {
    v100 = 1;
    v101 = *((_QWORD *)this + 123) + v136;
    v102 = *((_QWORD *)this + 126) + v136;
    v103 = v87 + v136;
    do
    {
      while ( 1 )
      {
        v104 = *(double *)(v101 + 8 * v100 - 8);
        v105 = *((double *)v93 + v100 - 1);
        if ( v104 > -1.0e50 )
        {
          *(double *)(v101 + 8 * v100 - 8) = v104 - v105;
          v105 = *((double *)v93 + v100 - 1);
        }
        v106 = *(double *)(v102 + 8 * v100 - 8);
        if ( v106 >= 1.0e50 )
          break;
        v107 = v100;
        *(double *)(v102 + 8 * v100 - 8) = v106 - v105;
        *(double *)(v103 + 8 * v100 - 8) = *(double *)(v103 + 8 * v100 - 8) - *((double *)v93 + v100 - 1);
        ++v100;
        if ( v107 >= *((_DWORD *)this + 26) )
          goto LABEL_112;
      }
      v132 = v100;
      *(double *)(v103 + 8 * v100 - 8) = *(double *)(v103 + 8 * v100 - 8) - v105;
      ++v100;
    }
    while ( *((_DWORD *)this + 26) > v132 );
  }
LABEL_112:
  operator delete[](v93);
  v108 = *((_QWORD *)a2 + 29);
  *((_QWORD *)this + 29) = v108;
  if ( v108 )
  {
    v109 = operator new[](v135);
    *((_QWORD *)a2 + 29) = v109;
    if ( a3 > 0 )
    {
      v110 = v29;
      v111 = 0;
      while ( 1 )
      {
        v112 = *v110++;
        *(_QWORD *)(v109 + v111) = *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v112);
        v111 += 8;
        if ( &v29[a3 - 1 + 1] == v110 )
          break;
        v109 = *((_QWORD *)a2 + 29);
      }
    }
  }
  *((_QWORD *)this + 33) = *((_QWORD *)a2 + 33);
  v113 = operator new[](v134);
  *((_QWORD *)a2 + 33) = v113;
  if ( v134 > 0 )
  {
    v114 = 0;
    while ( 1 )
    {
      *(_BYTE *)(v113 + v114) = *(_BYTE *)(*((_QWORD *)this + 33) + (int)v29[v114]);
      if ( (unsigned int)(v134 - 1) + 1LL == ++v114 )
        break;
      v113 = *((_QWORD *)a2 + 33);
    }
  }
  v115 = *((_QWORD *)a2 + 159);
  *((_QWORD *)this + 159) = v115;
  if ( v115 )
  {
    v116 = operator new[](v135);
    *((_QWORD *)a2 + 159) = v116;
    if ( v134 > 0 )
    {
      v117 = v29;
      v118 = 0;
      while ( 1 )
      {
        v119 = *v117++;
        *(_QWORD *)(v116 + v118) = *(_QWORD *)(*((_QWORD *)this + 159) + 8 * v119);
        v118 += 8;
        if ( &v29[v134 - 1 + 1] == v117 )
          break;
        v116 = *((_QWORD *)a2 + 159);
      }
    }
  }
  v120 = *((_QWORD *)a2 + 164);
  *((_QWORD *)this + 164) = v120;
  if ( v120 )
  {
    v121 = operator new[](v134);
    *((_QWORD *)a2 + 164) = v121;
    if ( v134 > 0 )
    {
      v122 = 0;
      while ( 1 )
      {
        *(_BYTE *)(v121 + v122) = *(_BYTE *)(*((_QWORD *)this + 164) + (int)v29[v122]);
        if ( (unsigned int)(v134 - 1) + 1LL == ++v122 )
          break;
        v121 = *((_QWORD *)a2 + 164);
      }
    }
  }
  v123 = *((_QWORD *)a2 + 156);
  *((_DWORD *)a2 + 27) = a3;
  (*(void (__fastcall **)(__int64, ClpSimplex *, __int64))(*(_QWORD *)v123 + 16LL))(v123, a2, 2);
  v124 = (ClpNonLinearCost *)operator new(0x98u);
  ClpNonLinearCost::ClpNonLinearCost(v124, a2, 1);
  *((_QWORD *)a2 + 165) = v124;
  ClpNonLinearCost::checkInfeasibilities(v124, 0.0);
  v125 = *((int *)a2 + 27);
  v126 = *((_QWORD *)a2 + 147);
  *((_QWORD *)a2 + 149) = v126;
  v125 *= 8;
  *((_QWORD *)a2 + 148) = v125 + v126;
  v127 = *((_QWORD *)a2 + 150);
  *((_QWORD *)a2 + 152) = v127;
  *((_QWORD *)a2 + 151) = v125 + v127;
  v128 = *((_QWORD *)a2 + 129);
  *((_QWORD *)a2 + 131) = v128;
  *((_QWORD *)a2 + 130) = v125 + v128;
  v129 = *((_QWORD *)a2 + 123);
  *((_QWORD *)a2 + 125) = v129;
  v130 = v129 + v125;
  v131 = *((_QWORD *)a2 + 126);
  *((_QWORD *)a2 + 124) = v130;
  *((_QWORD *)a2 + 128) = v131;
  *((_QWORD *)a2 + 127) = v131 + v125;
}

