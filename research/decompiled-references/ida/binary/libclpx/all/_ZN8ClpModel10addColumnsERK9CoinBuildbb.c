__int64 __fastcall ClpModel::addColumns(
        ClpModel *this,
        const CoinBuild *a2,
        char a3,
        char a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v8; // ebx
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  double *v13; // r14
  double *v14; // r15
  int v15; // ebx
  int v16; // ebp
  int v17; // r13d
  double *v18; // r12
  int v19; // eax
  double *v20; // rcx
  char v21; // si
  int i; // edx
  int v23; // ebp
  double *v24; // r15
  double *v25; // r14
  double *v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  int v30; // r12d
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  char *v33; // r12
  int v34; // eax
  int v35; // r14d
  __int64 v36; // r11
  const int *v37; // rdi
  double *v38; // rsi
  unsigned int v39; // r8d
  char v40; // bp
  const int *v41; // rdx
  const int *v42; // r10
  __int64 v43; // rax
  char *v44; // r13
  int v45; // edi
  char *v46; // rax
  __int64 v47; // rbx
  char *v48; // rcx
  unsigned __int64 v49; // rdx
  int *v50; // r9
  char *v51; // rbp
  int *v52; // r12
  char *v53; // rbx
  int v54; // r13d
  int v55; // edx
  char *v56; // rax
  unsigned __int64 v57; // rax
  char *v58; // r9
  char *v59; // rcx
  char *v60; // rbp
  char *v61; // r13
  void *v62; // rbx
  char *v63; // r12
  int v64; // r14d
  int v65; // edx
  char *v66; // rax
  __int64 v67; // rdi
  ClpPlusMinusOneMatrix *v68; // rbx
  unsigned __int64 v69; // rbx
  unsigned __int64 v70; // rdi
  _DWORD *v71; // r14
  char *v72; // r13
  int v73; // eax
  const int *v74; // r8
  __int64 v75; // rdx
  int *v76; // rdi
  bool v77; // r10
  unsigned int v78; // esi
  __m128i *v79; // rdx
  const __m128i *v80; // rcx
  __int64 v81; // rsi
  __m128i v82; // xmm1
  __m128i v83; // xmm0
  __int64 v84; // rsi
  const double *v85; // rdi
  char *v86; // r8
  char *v87; // rcx
  const double *v88; // rdx
  __int64 v89; // r9
  const double *v90; // rsi
  __int64 v91; // xmm0_8
  __int64 v92; // r9
  int *v93; // rdx
  const int *v94; // rcx
  int v95; // eax
  int *v96; // r12
  char *v97; // rbx
  int v98; // r13d
  int v99; // edx
  char *v100; // rax
  int v101; // edi
  int v102; // edx
  char *v103; // rax
  char *v104; // rax
  char *v105; // rbp
  char *v106; // r13
  char *v107; // r12
  char *v108; // rbx
  int v109; // r14d
  int v110; // edx
  char *v111; // rax
  char *v112; // rbp
  int v113; // edi
  int v114; // edx
  char *v115; // rax
  char *v116; // rax
  char *v117; // rax
  int v118; // esi
  int v121; // [rsp+24h] [rbp-F4h]
  void *v122; // [rsp+28h] [rbp-F0h]
  _DWORD *v123; // [rsp+28h] [rbp-F0h]
  int v124; // [rsp+30h] [rbp-E8h]
  char *v125; // [rsp+30h] [rbp-E8h]
  char v126; // [rsp+40h] [rbp-D8h]
  double *v127; // [rsp+48h] [rbp-D0h]
  int v128; // [rsp+48h] [rbp-D0h]
  double *v129; // [rsp+50h] [rbp-C8h]
  double *v130; // [rsp+58h] [rbp-C0h]
  double *v131; // [rsp+60h] [rbp-B8h]
  double *v133; // [rsp+68h] [rbp-B0h]
  double *v135; // [rsp+70h] [rbp-A8h]
  char *v136; // [rsp+78h] [rbp-A0h]
  int *srcd; // [rsp+80h] [rbp-98h]
  char *src; // [rsp+80h] [rbp-98h]
  char *srca; // [rsp+80h] [rbp-98h]
  int srcb; // [rsp+80h] [rbp-98h]
  int srcc; // [rsp+80h] [rbp-98h]
  int *v142; // [rsp+88h] [rbp-90h]
  int *v143; // [rsp+90h] [rbp-88h]
  __int64 v144; // [rsp+A0h] [rbp-78h]
  unsigned int v145; // [rsp+A0h] [rbp-78h]
  unsigned int v146; // [rsp+A0h] [rbp-78h]
  char *v147; // [rsp+A0h] [rbp-78h]
  char *v148; // [rsp+A0h] [rbp-78h]
  char *v149; // [rsp+A0h] [rbp-78h]
  unsigned int v150; // [rsp+A8h] [rbp-70h]
  char *v151; // [rsp+A8h] [rbp-70h]
  unsigned int v152; // [rsp+A8h] [rbp-70h]
  unsigned int v153; // [rsp+A8h] [rbp-70h]
  char *v154; // [rsp+B0h] [rbp-68h]
  __int64 v155; // [rsp+B0h] [rbp-68h]
  char *v156; // [rsp+B0h] [rbp-68h]
  char *v157; // [rsp+B0h] [rbp-68h]
  int *v158; // [rsp+B8h] [rbp-60h]
  char *v159; // [rsp+C0h] [rbp-58h]
  __int64 v160; // [rsp+C0h] [rbp-58h]
  char *v161; // [rsp+C8h] [rbp-50h]
  const __m128i *v162; // [rsp+D0h] [rbp-48h] BYREF
  const double *v163[8]; // [rsp+D8h] [rbp-40h] BYREF

  v8 = *((_DWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 10) == 1 )
    v8 = *(_DWORD *)a2;
  v126 = a4;
  v121 = v8;
  if ( v8 )
  {
    if ( (unsigned __int64)v8 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_160;
    v9 = 8LL * v8;
    v129 = (double *)operator new[](v9);
    v130 = (double *)operator new[](v9);
    v11 = operator new[](v9);
    v12 = *((_QWORD *)this + 24);
    v131 = (double *)v11;
    if ( v12 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) || !a3 )
      goto LABEL_87;
    if ( v121 > 0 )
    {
      v13 = v129;
      v14 = v130;
      a6 = 0.0;
      a8 = NAN;
      v15 = 0;
      a7 = 1.0;
      v16 = 0;
      v17 = 0;
      v18 = v131;
      while ( 1 )
      {
        v19 = CoinBuild::column(a2, v15, v13, v14, v18, (const int **)&v162, v163);
        if ( v16 < v19 )
          v16 = v19;
        if ( v19 > 0 )
          break;
LABEL_35:
        ++v15;
        ++v13;
        ++v14;
        ++v18;
        if ( v121 == v15 )
        {
          v30 = v17;
          goto LABEL_37;
        }
      }
      v20 = (double *)v163[0];
      v21 = a3;
      for ( i = 1; ; ++i )
      {
        a5 = *v20;
        if ( *v20 != 0.0 )
        {
          a5 = fabs(a5);
          if ( a5 != 1.0 )
          {
            if ( i >= v19 )
              goto LABEL_87;
            v21 = 0;
            goto LABEL_16;
          }
          ++v17;
        }
        if ( v19 <= i )
        {
          if ( v21 )
            goto LABEL_35;
LABEL_87:
          v69 = *((int *)a2 + 2);
          v70 = v121 + 1;
          if ( v70 <= 0x1FFFFFFFFFFFFFFELL )
          {
            v71 = (_DWORD *)operator new[](4 * v70);
            v123 = v71;
            if ( v69 <= 0x1FFFFFFFFFFFFFFELL )
            {
              v72 = (char *)operator new[](4 * v69);
              v125 = (char *)operator new[](8 * v69);
              *v71 = 0;
              if ( v121 > 0 )
              {
                v24 = v129;
                v25 = v130;
                v26 = v131;
                v27 = 0;
                v23 = 0;
                do
                {
                  v73 = CoinBuild::column(a2, v27, v24, v25, v26, (const int **)&v162, v163);
                  v74 = (const int *)v162;
                  v75 = 4LL * v23;
                  v76 = (int *)&v72[v75];
                  v77 = v73 == 0;
                  if ( &v72[v75] != (char *)v162 && v73 )
                  {
                    v78 = v73 >> 3;
                    if ( v73 >> 3 > 0 )
                    {
                      if ( (v76 >= v162[2].m128i_i32 || v162 >= (const __m128i *)&v72[v75 + 32]) && v78 > 1 )
                      {
                        v79 = (__m128i *)&v72[v75];
                        v80 = v162;
                        v81 = v78 - 1;
                        do
                        {
                          v82 = _mm_loadu_si128(v80);
                          v79 += 2;
                          v80 += 2;
                          v83 = _mm_loadu_si128(v80 - 1);
                          v79[-2] = v82;
                          v79[-1] = v83;
                        }
                        while ( v79 != (__m128i *)&v76[8 * v81 + 8] );
                      }
                      else
                      {
                        v93 = (int *)&v72[v75];
                        v94 = (const int *)v162;
                        v128 = v73;
                        v81 = v78 - 1;
                        do
                        {
                          v95 = *v94;
                          v93 += 8;
                          v94 += 8;
                          *(v93 - 8) = v95;
                          *(v93 - 7) = *(v94 - 7);
                          *(v93 - 6) = *(v94 - 6);
                          *(v93 - 5) = *(v94 - 5);
                          *(v93 - 4) = *(v94 - 4);
                          *(v93 - 3) = *(v94 - 3);
                          *(v93 - 2) = *(v94 - 2);
                          *(v93 - 1) = *(v94 - 1);
                        }
                        while ( &v76[8 * v81 + 8] != v93 );
                        v73 = v128;
                      }
                      v84 = 32 * ((int)v81 + 1LL);
                      v74 = (const int *)((char *)v74 + v84);
                      v76 = (int *)((char *)v76 + v84);
                    }
                    switch ( v73 % 8 )
                    {
                      case 1:
                        goto LABEL_106;
                      case 2:
                        goto LABEL_105;
                      case 3:
                        goto LABEL_104;
                      case 4:
                        goto LABEL_103;
                      case 5:
                        goto LABEL_102;
                      case 6:
                        goto LABEL_101;
                      case 7:
                        v76[6] = v74[6];
LABEL_101:
                        v76[5] = v74[5];
LABEL_102:
                        v76[4] = v74[4];
LABEL_103:
                        v76[3] = v74[3];
LABEL_104:
                        v76[2] = v74[2];
LABEL_105:
                        v76[1] = v74[1];
LABEL_106:
                        *v76 = *v74;
                        break;
                      default:
                        break;
                    }
                  }
                  v85 = v163[0];
                  v86 = &v125[8 * v23];
                  if ( v86 != (char *)v163[0] && !v77 )
                  {
                    if ( v73 >> 3 > 0 )
                    {
                      v87 = &v125[8 * v23];
                      v88 = v163[0];
                      v89 = (unsigned int)((v73 >> 3) - 1);
                      v90 = &v163[0][8 * v89 + 8];
                      do
                      {
                        v91 = *(_QWORD *)v88;
                        v88 += 8;
                        v87 += 64;
                        *((_QWORD *)v87 - 8) = v91;
                        *((double *)v87 - 7) = *(v88 - 7);
                        *((double *)v87 - 6) = *(v88 - 6);
                        *((double *)v87 - 5) = *(v88 - 5);
                        *((double *)v87 - 4) = *(v88 - 4);
                        *((double *)v87 - 3) = *(v88 - 3);
                        *((double *)v87 - 2) = *(v88 - 2);
                        *((double *)v87 - 1) = *(v88 - 1);
                      }
                      while ( v88 != v90 );
                      v92 = ((int)v89 + 1LL) << 6;
                      v85 = (const double *)((char *)v85 + v92);
                      v86 += v92;
                    }
                    switch ( v73 % 8 )
                    {
                      case 1:
                        goto LABEL_27;
                      case 2:
                        goto LABEL_26;
                      case 3:
                        goto LABEL_25;
                      case 4:
                        goto LABEL_24;
                      case 5:
                        goto LABEL_23;
                      case 6:
                        goto LABEL_22;
                      case 7:
                        *((double *)v86 + 6) = v85[6];
LABEL_22:
                        *((double *)v86 + 5) = v85[5];
LABEL_23:
                        *((double *)v86 + 4) = v85[4];
LABEL_24:
                        *((double *)v86 + 3) = v85[3];
LABEL_25:
                        *((double *)v86 + 2) = v85[2];
LABEL_26:
                        *((double *)v86 + 1) = v85[1];
LABEL_27:
                        *(double *)v86 = *v85;
                        break;
                      default:
                        break;
                    }
                  }
                  v23 += v73;
                  ++v24;
                  ++v25;
                  ++v26;
                  v123[++v27] = v23;
                }
                while ( v27 != (unsigned int)(v121 - 1) + 1LL );
              }
              ClpModel::addColumns(this, v121, v129, v130, v131, nullptr);
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 192LL))(
                *((_QWORD *)this + 24),
                *((unsigned int *)this + 26),
                0xFFFFFFFFLL);
              v28 = 0xFFFFFFFFLL;
              if ( a4 )
                v28 = *((unsigned int *)this + 26);
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, char *, char *, __int64))(**((_QWORD **)this + 24)
                                                                                                 + 120LL))(
                *((_QWORD *)this + 24),
                (unsigned int)v121,
                1,
                v123,
                v72,
                v125,
                v28);
              operator delete[](v123);
              operator delete[](v72);
              operator delete[](v125);
              goto LABEL_32;
            }
          }
