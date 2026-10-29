__int64 __fastcall sub_1350F0(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v15; // ebp
  int v16; // r12d
  _QWORD *v17; // rdi
  __int64 (__fastcall *v18)(ClpPackedMatrix *); // rax
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  int v27; // ecx
  double v28; // xmm6_8
  double v29; // xmm3_8
  int v30; // eax
  int v31; // edx
  __int64 v32; // rsi
  double v33; // xmm8_8
  __int64 v34; // rax
  double v35; // xmm15_8
  char v36; // cl
  double v37; // xmm12_8
  double v38; // xmm13_8
  double v39; // xmm12_8
  __int64 v40; // rax
  double v41; // xmm5_8
  char v42; // r15
  double v43; // xmm7_8
  double v44; // xmm0_8
  int v45; // eax
  void *v46; // rdi
  __int64 v47; // rax
  int v48; // edx
  int v49; // ecx
  __int64 v50; // rsi
  __int64 v51; // r9
  __int64 v52; // r8
  double v53; // xmm11_8
  double v54; // xmm9_8
  __int64 v55; // rsi
  unsigned int v56; // ebp
  __int64 v57; // rax
  double v58; // xmm1_8
  double v59; // xmm3_8
  char v60; // dl
  double *v61; // rcx
  double v62; // xmm4_8
  double v63; // xmm5_8
  double v64; // xmm0_8
  double v65; // xmm10_8
  __int64 v66; // r11
  __int64 v67; // r10
  double v68; // xmm0_8
  double v69; // xmm10_8
  __int64 v70; // r10
  double v71; // xmm1_8
  double v72; // xmm10_8
  double i; // xmm0_8
  CoinMessageHandler *v74; // rax
  CoinMessageHandler *v75; // rax
  CoinMessageHandler *v76; // rax
  CoinMessageHandler *v77; // rax
  CoinMessageHandler *v78; // rax
  __int64 v79; // rax
  unsigned __int64 v81; // rdi
  double *v82; // r13
  __int64 v83; // rax
  int v84; // ecx
  double v85; // xmm3_8
  int v86; // r15d
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  double *v90; // r8
  double *v91; // r14
  double *v92; // rax
  __int64 v93; // r11
  __int64 v94; // r10
  double v95; // xmm0_8
  __int64 (__fastcall ***v96)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64); // rdi
  __int64 v97; // rax
  int v98; // edx
  double v99; // xmm3_8
  __int64 v100; // rcx
  __int64 v101; // rdx
  double *v102; // rsi
  double v103; // xmm0_8
  double j; // xmm1_8
  __int64 (__fastcall ***v105)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64); // rdi
  double *v106; // rax
  int v107; // r14d
  double *v108; // rax
  double *v109; // r10
  double v110; // xmm1_8
  double *v111; // rax
  double v112; // xmm1_8
  double *v113; // rax
  double v114; // [rsp+0h] [rbp-F8h]
  double v115; // [rsp+8h] [rbp-F0h]
  double v116; // [rsp+8h] [rbp-F0h]
  double v117; // [rsp+10h] [rbp-E8h]
  double *v118; // [rsp+10h] [rbp-E8h]
  double *v119; // [rsp+10h] [rbp-E8h]
  double *v120; // [rsp+10h] [rbp-E8h]
  double v121; // [rsp+18h] [rbp-E0h]
  __int64 v122; // [rsp+18h] [rbp-E0h]
  double v123; // [rsp+18h] [rbp-E0h]
  double v124; // [rsp+18h] [rbp-E0h]
  __int64 dest; // [rsp+20h] [rbp-D8h]
  double v126; // [rsp+28h] [rbp-D0h]
  int v127; // [rsp+28h] [rbp-D0h]
  double *v128; // [rsp+28h] [rbp-D0h]
  double v129; // [rsp+30h] [rbp-C8h]
  double v130; // [rsp+48h] [rbp-B0h] BYREF
  double v131; // [rsp+50h] [rbp-A8h] BYREF
  double v132; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v133; // [rsp+60h] [rbp-98h] BYREF
  __int128 v134; // [rsp+70h] [rbp-88h]
  __int128 v135; // [rsp+80h] [rbp-78h]
  __int128 v136; // [rsp+90h] [rbp-68h]
  __int128 v137; // [rsp+A0h] [rbp-58h]
  __int64 v138; // [rsp+B0h] [rbp-48h]

  v15 = *(_DWORD *)(a1 + 1308);
  v16 = *(_DWORD *)(a1 + 104);
  v114 = 100.0 * *(double *)(a1 + 872);
  if ( *(_DWORD *)(a1 + 308) || v15 <= 49 )
  {
    v115 = 0.0;
    goto LABEL_4;
  }
  v81 = *(int *)(a1 + 108);
  if ( v81 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_212;
  v82 = (double *)operator new[](8 * v81);
  if ( *(char *)(a1 + 728) >= 0 )
  {
    v105 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, __int128 *, _QWORD, __int64))(a1 + 160);
    v83 = 0;
    if ( v105 )
      v83 = (**v105)(v105, 0, 0, &v133, 0, 2);
  }
  else
  {
    v83 = *(_QWORD *)(a1 + 1032);
  }
  v84 = *(_DWORD *)(a1 + 108);
  if ( v84 <= 0 )
  {
    v86 = 0;
    v115 = 1.0;
  }
  else
  {
    a4 = 0.0;
    v85 = 0.0;
    v86 = 0;
    v87 = 0;
    do
    {
      a2 = *(double *)(v83 + v87);
      v82[v87 / 8] = fabs(a2);
      v85 = v85 + fabs(a2);
      if ( a2 != 0.0 )
        ++v86;
      v87 += 8LL;
    }
    while ( 8LL * (unsigned int)(v84 - 1) + 8 != v87 );
    if ( v86 )
    {
      a2 = (double)v86;
      v115 = v85 / (double)v86;
    }
    else
    {
      v115 = 1.0;
    }
  }
  v88 = v84;
  if ( v82 != &v82[v88] )
  {
    v122 = 8LL * v84;
    _BitScanReverse64(&v89, (v88 * 8) >> 3);
    v118 = &v82[v88];
    sub_134F30(v82, (char *)&v82[v88], 2 * (63LL - (int)(v89 ^ 0x3F)));
    v90 = v118;
    v91 = v82 + 1;
    if ( (v122 - 128 < 0) ^ __OFADD__(-128, v122) | (v122 == 128) )
    {
      v84 = *(_DWORD *)(a1 + 108);
      a3 = *v82;
      if ( v118 != v82 + 1 )
      {
        v127 = *(_DWORD *)(a1 + 108);
        do
        {
          a4 = *v91;
          if ( a3 > *v91 )
          {
            if ( v91 != v82 )
            {
              v123 = *v91;
              v119 = v90;
              memmove(v82 + 1, v82, (char *)v91 - (char *)v82);
              v90 = v119;
              a4 = v123;
            }
            *v82 = a4;
            a3 = a4;
          }
          else
          {
            a2 = *(v91 - 1);
            v92 = v91 - 1;
            if ( a2 > a4 )
            {
              while ( 1 )
              {
                v92[1] = a2;
                a2 = *(v92 - 1);
                if ( a2 <= a4 )
                  break;
                --v92;
              }
            }
            else
            {
              v92 = v91;
            }
            *v92 = a4;
            a3 = *v82;
          }
          ++v91;
        }
        while ( v90 != v91 );
        v84 = v127;
      }
      goto LABEL_164;
    }
    v109 = v82 + 16;
    v128 = v118;
    do
    {
      v110 = *v91;
      a2 = *v82;
      if ( *v82 > *v91 )
      {
        if ( v91 != v82 )
        {
          v124 = *v91;
          v120 = v109;
          memmove(v82 + 1, v82, (char *)v91 - (char *)v82);
          v109 = v120;
          v110 = v124;
        }
        *v82 = v110;
      }
      else
      {
        a2 = *(v91 - 1);
        v111 = v91 - 1;
        if ( a2 > v110 )
        {
          while ( 1 )
          {
            v111[1] = a2;
            a2 = *(v111 - 1);
            if ( a2 <= v110 )
              break;
            --v111;
          }
        }
        else
        {
          v111 = v91;
        }
        *v111 = v110;
      }
      ++v91;
    }
    while ( v109 != v91 );
    v84 = *(_DWORD *)(a1 + 108);
    if ( v128 != v109 )
    {
      do
      {
        while ( 1 )
        {
          v112 = *v91;
          v113 = v91 - 1;
          a2 = *(v91 - 1);
          if ( a2 > *v91 )
            break;
          v108 = v91++;
          *v108 = v112;
          if ( v128 == v91 )
            goto LABEL_174;
        }
        while ( 1 )
        {
          v113[1] = a2;
          a2 = *(v113 - 1);
          if ( a2 <= v112 )
            break;
          --v113;
        }
        ++v91;
        *v113 = v112;
      }
      while ( v128 != v91 );
    }
  }
