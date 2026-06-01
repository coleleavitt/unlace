__int64 __fastcall ClpModel::addRows(
        ClpModel *this,
        const CoinBuild *a2,
        char a3,
        char a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v9; // ebx
  int v10; // esi
  char v12; // r12
  char v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  double *v18; // r14
  double *v19; // r15
  __int64 v20; // rbx
  int v21; // ebp
  double *v22; // r12
  double *v23; // rcx
  double *v24; // rdx
  __int64 v25; // r14
  unsigned int v26; // r13d
  __int64 v27; // rdi
  double *v29; // r13
  int v30; // ebp
  double *v31; // r12
  int v32; // ebx
  int v33; // eax
  double *v34; // rcx
  char v35; // si
  int i; // edx
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  int *v40; // rbp
  int *v41; // r12
  __int64 v42; // rax
  int v43; // esi
  int v44; // edi
  int v45; // ebx
  int v46; // r14d
  int *v47; // r11
  int v48; // r15d
  int v49; // eax
  int *v50; // r8
  double *v51; // rcx
  int *v52; // rsi
  int *v53; // rdx
  int *v54; // rdi
  __int64 v55; // rax
  _BYTE *v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  int *v59; // r8
  __int64 v60; // rcx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // edx
  int v65; // ebx
  int *v66; // r15
  double *v67; // rbp
  double *v68; // r14
  int v69; // eax
  __int64 v70; // rcx
  int *v71; // rdi
  double *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rcx
  int *v75; // r8
  int v76; // edx
  __int64 v77; // rdx
  unsigned __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rbx
  double *v82; // rbx
  __int64 v83; // r15
  __int64 v84; // r14
  char *v85; // r12
  __int64 v86; // rax
  char *v87; // rbp
  __int64 v88; // r14
  char *v89; // rdi
  char *v90; // r13
  unsigned __int64 v91; // rax
  char *v92; // r14
  char *v93; // rbx
  char *v94; // r12
  int v95; // ebp
  int v96; // edx
  char *v97; // rax
  __int64 v98; // rax
  unsigned int *v99; // r12
  unsigned int *v100; // r13
  unsigned __int64 v101; // rdx
  unsigned int *v102; // r14
  unsigned int *v103; // rbx
  char *v104; // r12
  signed int v105; // ebp
  signed int v106; // edx
  unsigned int *v107; // rax
  int v108; // eax
  __int64 v109; // rdi
  ClpPlusMinusOneMatrix *v110; // rbx
  char *v111; // rbx
  unsigned int *v112; // r12
  signed int v113; // ebp
  int v114; // edx
  unsigned int *v115; // rax
  unsigned int *v116; // rax
  signed int v117; // edx
  unsigned int *v118; // rax
  char *v119; // r14
  char *v120; // rbx
  char *v121; // r12
  int v122; // ebp
  char *v123; // rcx
  int v124; // edi
  int v125; // edx
  char *v126; // rax
  char *v127; // rax
  int v128; // edx
  char *v129; // rax
  int v130; // r8d
  int *v131; // rax
  __int64 v132; // rdx
  int *v133; // rax
  __int64 v134; // rcx
  int *v135; // rax
  int *v136; // rax
  double *v137; // rax
  int v138; // esi
  int v139; // [rsp+Ch] [rbp-BCh]
  CoinBuild *v141; // [rsp+10h] [rbp-B8h]
  int v143; // [rsp+20h] [rbp-A8h]
  __int64 v144; // [rsp+20h] [rbp-A8h]
  double *v145; // [rsp+20h] [rbp-A8h]
  unsigned int *v146; // [rsp+20h] [rbp-A8h]
  char *v147; // [rsp+20h] [rbp-A8h]
  int **v148; // [rsp+30h] [rbp-98h]
  double *v149; // [rsp+38h] [rbp-90h]
  double *v150; // [rsp+38h] [rbp-90h]
  double *v151; // [rsp+38h] [rbp-90h]
  double *v152; // [rsp+38h] [rbp-90h]
  double *v153; // [rsp+38h] [rbp-90h]
  double *v155; // [rsp+40h] [rbp-88h]
  double *v156; // [rsp+40h] [rbp-88h]
  double *v157; // [rsp+48h] [rbp-80h]
  char v158; // [rsp+48h] [rbp-80h]
  double *v159; // [rsp+48h] [rbp-80h]
  char v160; // [rsp+50h] [rbp-78h]
  int v161; // [rsp+50h] [rbp-78h]
  int v162; // [rsp+58h] [rbp-70h]
  int *v163; // [rsp+60h] [rbp-68h]
  double *v164; // [rsp+68h] [rbp-60h]
  double *v165; // [rsp+70h] [rbp-58h]
  int *v166; // [rsp+78h] [rbp-50h]
  int *v167; // [rsp+80h] [rbp-48h] BYREF
  double *v168[8]; // [rsp+88h] [rbp-40h] BYREF

  v9 = *((_DWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 1);
  if ( !v9 )
    v10 = *(_DWORD *)a2;
  v139 = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)v10 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_201;
    v12 = a4;
    v13 = a4;
    v164 = (double *)operator new[](8LL * v10);
    v14 = operator new[](8LL * v10);
    v15 = *((_QWORD *)this + 24);
    v165 = (double *)v14;
    if ( v15 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15) || !a3 )
      goto LABEL_7;
    if ( v10 > 0 )
    {
      a8 = NAN;
      v158 = v13;
      v29 = v164;
      v160 = v12;
      v30 = 0;
      v31 = v165;
      v32 = 0;
LABEL_20:
      v33 = CoinBuild::row(a2, v30, v29, v31, (const int **)&v167, (const double **)v168);
      a6 = 0.0;
      a7 = 1.0;
      if ( v33 <= 0 )
        goto LABEL_30;
      v34 = v168[0];
      v35 = a3;
      for ( i = 1; ; ++i )
      {
        a5 = *v34;
        if ( *v34 != 0.0 )
        {
          a5 = fabs(a5);
          if ( a5 != 1.0 )
          {
            if ( v33 <= i )
              goto LABEL_7;
            v35 = 0;
            goto LABEL_24;
          }
          ++v32;
        }
        if ( v33 <= i )
        {
          if ( v35 )
          {
LABEL_30:
            ++v30;
            ++v29;
            ++v31;
            if ( v139 == v30 )
            {
              v13 = v158;
              v12 = v160;
              goto LABEL_32;
            }
            goto LABEL_20;
          }
LABEL_7:
          v16 = *((int *)a2 + 2);
          v17 = v139 + 1;
          if ( v17 <= 0x1FFFFFFFFFFFFFFELL )
          {
            v18 = (double *)operator new[](4 * v17);
            v149 = v18;
            if ( v16 <= 0x1FFFFFFFFFFFFFFELL )
            {
              v155 = (double *)operator new[](4 * v16);
              v157 = (double *)operator new[](8 * v16);
              *(_DWORD *)v18 = 0;
              if ( v139 > 0 )
              {
                v19 = v165;
                v20 = 0;
                v21 = 0;
                v22 = v164;
                do
                {
                  v23 = v19;
                  v24 = v22;
                  v25 = v21;
                  ++v22;
                  ++v19;
                  v26 = CoinBuild::row(a2, v20, v24, v23, (const int **)&v167, (const double **)v168);
                  v21 += v26;
                  CoinMemcpyN<int>(v167, v26, (char *)v155 + 4 * v25);
                  CoinMemcpyN<double>(v168[0], v26, &v157[v25]);
                  *((_DWORD *)v149 + ++v20) = v21;
                }
                while ( (unsigned int)(v139 - 1) + 1LL != v20 );
              }
              v27 = *((_QWORD *)this + 24);
              if ( v27 )
                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 192LL))(
                  v27,
                  0xFFFFFFFFLL,
                  *((unsigned int *)this + 27));
              ClpModel::addRows(this, v139, v164, v165, (const int *)v149, (const int *)v155, v157);
              operator delete[](v149);
              operator delete[](v155);
              operator delete[](v157);
              v139 = 0;
              goto LABEL_15;
            }
          }
LABEL_201:
          __cxa_throw_bad_array_new_length();
        }
