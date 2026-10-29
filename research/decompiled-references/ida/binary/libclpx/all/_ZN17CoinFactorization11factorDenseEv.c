__int64 __fastcall CoinFactorization::factorDense(CoinFactorization *this)
{
  int v1; // ecx
  int v2; // eax
  CoinFactorization *v3; // r15
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // ebp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rcx
  int v24; // esi
  int v25; // esi
  __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // r13
  int v38; // eax
  __int64 v39; // rdx
  int v40; // ecx
  int v41; // edi
  __int64 v42; // rax
  int v43; // edi
  __int64 v44; // r10
  __int64 v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // xmm0_8
  __int64 v50; // rsi
  int v51; // eax
  int v52; // edi
  int v53; // r10d
  __int64 v54; // r8
  bool v55; // cc
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r14
  __int64 v60; // r12
  int v61; // r9d
  char ColumnSpace; // al
  int v64; // esi
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // rdi
  __int64 v72; // rcx
  double v73; // xmm1_8
  __int64 v74; // rsi
  int v75; // edx
  double v76; // xmm0_8
  double v77; // xmm0_8
  __int64 v78; // rsi
  double v79; // xmm2_8
  __int64 v80; // r10
  int *v81; // r9
  __int64 v82; // rdx
  int v83; // ebx
  int v84; // r8d
  int *v85; // rdx
  int v86; // edx
  __int64 *v87; // rcx
  int v88; // r8d
  __int64 *v89; // r9
  __int64 v90; // xmm0_8
  int v91; // r9d
  __int64 v92; // rdx
  __int64 v93; // r8
  int v94; // r10d
  __int64 v95; // rcx
  double v96; // xmm0_8
  __int64 v97; // r10
  int v98; // ecx
  __int64 v99; // r11
  int *v100; // rbx
  int v101; // ecx
  __int64 v102; // rax
  double v103; // xmm0_8
  __int64 v104; // rdx
  unsigned __int64 v105; // rsi
  int v106; // ebx
  __int64 v107; // rcx
  unsigned int v108; // r12d
  __int64 v109; // r15
  double *v110; // r9
  __m128d v111; // xmm2
  int v112; // edi
  __int64 v113; // rdx
  int v114; // ebp
  unsigned int v115; // r11d
  __m128d v116; // xmm3
  double *v117; // rcx
  __int64 v118; // rax
  unsigned int v119; // edx
  __int64 v120; // rdx
  int v121; // edi
  _BYTE *v122; // rbx
  char v123; // si
  std::ostream *v124; // rax
  __int64 v125; // rax
  void *v126; // rdi
  void *v127; // rdi
  int v128; // ecx
  int v129; // ecx
  _QWORD *v130; // rdx
  __int64 v131; // rcx
  __int64 (__fastcall *v132)(__int64, unsigned int); // rax
  int v133; // [rsp+0h] [rbp-108h]
  __int64 v134; // [rsp+8h] [rbp-100h]
  __int64 v135; // [rsp+8h] [rbp-100h]
  __int64 v136; // [rsp+10h] [rbp-F8h]
  int v137; // [rsp+10h] [rbp-F8h]
  int v138; // [rsp+18h] [rbp-F0h]
  __int64 v139; // [rsp+20h] [rbp-E8h]
  __int64 v140; // [rsp+28h] [rbp-E0h]
  __int64 v141; // [rsp+28h] [rbp-E0h]
  int v142; // [rsp+30h] [rbp-D8h]
  __int64 v143; // [rsp+30h] [rbp-D8h]
  __int64 v144; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v145; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v146; // [rsp+40h] [rbp-C8h]
  int v147; // [rsp+48h] [rbp-C0h]
  __int64 v148; // [rsp+48h] [rbp-C0h]
  __int64 v149; // [rsp+50h] [rbp-B8h]
  __int64 v150; // [rsp+58h] [rbp-B0h]
  __int64 v151; // [rsp+60h] [rbp-A8h]
  __int64 v152; // [rsp+68h] [rbp-A0h]
  __int64 v153; // [rsp+70h] [rbp-98h]
  __int64 v154; // [rsp+78h] [rbp-90h]
  __int64 v155; // [rsp+88h] [rbp-80h]
  __int64 v156; // [rsp+90h] [rbp-78h]
  __int64 v157; // [rsp+98h] [rbp-70h]
  __int64 v158; // [rsp+A0h] [rbp-68h]
  __int64 v159; // [rsp+A8h] [rbp-60h]
  CoinFactorization *v160; // [rsp+B0h] [rbp-58h]
  __int64 v161; // [rsp+B8h] [rbp-50h]
  __int64 v162; // [rsp+C0h] [rbp-48h]
  __int64 v163; // [rsp+C8h] [rbp-40h]

  v1 = *((_DWORD *)this + 8);
  v2 = v1 - *((_DWORD *)this + 14);
  *((_DWORD *)this + 216) = v2;
  if ( v2 > 0xFFFF )
    abort();
  v3 = this;
  *((_DWORD *)this + 18) = v2 * v2;
  v4 = v2 + 6;
  v142 = v2 * v2;
  v5 = v2 * v2 + 8 * v2 + (v2 + 1) / 2;
  v6 = v2 + 3;
  if ( v6 < 0 )
    v6 = v4;
  v7 = v5 + 2 * (v6 >> 2);
  v8 = v1 + 6;
  v9 = v1 + 3;
  if ( v9 < 0 )
    v9 = v8;
  v10 = (v9 >> 2) + v7;
  v11 = v10 + 32;
  if ( (unsigned __int64)(v10 + 32) > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_152;
  v12 = operator new[](8LL * v11);
  *((_QWORD *)this + 105) = v12;
  *((_QWORD *)this + 106) = v12 + 8LL * ((int)(256 - (v12 & 0x3F)) >> 3);
  if ( v10 != -32 )
  {
    v128 = v10 + 39;
    if ( v11 >= 0 )
      v128 = v10 + 32;
    v129 = v128 >> 3;
    if ( v129 > 0 )
    {
      v130 = (_QWORD *)v12;
      v131 = (unsigned int)(v129 - 1);
      do
      {
        *v130 = 0;
        v130[1] = 0;
        v130 += 8;
        *(v130 - 6) = 0;
        *(v130 - 5) = 0;
        *(v130 - 4) = 0;
        *(v130 - 3) = 0;
        *(v130 - 2) = 0;
        *(v130 - 1) = 0;
      }
      while ( v130 != (_QWORD *)(v12 + ((v131 + 1) << 6)) );
      v12 += ((int)v131 + 1LL) << 6;
    }
    switch ( v11 % 8 )
    {
      case 1:
        goto LABEL_145;
      case 2:
        goto LABEL_144;
      case 3:
        goto LABEL_143;
      case 4:
        goto LABEL_142;
      case 5:
        goto LABEL_141;
      case 6:
        goto LABEL_140;
      case 7:
        *(_QWORD *)(v12 + 48) = 0;
LABEL_140:
        *(_QWORD *)(v12 + 40) = 0;
LABEL_141:
        *(_QWORD *)(v12 + 32) = 0;
LABEL_142:
        *(_QWORD *)(v12 + 24) = 0;
LABEL_143:
        *(_QWORD *)(v12 + 16) = 0;
LABEL_144:
        *(_QWORD *)(v12 + 8) = 0;
LABEL_145:
        *(_QWORD *)v12 = 0;
        break;
      default:
        break;
    }
  }
  v13 = *((int *)this + 216);
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
LABEL_152:
    __cxa_throw_bad_array_new_length();
  v14 = operator new[](4 * v13);
  v15 = *((_DWORD *)this + 158);
  v16 = *((_QWORD *)this + 78);
  v17 = 0;
  v18 = 0;
  v19 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 107) = v14;
  if ( v15 >= -1 )
    v18 = v16;
  v152 = v18;
  v20 = *((_QWORD *)this + 50);
  if ( *((int *)this + 102) <= -2 )
    v20 = 0;
  v150 = v20;
  v21 = *((_QWORD *)this + 29);
  if ( *((int *)this + 108) <= -2 )
    v19 = 0;
  if ( *((int *)this + 60) <= -2 )
    v21 = 0;
  v157 = v21;
  if ( *((int *)this + 66) > -2 )
    v17 = *((_QWORD *)this + 32);
  v158 = v17;
  v22 = *((_DWORD *)this + 8);
  if ( v22 > 0 )
  {
    v23 = 1;
    do
    {
      while ( *(int *)(v19 + 4 * v23 - 4) >= 0 )
      {
        *(_DWORD *)(v19 + 4 * v23 - 4) = 0;
        v22 = *((_DWORD *)this + 8);
        v24 = v23++;
        if ( v24 >= v22 )
          goto LABEL_23;
      }
      v64 = v23++;
    }
    while ( v64 < v22 );
LABEL_23:
    v15 = *((_DWORD *)this + 158);
  }
  v25 = 0;
  v26 = *((_QWORD *)this + 75);
  if ( v15 <= -2 )
    v16 = 0;
  if ( *((int *)this + 152) <= -2 )
    v26 = 0;
  if ( v22 > 0 )
  {
    v27 = 0;
    do
    {
      while ( !*(_DWORD *)(v19 + 4 * v27) )
      {
        *(_DWORD *)(v19 + 4 * v27) = v25;
        *(_DWORD *)(v150 + 4 * v27) = v25 + *((_DWORD *)this + 14);
        v28 = v25++;
        *(_DWORD *)(v14 + 4 * v28) = v27;
        v22 = *((_DWORD *)this + 8);
        if ( (int)++v27 >= v22 )
          goto LABEL_32;
      }
      ++v27;
    }
    while ( (int)v27 < v22 );
  }
LABEL_32:
  v29 = 0;
  v30 = *((_QWORD *)this + 95);
  v31 = *((_QWORD *)this + 89);
  v32 = *((_QWORD *)this + 69);
  v33 = *((_DWORD *)v3 + 11);
  v34 = *((_QWORD *)v3 + 106);
  if ( *((int *)v3 + 192) <= -2 )
    v30 = 0;
  v151 = v30;
  if ( *((int *)v3 + 180) <= -2 )
    v31 = 0;
  v153 = v31;
  v35 = *((_QWORD *)v3 + 92);
  if ( *((int *)v3 + 186) <= -2 )
    v35 = 0;
  v154 = v35;
  v36 = *(_DWORD *)(v30 + 4LL * *((int *)v3 + 15));
  v37 = *((_QWORD *)v3 + 10);
  v140 = v37;
  v38 = *((_DWORD *)v3 + 22);
  if ( v38 < -1 )
    v37 = 0;
  if ( *((int *)v3 + 140) <= -2 )
    v32 = 0;
  v156 = v32;
  if ( *((int *)v3 + 164) > -2 )
    v29 = *((_QWORD *)v3 + 81);
  v155 = v29;
  if ( v33 > 0 )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      while ( 1 )
      {
        v41 = *(_DWORD *)(v157 + 4 * v39);
        if ( v41 )
          break;
        if ( (int)++v39 >= v33 )
          goto LABEL_56;
      }
      v42 = *(int *)(v155 + 4 * v39);
      v43 = v42 + v41;
      if ( (int)v42 < v43 )
      {
        v44 = v16 + 4 * v42;
        v45 = (unsigned int)(v43 - v42 - 1) + 1LL;
        v46 = v26 + 8 * v42;
        v47 = 0;
        do
        {
          v48 = *(int *)(v44 + 4 * v47);
          v49 = *(_QWORD *)(v46 + 8 * v47++);
          *(_QWORD *)(v34 + 8LL * *(int *)(v19 + 4 * v48)) = v49;
        }
        while ( v45 != v47 );
      }
      v34 += 8LL * *((int *)v3 + 216);
      v50 = 4LL * v40;
      if ( *(int *)(v19 + v50) < 0 )
      {
        for ( v50 += 4; ; v50 += 4 )
        {
          ++v40;
          if ( *(int *)(v19 + v50) >= 0 )
            break;
        }
      }
      ++v40;
      *(_DWORD *)(v150 + v50) = *((_DWORD *)v3 + 14);
      *(_DWORD *)(v151 + 4LL * *((int *)v3 + 14) + 4) = v36;
      *(_DWORD *)(v157 + 4 * v39) = 0;
      *(_DWORD *)(v37 + 4LL * *((int *)v3 + 14)) = v39;
      v51 = *((_DWORD *)v3 + 14);
      *(_QWORD *)(v156 + 8LL * v51) = 0x3FF0000000000000LL;
      v33 = *((_DWORD *)v3 + 11);
      *((_DWORD *)v3 + 14) = v51 + 1;
      ++v39;
    }
    while ( (int)v39 < v33 );