LABEL_174:
  a3 = *v82;
LABEL_164:
  if ( v84 <= 1 )
  {
    v107 = 1;
  }
  else
  {
    v106 = v82 + 1;
    v107 = 1;
    do
    {
      a2 = *v106;
      if ( *v106 != a3 )
        ++v107;
      ++v106;
      a3 = a2;
    }
    while ( &v82[(unsigned int)(v84 - 2) + 2] != v106 );
  }
  operator delete[](v82);
  if ( !v86 && *(int *)(a1 + 1308) <= 54 )
    return 1;
  if ( 4 * v107 > *(_DWORD *)(a1 + 108) )
  {
    *(_DWORD *)(a1 + 1308) = 100;
    return 0;
  }
LABEL_4:
  v17 = *(_QWORD **)(a1 + 192);
  v18 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v17 + 64LL);
  if ( v18 == ClpPackedMatrix::getVectorLengths )
  {
    v19 = *(_QWORD *)(v17[11] + 56LL);
    v20 = *(_DWORD *)(a1 + 108);
    if ( v20 > 0 )
      goto LABEL_6;
LABEL_181:
    v23 = 0;
    goto LABEL_14;
  }
  v19 = ((__int64 (*)(void))v18)();
  v20 = *(_DWORD *)(a1 + 108);
  if ( v20 <= 0 )
    goto LABEL_181;
