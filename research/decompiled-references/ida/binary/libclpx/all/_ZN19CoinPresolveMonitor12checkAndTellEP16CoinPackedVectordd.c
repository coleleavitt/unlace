void __fastcall CoinPresolveMonitor::checkAndTell(
        CoinPresolveMonitor *this,
        __int64 (__fastcall ***a2)(CoinPackedVector *this),
        double a3,
        double a4,
        double a5)
{
  __int64 i; // r12
  __int64 (__fastcall **v7)(CoinPackedVector *); // r13
  signed __int64 v8; // r14
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  double *v12; // rbx
  std::nothrow_t *v13; // rcx
  __int64 (__fastcall **v14)(CoinPackedVector *); // r11
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(CoinPackedVector *); // xmm0_8
  int v18; // esi
  unsigned __int64 v19; // rax
  double *v20; // rdi
  int v21; // eax
  double *v22; // rbp
  double *v23; // r12
  int v24; // ebx
  int v25; // r14d
  double *v26; // r13
  double *v27; // rax
  bool v28; // cc
  unsigned __int64 v29; // rax
  std::ostream *v30; // rbx
  double v31; // xmm3_8
  int v32; // r12d
  char v33; // bp
  char v34; // r14
  _BYTE *v35; // rbp
  char v36; // si
  std::ostream *v37; // rax
  __int64 v38; // rdi
  __int64 (*v39)(void); // rax
  int v40; // r12d
  __int64 (__fastcall *v41)(CoinPackedVector *); // rax
  int v42; // r13d
  unsigned __int64 v43; // rbp
  signed __int64 v44; // rbp
  char *v45; // rdi
  char *v46; // r9
  char *v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  char *v50; // r10
  int v51; // edx
  __int64 v52; // r12
  char *v53; // rcx
  _BYTE *v54; // rbp
  char v55; // si
  std::ostream *v56; // rax
  _BYTE *v57; // rbp
  char v58; // si
  std::ostream *v59; // rax
  _BYTE *v60; // rbp
  char v61; // si
  std::ostream *v62; // rax
  __int64 (__fastcall *v63)(__int64, unsigned int); // rax
  __int64 (__fastcall **v64)(CoinPackedVector *); // rcx
  int v65; // edi
  int v66; // edi
  __int64 v67; // rdx
  _DWORD *v68; // rcx
  char *v69; // rdx
  int v70; // esi
  _DWORD *v71; // r8
  char *v72; // rsi
  _DWORD *v73; // r8
  char *v74; // rsi
  _DWORD *v75; // r8
  char *v76; // rsi
  __int64 v77; // r13
  __int64 v78; // rbp
  __int64 v79; // rax
  __int64 v80; // r12
  void *v81; // rax
  char *v82; // rax
  _BYTE *v83; // rbp
  char v84; // si
  std::ostream *v85; // rax
  std::ostream *v86; // rbx
  _BYTE *v87; // rbp
  char v88; // si
  std::ostream *v89; // rax
  char *v90; // rdx
  char *v91; // rcx
  __int64 v92; // rbp
  int *v93; // r13
  char v94; // r12
  char v95; // r14
  char v96; // r12
  __int64 v97; // rax
  char v98; // si
  std::ostream *v99; // rax
  int v100; // ebp
  double *v101; // r12
  int v102; // r14d
  int v103; // r13d
  double *v104; // rax
  char *v105; // rcx
  char *v106; // rsi
  __int64 (__fastcall *v107)(__int64, unsigned int); // rax
  __int64 (__fastcall *v108)(__int64, unsigned int); // rax
  __int64 (__fastcall *v109)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v110)(__int64, unsigned int); // rax
  __int64 (__fastcall *v111)(__int64, unsigned int); // rax
  double *v112; // r14
  int v113; // esi
  double *v114; // rax
  int v115; // edi
  _DWORD *v116; // rcx
  char *v117; // rdx
  __int64 (__fastcall *v118)(__int64, unsigned int); // rax
  int v119; // esi
  char *v120; // r8
  char *v121; // rsi
  char *v122; // rdi
  char *v123; // rsi
  char *v124; // r8
  char *v125; // rdi
  char *v126; // rsi
  char *v127; // rsi
  int v128; // edi
  char *v129; // r8
  char *v130; // rdi
  char *v131; // rdi
  int v132; // ecx
  char *v133; // r8
  int v134; // r8d
  char *v135; // r9
  int v136; // edi
  char *v137; // r8
  char *v138; // r8
  _DWORD *v139; // rsi
  _DWORD *v140; // r8
  char *v141; // rsi
  char *v142; // rsi
  int v143; // r8d
  char *v144; // r8
  double v146; // [rsp+8h] [rbp-80h]
  int v147; // [rsp+8h] [rbp-80h]
  double v148; // [rsp+10h] [rbp-78h]
  __int64 v149; // [rsp+10h] [rbp-78h]
  double v150; // [rsp+10h] [rbp-78h]
  std::nothrow_t *dest; // [rsp+18h] [rbp-70h]
  void *destb; // [rsp+18h] [rbp-70h]
  char *desta; // [rsp+18h] [rbp-70h]
  void *destc; // [rsp+18h] [rbp-70h]
  __int64 (__fastcall **v155)(CoinPackedVector *); // [rsp+20h] [rbp-68h]
  __int64 v156; // [rsp+20h] [rbp-68h]
  double v157; // [rsp+20h] [rbp-68h]
  std::nothrow_t *v158; // [rsp+28h] [rbp-60h]
  std::nothrow_t *v159; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall **v160)(CoinPackedVector *); // [rsp+30h] [rbp-58h]
  void *v161; // [rsp+30h] [rbp-58h]
  void *v162; // [rsp+30h] [rbp-58h]
  char v163; // [rsp+30h] [rbp-58h]
  __int64 (__fastcall **v164)(CoinPackedVector *); // [rsp+30h] [rbp-58h]
  void *src; // [rsp+38h] [rbp-50h]
  char *srca; // [rsp+38h] [rbp-50h]
  void *srcb; // [rsp+38h] [rbp-50h]
  void *srcc; // [rsp+38h] [rbp-50h]
  double *v169; // [rsp+40h] [rbp-48h]

  v146 = a3;
  v148 = a4;
  i = 4LL * *((int *)a2 + 12);
  if ( (unsigned __int64)(i >> 2) > 1 )
  {
    v7 = a2[4];
    v8 = 2 * (i >> 2);
    v155 = a2[5];
    dest = (std::nothrow_t *)a2[7];
    v9 = operator new(v8 * 8);
    v12 = (double *)v9;
    v13 = dest;
    v14 = v155;
    if ( v7 != (__int64 (__fastcall **)(CoinPackedVector *))((char *)v7 + i) )
    {
      v15 = v9;
      v16 = 0;
      do
      {
        ++v16;
        if ( v15 )
        {
          v17 = v155[v16 - 1];
          *(_DWORD *)v15 = *((_DWORD *)v7 + v16 - 1);
          v18 = *((_DWORD *)dest + v16 - 1);
          *(_QWORD *)(v15 + 8) = v17;
          *(_DWORD *)(v15 + 4) = v18;
        }
        v15 += 16;
      }
      while ( v16 != ((unsigned __int64)(i - 4) >> 2) + 1 );
    }
    if ( v12 != &v12[v8] )
    {
      v158 = dest;
      _BitScanReverse64(&v19, (v8 * 8) >> 4);
      std::__introsort_loop<CoinTriple<int,int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
        (int)v12,
        (_DWORD)v12 + v8 * 8,
        2 * (63 - (v19 ^ 0x3F)),
        (int)dest,
        v10,
        v11,
        0);
      v20 = v12 + 2;
      v14 = v155;
      v13 = dest;
      if ( v8 > 32 )
      {
        srcb = (void *)i;
        v164 = v7;
        v169 = &v12[v8];
        v101 = v12 + 2;
        do
        {
          v102 = *(_DWORD *)v101;
          v103 = *((_DWORD *)v101 + 1);
          a4 = v101[1];
          if ( *(_DWORD *)v101 < *(_DWORD *)v12 )
          {
            if ( (char *)v101 - (char *)v12 > 0 )
            {
              destc = *((void **)v101 + 1);
              memmove(v12 + 2, v12, (char *)v101 - (char *)v12);
              a4 = *(double *)&destc;
            }
            v12[1] = a4;
            *(_DWORD *)v12 = v102;
            *((_DWORD *)v12 + 1) = v103;
          }
          else
          {
            v104 = v101 - 2;
            if ( v102 < *((_DWORD *)v101 - 4) )
            {
              while ( 1 )
              {
                v28 = v102 < *((_DWORD *)v104 - 4);
                *((__m128i *)v104 + 1) = _mm_loadu_si128((const __m128i *)v104);
                if ( !v28 )
                  break;
                v104 -= 2;
              }
            }
            else
            {
              v104 = v101;
            }
            v104[1] = a4;
            *(_DWORD *)v104 = v102;
            *((_DWORD *)v104 + 1) = v103;
          }
          v101 += 2;
        }
        while ( v12 + 32 != v101 );
        v112 = v12 + 32;
        v14 = v155;
        v13 = v158;
        v7 = v164;
        for ( i = (__int64)srcb; v169 != v112; *((_DWORD *)v114 + 1) = v115 )
        {
          v113 = *(_DWORD *)v112;
          v114 = v112 - 2;
          v115 = *((_DWORD *)v112 + 1);
          a4 = v112[1];
          if ( *((_DWORD *)v112 - 4) > *(_DWORD *)v112 )
          {
            while ( 1 )
            {
              v28 = v113 < *((_DWORD *)v114 - 4);
              *((__m128i *)v114 + 1) = _mm_loadu_si128((const __m128i *)v114);
              if ( !v28 )
                break;
              v114 -= 2;
            }
          }
          else
          {
            v114 = v112;
          }
          v112 += 2;
          v114[1] = a4;
          *(_DWORD *)v114 = v113;
        }
      }
      else
      {
        v21 = *(_DWORD *)v12;
        if ( &v12[v8] != v20 )
        {
          src = (void *)i;
          v22 = v12;
          v160 = v7;
          v23 = &v12[v8];
          do
          {
            v24 = *(_DWORD *)v20;
            v25 = *((_DWORD *)v20 + 1);
            v26 = v20 + 2;
            a4 = v20[1];
            if ( *(_DWORD *)v20 < v21 )
            {
              if ( (char *)v20 - (char *)v22 > 0 )
              {
                destb = *((void **)v20 + 1);
                memmove(v22 + 2, v22, (char *)v20 - (char *)v22);
                a4 = *(double *)&destb;
              }
              v22[1] = a4;
              *(_DWORD *)v22 = v24;
              *((_DWORD *)v22 + 1) = v25;
              v21 = v24;
            }
            else
            {
              v27 = v20 - 2;
              if ( v24 < *((_DWORD *)v20 - 4) )
              {
                while ( 1 )
                {
                  v28 = v24 < *((_DWORD *)v27 - 4);
                  *((__m128i *)v27 + 1) = _mm_loadu_si128((const __m128i *)v27);
                  if ( !v28 )
                    break;
                  v27 -= 2;
                }
              }
              else
              {
                v27 = v20;
              }
              v27[1] = a4;
              *(_DWORD *)v27 = v24;
              *((_DWORD *)v27 + 1) = v25;
              v21 = *(_DWORD *)v22;
            }
            v20 += 2;
          }
          while ( v23 != v26 );
          v14 = v155;
          v13 = v158;
          v12 = v22;
          v7 = v160;
          i = (__int64)src;
        }
      }
    }
    v29 = 0;
    do
    {
      a3 = v12[v29 / 2 + 1];
      *(_DWORD *)((char *)v7 + v29) = LODWORD(v12[v29 / 2]);
      *(_DWORD *)((char *)v13 + v29) = HIDWORD(v12[v29 / 2]);
      *(double *)&v14[v29 / 4] = a3;
      v29 += 4LL;
    }
    while ( i != v29 );
    operator delete(v12);
  }
  v30 = (std::ostream *)&std::cout;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v31 = v146;
  if ( v146 == *((double *)this + 2) )
  {
    v32 = 1;
    v33 = 1;
    v147 = 0;
  }
  else
  {
    v60 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !v60 )
      goto LABEL_204;
    if ( v60[56] )
    {
      v61 = v60[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v61 = 10;
      v111 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v60 + 48LL);
      if ( v111 != std::ctype<char>::do_widen )
        v61 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double))v111)(
                v60,
                10,
                a3,
                a4,
                a5,
                v146);
    }
    v32 = 2;
    v62 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v61);
    std::ostream::flush(v62);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    a3 = v146;
    v33 = 0;
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v147 = 1;
  }
  if ( v148 == *((double *)this + 3) )
  {
    v34 = CoinPackedVectorBase::operator==(*((_QWORD *)this + 1), a2, a3, a4, a5, v31);
    if ( v34 == 1 )
      goto LABEL_34;
    if ( v33 )
    {
LABEL_30:
      std::__ostream_insert<char,std::char_traits<char>>();
      v35 = *(_BYTE **)((char *)v30 + *(_QWORD *)(*(_QWORD *)v30 - 24LL) + 240);
      if ( v35 )
      {
        if ( v35[56] )
        {
          v36 = v35[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v36 = 10;
          v63 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v35 + 48LL);
          if ( v63 != std::ctype<char>::do_widen )
            v36 = v63((__int64)v35, 10u);
        }
        v37 = (std::ostream *)std::ostream::put(v30, v36);
        std::ostream::flush(v37);
        return;
      }
LABEL_204:
      std::__throw_bad_cast();
    }
  }
  else
  {
    v54 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !v54 )
      goto LABEL_204;
    if ( v54[56] )
    {
      v55 = v54[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v55 = 10;
      v110 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v54 + 48LL);
      if ( v110 != std::ctype<char>::do_widen )
        v55 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double))v110)(v54, 10, a3, a4, a5, v31);
    }
    v56 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v55);
    std::ostream::flush(v56);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    a3 = v148;
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v147 = v32;
    v34 = CoinPackedVectorBase::operator==(*((_QWORD *)this + 1), a2, v148, a4, a5, v31);
  }
  if ( !v34 )
  {
    v57 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
    if ( !v57 )
      goto LABEL_204;
    if ( v57[56] )
    {
      v58 = v57[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v58 = 10;
      v107 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v57 + 48LL);
      if ( v107 != std::ctype<char>::do_widen )
        v58 = v107((__int64)v57, 10u);
    }
    v59 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v58);
    v30 = (std::ostream *)std::ostream::flush(v59);
    goto LABEL_30;
  }