LABEL_56:
    v38 = *((_DWORD *)v3 + 22);
    v22 = *((_DWORD *)v3 + 8);
  }
  v52 = *((_DWORD *)v3 + 217);
  v53 = v22 - *((_DWORD *)v3 + 216);
  v54 = *((_QWORD *)v3 + 44);
  *((_DWORD *)v3 + 217) = 0;
  v55 = *((_DWORD *)v3 + 90) <= -2;
  v133 = -v52;
  v56 = 0;
  v147 = v53;
  *((_DWORD *)v3 + 14) = v53;
  if ( v55 )
    v54 = 0;
  if ( v38 > -2 )
    v56 = v140;
  if ( v52 < 0 )
  {
    v144 = v19;
    v57 = v56 + 4LL * v53;
    v58 = 0;
    v59 = v54;
    while ( 1 )
    {
      v60 = *(int *)(v57 + 4 * v58);
      v61 = v58;
      if ( *(_DWORD *)(v155 + 4LL * *(int *)(v59 + 4 * v60))
         - *(_DWORD *)(v155 + 4 * v60)
         - *(_DWORD *)(v158 + 4LL * *(int *)(v59 + 4 * v60)) < (int)v58 )
      {
        v136 = v57;
        ColumnSpace = CoinFactorization::getColumnSpace(v3, *(_DWORD *)(v57 + 4 * v58), v58);
        v61 = v58;
        v57 = v136;
        if ( !ColumnSpace )
          return 4294967197LL;
      }
      ++v58;
      *(_DWORD *)(v157 + 4 * v60) = v61;
      if ( v133 <= (int)v58 )
      {
        v19 = v144;
        v65 = *((_DWORD *)v3 + 14);
        v22 = *((_DWORD *)v3 + 8);
        goto LABEL_72;
      }
    }
  }
  v65 = v53;