LABEL_6:
  v21 = (unsigned int)(v20 - 1);
  v22 = 0;
  v23 = 0;
  v24 = v21 + 1;
  do
  {
    a2 = *(double *)(*(_QWORD *)(a1 + 1024) + 8 * v22);
    if ( a2 > *(double *)(*(_QWORD *)(a1 + 1000) + 8 * v22) )
    {
      v25 = *(_DWORD *)(v19 + 4 * v22);
      if ( v25 > 2 )
      {
        if ( v23 < v25 )
          v23 = *(_DWORD *)(v19 + 4 * v22);
        if ( v16 > v25 )
          v16 = *(_DWORD *)(v19 + 4 * v22);
      }
    }
    ++v22;
  }
  while ( v24 != v22 );
LABEL_14:
  v26 = *(_DWORD *)(a1 + 1308);
  if ( v26 > 69 )
  {
    *(_DWORD *)(a1 + 1308) = v26 - 20;
    printf("Row costs modified, ");
    v26 = *(_DWORD *)(a1 + 1308);
  }
  if ( v26 > 50 )
  {
    v27 = v26 - 51;
    v133 = xmmword_291000;
    v134 = xmmword_28DCD0;
    v135 = xmmword_28DCE0;
    v28 = 1.0;
    v136 = xmmword_28DCF0;
    v138 = 0x3FF0000000000000LL;
    a2 = 0.01;
    v137 = xmmword_28DD00;
    if ( v27 <= 9 )
      v28 = *((double *)&v133 + v27);
LABEL_19:
    v29 = 0.00000001;
    if ( (unsigned int)v27 <= 8 )
      v29 = fmax(0.00000001, v28);
    v30 = *(_DWORD *)(a1 + 104);
    v31 = *(_DWORD *)(a1 + 108);
    if ( v30 <= 0 )
    {
      if ( v31 <= 0 )
      {
        v33 = 0.0;
        v41 = 0.0;
        v35 = 1.0e100;
        goto LABEL_176;
      }
      a4 = 0.0;
      v36 = 1;
      v33 = 0.0;
      v35 = 1.0e100;
    }
    else
    {
      a3 = NAN;
      a4 = 0.0;
      v32 = 8LL * (unsigned int)(v30 - 1) + 8;
      v33 = 0.0;
      v34 = 0;
      v35 = 1.0e100;
      v36 = 1;
      a6 = 1.0e10;
      a9 = NAN;
      do
      {
        v37 = *(double *)(*(_QWORD *)(a1 + 992) + v34);
        a2 = *(double *)(*(_QWORD *)(a1 + 1016) + v34);
        if ( a2 > v37 )
        {
          a14 = *(_QWORD *)(a1 + 1040);
          v38 = *(double *)(a14 + v34);
          v29 = fmax(v29, fabs(v38));
          if ( v38 != 0.0 )
            v35 = fmin(v35, fabs(v38));
        }
        if ( v37 != 0.0 && v37 > -1.0e10 )
        {
          v39 = fabs(v37);
          if ( v33 == 0.0 )
          {
            v33 = v39;
          }
          else if ( fabs(v39 - v33) > 0.0000001 )
          {
            v36 = 0;
          }
        }
        if ( a2 != 0.0 && a2 < 1.0e10 )
        {
          a2 = fabs(a2);
          if ( v33 == 0.0 )
          {
            v33 = a2;
          }
          else
          {
            a2 = fabs(a2 - v33);
            if ( a2 > 0.0000001 )
              v36 = 0;
          }
        }
        v34 += 8;
      }
      while ( v32 != v34 );
      if ( v31 <= 0 )
      {
        v41 = 0.0;
        goto LABEL_53;
      }
    }
    v40 = 0;
    v41 = 0.0;
    a14 = 0;
    do
    {
      a3 = *(double *)(*(_QWORD *)(a1 + 1000) + 8 * v40);
      a2 = *(double *)(*(_QWORD *)(a1 + 1024) + 8 * v40);
      if ( a2 > a3 )
      {
        a6 = *(double *)(*(_QWORD *)(a1 + 1048) + 8 * v40);
        a9 = fabs(a6);
        v29 = fmax(v29, a9);
        if ( a6 != 0.0 )
          v35 = fmin(v35, a9);
      }
      if ( a3 != 0.0 && a3 > -1.0e10 )
      {
        a3 = fabs(a3);
        if ( v41 == 0.0 )
        {
          v41 = a3;
        }
        else
        {
          a3 = fabs(a3 - v41);
          if ( a3 > 0.0000001 )
            v36 = 0;
        }
      }
      if ( a2 != 0.0 && a2 < 1.0e10 )
      {
        a2 = fabs(a2);
        if ( v41 == 0.0 )
        {
          v41 = a2;
        }
        else
        {
          a2 = fabs(a2 - v41);
          if ( a2 > 0.0000001 )
            v36 = 0;
        }
      }
      ++v40;
    }
    while ( v31 > (int)v40 );
LABEL_53:
    if ( !v36 )
    {
LABEL_54:
      v42 = 0;
      v43 = v35 / v28;
      if ( v35 / v28 > v29 )
      {
        v43 = v29;
        v42 = 0;
      }
      goto LABEL_56;
    }
LABEL_176:
    v129 = v41;
    (*(void (__fastcall **)(_QWORD, double *, double *, double *, __int128 *, __int64, double, double, double, double, double, double, double, double))(**(_QWORD **)(a1 + 192) + 200LL))(
      *(_QWORD *)(a1 + 192),
      &v130,
      &v131,
      &v132,
      &v133,
      a14,
      a2,
      a3,
      a4,
      v29,
      a6,
      v41,
      v28,
      a9);
    if ( v130 == v131 && v132 == *(double *)&v133 )
      v28 = fmax(fmin(100.0 * v28, 0.001 * fmax(v33, v129)), v28);
    v31 = *(_DWORD *)(a1 + 108);
    goto LABEL_54;
  }
  if ( v26 == 50 )
  {
    v28 = 0.00001;
    v27 = -1;
    goto LABEL_19;
  }
  if ( v26 < -899 )
  {
    *(_DWORD *)(a1 + 1308) = v26 + 1000;
    printf("Row costs modified, ");
    v26 = *(_DWORD *)(a1 + 1308);
  }
  if ( v26 >= -9 )
  {
    v28 = 0.1;
    v42 = 0;
  }
  else
  {
    if ( (int)((-10 - v26) % 0x64u) > 9 )
    {
      v26 += 30;
      v42 = 1;
    }
    else
    {
      v26 += 10;
      v42 = 0;
    }
    *(_DWORD *)(a1 + 1308) = v26;
    v28 = 1.0;
    if ( v26 < -10 )
    {
      do
      {
        v26 += 100;
        v28 = v28 * 0.1;
      }
      while ( v26 < -10 );
      *(_DWORD *)(a1 + 1308) = v26;
    }
  }
  v95 = pow(10.0, (double)v26);
  v31 = *(_DWORD *)(a1 + 108);
  v43 = v95;
  v35 = 1.0e100;
