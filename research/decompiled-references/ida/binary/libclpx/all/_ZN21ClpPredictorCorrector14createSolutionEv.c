__int64 __fastcall ClpPredictorCorrector::createSolution(ClpPredictorCorrector *this)
{
  int v2; // ebp
  const void *v3; // rdi
  _QWORD *v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // rdx
  double v7; // xmm1_8
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  char v10; // al
  const double *v11; // rdi
  double v12; // xmm1_8
  double v13; // xmm0_8
  double v14; // xmm3_8
  double v15; // xmm3_8
  double v16; // xmm0_8
  double *v17; // rdx
  int v18; // edx
  double v19; // xmm0_8
  __int64 v20; // rax
  double v21; // xmm3_8
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // rsi
  __int64 v28; // r10
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdx
  double *v32; // rax
  __int64 v33; // rdx
  double v34; // xmm0_8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // xmm0_8
  _BYTE *v38; // rcx
  double v39; // xmm0_8
  double v40; // xmm1_8
  unsigned __int64 v41; // rdi
  void *v42; // r13
  __int64 result; // rax
  __int64 v44; // rdi
  __int64 v45; // r13
  double v46; // xmm1_8
  __int64 v47; // rax
  CoinMessageHandler *v48; // rdi
  CoinMessageHandler *v49; // rax
  CoinMessageHandler *v50; // rax
  double v51; // xmm0_8
  __int64 v52; // rax
  __int64 v53; // rax
  double v54; // xmm4_8
  double v55; // xmm6_8
  double v56; // xmm10_8
  const double *v57; // rdi
  double v58; // xmm11_8
  __int64 v59; // rsi
  __int64 v60; // rax
  char v61; // dl
  double v62; // xmm0_8
  char v63; // r8
  double v64; // xmm3_8
  __int64 v65; // rcx
  __int64 v66; // xmm0_8
  __int64 v67; // rcx
  __int64 v68; // rdx
  double v69; // xmm8_8
  _QWORD *v70; // rax
  __int64 v71; // r13
  __int64 v72; // r14
  __int64 v73; // r15
  double v74; // xmm12_8
  __int64 v75; // rdx
  __int64 v76; // rax
  char v77; // cl
  __int64 v78; // rdi
  double v79; // xmm6_8
  double v80; // xmm5_8
  double v81; // xmm7_8
  double v82; // xmm0_8
  __int64 v83; // r12
  double v84; // xmm12_8
  char v85; // al
  __int64 v86; // r13
  double v87; // xmm0_8
  double v88; // xmm3_8
  double v89; // xmm5_8
  char v90; // dl
  double v91; // xmm4_8
  double v92; // xmm3_8
  double v93; // xmm6_8
  double v94; // xmm9_8
  double v95; // xmm7_8
  double v96; // xmm4_8
  double v97; // xmm0_8
  double v98; // xmm9_8
  double *v99; // rax
  double *v100; // rdx
  double v101; // xmm7_8
  double v102; // xmm4_8
  __int64 v103; // rdx
  double v104; // xmm9_8
  double v105; // xmm6_8
  double v106; // xmm4_8
  double v107; // xmm6_8
  double v108; // xmm7_8
  double *v109; // rax
  __int64 v110; // rax
  double v111; // xmm0_8
  double v112; // xmm0_8
  char *v113; // rcx
  char v114; // dl
  double v115; // xmm3_8
  double v116; // xmm0_8
  double v117; // xmm3_8
  double *v118; // rax
  double v119; // xmm7_8
  _QWORD *v120; // rdx
  __int64 v121; // rdx
  double v122; // xmm0_8
  __int64 v123; // rdx
  int v124; // ecx
  __int64 v125; // r10
  __int64 v126; // r11
  __int64 v127; // rdx
  double v128; // xmm3_8
  double v129; // xmm3_8
  int v130; // ecx
  __int64 v131; // rdx
  double *v132; // rdi
  double v133; // xmm4_8
  __int64 v134; // r13
  __int64 v135; // r15
  __int64 v136; // rax
  int v137; // ecx
  __int64 v138; // rdx
  double v139; // xmm4_8
  __int64 v140; // r10
  __int64 v141; // r11
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // r10
  double v145; // xmm0_8
  _BYTE *v146; // r15
  char v147; // si
  std::ostream *v148; // rax
  double v149; // xmm13_8
  _QWORD *v150; // rax
  _QWORD *v151; // rax
  __int64 (__fastcall *v152)(__int64, unsigned int); // rax
  __int64 v153; // [rsp+10h] [rbp-D8h]
  double v154; // [rsp+18h] [rbp-D0h]
  double v155; // [rsp+20h] [rbp-C8h]
  double v156; // [rsp+20h] [rbp-C8h]
  double v157; // [rsp+28h] [rbp-C0h]
  double v158; // [rsp+30h] [rbp-B8h]
  double v159; // [rsp+40h] [rbp-A8h]
  double v160; // [rsp+A0h] [rbp-48h] BYREF
  double x[8]; // [rsp+A8h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v3 = *((const void **)this + 20);
  if ( v3
    && (v4 = __dynamic_cast(
               v3,
               (const struct __class_type_info *)&`typeinfo for'ClpObjective,
               (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
               0)) != nullptr )
  {
    if ( v2 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = (_BYTE *)(v5 + *((_QWORD *)this + 33));
        ++v5;
        *v6 &= ~1u;
      }
      while ( (unsigned int)(v2 - 1) + 1LL != v5 );
    }
  }
  else
  {
    if ( v2 > 0 )
    {
      v7 = *((double *)this + 4);
      v8 = 0;
      do
      {
        v9 = (_BYTE *)(v8 + *((_QWORD *)this + 33));
        v10 = *v9 | 1;
        if ( *(double *)(*((_QWORD *)this + 97) + 8 * v8) - *(double *)(*((_QWORD *)this + 94) + 8 * v8) > v7 )
          v10 = *v9 & 0xFE;
        ++v8;
        *v9 = v10;
      }
      while ( (unsigned int)(v2 - 1) + 1LL != v8 );
    }
    v4 = nullptr;
  }
  v11 = *((const double **)this + 100);
  v160 = 0.0;
  x[0] = 0.0;
  getNorms(v11, v2, &v160, x);
  v12 = v160;
  if ( v160 == 0.0 )
  {
    v13 = x[0];
    v14 = sqrt(x[0]);
    v160 = 1.0;
    if ( x[0] >= 0.0 )
    {
      v16 = 1.0;
      *((_QWORD *)this + 108) = 0x3FF0000000000000LL;
      v12 = 1.0;
      x[0] = v14 / (double)v2;
      *((_QWORD *)this + 125) = 0x3FF0000000000000LL;
      goto LABEL_19;
    }
    goto LABEL_63;
  }
  v13 = x[0];
  v14 = sqrt(x[0]);
  if ( x[0] < 0.0 )
  {
LABEL_63:
    sqrt(v13);
    v12 = v160;
  }
  *((double *)this + 108) = v12;
  *((_QWORD *)this + 125) = 0x3FF0000000000000LL;
  v15 = v14 / (double)v2;
  v16 = 1.0;
  x[0] = v15;
  if ( v12 <= 0.0 )
    goto LABEL_19;
  if ( v12 < 1.0 )
  {
    *((double *)this + 125) = v12;
LABEL_18:
    v17 = *((double **)this + 100);
    x[0] = v15 * v12;
    multiplyAdd(nullptr, v2, 0.0, v17, 1.0 / v12);
    v16 = *((double *)this + 125);
    v12 = v160 / v16;
    *((double *)this + 108) = v160 / v16;
    goto LABEL_19;
  }
  if ( v12 <= 10000.0 )
  {
    v16 = 1.0;
  }
  else
  {
    v16 = v12 / 10000.0;
    *((double *)this + 125) = v12 / 10000.0;
    if ( v12 / 10000.0 != 1.0 )
    {
      v12 = v12 / 10000.0;
      goto LABEL_18;
    }
  }
LABEL_19:
  if ( !v4 )
    goto LABEL_35;
  v18 = *((_DWORD *)this + 64);
  v19 = v16 * *(double *)this * *((double *)this + 11) * *((double *)this + 12);
  if ( v18 > 0 && *((_QWORD *)this + 28) )
  {
    v20 = v4[3];
    v21 = 1.0 / v19;
    v22 = *(_QWORD *)(v20 + 40);
    v23 = *(_QWORD *)(v20 + 48);
    v24 = *(_QWORD *)(v20 + 56);
    v25 = *(_QWORD *)(v20 + 32);
    v26 = *(_DWORD *)(v20 + 64);
    if ( *(_BYTE *)(v20 + 8) )
      goto LABEL_150;
    goto LABEL_23;
  }
  if ( v19 == 1.0 )
    goto LABEL_35;
  v20 = v4[3];
  v21 = 1.0 / v19;
  v22 = *(_QWORD *)(v20 + 40);
  v23 = *(_QWORD *)(v20 + 48);
  v24 = *(_QWORD *)(v20 + 56);
  v25 = *(_QWORD *)(v20 + 32);
  v26 = *(_DWORD *)(v20 + 64);
  if ( !*(_BYTE *)(v20 + 8) )
LABEL_23:
    v26 = *(_DWORD *)(v20 + 68);
  if ( v18 > 0 && *((_QWORD *)this + 28) )
  {
LABEL_150:
    if ( v26 > 0 )
    {
      v134 = 0;
      v135 = 4LL * (unsigned int)(v26 - 1) + 4;
      do
      {
        v136 = *(int *)(v23 + v134);
        v137 = *(_DWORD *)(v24 + v134);
        v138 = *((_QWORD *)this + 29);
        v139 = *(double *)(v138 + 2 * v134) * v21;
        if ( (int)v136 < (int)v136 + v137 )
        {
          v140 = (unsigned int)(v137 - 1);
          v141 = v22 + 4 * v136;
          v142 = v25 + 8 * v136;
          v143 = 0;
          v144 = v140 + 1;
          while ( 1 )
          {
            v145 = *(double *)(v138 + 8LL * *(int *)(v141 + 4 * v143)) * v139 * *(double *)(v142 + 8 * v143);
            *(double *)(v142 + 8 * v143) = v145;
            if ( v145 < 0.0 )
              v145 = -v145;
            if ( *((double *)this + 108) <= v145 )
            {
              ++v143;
              *((double *)this + 108) = v145;
              if ( v143 == v144 )
                break;
            }
            else if ( v144 == ++v143 )
            {
              break;
            }
            v138 = *((_QWORD *)this + 29);
          }
        }
        v134 += 4;
      }
      while ( v135 != v134 );
      v12 = *((double *)this + 108);
    }
    goto LABEL_35;
  }
  if ( v26 > 0 )
  {
    v27 = 0;
    v28 = 4LL * (unsigned int)(v26 - 1) + 4;
    do
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)(v23 + v27);
        v30 = *(_DWORD *)(v24 + v27);
        if ( v29 < v29 + v30 )
          break;
LABEL_33:
        v27 += 4;
        if ( v28 == v27 )
          goto LABEL_34;
      }
      v31 = v29;
      v32 = (double *)(v25 + 8LL * v29);
      v33 = v25 + 8 + 8 * ((unsigned int)(v30 - 1) + v31);
      do
      {
        while ( 1 )
        {
          v34 = *v32 * v21;
          *v32 = v34;
          if ( v34 < 0.0 )
            v34 = -v34;
          if ( *((double *)this + 108) > v34 )
            break;
          ++v32;
          *((double *)this + 108) = v34;
          if ( v32 == (double *)v33 )
            goto LABEL_33;
        }
        ++v32;
      }
      while ( (double *)v33 != v32 );
      v27 += 4;
    }
    while ( v28 != v27 );
LABEL_34:
    v12 = *((double *)this + 108);
  }
LABEL_35:
  *((double *)this + 135) = v12;
  if ( v2 > 0 )
  {
    v35 = 0;
    v36 = *((_QWORD *)this + 143);
    do
    {
      v37 = *(_QWORD *)(v36 + 8 * v35);
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~2u;
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~4u;
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~8u;
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~0x10u;
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~0x20u;
      *(_BYTE *)(v35 + *((_QWORD *)this + 33)) &= ~0x40u;
      v38 = (_BYTE *)(v35 + *((_QWORD *)this + 33));
      if ( (*v38 & 1) != 0 )
      {
        *v38 |= 2u;
        *(_BYTE *)(v35 + *((_QWORD *)this + 33)) |= 4u;
        *(_BYTE *)(v35 + *((_QWORD *)this + 33)) |= 8u;
        *(_BYTE *)(v35 + *((_QWORD *)this + 33)) |= 0x10u;
        v65 = *((_QWORD *)this + 94);
        *(_QWORD *)(*((_QWORD *)this + 104) + 8 * v35) = v37;
        v36 = *((_QWORD *)this + 143);
        v66 = *(_QWORD *)(v65 + 8 * v35);
        v67 = *((_QWORD *)this + 142);
        *(_QWORD *)(v36 + 8 * v35) = v66;
        *(_QWORD *)(v67 + 8 * v35) = 0;
        *(_QWORD *)(*((_QWORD *)this + 145) + 8 * v35) = 0;
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 104) + 8 * v35) = 0;
        *(_QWORD *)(*((_QWORD *)this + 142) + 8 * v35) = 0x3FF0000000000000LL;
        *(_QWORD *)(*((_QWORD *)this + 145) + 8 * v35) = 0x3FF0000000000000LL;
        v39 = *(double *)(*((_QWORD *)this + 94) + 8 * v35);
        v40 = *(double *)(*((_QWORD *)this + 97) + 8 * v35);
        if ( v39 <= -1.0e40 )
        {
          v113 = (char *)(*((_QWORD *)this + 33) + v35);
          v114 = *v113;
          if ( v40 >= 1.0e40 )
          {
            *v113 = v114 | 4;
            v36 = *((_QWORD *)this + 143);
            *(_QWORD *)(v36 + 8 * v35) = 0;
          }
          else
          {
            *v113 = v114 | 0x10;
            v36 = *((_QWORD *)this + 143);
            if ( v40 <= 0.0 )
              *(double *)(v36 + 8 * v35) = v40;
            else
              *(_QWORD *)(v36 + 8 * v35) = 0;
          }
          goto LABEL_42;
        }
        *(_BYTE *)(*((_QWORD *)this + 33) + v35) |= 8u;
        if ( v40 >= 1.0e40 )
        {
          v36 = *((_QWORD *)this + 143);
          if ( v39 < 0.0 )
          {
            *(_QWORD *)(v36 + 8 * v35) = 0;
            goto LABEL_42;
          }
        }
        else
        {
          *(_BYTE *)(v35 + *((_QWORD *)this + 33)) |= 0x10u;
          v36 = *((_QWORD *)this + 143);
          if ( v39 < 0.0 )
          {
            v132 = (double *)(v36 + 8 * v35);
            if ( v40 <= 0.0 )
              *v132 = v40;
            else
              *v132 = 0.0;
            goto LABEL_42;
          }
        }
        *(double *)(v36 + 8 * v35) = v39;
      }
LABEL_42:
      ++v35;
    }
    while ( (unsigned int)(v2 - 1) + 1LL != v35 );
  }
  multiplyAdd(
    (const double *)(*((_QWORD *)this + 104) + 8LL * *((int *)this + 27)),
    *((_DWORD *)this + 26),
    -1.0,
    *((double **)this + 139),
    0.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 104),
    *((_QWORD *)this + 139),
    -1.0);
  multiplyAdd(
    (const double *)(*((_QWORD *)this + 143) + 8LL * *((int *)this + 27)),
    *((_DWORD *)this + 26),
    1.0,
    *((double **)this + 138),
    0.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 143),
    *((_QWORD *)this + 138),
    -1.0);
  maximumAbsElement(*((const double **)this + 138), *((_DWORD *)this + 26));
  v41 = *((int *)this + 26);
  *((double *)this + 109) = fmax(1.0, -1.0);
  if ( v41 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v42 = (void *)operator new[](4 * v41);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**((_QWORD **)this + 161) + 16LL))(
             *((_QWORD *)this + 161),
             *((_QWORD *)this + 142),
             v42);
  if ( (_DWORD)result == -1 )
  {
    *((_DWORD *)this + 80) = 4;
  }
  else
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 161) + 48LL) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v146 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v146 )
        std::__throw_bad_cast();
      if ( v146[56] )
      {
        v147 = v146[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v147 = 10;
        v152 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v146 + 48LL);
        if ( v152 != std::ctype<char>::do_widen )
          v147 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double))v152)(v146, 10, -1.0, 0.0, 0.0);
      }
      v148 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v147);
      std::ostream::flush(v148);
      ClpCholeskyBase::resetRowsDropped(*((ClpCholeskyBase **)this + 161));
    }
    operator delete[](v42);
    v44 = *((_QWORD *)this + 161);
    if ( *(int *)(v44 + 8) > 19 || *(_BYTE *)(v44 + 12) == 1 )
    {
      multiplyAdd(nullptr, *((_DWORD *)this + 26) + *((_DWORD *)this + 27), 0.0, *((double **)this + 143), -1.0);
      ClpPredictorCorrector::solveSystem(
        this,
        *((double **)this + 145),
        *((double **)this + 138),
        *((const double **)this + 143),
        nullptr,
        nullptr,
        nullptr,
        0);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, double, double, double))(*(_QWORD *)v44 + 24LL))(
        v44,
        *((_QWORD *)this + 138),
        -1.0,
        0.0,
        0.0);
      multiplyAdd(
        *((const double **)this + 138),
        *((_DWORD *)this + 26),
        -1.0,
        (double *)(*((_QWORD *)this + 145) + 8LL * *((int *)this + 27)),
        0.0);
      v130 = *((_DWORD *)this + 27);
      v131 = *((_QWORD *)this + 145);
      if ( v130 )
      {
        if ( v130 / 8 <= 0 )
        {
          v151 = *((_QWORD **)this + 145);
        }
        else
        {
          v150 = *((_QWORD **)this + 145);
          do
          {
            *v150 = 0;
            v150[1] = 0;
            v150 += 8;
            *(v150 - 6) = 0;
            *(v150 - 5) = 0;
            *(v150 - 4) = 0;
            *(v150 - 3) = 0;
            *(v150 - 2) = 0;
            *(v150 - 1) = 0;
          }
          while ( v150 != (_QWORD *)(v131 + (((unsigned int)(v130 / 8 - 1) + 1LL) << 6)) );
          v151 = (_QWORD *)(v131 + ((v130 / 8 - 1 + 1LL) << 6));
        }
        switch ( v130 % 8 )
        {
          case 1:
            goto LABEL_193;
          case 2:
            goto LABEL_192;
          case 3:
            goto LABEL_191;
          case 4:
            goto LABEL_190;
          case 5:
            goto LABEL_189;
          case 6:
            goto LABEL_188;
          case 7:
            v151[6] = 0;
LABEL_188:
            v151[5] = 0;
LABEL_189:
            v151[4] = 0;
LABEL_190:
            v151[3] = 0;
LABEL_191:
            v151[2] = 0;
LABEL_192:
            v151[1] = 0;
LABEL_193:
            *v151 = 0;
            break;
          default:
            break;
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, double))(**((_QWORD **)this + 24) + 376LL))(
        *((_QWORD *)this + 24),
        *((_QWORD *)this + 138),
        v131,
        1.0);
    }
    v45 = *((_QWORD *)this + 145);
    v46 = fmax(0.01 * *((double *)this + 109), 100.0);
    if ( v2 > 0 )
    {
      v47 = 0;
      do
      {
        if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v47) & 2) == 0 )
          v46 = fmax(
                  *(double *)(v45 + 8 * v47) - *(double *)(*((_QWORD *)this + 97) + 8 * v47),
                  fmax(*(double *)(*((_QWORD *)this + 94) + 8 * v47) - *(double *)(v45 + 8 * v47), v46));
        ++v47;
      }
      while ( (unsigned int)(v2 - 1) + 1LL != v47 );
    }
    v48 = *((CoinMessageHandler **)this + 43);
    *((_QWORD *)this + 110) = 0x3D719799812DEA11LL;
    v49 = (CoinMessageHandler *)CoinMessageHandler::message(v48, 70, (ClpPredictorCorrector *)((char *)this + 416));
    v50 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v49);
    v51 = *((double *)this + 108);
    v52 = CoinMessageHandler::operator<<(v50);
    CoinMessageHandler::operator<<(v52, 0, v51);
    v53 = *((_QWORD *)this + 161);
    v54 = *((double *)this + 108) + 1.0;
    v55 = 0.1 * v46;
    v56 = 100.0 * v46;
    if ( *(double *)(v53 + 24) < 0.0 && *(int *)(v53 + 8) <= 19 && *(_BYTE *)(v53 + 12) != 1 )
    {
      v51 = 10.0;
      v46 = v46 * 10.0;
      v54 = v54 * 10.0;
      v55 = v55 * 10.0;
    }
    v57 = *((const double **)this + 143);
    v58 = *((double *)this + 117) * *((double *)this + 117);
    if ( v2 > 0 )
    {
      v59 = *((_QWORD *)this + 94);
      v60 = 0;
      do
      {
        v61 = *(_BYTE *)(*((_QWORD *)this + 33) + v60);
        if ( (v61 & 2) != 0 )
        {
          *(_QWORD *)(*((_QWORD *)this + 141) + 8 * v60) = 0;
          *(_QWORD *)(*((_QWORD *)this + 140) + 8 * v60) = 0;
          v68 = *((_QWORD *)this + 159);
          v51 = *(double *)(v59 + 8 * v60);
          v57[v60] = v51;
          *(_QWORD *)(v68 + 8 * v60) = 0;
          *(_QWORD *)(*((_QWORD *)this + 160) + 8 * v60) = 0;
          *(_QWORD *)(*((_QWORD *)this + 142) + 8 * v60) = 0;
        }
        else
        {
          v62 = *(double *)(*((_QWORD *)this + 97) + 8 * v60);
          v63 = v61 & 0x10;
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v60) & 8) != 0 )
          {
            v64 = *(double *)(v59 + 8 * v60);
            if ( v63 )
            {
              if ( v62 - v64 <= v46 + v46 )
                v51 = (v62 + v64) * 0.5;
              else
                v51 = fmin(v62 - v46, fmax(v64 + v46, *(double *)(v45 + 8 * v60)));
            }
            else
            {
              v51 = fmax(v64 + v46, *(double *)(v45 + 8 * v60));
            }
          }
          else
          {
            v115 = *(double *)(v45 + 8 * v60);
            if ( v63 )
            {
              v51 = fmin(v62 - v46, v115);
            }
            else if ( v115 < 0.0 )
            {
              v51 = fmin(-v55, v115);
            }
            else
            {
              v51 = fmax(v55, v115);
            }
          }
          v57[v60] = v51;
        }
        ++v60;
      }
      while ( v60 != (unsigned int)(v2 - 1) + 1LL );
    }
    v154 = v54;
    maximumAbsElement(v57, v2);
    *((double *)this + 110) = v51;
    v69 = fmax(10000000.0, v51 * 1.02);
    if ( v4 )
    {
      v70 = (_QWORD *)v4[3];
      v71 = v70[6];
      v72 = v70[7];
      v73 = v70[4];
      v153 = v70[5];
    }
    else
    {
      v73 = 0;
      v72 = 0;
      v71 = 0;
      v153 = 0;
    }
    if ( v2 > 0 )
    {
      v74 = 0.0;
      v75 = *((_QWORD *)this + 33);
      v76 = 0;
      do
      {
        v77 = *(_BYTE *)(v75 + v76);
        if ( (v77 & 2) == 0 )
        {
          v78 = *((_QWORD *)this + 143);
          v79 = *(double *)(*((_QWORD *)this + 94) + 8 * v76);
          v80 = *(double *)(v78 + 8 * v76);
          v81 = *(double *)(*((_QWORD *)this + 97) + 8 * v76);
          v82 = *(double *)(*((_QWORD *)this + 100) + 8 * v76);
          if ( (v77 & 8) != 0 )
            v82 = v82 + *((double *)this + 115);
          if ( (*(_BYTE *)(v75 + v76) & 0x10) != 0 )
            v82 = v82 - *((double *)this + 115);
          if ( v4 && *((_DWORD *)this + 27) > (int)v76 )
          {
            v123 = *(int *)(v71 + 4 * v76);
            v124 = *(_DWORD *)(v72 + 4 * v76);
            if ( (int)v123 < (int)v123 + v124 )
            {
              v125 = v73 + 8 * v123;
              v126 = v153 + 4 * v123;
              v127 = 0;
              do
              {
                v128 = *(double *)(v78 + 8LL * *(int *)(v126 + 4 * v127)) * *(double *)(v125 + 8 * v127);
                ++v127;
                v82 = v82 + v128;
              }
              while ( v127 != (unsigned int)(v124 - 1) + 1LL );
            }
            v129 = v82;
            if ( v82 < 0.0 )
              v129 = -v82;
            v74 = fmax(v74, v129);
          }
          *(double *)(*((_QWORD *)this + 104) + 8 * v76) = v82;
          if ( v80 > v79 + v69 && v81 - v69 > v80 )
          {
            *(_BYTE *)(v76 + *((_QWORD *)this + 33)) &= ~4u;
            *(_BYTE *)(v76 + *((_QWORD *)this + 33)) |= 8u;
            *(_BYTE *)(v76 + *((_QWORD *)this + 33)) |= 0x10u;
            *(double *)(*((_QWORD *)this + 94) + 8 * v76) = fmax(v79, v80 - v69);
            *(double *)(*((_QWORD *)this + 97) + 8 * v76) = fmin(v81, v80 + v69);
          }
          v75 = *((_QWORD *)this + 33);
        }
        ++v76;
      }
      while ( v76 != (unsigned int)(v2 - 1) + 1LL );
      v83 = 0;
      v84 = fmax(v154, v74);
      while ( 1 )
      {
        v85 = *(_BYTE *)(v75 + v83);
        if ( (v85 & 2) == 0 )
        {
          v86 = 8 * v83;
          v87 = *(double *)(*((_QWORD *)this + 143) + 8 * v83);
          v88 = *(double *)(*((_QWORD *)this + 97) + 8 * v83);
          v89 = *(double *)(*((_QWORD *)this + 104) + 8 * v83);
          v90 = v85 & 0x10;
          if ( (v85 & 8) != 0 )
          {
            v91 = *(double *)(*((_QWORD *)this + 94) + 8 * v83);
            if ( v90 )
            {
              if ( v88 - v91 > v46 + v46 )
              {
                v92 = v88 - v87;
                v93 = v87 - v91;
              }
              else
              {
                v92 = v46;
                v93 = v46;
              }
              v94 = 1.0;
              v95 = v93 + 1.0e-10;
              if ( v56 <= v93 + 1.0e-10 )
              {
                v94 = sqrt(v56 / v95);
                if ( v56 / v95 < 0.0 )
                {
                  v159 = *(double *)(*((_QWORD *)this + 104) + 8 * v83);
                  sqrt(v56 / v95);
                  v89 = v159;
                  v95 = v93 + 1.0e-10;
                }
              }
              v96 = v92 + 1.0e-10;
              v97 = v84;
              if ( v56 <= v92 + 1.0e-10 )
              {
                v149 = sqrt(v56 / v96);
                if ( v56 / v96 < 0.0 )
                {
                  v158 = v89;
                  sqrt(v56 / v96);
                  v97 = v149 * v84;
                  v89 = v158;
                  v96 = v92 + 1.0e-10;
                }
                else
                {
                  v97 = v149 * v84;
                }
              }
              v98 = v94 * v84;
              v99 = (double *)(v86 + *((_QWORD *)this + 159));
              v100 = (double *)(v86 + *((_QWORD *)this + 160));
              v101 = fmin(v69, v95);
              v102 = fmin(v69, v96);
              if ( v89 < 0.0 )
              {
                *v99 = v98;
                v97 = fmax(-v89, v97);
              }
              else
              {
                *v99 = fmax(v89, v98);
              }
              *v100 = v97;
              v103 = *((_QWORD *)this + 151);
              v104 = v58;
              if ( v103 )
                v104 = v58 + *(double *)(v103 + 8 * v83);
              *(double *)(*((_QWORD *)this + 142) + 8 * v83) = v101
                                                             * v102
                                                             / (v102 * v104 * v101 + v97 * v101 + *v99 * v102);
            }
            else
            {
              v116 = v84;
              v93 = *(double *)(*((_QWORD *)this + 143) + 8 * v83) - v91;
              v117 = v93 + 1.0e-10;
              if ( v56 <= v93 + 1.0e-10 )
              {
                v133 = sqrt(v56 / v117);
                if ( v56 / v117 < 0.0 )
                {
                  v157 = v133;
                  v156 = *(double *)(*((_QWORD *)this + 104) + 8 * v83);
                  sqrt(v56 / v117);
                  v116 = v157 * v84;
                  v89 = v156;
                  v117 = v93 + 1.0e-10;
                }
                else
                {
                  v116 = v133 * v84;
                }
              }
              v118 = (double *)(v86 + *((_QWORD *)this + 159));
              v119 = fmin(v69, v117);
              v120 = (_QWORD *)(v86 + *((_QWORD *)this + 160));
              if ( v89 < 0.0 )
                *v118 = v116;
              else
                *v118 = fmax(v89, v116);
              *v120 = 0;
              v121 = *((_QWORD *)this + 151);
              v122 = v58;
              if ( v121 )
                v122 = v58 + *(double *)(v121 + 8 * v83);
              *(double *)(*((_QWORD *)this + 142) + 8 * v83) = v119 / (v122 * v119 + *v118);
              v92 = 0.0;
            }
          }
          else if ( v90 )
          {
            v92 = v88 - v87;
            v105 = v84;
            v106 = v92 + 1.0e-10;
            if ( v56 <= v92 + 1.0e-10 )
            {
              v107 = sqrt(v56 / v106);
              if ( v56 / v106 < 0.0 )
              {
                v155 = *(double *)(*((_QWORD *)this + 104) + 8 * v83);
                sqrt(v56 / v106);
                v105 = v107 * v84;
                v89 = v155;
                v106 = v92 + 1.0e-10;
              }
              else
              {
                v105 = v107 * v84;
              }
            }
            v108 = fmin(v69, v106);
            v109 = (double *)(v86 + *((_QWORD *)this + 160));
            *(_QWORD *)(v86 + *((_QWORD *)this + 159)) = 0;
            if ( v89 < 0.0 )
              v105 = fmax(-v89, v105);
            *v109 = v105;
            v110 = *((_QWORD *)this + 151);
            v111 = v58;
            if ( v110 )
              v111 = v58 + *(double *)(v110 + 8 * v83);
            v112 = v111 * v108 + v105;
            v93 = 0.0;
            *(double *)(*((_QWORD *)this + 142) + 8 * v83) = v108 / v112;
          }
          else
          {
            v92 = 0.0;
            v93 = 0.0;
          }
          *(double *)(*((_QWORD *)this + 141) + 8 * v83) = v93;
          *(double *)(*((_QWORD *)this + 140) + 8 * v83) = v92;
        }
        if ( v2 <= (int)++v83 )
          break;
        v75 = *((_QWORD *)this + 33);
      }
    }
    return 0;
  }
  return result;
}