LABEL_72:
  LODWORD(v66) = v65 - v52;
  if ( (int)v66 < v22 )
  {
    v66 = (int)v66;
    do
    {
      *(_DWORD *)(v150 + 4 * v66) = v66;
      *(_DWORD *)(v151 + 4 * v66 + 4) = v36;
      *(_QWORD *)(v156 + 8 * v66++) = 0x3FF0000000000000LL;
    }
    while ( *((_DWORD *)v3 + 8) > (int)v66 );
  }
  if ( (double)v142 * 0.5 + (double)*((int *)v3 + 176) > (double)*((int *)v3 + 177) )
  {
    if ( (*((_BYTE *)v3 + 496) & 4) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v122 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v122 )
        std::__throw_bad_cast();
      if ( v122[56] )
      {
        v123 = v122[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v123 = 10;
        v132 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v122 + 48LL);
        if ( v132 != std::ctype<char>::do_widen )
          v123 = v132((__int64)v122, 10u);
      }
      v124 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v123);
      std::ostream::flush(v124);
    }
    return 4294967197LL;
  }
  v67 = 0;
  if ( *((int *)v3 + 152) > -2 )
    v67 = *((_QWORD *)v3 + 75);
  v163 = v67;
  if ( v52 < 0 )
  {
    v68 = 0;
    v162 = v19;
    v139 = *((_QWORD *)v3 + 106);
    v69 = v147;
    v70 = 1;
    v148 = 8;
    LODWORD(v19) = *((_DWORD *)v3 + 216);
    v71 = 0;
    v161 = v56 + 4 * v69;
    while ( 1 )
    {
      v72 = v139 + 8LL * (int)v71 * (int)v19;
      if ( (int)v71 >= (int)v19 )
        return 0xFFFFFFFFLL;
      v138 = v71;
      v73 = 1.0e-12;
      v74 = v71;
      v141 = v71 + 1;
      v75 = -1;
      do
      {
        v76 = fabs(*(double *)(v72 + 8 * v74));
        v55 = v76 <= v73;
        v77 = fmax(v76, v73);
        if ( !v55 )
          v75 = v74;
        ++v74;
        v73 = v77;
      }
      while ( v71 + 1 + (unsigned int)(v19 - 1 - v71) != v74 );
      if ( v75 < 0 )
        return 0xFFFFFFFFLL;
      v78 = *((_QWORD *)v3 + 107);
      v79 = *(double *)(v72 + 8LL * v75);
      v80 = v75;
      v81 = (int *)(v78 + 4LL * v75);
      v82 = *v81;
      v83 = *(_DWORD *)(v161 + 4 * v71);
      *(_DWORD *)(v150 + 4 * v82) = *((_DWORD *)v3 + 14);
      v84 = v82;
      *(_DWORD *)(v162 + 4 * v82) = -2;
      v85 = (int *)(v78 + 4 * v71);
      *v81 = *v85;
      *v85 = v84;
      v86 = *((_DWORD *)v3 + 216);
      if ( v86 > (int)v71 )
      {
        v87 = (__int64 *)(v72 - v68 * 8);
        v88 = v71;
        do
        {
          v89 = &v87[v68];
          v90 = *v87;
          ++v88;
          *v87 = v87[v68 + v80];
          v87 += v86;
          v89[v80] = v90;
        }
        while ( v88 != v86 );
      }
      v91 = *((_DWORD *)v3 + 176);
      v137 = v70;
      v92 = (int)v71 * v86;
      *(double *)(v156 + 8LL * *((int *)v3 + 14)) = 1.0 / v79;
      v93 = v139 + 8 * v92;
      *(_DWORD *)(v151 + 4LL * *((int *)v3 + 15)) = v91;
      v94 = *((_DWORD *)v3 + 216);
      if ( (int)v70 < v94 )
      {
        v95 = v70;
        do
        {
          while ( 1 )
          {
            v96 = *(double *)(v93 + 8 * v95) * (1.0 / v79);
            *(double *)(v93 + 8 * v95) = v96;
            if ( fabs(v96) <= 1.0e-30 )
              break;
            v97 = v91++;
            *(_DWORD *)(v154 + 4 * v97) = *(_DWORD *)(v78 + 4 * v95++);
            *(double *)(v153 + 8 * v97) = v96;
            v94 = *((_DWORD *)v3 + 216);
            if ( (int)v95 >= v94 )
              goto LABEL_93;
          }
          ++v95;
        }
        while ( (int)v95 < v94 );
      }
LABEL_93:
      v98 = *((_DWORD *)v3 + 15);
      v99 = v83;
      *((_DWORD *)v3 + 176) = v91;
      ++v98;
      v100 = (int *)(4LL * v83 + v155);
      *((_DWORD *)v3 + 15) = v98;
      *(_DWORD *)(v151 + 4LL * v98) = v91;
      v101 = *v100;
      if ( (int)v71 > 0 )
      {
        v134 = v92;
        v102 = 0;
        do
        {
          v103 = *(double *)(v93 + 8 * v102);
          if ( fabs(v103) > 1.0e-30 )
          {
            v104 = v101++;
            *(_DWORD *)(v152 + 4 * v104) = *(_DWORD *)(v78 + 4 * v102);
            *(double *)(v163 + 8 * v104) = v103;
          }
          ++v102;
        }
        while ( (unsigned int)(v71 - 1) + 1LL != v102 );
        v92 = v134;
      }
      *(_DWORD *)(v157 + 4 * v99) = 0;
      *(_DWORD *)(v158 + 4 * v99) += v101 - *v100;
      *v100 = v101;
      v19 = *((int *)v3 + 216);
      v135 = 8 * v19;
      if ( v133 <= (int)v70 )
        break;
      v143 = 8 * v71;
      if ( (int)v19 <= (int)v70 )
      {
        v159 = v70 + 1;
        --v68;
      }
      else
      {
        v160 = v3;
        v146 = v139 + 8 * (v92 + v71 + 3);
        v105 = v93 + v148 + v135;
        v149 = v92 + v141;
        v145 = v139 + 8 * (v92 + v141);
        v159 = v70 + 1;
        v106 = v70;
        v107 = 8 * (v70 + 1 + (unsigned int)(v19 - 2 - v71));
        v108 = v19 - v71 - 1;
        v109 = v107;
        do
        {
          v110 = (double *)(v68 * 8 - 8 + v105);
          v111 = (__m128d)*(unsigned __int64 *)(v68 * 8 + v105 + v143 - 8);
          if ( (v105 >= v146 || v145 >= v105 + 16) && v108 > 8 )
          {
            v112 = v137;
            v113 = (v105 >> 3) & 1;
            if ( (int)v19 - 2 - v138 < 2 - (unsigned int)((_DWORD)v113 == 0) )
              goto LABEL_110;
            if ( (_DWORD)v113 )
            {
              v112 = v138 + 2;
              *(double *)v105 = *(double *)v105 - *(double *)(v93 + v148) * v111.m128d_f64[0];
            }
            v114 = v108 - v113;
            v115 = (v108 - (unsigned int)v113) >> 1;
            v116 = _mm_unpacklo_pd(v111, v111);
            v118 = 0;
            v119 = 0;
            do
            {
              ++v119;
              v117 = &v110[v141 + ((v105 >> 3) & 1)];
              *(__m128d *)&v117[v118] = _mm_sub_pd(
                                          *(__m128d *)&v117[v118],
                                          _mm_mul_pd(
                                            *(__m128d *)(v139 + 8 * (v149 + ((v105 >> 3) & 1)) + v118 * 8),
                                            v116));
              v118 += 2;
            }
            while ( v119 < v115 );
            v112 += v114 & 0xFFFFFFFE;
            if ( (v114 & 0xFFFFFFFE) != v114 )
            {
LABEL_110:
              v120 = v112;
              v121 = v112 + 1;
              v110[v120] = v110[v120] - *(double *)(v93 + 8 * v120) * v111.m128d_f64[0];
              if ( (int)v19 > v121 )
                v110[v121] = v110[v121] - v111.m128d_f64[0] * *(double *)(v93 + 8LL * v121);
            }
          }
          else
          {
            v125 = v148;
            do
            {
              *(double *)((char *)v110 + v125) = *(double *)((char *)v110 + v125)
                                               - *(double *)(v93 + v125) * v111.m128d_f64[0];
              v125 += 8;
            }
            while ( v109 != v125 );
          }
          ++v106;
          v105 += v135;
        }
        while ( v133 != v106 );
        v3 = v160;
        --v68;
      }
      ++*((_DWORD *)v3 + 14);
      v71 = v141;
      v70 = v159;
      v148 += 8;
    }
    ++*((_DWORD *)v3 + 14);
  }
  v126 = *((void **)v3 + 105);
  if ( v126 )
    operator delete[](v126);
  v127 = *((void **)v3 + 107);
  *((_QWORD *)v3 + 105) = 0;
  if ( v127 )
    operator delete[](v127);
  *((_QWORD *)v3 + 107) = 0;
  *((_DWORD *)v3 + 216) = 0;
  return 0;
}