LABEL_56:
  v133 = xmmword_291010;
  v138 = 0x4059000000000000LL;
  v134 = xmmword_291020;
  v135 = xmmword_291030;
  v136 = xmmword_291040;
  v137 = xmmword_291050;
  v44 = *(double *)(a1 + 872);
  if ( 99.0 * v44 <= v114 )
  {
    *(double *)&dest = 100.0;
  }
  else
  {
    v43 = v43 * 0.1;
    v135 = xmmword_291060;
    v136 = xmmword_291070;
    v137 = xmmword_291080;
    v138 = 0x4020000000000000LL;
    *(double *)&dest = 8.0;
  }
  v117 = 1.0;
  if ( v23 )
    v117 = 3.0 / (double)v16;
  v45 = 2 * v31;
  v121 = fmin(0.01 * v44, v28);
  v126 = fmax(v44 * 1000.0, v115 * v28);
  if ( 2 * v31 <= *(_DWORD *)(a1 + 1388) )
    goto LABEL_69;
  v46 = *(void **)(a1 + 1392);
  if ( v46 )
  {
    operator delete[](v46);
    v45 = 2 * *(_DWORD *)(a1 + 108);
  }
  *(_DWORD *)(a1 + 1388) = v45;
  if ( (unsigned __int64)v45 > 0xFFFFFFFFFFFFFFFLL )