LABEL_160:
          __cxa_throw_bad_array_new_length();
        }
LABEL_16:
        ++v20;
      }
    }
    v16 = 0;
    v30 = 0;
LABEL_37:
    ClpModel::addColumns(this, v121, v129, v130, v131, nullptr);
    if ( a4 )
    {
      v117 = (char *)operator new[](*((int *)this + 26));
      v118 = *((_DWORD *)this + 26);
      v136 = v117;
      if ( v118 )
        sub_8F680(v117, v118);
    }
    else
    {
      v136 = nullptr;
    }
    v31 = v121 + 1;
    if ( v31 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_160;
    v32 = 4 * v31;
    v142 = (int *)operator new[](v32);
    v143 = (int *)operator new[](v32 - 4);
    v158 = (int *)operator new[](4LL * v30);
    v33 = (char *)operator new[](4LL * v16);
    *v142 = 0;
    if ( v121 > 0 )
    {
      v122 = nullptr;
      v124 = 0;
      v133 = v129;
      v127 = v130;
      v135 = v131;
      do
      {
        v34 = CoinBuild::column(a2, (int)v122, v133, v127, v135, (const int **)&v162, v163);
        v35 = v124;
        v36 = v124;
        if ( v34 <= 0 )
        {
          v35 = v124;
          v44 = (char *)&v158[v36];
          v39 = 0;
          goto LABEL_82;
        }
        v37 = (const int *)v162;
        v38 = (double *)v163[0];
        v39 = 0;
        v40 = v126;
        v41 = &v162->m128i_i32[1];
        v42 = &v162->m128i_i32[v34 - 1 + 1];
        while ( 1 )
        {
          v45 = *v37;
          if ( v40 )
          {
            if ( *((_DWORD *)this + 26) <= v45 )
            {
              v40 = 0;
            }
            else
            {
              v46 = &v136[v45];
              if ( !*v46 )
                *v46 = 1;
            }
          }
          a5 = *v38;
          v43 = v35;
          v47 = 4LL * (int)v39;
          v44 = (char *)&v158[v43];
          v48 = &v33[v47];
          if ( *v38 == 1.0 )
          {
            ++v43;
            *(_DWORD *)v44 = v45;
            ++v35;
            v44 = (char *)&v158[v43];
            goto LABEL_45;
          }
          if ( a5 == -1.0 )
            break;
LABEL_45:
          ++v38;
          v37 = v41;
          if ( v41 == v42 )
            goto LABEL_54;
LABEL_46:
          ++v41;
        }
        v47 += 4;
        ++v39;
        ++v38;
        *(_DWORD *)v48 = v45;
        v48 = &v33[v47];
        v37 = v41;
        if ( v41 != v42 )
          goto LABEL_46;
LABEL_54:
        v126 = v40;
        v124 = v35 + v39;
        if ( v44 == (char *)&v158[v36] )
          goto LABEL_68;
        v154 = v48;
        v150 = v39;
        v144 = v43 * 4 - v36 * 4;
        srcd = &v158[v36];
        _BitScanReverse64(&v49, (v43 * 4 - v36 * 4) >> 2);
        sub_98A50((char *)&v158[v36], v44, 2 * (63LL - (int)(v49 ^ 0x3F)));
        v50 = srcd;
        v39 = v150;
        v48 = v154;
        src = (char *)(srcd + 1);
        v51 = src;
        if ( v144 > 64 )
        {
          v156 = v33;
          v160 = v47;
          v148 = v44;
          v161 = v48;
          v96 = v50;
          v97 = (char *)(v50 + 16);
          do
          {
            while ( 1 )
            {
              v98 = *(_DWORD *)v51;
              if ( *(_DWORD *)v51 < *v96 )
                break;
              v99 = *((_DWORD *)v51 - 1);
              v100 = v51 - 4;
              if ( v99 > v98 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v100 + 1) = v99;
                  v99 = *((_DWORD *)v100 - 1);
                  if ( v98 >= v99 )
                    break;
                  v100 -= 4;
                }
              }
              else
              {
                v100 = v51;
              }
              v51 += 4;
              *(_DWORD *)v100 = v98;
              if ( v97 == v51 )
                goto LABEL_128;
            }
            if ( v51 != (char *)v96 )
              memmove(src, v96, v51 - (char *)v96);
            v51 += 4;
            *v96 = v98;
          }
          while ( v97 != v51 );
LABEL_128:
          v44 = v148;
          v39 = v150;
          v33 = v156;
          v47 = v160;
          v48 = v161;
          if ( v51 != v148 )
          {
            v101 = *(_DWORD *)v51;
            v102 = *((_DWORD *)v51 - 1);
            v103 = v51 - 4;
            if ( *(_DWORD *)v51 >= v102 )
              goto LABEL_135;
            while ( 1 )
            {
              while ( 1 )
              {
                *((_DWORD *)v103 + 1) = v102;
                v102 = *((_DWORD *)v103 - 1);
                if ( v101 >= v102 )
                  break;
                v103 -= 4;
              }
              v51 += 4;
              *(_DWORD *)v103 = v101;
              if ( v51 == v148 )
                break;
LABEL_134:
              v101 = *(_DWORD *)v51;
              v102 = *((_DWORD *)v51 - 1);
              v103 = v51 - 4;
              if ( *(_DWORD *)v51 >= v102 )
              {
LABEL_135:
                v104 = v51;
                v51 += 4;
                *(_DWORD *)v104 = v101;
                if ( v51 == v148 )
                  break;
                goto LABEL_134;
              }
            }
          }
        }
        else if ( src != v44 )
        {
          v151 = v33;
          v155 = v47;
          v52 = v50;
          v145 = v39;
          v53 = v44;
          v159 = v48;
          do
          {
            while ( 1 )
            {
              v54 = *(_DWORD *)v51;
              if ( *(_DWORD *)v51 < *v52 )
                break;
              v55 = *((_DWORD *)v51 - 1);
              v56 = v51 - 4;
              if ( v54 < v55 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v56 + 1) = v55;
                  v55 = *((_DWORD *)v56 - 1);
                  if ( v54 >= v55 )
                    break;
                  v56 -= 4;
                }
              }
              else
              {
                v56 = v51;
              }
              v51 += 4;
              *(_DWORD *)v56 = v54;
              if ( v51 == v53 )
                goto LABEL_67;
            }
            if ( v51 != (char *)v52 )
              memmove(src, v52, v51 - (char *)v52);
            v51 += 4;
            *v52 = v54;
          }
          while ( v51 != v53 );