LABEL_24:
        ++v34;
      }
    }
    v32 = 0;
LABEL_32:
    if ( v12 )
    {
      v137 = (double *)operator new[](*((int *)this + 27));
      v138 = *((_DWORD *)this + 27);
      v159 = v137;
      if ( v138 )
        sub_8F680(v137, v138);
    }
    else
    {
      v159 = nullptr;
    }
    ClpModel::addRows(this, v139, v164, v165, nullptr);
    v37 = *((_DWORD *)this + 27) + 1;
    if ( v37 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_201;
    v38 = operator new[](4 * v37);
    v39 = *((int *)this + 27);
    v40 = (int *)v38;
    if ( v39 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_201;
    v41 = (int *)operator new[](4 * v39);
    v42 = operator new[](4LL * v32);
    v43 = *((_DWORD *)this + 27);
    v166 = (int *)v42;
    v44 = v43;
    if ( v43 )
    {
      v130 = v43 / 8;
      if ( v43 / 8 > 0 )
      {
        a5 = 0.0;
        v131 = v40;
        v132 = (unsigned int)(v130 - 1);
        do
        {
          *(_OWORD *)v131 = 0;
          v131 += 8;
          *((_OWORD *)v131 - 1) = 0;
        }
        while ( &v40[8 * v132 + 8] != v131 );
        v133 = &v40[8 * (int)v132 + 8];
        v134 = (unsigned int)(v43 % 8);
        switch ( (int)v134 )
        {
          case 1:
            goto LABEL_161;
          case 2:
            goto LABEL_179;
          case 3:
            goto LABEL_181;
          case 4:
            goto LABEL_183;
          case 5:
            goto LABEL_188;
          case 6:
            goto LABEL_190;
          case 7:
            goto LABEL_192;
          default:
            goto LABEL_163;
        }
      }
      v134 = (unsigned int)(v43 % 8);
      switch ( (int)v134 )
      {
        case 1:
          v133 = v40;
          goto LABEL_161;
        case 2:
          v133 = v40;
          goto LABEL_179;
        case 3:
          v133 = v40;
          goto LABEL_181;
        case 4:
          v133 = v40;
          goto LABEL_183;
        case 5:
          v133 = v40;
          goto LABEL_188;
        case 6:
          v133 = v40;
          goto LABEL_190;
        case 7:
          v133 = v40;
LABEL_192:
          v133[6] = 0;
          v134 = 7;
LABEL_190:
          v133[5] = 0;
LABEL_188:
          v133[4] = 0;
LABEL_183:
          v133[3] = 0;
LABEL_181:
          v133[2] = 0;
LABEL_179:
          v133[1] = 0;
LABEL_161:
          *v133 = 0;
          if ( v130 <= 0 )
          {
            v136 = v41;
          }
          else
          {
            LODWORD(v132) = v130 - 1;
LABEL_163:
            a5 = 0.0;
            v135 = v41;
            do
            {
              *(_OWORD *)v135 = 0;
              v135 += 8;
              *((_OWORD *)v135 - 1) = 0;
            }
            while ( &v41[8 * (unsigned int)v132 + 8] != v135 );
            v136 = &v41[8 * (unsigned int)v132 + 8];
          }
          switch ( v134 )
          {
            case 1LL:
              goto LABEL_173;
            case 2LL:
              goto LABEL_172;
            case 3LL:
              goto LABEL_171;
            case 4LL:
              goto LABEL_170;
            case 5LL:
              goto LABEL_169;
            case 6LL:
              goto LABEL_168;
            case 7LL:
              v136[6] = 0;
LABEL_168:
              v136[5] = 0;
LABEL_169:
              v136[4] = 0;
LABEL_170:
              v136[3] = 0;
LABEL_171:
              v136[2] = 0;
LABEL_172:
              v136[1] = 0;
LABEL_173:
              *v136 = 0;
              break;
            default:
              goto LABEL_174;
          }
          break;
        default:
          break;
      }
LABEL_174:
      if ( v139 > 0 )
        goto LABEL_38;
      v59 = &v40[v43];
      if ( v43 > 0 )
      {
        v48 = 0;
        v161 = 0;
        goto LABEL_58;
      }
    }
    else
    {
      if ( v139 > 0 )
      {
LABEL_38:
        v45 = -1;
        v46 = 0;
        v150 = v165;
        v47 = v41;
        v48 = 0;
        v156 = v164;
        while ( 1 )
        {
          v163 = v47;
          v49 = CoinBuild::row(a2, v46, v156, v150, (const int **)&v167, (const double **)v168);
          a6 = 1.0;
          a7 = -1.0;
          v47 = v163;
          if ( v49 <= 0 )
            goto LABEL_56;
          v50 = v167;
          v51 = v168[0];
          v52 = v167 + 1;
          v53 = v167;
          v54 = &v167[v49 - 1 + 1];
          do
          {
            while ( 1 )
            {
              v55 = *v53;
              if ( v13 )
              {
                if ( *((_DWORD *)this + 27) > (int)v55 )
                {
                  ++v48;
                  v13 = 0;
                }
                else
                {
                  v56 = (char *)v159 + (int)v55;
                  if ( *v56 )
                    ++v48;
                  else
                    *v56 = 1;
                }
              }
              a5 = *v51;
              if ( v45 < (int)v55 )
                v45 = v55;
              if ( a5 != 1.0 )
                break;
              ++v40[v55];
LABEL_42:
              ++v53;
              ++v51;
              if ( v54 == v53 )
                goto LABEL_52;
            }
            if ( a5 != -1.0 )
              goto LABEL_42;
            ++v53;
            ++v163[v55];
            ++v51;
          }
          while ( v54 != v53 );
LABEL_52:
          if ( v13 )
          {
            while ( 1 )
            {
              v57 = *v50;
              v50 = v52;
              *((_BYTE *)v159 + v57) = 0;
              if ( v53 == v52 )
                break;
              ++v52;
            }
          }
LABEL_56:
          ++v46;
          ++v156;
          ++v150;
          if ( v139 == v46 )
          {
            v41 = v163;
            v161 = v45 + 1;
            v58 = *((int *)this + 27);
            v43 = *((_DWORD *)this + 27);
            v59 = &v40[v58];
            if ( (int)v58 > 0 )
            {
LABEL_58:
              v60 = 0;
              v61 = 0;
              do
              {
                v62 = v40[v60];
                v40[v60] = v61;
                v63 = v62 + v61;
                v64 = v41[v60];
                v41[v60++] = v63;
                v61 = v64 + v63;
              }
              while ( v43 > (int)v60 );
              *v59 = v61;
              if ( v139 > 0 )
                goto LABEL_61;
              v44 = v43;
              v139 = v48;
LABEL_73:
              v78 = (unsigned int)(v44 - 1);
              if ( v44 - 1 >= 0 )
              {
LABEL_74:
                v79 = (int)v78;
                v80 = (int)v78 - 1LL;
                v81 = v80 - (unsigned int)v78;
                v78 = v81;
                while ( 1 )
                {
                  v40[v79 + 1] = v41[v79];
                  v41[v79] = v40[v79];
                  v79 = v80;
                  if ( v81 == v80 )
                    break;
                  --v80;
                }
              }
              *v40 = 0;
              if ( v44 <= 0 )
                goto LABEL_111;
              v82 = (double *)v166;
              v83 = 1;
              v141 = (CoinBuild *)v40;
              v148 = (int **)v41;
              while ( 2 )
              {
                v84 = 4LL * *((int *)v148 + v83 - 1);
                v85 = (char *)v82 + v84;
                v86 = 4LL * *((int *)v141 + v83 - 1);
                v87 = (char *)v82 + v86;
                if ( (char *)v82 + v84 != (char *)v82 + v86 )
                {
                  v88 = v84 - v86;
                  v78 = (unsigned __int64)v85;
                  v89 = (char *)v82 + v86;
                  v90 = v87 + 4;
                  _BitScanReverse64(&v91, v88 >> 2);
                  sub_98A50(v89, v85, 2 * (63LL - (int)(v91 ^ 0x3F)));
                  if ( v88 > 64 )
                  {
                    v147 = v85;
                    v153 = v82;
                    v119 = v87 + 4;
                    v120 = v87;
                    v121 = v87 + 64;
                    do
                    {
                      v122 = *(_DWORD *)v119;
                      if ( *(_DWORD *)v119 >= *(_DWORD *)v120 )
                      {
                        v128 = *((_DWORD *)v119 - 1);
                        v129 = v119 - 4;
                        if ( v128 > v122 )
                        {
                          while ( 1 )
                          {
                            *((_DWORD *)v129 + 1) = v128;
                            v128 = *((_DWORD *)v129 - 1);
                            if ( v122 >= v128 )
                              break;
                            v129 -= 4;
                          }
                          *(_DWORD *)v129 = v122;
                        }
                        else
                        {
                          *(_DWORD *)v119 = v122;
                        }
                      }
                      else
                      {
                        if ( v119 != v120 )
                        {
                          v78 = (unsigned __int64)v120;
                          memmove(v90, v120, v119 - v120);
                        }
                        *(_DWORD *)v120 = v122;
                      }
                      v119 += 4;
                    }
                    while ( v121 != v119 );
                    v123 = v119;
                    v82 = v153;
                    v84 = 4LL * *((int *)v148 + v83 - 1);
                    v87 = (char *)v153 + v84;
                    if ( v147 != v123 )
                    {
                      v124 = *(_DWORD *)v123;
                      v125 = *((_DWORD *)v123 - 1);
                      v126 = v123 - 4;
                      if ( *(_DWORD *)v123 < v125 )
                        goto LABEL_146;
                      while ( 1 )
                      {
                        v127 = v123;
                        v123 += 4;
                        *(_DWORD *)v127 = v124;
                        if ( v147 == v123 )
                          break;
                        while ( 1 )
                        {
                          v124 = *(_DWORD *)v123;
                          v125 = *((_DWORD *)v123 - 1);
                          v126 = v123 - 4;
                          if ( *(_DWORD *)v123 >= v125 )
                            break;
LABEL_146:
                          while ( 1 )
                          {
                            *((_DWORD *)v126 + 1) = v125;
                            v125 = *((_DWORD *)v126 - 1);
                            v78 = (unsigned __int64)(v126 - 4);
                            if ( v124 >= v125 )
                              break;
                            v126 -= 4;
                          }
                          v123 += 4;
                          *(_DWORD *)v126 = v124;
                          if ( v147 == v123 )
                            goto LABEL_94;
                        }
                      }
                    }
                  }
                  else
                  {
                    v143 = *((_DWORD *)v148 + v83 - 1);
                    if ( v85 == v90 )
                    {
                      v84 = 4LL * *((int *)v148 + v83 - 1);
                      v87 = (char *)v82 + v84;
                    }
                    else
                    {
                      v151 = v82;
                      v92 = v87 + 4;
                      v93 = v85;
                      v94 = v87;
                      do
                      {
                        while ( 1 )
                        {
                          v95 = *(_DWORD *)v92;
                          if ( *(_DWORD *)v92 < *(_DWORD *)v94 )
                            break;
                          v96 = *((_DWORD *)v92 - 1);
                          v97 = v92 - 4;
                          if ( v95 < v96 )
                          {
                            while ( 1 )
                            {
                              *((_DWORD *)v97 + 1) = v96;
                              v96 = *((_DWORD *)v97 - 1);
                              if ( v95 >= v96 )
                                break;
                              v97 -= 4;
                            }
                            *(_DWORD *)v97 = v95;
                          }
                          else
                          {
                            *(_DWORD *)v92 = v95;
                          }
                          v92 += 4;
                          if ( v93 == v92 )
                            goto LABEL_93;
                        }
                        if ( v92 != v94 )
                        {
                          v78 = (unsigned __int64)v94;
                          memmove(v90, v94, v92 - v94);
                        }
                        v92 += 4;
                        *(_DWORD *)v94 = v95;
                      }
                      while ( v93 != v92 );
LABEL_93:
                      v82 = v151;
                      v84 = 4LL * v143;
                      v87 = (char *)v151 + v84;
                    }
                  }
                }
LABEL_94:
                v98 = 4LL * *((int *)v141 + v83);
                v99 = (unsigned int *)((char *)v82 + v98);
                if ( (char *)v82 + v98 != v87 )
                {
                  v78 = (unsigned __int64)v82 + v98;
                  v144 = v98 - v84;
                  v100 = (unsigned int *)(v87 + 4);
                  _BitScanReverse64(&v101, (v98 - v84) >> 2);
                  v102 = (unsigned int *)(v87 + 4);
                  sub_98A50(v87, (char *)v82 + v98, 2 * (63LL - (int)(v101 ^ 0x3F)));
                  if ( v144 > 64 )
                  {
                    v146 = v99;
                    v152 = v82;
                    v111 = v87;
                    v112 = (unsigned int *)(v87 + 64);
                    do
                    {
                      v113 = *v102;
                      if ( (signed int)*v102 >= *(_DWORD *)v111 )
                      {
                        v117 = *(v102 - 1);
                        v118 = v102 - 1;
                        if ( v117 > v113 )
                        {
                          while ( 1 )
                          {
                            v118[1] = v117;
                            v117 = *(v118 - 1);
                            if ( v113 >= v117 )
                              break;
                            --v118;
                          }
                          *v118 = v113;
                        }
                        else
                        {
                          *v102 = v113;
                        }
                      }
                      else
                      {
                        if ( v102 != (unsigned int *)v111 )
                        {
                          v78 = (unsigned __int64)v111;
                          memmove(v100, v111, (char *)v102 - v111);
                        }
                        *(_DWORD *)v111 = v113;
                      }
                      ++v102;
                    }
                    while ( v112 != v102 );
                    v82 = v152;
                    if ( v146 != v102 )
                    {
                      v78 = *v102;
                      v114 = *(v102 - 1);
                      v115 = v102 - 1;
                      if ( v114 > (int)v78 )
                        goto LABEL_126;
                      while ( 1 )
                      {
                        v116 = v102++;
                        *v116 = v78;
                        if ( v146 == v102 )
                          break;
                        while ( 1 )
                        {
                          v78 = *v102;
                          v114 = *(v102 - 1);
                          v115 = v102 - 1;
                          if ( v114 <= (int)v78 )
                            break;
LABEL_126:
                          while ( 1 )
                          {
                            v115[1] = v114;
                            v114 = *(v115 - 1);
                            if ( (int)v78 >= v114 )
                              break;
                            --v115;
                          }
                          ++v102;
                          *v115 = v78;
                          if ( v146 == v102 )
                            goto LABEL_109;
                        }
                      }
                    }
                  }
                  else if ( v99 != v100 )
                  {
                    v145 = v82;
                    v103 = v99;
                    v104 = v87;
                    do
                    {
                      while ( 1 )
                      {
                        v105 = *v102;
                        if ( (signed int)*v102 < *(_DWORD *)v104 )
                          break;
                        v106 = *(v102 - 1);
                        v107 = v102 - 1;
                        if ( v106 > v105 )
                        {
                          while ( 1 )
                          {
                            v107[1] = v106;
                            v106 = *(v107 - 1);
                            if ( v105 >= v106 )
                              break;
                            --v107;
                          }
                          *v107 = v105;
                        }
                        else
                        {
                          *v102 = v105;
                        }
                        if ( v103 == ++v102 )
                          goto LABEL_108;
                      }
                      if ( v102 != (unsigned int *)v104 )
                      {
                        v78 = (unsigned __int64)v104;
                        memmove(v100, v104, (char *)v102 - v104);
                      }
                      ++v102;
                      *(_DWORD *)v104 = v105;
                    }
                    while ( v103 != v102 );
LABEL_108:
                    v82 = v145;
                  }
                }
LABEL_109:
                v108 = v83++;
                if ( *((_DWORD *)this + 27) <= v108 )
                {
                  v40 = (int *)v141;
                  v41 = (int *)v148;
                  goto LABEL_111;
                }
                continue;
              }
            }
            *v59 = 0;
LABEL_61:
            v65 = 0;
            v162 = v48;
            v66 = v40;
            v67 = v164;
            v68 = v165;
            while ( 1 )
            {
              v69 = CoinBuild::row(a2, v65, v67, v68, (const int **)&v167, (const double **)v168);
              a6 = 1.0;
              a7 = -1.0;
              if ( v69 > 0 )
                break;
LABEL_71:
              ++v65;
              ++v67;
              ++v68;
              if ( v139 <= v65 )
              {
                v40 = v66;
                v44 = *((_DWORD *)this + 27);
                v139 = v162;
                goto LABEL_73;
              }
            }
            v70 = (unsigned int)(v69 - 1);
            v71 = v167;
            v72 = v168[0];
            v73 = 0;
            v74 = v70 + 1;
            while ( 2 )
            {
              a5 = v72[v73];
              v77 = v71[v73];
              if ( a5 != 1.0 )
              {
                if ( a5 == -1.0 )
                {
                  v75 = &v41[v77];
LABEL_65:
                  v76 = *v75;
                  v166[*v75] = v65;
                  *v75 = v76 + 1;
                }
                if ( v74 == ++v73 )
                  goto LABEL_71;
                continue;
              }
              break;
            }
            v75 = &v66[v77];
            goto LABEL_65;
          }
        }
      }
      v59 = v40;
    }
    v78 = (unsigned int)(v43 - 1);
    *v59 = 0;
    if ( (v78 & 0x80000000) == 0LL )
    {
      v161 = 0;
      v139 = 0;
      goto LABEL_74;
    }
    *v40 = 0;
    v161 = 0;
    v139 = 0;
LABEL_111:
    v109 = *((_QWORD *)this + 24);
    if ( v109 )
      (*(void (__fastcall **)(__int64, unsigned __int64, double, double, double, double))(*(_QWORD *)v109 + 480LL))(
        v109,
        v78,
        a5,
        a6,
        a7,
        a8);
    v110 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
    ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v110);
    ClpPlusMinusOneMatrix::passInCopy(v110, *((_DWORD *)this + 26), v161, 1, v166, v40, v41);
    *((_QWORD *)this + 24) = v110;
    if ( v159 )
      operator delete[](v159);
LABEL_15:
    operator delete[](v164);
    operator delete[](v165);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 192LL))(
      *((_QWORD *)this + 24),
      *((unsigned int *)this + 26),
      *((unsigned int *)this + 27));
  }
  ClpModel::synchronizeMatrix(this);
  return (unsigned int)v139;
}