LABEL_212:
    __cxa_throw_bad_array_new_length();
  v47 = operator new[](8LL * v45);
  v48 = *(_DWORD *)(a1 + 1388);
  *(_QWORD *)(a1 + 1392) = v47;
  if ( v48 > 0 )
  {
    v49 = *(_DWORD *)(a1 + 356);
    v50 = v47 + 8LL * (unsigned int)(v48 - 1) + 8;
    do
    {
      v47 += 8;
      v49 = 1664525 * v49 + 1013904223;
      *(double *)(v47 - 8) = (double)v49 * 2.328306436538696e-10;
    }
    while ( v47 != v50 );
    *(_DWORD *)(a1 + 356) = v49;
  }
  v31 = *(_DWORD *)(a1 + 108);
LABEL_69:
  if ( v31 <= 0 )
  {
    v53 = 0.0;
    goto LABEL_93;
  }
  v51 = *(_QWORD *)(a1 + 1000);
  v52 = *(_QWORD *)(a1 + 1024);
  v53 = 0.0;
  v54 = 0.0;
  v55 = (unsigned int)(v31 - 1);
  v116 = 0.0;
  v56 = v15 - 50;
  v57 = 0;
  do
  {
    v58 = *(double *)(v51 + 8 * v57);
    v59 = *(double *)(v52 + 8 * v57);
    if ( v59 <= v58 )
      goto LABEL_90;
    v60 = *(_BYTE *)(*(_QWORD *)(a1 + 264) + v57) & 7;
    if ( v60 == 1 )
      goto LABEL_90;
    v61 = (double *)(*(_QWORD *)(a1 + 1048) + 8 * v57);
    v62 = *v61;
    v63 = fabs(*v61);
    v64 = fmin(v43, (0.1 * v43 + v63 + 0.00000001) * v28 + v114);
    if ( v42 )
    {
      v65 = v28;
      v64 = v28;
    }
    else
    {
      v65 = 0.1 * v35 + v114;
    }
    if ( v58 <= -*(double *)(a1 + 752) )
    {
      if ( *(double *)(a1 + 752) <= v59 )
        goto LABEL_90;
      v93 = *(_QWORD *)(a1 + 1392);
      v94 = 2 * (int)v57;
      v68 = v64 * -(0.5 * *(double *)(v93 + 8 * v94) + 0.5);
      v69 = v65 * -(0.5 * *(double *)(v93 + 8 * v94 + 8) + 0.5);
    }
    else
    {
      if ( fabs(v59) <= fabs(v58) )
        goto LABEL_90;
      v66 = *(_QWORD *)(a1 + 1392);
      v67 = 2 * (int)v57;
      v68 = v64 * (0.5 * *(double *)(v66 + 8 * v67) + 0.5);
      v69 = v65 * (0.5 * *(double *)(v66 + 8 * v67 + 8) + 0.5);
    }
    if ( v68 == 0.0 )
      goto LABEL_90;
    v70 = *(int *)(v19 + 4 * v57);
    if ( (int)v70 <= 3 )
      goto LABEL_138;
    LODWORD(v70) = (int)((double)(int)v70 * v117);
    v71 = 1.0;
    if ( (int)v70 > 2 )
    {
      if ( (int)v70 > 9 )
      {
        v71 = *(double *)&dest;
        goto LABEL_81;
      }
      v70 = (int)v70;
LABEL_138:
      v71 = *((double *)&v133 + v70);
    }
LABEL_81:
    v72 = fmin(v68 * v71, v69);
    *(_QWORD *)&i = *(_QWORD *)&v72 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v56 <= 0xA )
    {
      if ( v72 != 0.0 )
      {
        if ( v121 >= i )
        {
          v72 = v72 * 10.0;
          for ( i = fabs(v72); v121 >= i; i = fabs(v72) )
            v72 = v72 * 10.0;
        }
        else if ( i > v126 )
        {
          v72 = v72 * 0.1;
          for ( i = fabs(v72); i > v126; i = fabs(v72) )
            v72 = v72 * 0.1;
        }
      }
    }
    else if ( *(double *)(a1 + 872) >= i )
    {
      v72 = 0.0;
      i = 0.0;
    }
    if ( v62 == 0.0 )
    {
      v53 = fmax(v53, i);
    }
    else
    {
      v54 = fmax(v54, i);
      if ( i > v63 * v116 )
        v116 = fabs(v72 / v62);
    }
    if ( v60 == 2 )
      v72 = -v72;
    *v61 = v72 + v62;