LABEL_67:
          v44 = v53;
          v39 = v145;
          v33 = v151;
          v47 = v155;
          v48 = v159;
        }
LABEL_68:
        if ( v33 != v48 )
        {
          v146 = v39;
          _BitScanReverse64(&v57, v47 >> 2);
          srca = v48;
          sub_98A50(v33, v48, 2 * (63LL - (int)(v57 ^ 0x3F)));
          v58 = v33 + 4;
          v59 = srca;
          v39 = v146;
          if ( v47 <= 64 )
          {
            if ( v58 != srca )
            {
              v147 = v44;
              v60 = v33;
              srcb = v35;
              v152 = v39;
              v61 = v59;
              v62 = v33 + 4;
              v63 = v33 + 4;
              do
              {
                while ( 1 )
                {
                  v64 = *(_DWORD *)v63;
                  if ( *(_DWORD *)v63 < *(_DWORD *)v60 )
                    break;
                  v65 = *((_DWORD *)v63 - 1);
                  v66 = v63 - 4;
                  if ( v65 > v64 )
                  {
                    while ( 1 )
                    {
                      *((_DWORD *)v66 + 1) = v65;
                      v65 = *((_DWORD *)v66 - 1);
                      if ( v64 >= v65 )
                        break;
                      v66 -= 4;
                    }
                  }
                  else
                  {
                    v66 = v63;
                  }
                  v63 += 4;
                  *(_DWORD *)v66 = v64;
                  if ( v63 == v61 )
                    goto LABEL_81;
                }
                if ( v63 != v60 )
                  memmove(v62, v60, v63 - v60);
                v63 += 4;
                *(_DWORD *)v60 = v64;
              }
              while ( v63 != v61 );
LABEL_81:
              v35 = srcb;
              v44 = v147;
              v33 = v60;
              v39 = v152;
            }
            goto LABEL_82;
          }
          v149 = v44;
          v105 = v33;
          srcc = v35;
          v153 = v39;
          v106 = v33 + 4;
          v107 = v33 + 64;
          v157 = v59;
          v108 = v58;
          do
          {
            while ( 1 )
            {
              v109 = *(_DWORD *)v106;
              if ( *(_DWORD *)v106 < *(_DWORD *)v105 )
                break;
              v110 = *((_DWORD *)v106 - 1);
              v111 = v106 - 4;
              if ( v109 < v110 )
              {
                while ( 1 )
                {
                  *((_DWORD *)v111 + 1) = v110;
                  v110 = *((_DWORD *)v111 - 1);
                  if ( v109 >= v110 )
                    break;
                  v111 -= 4;
                }
              }
              else
              {
                v111 = v106;
              }
              v106 += 4;
              *(_DWORD *)v111 = v109;
              if ( v107 == v106 )
                goto LABEL_147;
            }
            if ( v106 != v105 )
              memmove(v108, v105, v106 - v105);
            v106 += 4;
            *(_DWORD *)v105 = v109;
          }
          while ( v107 != v106 );
LABEL_147:
          v33 = v105;
          v112 = v106;
          v35 = srcc;
          v39 = v153;
          v44 = v149;
          if ( v112 != v157 )
          {
            v113 = *(_DWORD *)v112;
            v114 = *((_DWORD *)v112 - 1);
            v115 = v112 - 4;
            if ( v114 > *(_DWORD *)v112 )
              goto LABEL_151;
LABEL_154:
            v116 = v112;
            v112 += 4;
            for ( *(_DWORD *)v116 = v113; v112 != v157; *(_DWORD *)v115 = v113 )
            {
              v113 = *(_DWORD *)v112;
              v114 = *((_DWORD *)v112 - 1);
              v115 = v112 - 4;
              if ( v114 <= *(_DWORD *)v112 )
                goto LABEL_154;
LABEL_151:
              while ( 1 )
              {
                *((_DWORD *)v115 + 1) = v114;
                v114 = *((_DWORD *)v115 - 1);
                if ( v113 >= v114 )
                  break;
                v115 -= 4;
              }
              v112 += 4;
            }
          }
        }
LABEL_82:
        v143[(_QWORD)v122] = v35;
        CoinMemcpyN<int>(v33, v39, v44);
        ++v133;
        ++v127;
        v142[(_QWORD)v122 + 1] = v124;
        ++v135;
        v122 = (char *)v122 + 1;
      }
      while ( v122 != (void *)((unsigned int)(v121 - 1) + 1LL) );
    }
    operator delete[](v33);
    v67 = *((_QWORD *)this + 24);
    if ( v67 )
      (*(void (__fastcall **)(__int64, double, double, double, double))(*(_QWORD *)v67 + 480LL))(v67, a5, a6, a7, a8);
    v68 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
    ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v68);
    ClpPlusMinusOneMatrix::passInCopy(v68, *((_DWORD *)this + 26), v121, 1, v158, v142, v143);
    *((_QWORD *)this + 24) = v68;
    if ( v136 )
      operator delete[](v136);
LABEL_32:
    operator delete[](v131);
    operator delete[](v129);
    operator delete[](v130);
  }
  ClpModel::synchronizeMatrix(this);
  return 0;
}