LABEL_34:
  v38 = *((_QWORD *)this + 1);
  v39 = **(__int64 (***)(void))v38;
  if ( (char *)v39 == (char *)CoinPackedVector::getNumElements )
    v40 = *(_DWORD *)(v38 + 48);
  else
    v40 = v39();
  v41 = **a2;
  if ( v41 == CoinPackedVector::getNumElements )
    v42 = *((_DWORD *)a2 + 12);
  else
    v42 = v41((CoinPackedVector *)a2);
  v43 = v40 + v42;
  if ( v43 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v44 = 4 * v43;
  v45 = (char *)operator new[](v44);
  desta = v45;
  v47 = *(char **)(*((_QWORD *)this + 1) + 32LL);
  v48 = 4LL * v40;
  if ( !v40 || v45 == v47 )
  {
    v50 = &v45[v48];
  }
  else
  {
    v49 = v40 + 14;
    v50 = &v45[v48];
    if ( v40 + 7 >= 0 )
      v49 = v40 + 7;
    v51 = v49 >> 3;
    v52 = (unsigned int)(v40 % 8);
    if ( v45 <= v47 )
    {
      v105 = v47 - 4;
      v106 = v45 - 4;
      switch ( v52 )
      {
        case 0LL:
          goto LABEL_167;
        case 1LL:
          v45 -= 4;
          v106 = desta;
          goto LABEL_165;
        case 2LL:
          v133 = v105;
          goto LABEL_164;
        case 3LL:
          v46 = v45 - 4;
          v131 = v105;
          v106 = desta;
          goto LABEL_163;
        case 4LL:
          v46 = v45;
          goto LABEL_162;
        case 5LL:
          v106 = v45;
          v105 += 4;
          v46 = v45 + 4;
          *(_DWORD *)v45 = *(_DWORD *)v105;
          goto LABEL_162;
        case 6LL:
          v137 = v45;
          goto LABEL_169;
        case 7LL:
          v135 = v45;
          while ( 1 )
          {
            v136 = *((_DWORD *)v105 + 1);
            v137 = v135 + 4;
            v105 += 4;
            *((_DWORD *)v106 + 1) = v136;
            v106 = v135;
LABEL_169:
            *((_DWORD *)v106 + 1) = *((_DWORD *)v105 + 1);
            v105 += 8;
            v106 = v137 + 4;
            *((_DWORD *)v137 + 1) = *(_DWORD *)v105;
            v46 = v137 + 8;
LABEL_162:
            v131 = v105 + 4;
            *((_DWORD *)v106 + 1) = *((_DWORD *)v105 + 1);
            v106 = v46 + 4;
LABEL_163:
            v132 = *((_DWORD *)v131 + 1);
            v133 = v131 + 4;
            v45 = v106 + 4;
            *((_DWORD *)v46 + 1) = v132;
LABEL_164:
            v105 = v133 + 4;
            *((_DWORD *)v106 + 1) = *((_DWORD *)v133 + 1);
            v106 = v45 + 4;
LABEL_165:
            --v51;
            *((_DWORD *)v45 + 1) = *((_DWORD *)v105 + 1);
            if ( v51 <= 0 )
              break;
            v45 = v106 + 4;
            v105 += 4;
LABEL_167:
            v134 = *((_DWORD *)v105 + 1);
            v135 = v45 + 4;
            v105 += 4;
            *((_DWORD *)v106 + 1) = v134;
            v106 = v45;
          }
          break;
        default:
          break;
      }
    }
    else
    {
      v53 = &v47[v48];
      switch ( v52 )
      {
        case 0LL:
          v127 = &v45[v48];
          goto LABEL_159;
        case 1LL:
          v126 = &v45[v48];
          goto LABEL_157;
        case 2LL:
          v125 = &v45[v48];
          v124 = v53;
          goto LABEL_156;
        case 3LL:
          v123 = &v45[v48];
          v46 = v53;
          goto LABEL_155;
        case 4LL:
          v122 = &v45[v48];
          goto LABEL_154;
        case 5LL:
          v121 = &v45[v48];
          v120 = v53;
          goto LABEL_153;
        case 6LL:
          v120 = v53 - 4;
          v121 = v50 - 4;
          *((_DWORD *)v50 - 1) = *((_DWORD *)v53 - 1);
          goto LABEL_153;
        case 7LL:
          v129 = &v45[v48];
          while ( 1 )
          {
            v130 = v129 - 4;
            *((_DWORD *)v129 - 1) = *((_DWORD *)v53 - 1);
            v120 = v53 - 8;
            v121 = v130 - 4;
            *((_DWORD *)v130 - 1) = *((_DWORD *)v53 - 2);
LABEL_153:
            v53 = v120 - 4;
            v122 = v121 - 4;
            *((_DWORD *)v121 - 1) = *((_DWORD *)v120 - 1);
LABEL_154:
            v46 = v53 - 4;
            v123 = v122 - 4;
            *((_DWORD *)v122 - 1) = *((_DWORD *)v53 - 1);
LABEL_155:
            v124 = v46 - 4;
            v125 = v123 - 4;
            *((_DWORD *)v123 - 1) = *((_DWORD *)v46 - 1);
LABEL_156:
            v53 = v124 - 4;
            v126 = v125 - 4;
            *((_DWORD *)v125 - 1) = *((_DWORD *)v124 - 1);
LABEL_157:
            --v51;
            *((_DWORD *)v126 - 1) = *((_DWORD *)v53 - 1);
            if ( v51 <= 0 )
              break;
            v53 -= 4;
            v127 = v126 - 4;
LABEL_159:
            v128 = *((_DWORD *)v53 - 1);
            v129 = v127 - 4;
            v53 -= 4;
            *((_DWORD *)v127 - 1) = v128;
          }
          break;
        default:
          break;
      }
    }
  }
  v64 = a2[4];
  if ( v42 && v64 != (__int64 (__fastcall **)(CoinPackedVector *))v50 )
  {
    v65 = v42 + 14;
    if ( v42 + 7 >= 0 )
      v65 = v42 + 7;
    v66 = v65 >> 3;
    if ( v64 >= (__int64 (__fastcall **)(CoinPackedVector *))v50 )
    {
      v116 = (_DWORD *)v64 - 1;
      v117 = v50 - 4;
      switch ( v42 % 8 )
      {
        case 0:
          v142 = v50;
          goto LABEL_191;
        case 1:
          v141 = v50 - 4;
          v117 = v50;
          goto LABEL_189;
        case 2:
          v141 = v50;
          v46 = v50 - 4;
          v140 = v116;
          goto LABEL_188;
        case 3:
          v46 = v50;
          goto LABEL_187;
        case 4:
          v138 = v50 - 4;
          v139 = v116;
          v117 = v50;
          goto LABEL_186;
        case 5:
          v138 = v50;
          goto LABEL_185;
        case 6:
          v117 = v50;
          *(_DWORD *)v50 = *++v116;
          v138 = v50 + 4;
          goto LABEL_185;
        case 7:
          v144 = v50;
          while ( 1 )
          {
            *((_DWORD *)v117 + 1) = v116[1];
            v116 += 2;
            v117 = v144 + 4;
            *((_DWORD *)v144 + 1) = *v116;
            v138 = v144 + 8;
LABEL_185:
            v139 = v116 + 1;
            *((_DWORD *)v117 + 1) = v116[1];
            v117 = v138 + 4;
LABEL_186:
            v116 = v139 + 1;
            v46 = v117 + 4;
            *((_DWORD *)v138 + 1) = v139[1];
LABEL_187:
            v140 = v116 + 1;
            v141 = v46 + 4;
            *((_DWORD *)v117 + 1) = v116[1];
LABEL_188:
            v116 = v140 + 1;
            *((_DWORD *)v46 + 1) = v140[1];
            v117 = v141 + 4;
LABEL_189:
            --v66;
            *((_DWORD *)v141 + 1) = v116[1];
            if ( v66 <= 0 )
              break;
            v142 = v117 + 4;
            ++v116;
LABEL_191:
            v143 = v116[1];
            ++v116;
            *((_DWORD *)v117 + 1) = v143;
            v144 = v142 + 4;
            v117 = v142;
          }
          break;
        default:
          break;
      }
    }
    else
    {
      v67 = 4LL * v42;
      v68 = (_DWORD *)((char *)v64 + v67);
      v69 = &v50[v67];
      switch ( v42 % 8 )
      {
        case 0:
          goto LABEL_68;
        case 1:
          goto LABEL_75;
        case 2:
          v76 = v69;
          v75 = v68;
          goto LABEL_74;
        case 3:
          goto LABEL_73;
        case 4:
          v74 = v69;
          v73 = v68;
          goto LABEL_72;
        case 5:
          goto LABEL_71;
        case 6:
          v72 = v69;
          v71 = v68;
          goto LABEL_70;
        case 7:
          while ( 1 )
          {
            v71 = v68 - 1;
            v72 = v69 - 4;
            *((_DWORD *)v69 - 1) = *(v68 - 1);
LABEL_70:
            v68 = v71 - 1;
            v69 = v72 - 4;
            *((_DWORD *)v72 - 1) = *(v71 - 1);
LABEL_71:
            v73 = v68 - 1;
            v74 = v69 - 4;
            *((_DWORD *)v69 - 1) = *(v68 - 1);
LABEL_72:
            v68 = v73 - 1;
            v69 = v74 - 4;
            *((_DWORD *)v74 - 1) = *(v73 - 1);
LABEL_73:
            v75 = v68 - 1;
            v76 = v69 - 4;
            *((_DWORD *)v69 - 1) = *(v68 - 1);
LABEL_74:
            v68 = v75 - 1;
            v69 = v76 - 4;
            *((_DWORD *)v76 - 1) = *(v75 - 1);
LABEL_75:
            --v66;
            *((_DWORD *)v69 - 1) = *(v68 - 1);
            if ( v66 <= 0 )
              break;
            --v68;
            v69 -= 4;
LABEL_68:
            v70 = *(v68 - 1);
            v69 -= 4;
            --v68;
            *(_DWORD *)v69 = v70;
          }
          break;
        default:
          break;
      }
    }
  }
  v77 = (__int64)&desta[v44];
  if ( desta != v50 && (char *)v77 != v50 )
  {
    v149 = v48 >> 2;
    v156 = (v44 - v48) >> 2;
    if ( v44 )
    {
      v161 = (void *)v44;
      srca = v50;
      v78 = v44 >> 2;
      do
      {
        v79 = operator new(4 * v78, (const std::nothrow_t *)&std::nothrow);
        if ( v79 )
        {
          v80 = v78;
          v44 = (signed __int64)v161;
          v162 = (void *)v79;
          std::__merge_adaptive<int *,long,int *,__gnu_cxx::__ops::_Iter_less_iter>(
            desta,
            srca,
            v77,
            v149,
            v156,
            v79,
            v80,
            0);
          v81 = v162;
          goto LABEL_83;
        }
        v78 >>= 1;
      }
      while ( v78 );
      v44 = (signed __int64)v161;
      LODWORD(v50) = (_DWORD)srca;
    }
    std::__merge_without_buffer<int *,long,__gnu_cxx::__ops::_Iter_less_iter>(
      (int)desta,
      (int)v50,
      v77,
      v149,
      v156,
      (int)v46,
      0);
    v81 = nullptr;
LABEL_83:
    operator delete(v81, (const std::nothrow_t *)&std::nothrow);
  }
  v82 = desta;
  if ( (char *)v77 != desta )
  {
    do
    {
      v90 = v82;
      v82 += 4;
      v91 = v82;
      if ( (char *)v77 == v82 )
        goto LABEL_94;
    }
    while ( *((_DWORD *)v82 - 1) != *((_DWORD *)v90 + 1) );
    if ( (char *)v77 != v90 )
    {
      while ( 1 )
      {
        v91 += 4;
        if ( (char *)v77 == v91 )
          break;
        while ( 1 )
        {
          v119 = *(_DWORD *)v91;
          if ( *(_DWORD *)v90 == *(_DWORD *)v91 )
            break;
          v91 += 4;
          *((_DWORD *)v90 + 1) = v119;
          v90 = v82;
          v82 += 4;
          if ( (char *)v77 == v91 )
            goto LABEL_151;
        }
      }
LABEL_151:
      v44 = v82 - desta;
LABEL_94:
      v92 = v44 >> 2;
      goto LABEL_95;
    }
    v92 = (v77 - (__int64)desta) >> 2;
LABEL_95:
    if ( (int)v92 > 0 )
    {
      v163 = v34;
      v93 = (int *)desta;
      v159 = (std::nothrow_t *)&desta[4 * (unsigned int)(v92 - 1) + 4];
      do
      {
        v100 = *v93;
        if ( (int)CoinPackedVectorBase::findIndex(*((CoinPackedVectorBase **)this + 1), *v93) < 0 )
        {
          v94 = v163;
          v95 = 0;
          v150 = 0.0;
          if ( (int)CoinPackedVectorBase::findIndex((CoinPackedVectorBase *)a2, v100) < 0 )
            goto LABEL_98;
        }
        else
        {
          v94 = 0;
          CoinPackedVectorBase::operator[](*((CoinPackedVectorBase **)this + 1), v100);
          v150 = a3;
          v95 = v163;
          if ( (int)CoinPackedVectorBase::findIndex((CoinPackedVectorBase *)a2, v100) < 0 )
          {
LABEL_98:
            v96 = 0;
            v157 = 0.0;
LABEL_99:
            ++v147;
            v97 = *(_QWORD *)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
            if ( !v97 )
              goto LABEL_204;
            if ( *(_BYTE *)(v97 + 56) )
            {
              v98 = *(_BYTE *)(v97 + 67);
            }
            else
            {
              srcc = *(void **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
              std::ctype<char>::_M_widen_init();
              v98 = 10;
              v109 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)srcc + 48LL);
              if ( v109 != std::ctype<char>::do_widen )
                v98 = v109((__int64)srcc, 10u);
            }
            v99 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v98);
            std::ostream::flush(v99);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v95 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v96 )
              {
                std::ostream::_M_insert<double>();
                std::__ostream_insert<char,std::char_traits<char>>();
                a3 = v157;
              }
              else
              {
                a3 = v150;
              }
              std::ostream::_M_insert<double>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              a3 = v157;
              std::ostream::_M_insert<double>();
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            goto LABEL_106;
          }
        }
        CoinPackedVectorBase::operator[]((CoinPackedVectorBase *)a2, v100);
        v157 = a3;
        v96 = (v150 != a3) | v94;
        if ( v96 )
          goto LABEL_99;
LABEL_106:
        ++v93;
      }
      while ( v159 != (std::nothrow_t *)v93 );
    }
  }
  v83 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
  if ( !v83 )
    goto LABEL_204;
  if ( v83[56] )
  {
    v84 = v83[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v84 = 10;
    v108 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v83 + 48LL);
    if ( v108 != std::ctype<char>::do_widen )
      v84 = v108((__int64)v83, 10u);
  }
  v85 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v84);
  std::ostream::flush(v85);
  std::__ostream_insert<char,std::char_traits<char>>();
  v86 = (std::ostream *)std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v87 = *(_BYTE **)((char *)v86 + *(_QWORD *)(*(_QWORD *)v86 - 24LL) + 240);
  if ( !v87 )
    goto LABEL_204;
  if ( v87[56] )
  {
    v88 = v87[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v88 = 10;
    v118 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v87 + 48LL);
    if ( v118 != std::ctype<char>::do_widen )
      v88 = v118((__int64)v87, 10u);
  }
  v89 = (std::ostream *)std::ostream::put(v86, v88);
  std::ostream::flush(v89);
  operator delete[](desta);
}