LABEL_90:
    ++v57;
  }
  while ( v55 + 1 != v57 );
  if ( v53 > v54 && v54 != 0.0 )
  {
    v96 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, double *, _QWORD, __int64))(a1 + 160);
    if ( v96 )
    {
      v97 = (**v96)(v96, 0, 0, &v132, 0, 2);
      v98 = *(_DWORD *)(a1 + 108);
      v53 = 0.0;
      v99 = fmax(0.00000001, v54);
      if ( v98 <= 0 )
        goto LABEL_93;
      LODWORD(v55) = v98 - 1;
    }
    else
    {
      v99 = 0.00000001;
      if ( v54 >= 0.00000001 )
        v99 = v54;
      v97 = 0;
    }
    v53 = 0.0;
    v100 = 8LL * (unsigned int)v55 + 8;
    v101 = 0;
    do
    {
      if ( *(double *)(v97 + v101) == 0.0 )
      {
        v102 = (double *)(v101 + *(_QWORD *)(a1 + 1032));
        v103 = *v102;
        for ( j = fabs(*v102); j > v99; j = fabs(v103) )
          v103 = v103 * 0.5;
        *v102 = v103;
        v53 = fmax(v53, j);
      }
      v101 += 8;
    }
    while ( v100 != v101 );
  }
LABEL_93:
  v74 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *(CoinMessageHandler **)(a1 + 344),
                                16,
                                (const CoinMessages *)(a1 + 416));
  v75 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v74);
  v76 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v75);
  v77 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v76);
  v78 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v77);
  v79 = CoinMessageHandler::operator<<(v78);
  CoinMessageHandler::operator<<(v79, 0, v53);
  *(_DWORD *)(a1 + 1308) = 101;
  return 0;
}

