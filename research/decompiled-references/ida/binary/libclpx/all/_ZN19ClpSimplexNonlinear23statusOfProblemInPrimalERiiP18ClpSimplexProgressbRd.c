__int64 __fastcall ClpSimplexNonlinear::statusOfProblemInPrimal(
        ClpSimplexNonlinear *this,
        int *a2,
        int a3,
        ClpSimplexProgress *a4,
        __int64 a5,
        double *a6)
{
  char v6; // r15
  __int64 v8; // rax
  int v9; // r12d
  bool v10; // bp
  int v11; // eax
  __int64 v12; // rdi
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  CoinFactorization *v16; // rdi
  int v17; // esi
  int v18; // r13d
  int v19; // edx
  CoinMessageHandler *v20; // rdi
  CoinMessageHandler *v21; // rax
  CoinMessageHandler *v22; // rax
  CoinMessageHandler *v23; // rax
  CoinMessageHandler *v24; // rax
  double v25; // xmm0_8
  CoinMessageHandler *v26; // rax
  CoinMessageHandler *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r8
  ClpNonLinearCost *v31; // rdi
  double v32; // xmm1_8
  int v33; // esi
  unsigned __int64 v34; // r9
  __int64 v35; // rax
  int v36; // r10d
  double *v37; // rcx
  unsigned int v38; // edx
  unsigned int v39; // edi
  __int64 v40; // rax
  unsigned int v41; // edi
  double *v42; // rax
  int v43; // r13d
  CoinMessageHandler *v44; // rax
  double v45; // xmm0_8
  __int64 v46; // rax
  int v47; // eax
  __int64 result; // rax
  int v49; // eax
  CoinMessageHandler *v50; // rax
  double v51; // xmm0_8
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // r8
  __int64 v56; // rdi
  void (__fastcall *v57)(__int64, ClpSimplexNonlinear *, __int64, __int64, _QWORD *); // rax
  CoinFactorization **v58; // rdi
  int v59; // eax
  __int64 v60; // rdi
  _BYTE *v61; // rdi
  __int64 (__fastcall *v62)(ClpPrimalColumnPivot *); // rax
  int v64; // ecx
  int v65; // esi
  __int64 *v66; // rdi
  __int64 *v67; // r9
  int v68; // r10d
  unsigned int v69; // ecx
  __int64 v70; // rax
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 *v73; // rdx
  __int64 *v74; // rax
  signed int v75; // ecx
  __int64 v76; // rax
  __int64 *v77; // rdi
  __int64 *v78; // r10
  __int64 *v79; // r11
  __int64 *v80; // rax
  __int64 *v81; // rdx
  __int64 v82; // rbp
  __int64 v83; // xmm0_8
  __int64 v84; // rax
  __int64 *v85; // rsi
  __int64 v86; // rdx
  __int64 *v87; // rax
  __int64 v88; // r10
  __int64 v89; // xmm0_8
  __int64 v90; // rax
  double v91; // xmm0_8
  double v92; // xmm1_8
  double v93; // xmm0_8
  CoinMessageHandler *v94; // rax
  double v95; // xmm0_8
  __int64 v96; // rax
  _BYTE *v97; // rdi
  void *v98; // rdi
  __int64 v99; // rax
  int v100; // edi
  __int64 v101; // rax
  int v102; // r8d
  _BYTE *v103; // rsi
  int v104; // r9d
  unsigned int v105; // ecx
  __int64 v106; // rax
  unsigned int v107; // edx
  __int64 v108; // rax
  _BYTE *v109; // rdx
  _BYTE *v110; // rax
  signed int v111; // ecx
  __int64 v112; // rax
  _QWORD *v113; // rsi
  _QWORD *v114; // r9
  _QWORD *v115; // rdi
  _QWORD *v116; // rax
  __int64 *v117; // rdx
  __int64 v118; // r11
  __int64 v119; // xmm0_8
  __int64 v120; // r11
  __int64 *v121; // rdx
  _QWORD *v122; // rax
  __int64 v123; // xmm0_8
  __int64 v124; // rax
  ClpNonLinearCost *v125; // rdi
  unsigned int v126; // eax
  int v127; // ecx
  int v128; // edi
  _BYTE *v129; // rsi
  _BYTE *v130; // r9
  int v131; // r8d
  unsigned int v132; // ecx
  __int64 v133; // rax
  unsigned int v134; // edx
  __int64 v135; // rax
  _BYTE *v136; // rdx
  _BYTE *v137; // rax
  signed int v138; // ecx
  __int64 v139; // rax
  CoinOtherFactorization *v140; // rdi
  __int64 v141; // rax
  double *v142; // rdi
  void *v143; // rbp
  ClpNonLinearCost *v144; // rbp
  int v145; // eax
  __int64 *v146; // rsi
  unsigned __int64 v147; // r9
  __int64 *v148; // r8
  __int64 v149; // rdx
  __int64 *v150; // rax
  __int64 v151; // r11
  __int64 v152; // xmm0_8
  __int64 v153; // rax
  __int64 *v154; // rdi
  __int64 *v155; // rax
  __int64 *v156; // rdx
  __int64 v157; // xmm0_8
  __int64 v158; // rax
  __int64 v159; // rax
  CoinFactorization *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rax
  void *v163; // rdi
  unsigned __int64 v164; // rax
  _QWORD *v165; // rax
  int v166; // esi
  _QWORD *v167; // rdi
  _QWORD *v168; // rdx
  __int64 *v169; // rcx
  __int64 v170; // r9
  __int64 v171; // xmm0_8
  __int64 v172; // rdx
  __int64 v173; // rax
  char *v174; // rdx
  _BYTE *v175; // rax
  char v176; // r8
  char *v177; // rdx
  __int64 *v178; // rax
  char v179; // si
  CoinOtherFactorization *v180; // rdi
  char *v181; // rdx
  _BYTE *v182; // rax
  char v183; // di
  double v185; // [rsp+8h] [rbp-70h]
  int v186; // [rsp+10h] [rbp-68h]
  int v187; // [rsp+14h] [rbp-64h]
  char v188; // [rsp+14h] [rbp-64h]
  __int64 v190; // [rsp+18h] [rbp-60h]
  CoinMessageHandler *v191; // [rsp+20h] [rbp-58h]
  int v193; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v194[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v6 = a5;
  v186 = a3;
  if ( a3 == 2 )
  {
    v64 = *((_DWORD *)this + 27);
    v65 = *((_DWORD *)this + 26);
    v66 = *((__int64 **)this + 33);
    v67 = *((__int64 **)this + 164);
    v68 = v64 + v65;
    if ( v65 + v64 && v66 != v67 )
    {
      v69 = v68 >> 3;
      if ( v68 >> 3 > 0 )
      {
        if ( (v67 >= v66 + 2 || v66 >= v67 + 2) && v69 > 1 )
        {
          v70 = 0;
          v71 = 0;
          do
          {
            ++v71;
            *(__m128i *)&v66[v70] = _mm_loadu_si128((const __m128i *)&v67[v70]);
            v70 += 2;
          }
          while ( v71 < v69 >> 1 );
          v72 = v69 & 0xFFFFFFFE;
          v73 = &v67[v72];
          v74 = &v66[v72];
          if ( v69 != (v69 & 0xFFFFFFFE) )
          {
            *(_BYTE *)v74 = *(_BYTE *)v73;
            *((_BYTE *)v74 + 1) = *((_BYTE *)v73 + 1);
            *((_BYTE *)v74 + 2) = *((_BYTE *)v73 + 2);
            *((_BYTE *)v74 + 3) = *((_BYTE *)v73 + 3);
            *((_BYTE *)v74 + 4) = *((_BYTE *)v73 + 4);
            *((_BYTE *)v74 + 5) = *((_BYTE *)v73 + 5);
            *((_BYTE *)v74 + 6) = *((_BYTE *)v73 + 6);
            *((_BYTE *)v74 + 7) = *((_BYTE *)v73 + 7);
          }
          v75 = v69 - 1;
        }
        else
        {
          v75 = v69 - 1;
          v177 = *((char **)this + 164);
          v178 = v66;
          do
          {
            v179 = *v177;
            ++v178;
            v177 += 8;
            *((_BYTE *)v178 - 8) = v179;
            *((_BYTE *)v178 - 7) = *(v177 - 7);
            *((_BYTE *)v178 - 6) = *(v177 - 6);
            *((_BYTE *)v178 - 5) = *(v177 - 5);
            *((_BYTE *)v178 - 4) = *(v177 - 4);
            *((_BYTE *)v178 - 3) = *(v177 - 3);
            *((_BYTE *)v178 - 2) = *(v177 - 2);
            *((_BYTE *)v178 - 1) = *(v177 - 1);
          }
          while ( &v66[(unsigned int)v75 + 1] != v178 );
        }
        v76 = 8LL * v75 + 8;
        v67 = (__int64 *)((char *)v67 + v76);
        v66 = (__int64 *)((char *)v66 + v76);
      }
      switch ( v68 % 8 )
      {
        case 1:
          goto LABEL_102;
        case 2:
          goto LABEL_101;
        case 3:
          goto LABEL_100;
        case 4:
          goto LABEL_99;
        case 5:
          goto LABEL_98;
        case 6:
          goto LABEL_97;
        case 7:
          *((_BYTE *)v66 + 6) = *((_BYTE *)v67 + 6);
LABEL_97:
          *((_BYTE *)v66 + 5) = *((_BYTE *)v67 + 5);
LABEL_98:
          *((_BYTE *)v66 + 4) = *((_BYTE *)v67 + 4);
LABEL_99:
          *((_BYTE *)v66 + 3) = *((_BYTE *)v67 + 3);
LABEL_100:
          *((_BYTE *)v66 + 2) = *((_BYTE *)v67 + 2);
LABEL_101:
          *((_BYTE *)v66 + 1) = *((_BYTE *)v67 + 1);
LABEL_102:
          *(_BYTE *)v66 = *(_BYTE *)v67;
          break;
        default:
          break;
      }
      v65 = *((_DWORD *)this + 26);
      v64 = *((_DWORD *)this + 27);
    }
    v77 = *((__int64 **)this + 159);
    v78 = *((__int64 **)this + 151);
    v79 = &v77[v64];
    if ( v65 && v78 != v79 )
    {
      if ( v65 >> 3 > 0 )
      {
        v80 = *((__int64 **)this + 151);
        v81 = &v77[v64];
        v82 = (unsigned int)((v65 >> 3) - 1);
        v67 = &v78[8 * v82 + 8];
        do
        {
          v83 = *v81;
          v80 += 8;
          v81 += 8;
          *(v80 - 8) = v83;
          *(v80 - 7) = *(v81 - 7);
          *(v80 - 6) = *(v81 - 6);
          *(v80 - 5) = *(v81 - 5);
          *(v80 - 4) = *(v81 - 4);
          *(v80 - 3) = *(v81 - 3);
          *(v80 - 2) = *(v81 - 2);
          *(v80 - 1) = *(v81 - 1);
        }
        while ( v80 != v67 );
        v84 = ((int)v82 + 1LL) << 6;
        v79 = (__int64 *)((char *)v79 + v84);
        v78 = (__int64 *)((char *)v78 + v84);
      }
      switch ( v65 % 8 )
      {
        case 1:
          goto LABEL_117;
        case 2:
          goto LABEL_116;
        case 3:
          goto LABEL_115;
        case 4:
          goto LABEL_114;
        case 5:
          goto LABEL_113;
        case 6:
          goto LABEL_112;
        case 7:
          v78[6] = v79[6];
LABEL_112:
          v78[5] = v79[5];
LABEL_113:
          v78[4] = v79[4];
LABEL_114:
          v78[3] = v79[3];
LABEL_115:
          v78[2] = v79[2];
LABEL_116:
          v78[1] = v79[1];
LABEL_117:
          *v78 = *v79;
          break;
        default:
          break;
      }
    }
    v85 = *((__int64 **)this + 152);
    if ( v64 && v77 != v85 )
    {
      if ( v64 >> 3 > 0 )
      {
        v86 = *((_QWORD *)this + 152);
        v87 = v77;
        v88 = (unsigned int)((v64 >> 3) - 1);
        v67 = &v77[8 * v88 + 8];
        do
        {
          v89 = *v87;
          v87 += 8;
          v86 += 64;
          *(_QWORD *)(v86 - 64) = v89;
          *(_QWORD *)(v86 - 56) = *(v87 - 7);
          *(_QWORD *)(v86 - 48) = *(v87 - 6);
          *(_QWORD *)(v86 - 40) = *(v87 - 5);
          *(_QWORD *)(v86 - 32) = *(v87 - 4);
          *(_QWORD *)(v86 - 24) = *(v87 - 3);
          *(_QWORD *)(v86 - 16) = *(v87 - 2);
          *(_QWORD *)(v86 - 8) = *(v87 - 1);
        }
        while ( v67 != v87 );
        v90 = ((int)v88 + 1LL) << 6;
        v77 = (__int64 *)((char *)v77 + v90);
        v85 = (__int64 *)((char *)v85 + v90);
      }
      switch ( v64 % 8 )
      {
        case 1:
          goto LABEL_131;
        case 2:
          goto LABEL_130;
        case 3:
          goto LABEL_129;
        case 4:
          goto LABEL_128;
        case 5:
          goto LABEL_127;
        case 6:
          goto LABEL_126;
        case 7:
          v85[6] = v77[6];
LABEL_126:
          v85[5] = v77[5];
LABEL_127:
          v85[4] = v77[4];
LABEL_128:
          v85[3] = v77[3];
LABEL_129:
          v85[2] = v77[2];
LABEL_130:
          v85[1] = v77[1];
LABEL_131:
          *v85 = *v77;
          break;
        default:
          break;
      }
    }
    v188 = a5;
    (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64, int *, __int64, __int64 *))(**((_QWORD **)this + 24)
                                                                                              + 320LL))(
      *((_QWORD *)this + 24),
      this,
      6,
      &v193,
      a5,
      v67);
    *((_DWORD *)this + 326) = 1;
    *((_DWORD *)this + 292) = -1;
    ++*((_DWORD *)this + 324);
    LOBYTE(a5) = v188;
  }
  v187 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
  if ( v8 )
    v187 = *(_DWORD *)(v8 + 1048);
  v9 = *((_DWORD *)this + 80);
  v10 = v9 == -4 || v9 >= -2;
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 80);
    if ( (_BYTE)a5 )
    {
LABEL_10:
      (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64))(**((_QWORD **)this + 156) + 16LL))(
        *((_QWORD *)this + 156),
        this,
        1);
      if ( v186 && (unsigned int)ClpSimplex::internalFactorize(this, 1) )
      {
        if ( v186 == 1 && *((double *)this + 95) <= 1000.0 && *((double *)this + 96) <= 1000.0 )
        {
          v127 = *((_DWORD *)this + 27);
          v128 = *((_DWORD *)this + 26);
          v129 = *((_BYTE **)this + 33);
          v130 = *((_BYTE **)this + 164);
          v131 = v127 + v128;
          if ( v128 + v127 && v129 != v130 )
          {
            v132 = v131 >> 3;
            if ( v131 >> 3 > 0 )
            {
              if ( (v130 >= v129 + 16 || v129 >= v130 + 16) && v132 > 1 )
              {
                v133 = 0;
                v134 = 0;
                do
                {
                  ++v134;
                  *(__m128i *)&v129[v133] = _mm_loadu_si128((const __m128i *)&v130[v133]);
                  v133 += 16;
                }
                while ( v134 < v132 >> 1 );
                v135 = 8LL * (v132 & 0xFFFFFFFE);
                v136 = &v130[v135];
                v137 = &v129[v135];
                if ( v132 != (v132 & 0xFFFFFFFE) )
                {
                  *v137 = *v136;
                  v137[1] = v136[1];
                  v137[2] = v136[2];
                  v137[3] = v136[3];
                  v137[4] = v136[4];
                  v137[5] = v136[5];
                  v137[6] = v136[6];
                  v137[7] = v136[7];
                }
                v138 = v132 - 1;
              }
              else
              {
                v138 = v132 - 1;
                v181 = *((char **)this + 164);
                v182 = *((_BYTE **)this + 33);
                do
                {
                  v183 = *v181;
                  v182 += 8;
                  v181 += 8;
                  *(v182 - 8) = v183;
                  *(v182 - 7) = *(v181 - 7);
                  *(v182 - 6) = *(v181 - 6);
                  *(v182 - 5) = *(v181 - 5);
                  *(v182 - 4) = *(v181 - 4);
                  *(v182 - 3) = *(v181 - 3);
                  *(v182 - 2) = *(v181 - 2);
                  *(v182 - 1) = *(v181 - 1);
                }
                while ( v182 != &v129[8 * v138 + 8] );
              }
              v139 = 8LL * v138 + 8;
              v130 += v139;
              v129 += v139;
            }
            switch ( v131 % 8 )
            {
              case 1:
                goto LABEL_252;
              case 2:
                goto LABEL_251;
              case 3:
                goto LABEL_250;
              case 4:
                goto LABEL_249;
              case 5:
                goto LABEL_248;
              case 6:
                goto LABEL_247;
              case 7:
                v129[6] = v130[6];
LABEL_247:
                v129[5] = v130[5];
LABEL_248:
                v129[4] = v130[4];
LABEL_249:
                v129[3] = v130[3];
LABEL_250:
                v129[2] = v130[2];
LABEL_251:
                v129[1] = v130[1];
LABEL_252:
                *v129 = *v130;
                break;
              default:
                break;
            }
            v128 = *((_DWORD *)this + 26);
            v127 = *((_DWORD *)this + 27);
          }
          v146 = *((__int64 **)this + 159);
          v147 = *((_QWORD *)this + 151);
          v148 = &v146[v127];
          if ( v128 && (__int64 *)v147 != v148 )
          {
            if ( v128 >> 3 > 0 )
            {
              v149 = *((_QWORD *)this + 151);
              v150 = &v146[v127];
              v151 = (unsigned int)((v128 >> 3) - 1);
              do
              {
                v152 = *v150;
                v150 += 8;
                v149 += 64;
                *(_QWORD *)(v149 - 64) = v152;
                *(_QWORD *)(v149 - 56) = *(v150 - 7);
                *(_QWORD *)(v149 - 48) = *(v150 - 6);
                *(_QWORD *)(v149 - 40) = *(v150 - 5);
                *(_QWORD *)(v149 - 32) = *(v150 - 4);
                *(_QWORD *)(v149 - 24) = *(v150 - 3);
                *(_QWORD *)(v149 - 16) = *(v150 - 2);
                *(_QWORD *)(v149 - 8) = *(v150 - 1);
              }
              while ( v150 != &v148[8 * v151 + 8] );
              v153 = ((int)v151 + 1LL) << 6;
              v148 = (__int64 *)((char *)v148 + v153);
              v147 += v153;
            }
            switch ( v128 % 8 )
            {
              case 1:
                goto LABEL_267;
              case 2:
                goto LABEL_266;
              case 3:
                goto LABEL_265;
              case 4:
                goto LABEL_264;
              case 5:
                goto LABEL_263;
              case 6:
                goto LABEL_262;
              case 7:
                *(_QWORD *)(v147 + 48) = v148[6];
LABEL_262:
                *(_QWORD *)(v147 + 40) = v148[5];
LABEL_263:
                *(_QWORD *)(v147 + 32) = v148[4];
LABEL_264:
                *(_QWORD *)(v147 + 24) = v148[3];
LABEL_265:
                *(_QWORD *)(v147 + 16) = v148[2];
LABEL_266:
                *(_QWORD *)(v147 + 8) = v148[1];
LABEL_267:
                *(_QWORD *)v147 = *v148;
                break;
              default:
                break;
            }
          }
          v154 = *((__int64 **)this + 152);
          if ( v127 && v146 != v154 )
          {
            v147 = (unsigned int)(v127 >> 3);
            if ( (int)v147 > 0 )
            {
              v155 = *((__int64 **)this + 152);
              v156 = v146;
              v147 = (unsigned int)(v147 - 1);
              v148 = &v154[8 * v147 + 8];
              do
              {
                v157 = *v156;
                v155 += 8;
                v156 += 8;
                *(v155 - 8) = v157;
                *(v155 - 7) = *(v156 - 7);
                *(v155 - 6) = *(v156 - 6);
                *(v155 - 5) = *(v156 - 5);
                *(v155 - 4) = *(v156 - 4);
                *(v155 - 3) = *(v156 - 3);
                *(v155 - 2) = *(v156 - 2);
                *(v155 - 1) = *(v156 - 1);
              }
              while ( v155 != v148 );
              v158 = ((int)v147 + 1LL) << 6;
              v146 = (__int64 *)((char *)v146 + v158);
              v154 = (__int64 *)((char *)v154 + v158);
            }
            switch ( v127 % 8 )
            {
              case 1:
                goto LABEL_281;
              case 2:
                goto LABEL_280;
              case 3:
                goto LABEL_279;
              case 4:
                goto LABEL_278;
              case 5:
                goto LABEL_277;
              case 6:
                goto LABEL_276;
              case 7:
                v154[6] = v146[6];
LABEL_276:
                v154[5] = v146[5];
LABEL_277:
                v154[4] = v146[4];
LABEL_278:
                v154[3] = v146[3];
LABEL_279:
                v154[2] = v146[2];
LABEL_280:
                v154[1] = v146[1];
LABEL_281:
                *v154 = *v146;
                break;
              default:
                break;
            }
          }
          (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64, int *, __int64 *, unsigned __int64))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            6,
            &v193,
            v148,
            v147);
          (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            5,
            &v193);
          v159 = *((_QWORD *)this + 158);
          *((_DWORD *)this + 326) = 1;
          v160 = *(CoinFactorization **)(v159 + 8);
          if ( v160 )
          {
            CoinFactorization::pivotTolerance(v160, 0.99);
          }
          else
          {
            v180 = *(CoinOtherFactorization **)(v159 + 16);
            if ( v180 )
              CoinOtherFactorization::pivotTolerance(v180, 0.99);
          }
          v186 = 2;
          if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
            *((_QWORD *)this + 95) = 0x40C3880000000000LL;
        }
        else
        {
          v13 = 0;
          v14 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
          if ( v14 )
          {
            v13 = *(_DWORD *)(v14 + 868);
            *(_DWORD *)(v14 + 868) = 0;
          }
          **((_DWORD **)this + 157) = -1;
          ClpSimplex::internalFactorize(this, 2);
          v15 = *((_QWORD *)this + 158);
          v16 = *(CoinFactorization **)(v15 + 8);
          if ( v16 )
          {
            *((_DWORD *)v16 + 217) = v13;
            CoinFactorization::pivotTolerance(v16, 0.99);
          }
          else
          {
            v140 = *(CoinOtherFactorization **)(v15 + 16);
            if ( v140 )
              CoinOtherFactorization::pivotTolerance(v140, 0.99);
          }
          (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            6,
            &v193);
        }
        v17 = *((_DWORD *)this + 288);
        if ( v17 < 0 || (*(_BYTE *)(*((_QWORD *)this + 33) + v17) & 7) == 1 )
        {
          ++*((_DWORD *)this + 324);
        }
        else
        {
          ClpSimplex::setFlagged(this, v17);
          *(_BYTE *)(*((_QWORD *)this + 164) + *((int *)this + 288)) = *(_BYTE *)(*((_QWORD *)this + 33)
                                                                                + *((int *)this + 288));
          ++*((_DWORD *)this + 324);
        }
      }
      v11 = *((_DWORD *)this + 80);
      v6 = 1;
    }
    if ( v11 != -4 )
      *((_DWORD *)this + 80) = -3;
  }
  while ( 1 )
  {
    ClpSimplex::createRim(this, 4, 0, 0);
    v12 = *((_QWORD *)this + 24);
    v193 = 4;
    (*(void (__fastcall **)(__int64, ClpSimplexNonlinear *, __int64, int *))(*(_QWORD *)v12 + 320LL))(
      v12,
      this,
      9,
      &v193);
    if ( !(unsigned int)ClpSimplex::gutsOfSolution(this, nullptr, nullptr, *((_DWORD *)this + 337) >= 0) )
      break;
    *((_DWORD *)this + 80) = v9;
    v6 = 1;
    if ( v10 )
      goto LABEL_10;
  }
  v18 = 0;
  if ( *((_DWORD *)this + 77) == (unsigned int)ClpSimplexProgress::lastIterationNumber(a4, 0) )
  {
    v61 = *((_BYTE **)this + 156);
    v62 = *(__int64 (__fastcall **)(ClpPrimalColumnPivot *))(*(_QWORD *)v61 + 40LL);
    if ( v62 == ClpPrimalColumnPivot::looksOptimal ? v61[20] : ((__int64 (*)(void))v62)() )
    {
      *((_DWORD *)this + 306) = 0;
      *((_QWORD *)this + 111) = 0;
    }
  }
  if ( v186 == 2 )
  {
    v19 = *(_DWORD *)(*((_QWORD *)this + 165) + 112LL);
    goto LABEL_25;
  }
  result = ClpSimplexProgress::looping(a4);
  if ( (int)result < 0 )
  {
    v125 = *((ClpNonLinearCost **)this + 165);
    v19 = *((_DWORD *)v125 + 28);
    if ( (_DWORD)result != -1 )
    {
      if ( v19 )
      {
        if ( *((int *)a4 + 73) > 5 )
        {
          v126 = *((_DWORD *)a4 + 76);
          if ( v126 <= 9 )
          {
            *((_DWORD *)a4 + 76) = ~v126;
            ClpNonLinearCost::zapCosts(v125);
          }
        }
      }
      goto LABEL_217;
    }
LABEL_25:
    if ( v19 || *((int *)a4 + 76) >= 0 )
    {
LABEL_27:
      v20 = *((CoinMessageHandler **)this + 43);
      *((_DWORD *)this + 336) = 0;
      v21 = (CoinMessageHandler *)CoinMessageHandler::message(v20, 6, (ClpSimplexNonlinear *)((char *)this + 416));
      v191 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v21);
      ClpNonLinearCost::feasibleReportCost(*((ClpNonLinearCost **)this + 165));
      CoinMessageHandler::operator<<(v191);
      v22 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *(_DWORD *)(*((_QWORD *)this + 165) + 112LL) > 0);
      v23 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v22);
      CoinMessageHandler::operator<<(v23);
      v24 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *((double *)this + 111) > 0.0);
      v25 = *((double *)this + 111);
      v26 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v24);
      CoinMessageHandler::operator<<(v26);
      v27 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                    *((CoinMessageHandler **)this + 43),
                                    *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
      CoinMessageHandler::operator<<(v27);
      v28 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
      CoinMessageHandler::operator<<(v28, 0, v25);
      if ( *((_DWORD *)this + 308) )
      {
        ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
        ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
      }
      if ( *(double *)(*((_QWORD *)this + 165) + 32LL) > 1.0 )
        ClpSimplexProgress::lastInfeasibility(a4, 1);
      v29 = *((_DWORD *)this + 84);
      if ( *((double *)this + 114) == 0.0 && *((double *)this + 115) == 0.0 )
      {
        *((_DWORD *)this + 306) = 0;
        *((_QWORD *)this + 111) = 0;
        *((_DWORD *)this + 308) = 0;
        *((_QWORD *)this + 112) = 0;
      }
      else if ( *((_DWORD *)this + 306) )
      {
        v47 = *((_DWORD *)this + 80);
        if ( v47 != -4 )
        {
          if ( v47 != -5 )
          {
            if ( v186 == 3 )
              ClpSimplexPrimal::unflag(this);
            goto LABEL_57;
          }
          if ( !*(_DWORD *)(*((_QWORD *)this + 165) + 112LL) )
            goto LABEL_152;
          v93 = *((double *)this + 113);
          if ( v93 > 1.0e18 && *((_DWORD *)this + 327) == 101 )
          {
            *((_QWORD *)this + 113) = 0x42A2309CE5400000LL;
            ClpSimplexPrimal::unPerturb(this);
            v93 = *((double *)this + 113);
          }
          if ( v93 >= 1.0e20 )
          {
LABEL_152:
            *((_DWORD *)this + 80) = 2;
            goto LABEL_70;
          }
          ++*((_DWORD *)this + 324);
          *((double *)this + 113) = v93 * 5.0;
          ClpSimplexPrimal::unflag(this);
          v94 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        18,
                                        (ClpSimplexNonlinear *)((char *)this + 416));
          v95 = *((double *)this + 113);
          v96 = CoinMessageHandler::operator<<(v94);
          CoinMessageHandler::operator<<(v96, 0, v95);
          ClpSimplex::createRim(this, 4, 0, 0);
          goto LABEL_151;
        }
      }
      v30 = *((_QWORD *)this + 165);
      if ( !*(_DWORD *)(v30 + 112) || *(double *)(v30 + 32) <= 0.001 && *((double *)this + 115) == 0.0 || (v29 & 1) != 0 )
      {
        if ( *((_DWORD *)this + 327) == 101 )
        {
          ClpSimplexPrimal::unPerturb(this);
          *a2 = -1;
        }
        v49 = ClpSimplexPrimal::unflag(this);
        if ( *a2 != *((_DWORD *)this + 77) || v49 )
        {
          v50 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        19,
                                        (ClpSimplexNonlinear *)((char *)this + 416));
          v51 = *((double *)this + 110);
          v52 = CoinMessageHandler::operator<<(v50);
          CoinMessageHandler::operator<<(v52, 0, v51);
          ClpNonLinearCost::feasibleReportCost(*((ClpNonLinearCost **)this + 165));
          v53 = *((_DWORD *)this + 320);
          if ( v53 > 3 )
          {
            *((_DWORD *)this + 80) = 0;
            if ( *a2 < *((_DWORD *)this + 77) )
            {
              v161 = CoinMessageHandler::message(
                       *((CoinMessageHandler **)this + 43),
                       13,
                       (ClpSimplexNonlinear *)((char *)this + 416));
              CoinMessageHandler::operator<<(v161, 0, v51);
            }
            goto LABEL_70;
          }
          if ( v51 < *a6 )
            *a6 = v51;
          else
            *((_DWORD *)this + 320) = ++v53;
          ++*((_DWORD *)this + 324);
          if ( v53 == 1 )
          {
            v141 = *((_QWORD *)this + 158);
            v142 = *(double **)(v141 + 8);
            if ( v142 )
              CoinFactorization::zeroTolerance((CoinFactorization *)v142, fmin(v142[1], 1.0e-15));
            else
              CoinOtherFactorization::zeroTolerance(
                *(CoinOtherFactorization **)(v141 + 16),
                fmin(*(double *)(*(_QWORD *)(v141 + 16) + 16LL), 1.0e-15));
          }
          *a2 = *((_DWORD *)this + 77);
          v91 = *((double *)this + 110);
          v92 = *((double *)this + 4);
          if ( v91 != v92 )
          {
            v162 = CoinMessageHandler::message(
                     *((CoinMessageHandler **)this + 43),
                     17,
                     (ClpSimplexNonlinear *)((char *)this + 416));
            CoinMessageHandler::operator<<(v162, 0, v91);
            v92 = *((double *)this + 4);
            v91 = *((double *)this + 110);
          }
          *((double *)this + 110) = v92;
          ClpSimplex::createRim(this, 4, 0, 0);
          ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), v91);
          ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
          if ( *((double *)this + 114) == 0.0 && *((double *)this + 115) == 0.0 )
          {
            *((_DWORD *)this + 306) = 0;
            *((_QWORD *)this + 111) = 0;
            *((_DWORD *)this + 308) = 0;
            *((_QWORD *)this + 112) = 0;
          }
          else if ( *((_DWORD *)this + 306) )
          {
            goto LABEL_57;
          }
          if ( *(_DWORD *)(*((_QWORD *)this + 165) + 112LL) || *a2 < 0 )
            goto LABEL_57;
        }
        *((_DWORD *)this + 80) = 0;
        goto LABEL_70;
      }
      v190 = *((_QWORD *)this + 165);
      v185 = *((double *)this + 113);
      ClpSimplex::createRim(this, 4, 0, 0);
      ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
      *((_QWORD *)this + 113) = 0x54B249AD2594C37DLL;
      ClpSimplex::createRim(this, 4, 0, 0);
      ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
      v31 = *((ClpNonLinearCost **)this + 165);
      v32 = v185;
      if ( !*((_DWORD *)v31 + 28) )
      {
        *((double *)this + 113) = v185;
        *((_DWORD *)this + 80) = -1;
        ClpNonLinearCost::checkInfeasibilities(v31, *((double *)this + 110));
        goto LABEL_70;
      }
      v33 = *((_DWORD *)this + 27) + *((_DWORD *)this + 26);
      *((_QWORD *)this + 165) = 0;
      if ( v33 > 0 )
      {
        v34 = *((_QWORD *)this + 129);
        v35 = (v34 >> 3) & 1;
        if ( (unsigned int)(v33 - 1) <= 1 )
          goto LABEL_45;
        if ( (_DWORD)v35 )
        {
          v18 = 1;
          *(double *)v34 = 1.0e-95 * *(double *)v34;
        }
        v36 = v33 - v35;
        v37 = (double *)(v34 + 8 * v35);
        v38 = 0;
        v39 = v33 - v35;
        v40 = 0;
        v41 = v39 >> 1;
        do
        {
          ++v38;
          *(__m128d *)&v37[v40] = _mm_mul_pd(*(__m128d *)&v37[v40], (__m128d)xmmword_291B60);
          v40 += 2;
        }
        while ( v38 < v41 );
        v18 += v36 & 0xFFFFFFFE;
        if ( (v36 & 0xFFFFFFFE) != v36 )
        {
LABEL_45:
          v42 = (double *)(v34 + 8LL * v18);
          v43 = v18 + 1;
          *v42 = *v42 * 1.0e-95;
          if ( v33 > v43 )
            *(double *)(v34 + 8LL * v43) = 1.0e-95 * *(double *)(v34 + 8LL * v43);
        }
      }
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      *((double *)this + 113) = v185;
      *((_QWORD *)this + 165) = v190;
      if ( v185 >= 1.0e18 || !*((_DWORD *)this + 306) )
      {
        if ( *((_DWORD *)this + 327) != 101 )
        {
          if ( v185 < 1.0e20 && *((_DWORD *)this + 306) )
          {
LABEL_50:
            if ( v32 < 1.0e20 )
            {
              ++*((_DWORD *)this + 324);
              *((double *)this + 113) = v32 * 5.0;
              ClpSimplexPrimal::unflag(this);
              v44 = (CoinMessageHandler *)CoinMessageHandler::message(
                                            *((CoinMessageHandler **)this + 43),
                                            18,
                                            (ClpSimplexNonlinear *)((char *)this + 416));
              v45 = *((double *)this + 113);
              v46 = CoinMessageHandler::operator<<(v44);
              CoinMessageHandler::operator<<(v46, 0, v45);
              ClpSimplex::createRim(this, 4, 0, 0);
              ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), 0.0);
LABEL_151:
              ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
LABEL_57:
              *((_DWORD *)this + 80) = -1;
LABEL_70:
              (*(void (__fastcall **)(_QWORD, ClpSimplexNonlinear *, __int64, int *))(**((_QWORD **)this + 24) + 320LL))(
                *((_QWORD *)this + 24),
                this,
                5,
                &v193);
              if ( (unsigned int)v186 > 1 )
              {
LABEL_71:
                if ( v6 )
                {
                  v56 = *((_QWORD *)this + 156);
                  v57 = *(void (__fastcall **)(__int64, ClpSimplexNonlinear *, __int64, __int64, _QWORD *))(*(_QWORD *)v56 + 16LL);
                  if ( v9 < -2 )
                    v57(v56, this, 3, v54, v55);
                  else
                    ((void (__fastcall *)(__int64, ClpSimplexNonlinear *, _QWORD))v57)(
                      v56,
                      this,
                      2 * (unsigned int)(v186 > 1) + 2);
                  if ( v187 )
                  {
                    v58 = *((CoinFactorization ***)this + 158);
                    if ( v58[1] )
                    {
                      CoinFactorization::sparseThreshold(v58[1], 0);
                      v58 = *((CoinFactorization ***)this + 158);
                    }
                    ClpFactorization::goSparse((ClpFactorization *)v58);
                  }
                }
                if ( *((int *)this + 80) < 0 && !*((_DWORD *)this + 324) )
                  *((_DWORD *)this + 80) = 4;
                v59 = *((_DWORD *)this + 77);
                v60 = *((_QWORD *)this + 24);
                v194[0] = -999;
                *((_DWORD *)this + 293) = v59;
                return (*(__int64 (__fastcall **)(__int64, ClpSimplexNonlinear *, _DWORD *, _DWORD *))(*(_QWORD *)v60 + 352LL))(
                         v60,
                         this,
                         v194,
                         v194);
              }
              v97 = *((_BYTE **)this + 164);
              if ( v186 == 1 )
              {
                if ( v97 )
                {
LABEL_162:
                  v54 = *((unsigned int *)this + 27);
                  v102 = *((_DWORD *)this + 26);
                  v103 = *((_BYTE **)this + 33);
                  v104 = v54 + v102;
                  if ( v102 + (_DWORD)v54 && v103 != v97 )
                  {
                    v105 = v104 >> 3;
                    if ( v104 >> 3 > 0 )
                    {
                      if ( (v97 >= v103 + 16 || v103 >= v97 + 16) && v105 > 1 )
                      {
                        v106 = 0;
                        v107 = 0;
                        do
                        {
                          ++v107;
                          *(__m128i *)&v97[v106] = _mm_loadu_si128((const __m128i *)&v103[v106]);
                          v106 += 16;
                        }
                        while ( v105 >> 1 > v107 );
                        v108 = 8LL * (v105 & 0xFFFFFFFE);
                        v109 = &v103[v108];
                        v110 = &v97[v108];
                        if ( (v105 & 0xFFFFFFFE) != v105 )
                        {
                          *v110 = *v109;
                          v110[1] = v109[1];
                          v110[2] = v109[2];
                          v110[3] = v109[3];
                          v110[4] = v109[4];
                          v110[5] = v109[5];
                          v110[6] = v109[6];
                          v110[7] = v109[7];
                        }
                        v111 = v105 - 1;
                      }
                      else
                      {
                        v111 = v105 - 1;
                        v174 = *((char **)this + 33);
                        v175 = v97;
                        do
                        {
                          v176 = *v174;
                          v175 += 8;
                          v174 += 8;
                          *(v175 - 8) = v176;
                          *(v175 - 7) = *(v174 - 7);
                          *(v175 - 6) = *(v174 - 6);
                          *(v175 - 5) = *(v174 - 5);
                          *(v175 - 4) = *(v174 - 4);
                          *(v175 - 3) = *(v174 - 3);
                          *(v175 - 2) = *(v174 - 2);
                          *(v175 - 1) = *(v174 - 1);
                        }
                        while ( v175 != &v97[8 * v111 + 8] );
                      }
                      v112 = 8LL * v111 + 8;
                      v103 += v112;
                      v97 += v112;
                    }
                    switch ( v104 % 8 )
                    {
                      case 1:
                        goto LABEL_180;
                      case 2:
                        goto LABEL_179;
                      case 3:
                        goto LABEL_178;
                      case 4:
                        goto LABEL_177;
                      case 5:
                        goto LABEL_176;
                      case 6:
                        goto LABEL_175;
                      case 7:
                        v97[6] = v103[6];
LABEL_175:
                        v97[5] = v103[5];
LABEL_176:
                        v97[4] = v103[4];
LABEL_177:
                        v97[3] = v103[3];
LABEL_178:
                        v97[2] = v103[2];
LABEL_179:
                        v97[1] = v103[1];
LABEL_180:
                        *v97 = *v103;
                        break;
                      default:
                        break;
                    }
                    v54 = *((unsigned int *)this + 27);
                    v102 = *((_DWORD *)this + 26);
                  }
                  v113 = *((_QWORD **)this + 159);
                  v114 = *((_QWORD **)this + 151);
                  v115 = &v113[(int)v54];
                  if ( v102 && v115 != v114 )
                  {
                    if ( v102 >> 3 > 0 )
                    {
                      v116 = &v113[(int)v54];
                      v117 = *((__int64 **)this + 151);
                      v118 = (unsigned int)((v102 >> 3) - 1);
                      do
                      {
                        v119 = *v117;
                        v116 += 8;
                        v117 += 8;
                        *(v116 - 8) = v119;
                        *(v116 - 7) = *(v117 - 7);
                        *(v116 - 6) = *(v117 - 6);
                        *(v116 - 5) = *(v117 - 5);
                        *(v116 - 4) = *(v117 - 4);
                        *(v116 - 3) = *(v117 - 3);
                        *(v116 - 2) = *(v117 - 2);
                        *(v116 - 1) = *(v117 - 1);
                      }
                      while ( v116 != &v115[8 * v118 + 8] );
                      v120 = ((int)v118 + 1LL) << 6;
                      v114 = (_QWORD *)((char *)v114 + v120);
                      v115 = (_QWORD *)((char *)v115 + v120);
                    }
                    switch ( v102 % 8 )
                    {
                      case 1:
                        goto LABEL_195;
                      case 2:
                        goto LABEL_194;
                      case 3:
                        goto LABEL_193;
                      case 4:
                        goto LABEL_192;
                      case 5:
                        goto LABEL_191;
                      case 6:
                        goto LABEL_190;
                      case 7:
                        v115[6] = v114[6];
LABEL_190:
                        v115[5] = v114[5];
LABEL_191:
                        v115[4] = v114[4];
LABEL_192:
                        v115[3] = v114[3];
LABEL_193:
                        v115[2] = v114[2];
LABEL_194:
                        v115[1] = v114[1];
LABEL_195:
                        *v115 = *v114;
                        break;
                      default:
                        break;
                    }
                  }
                  v55 = *((_QWORD **)this + 152);
                  if ( (_DWORD)v54 && v113 != v55 )
                  {
                    if ( (int)v54 >> 3 > 0 )
                    {
                      v121 = *((__int64 **)this + 152);
                      v122 = v113;
                      do
                      {
                        v123 = *v121;
                        v122 += 8;
                        v121 += 8;
                        *(v122 - 8) = v123;
                        *(v122 - 7) = *(v121 - 7);
                        *(v122 - 6) = *(v121 - 6);
                        *(v122 - 5) = *(v121 - 5);
                        *(v122 - 4) = *(v121 - 4);
                        *(v122 - 3) = *(v121 - 3);
                        *(v122 - 2) = *(v121 - 2);
                        *(v122 - 1) = *(v121 - 1);
                      }
                      while ( v122 != &v113[8 * (unsigned int)(((int)v54 >> 3) - 1) + 8] );
                      v124 = (((int)v54 >> 3) - 1 + 1LL) << 6;
                      v55 = (_QWORD *)((char *)v55 + v124);
                      v113 = (_QWORD *)((char *)v113 + v124);
                    }
                    v54 = (unsigned int)((int)v54 % 8);
                    switch ( (int)v54 )
                    {
                      case 1:
                        goto LABEL_209;
                      case 2:
                        goto LABEL_208;
                      case 3:
                        goto LABEL_207;
                      case 4:
                        goto LABEL_206;
                      case 5:
                        goto LABEL_205;
                      case 6:
                        goto LABEL_204;
                      case 7:
                        v113[6] = v55[6];
LABEL_204:
                        v113[5] = v55[5];
LABEL_205:
                        v113[4] = v55[4];
LABEL_206:
                        v113[3] = v55[3];
LABEL_207:
                        v113[2] = v55[2];
LABEL_208:
                        v113[1] = v55[1];
LABEL_209:
                        *v113 = *v55;
                        break;
                      default:
                        goto LABEL_71;
                    }
                  }
                  goto LABEL_71;
                }
              }
              else if ( v97 )
              {
                operator delete[](v97);
              }
              v98 = *((void **)this + 159);
              if ( v98 )
                operator delete[](v98);
              v99 = operator new[](*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
              v100 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
              *((_QWORD *)this + 164) = v99;
              if ( (unsigned __int64)v100 <= 0xFFFFFFFFFFFFFFFLL )
              {
                v101 = operator new[](8LL * v100);
                v97 = *((_BYTE **)this + 164);
                *((_QWORD *)this + 159) = v101;
                goto LABEL_162;
              }
LABEL_320:
              __cxa_throw_bad_array_new_length();
            }
LABEL_307:
            *((_DWORD *)this + 80) = 1;
            goto LABEL_70;
          }
LABEL_289:
          v163 = *((void **)this + 27);
          if ( v163 )
            operator delete[](v163);
          v164 = *((int *)this + 26);
          if ( v164 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_320;
          v165 = (_QWORD *)operator new[](8 * v164);
          v166 = *((_DWORD *)this + 26);
          *((_QWORD *)this + 27) = v165;
          v167 = *((_QWORD **)this + 16);
          if ( v166 && v167 != v165 )
          {
            if ( v166 >> 3 > 0 )
            {
              v168 = v165;
              v169 = *((__int64 **)this + 16);
              v170 = (unsigned int)((v166 >> 3) - 1);
              do
              {
                v171 = *v169;
                v168 += 8;
                v169 += 8;
                *(v168 - 8) = v171;
                *(v168 - 7) = *(v169 - 7);
                *(v168 - 6) = *(v169 - 6);
                *(v168 - 5) = *(v169 - 5);
                *(v168 - 4) = *(v169 - 4);
                *(v168 - 3) = *(v169 - 3);
                *(v168 - 2) = *(v169 - 2);
                *(v168 - 1) = *(v169 - 1);
              }
              while ( &v165[8 * v170 + 8] != v168 );
              v172 = ((int)v170 + 1LL) << 6;
              v167 = (_QWORD *)((char *)v167 + v172);
              v165 = (_QWORD *)((char *)v165 + v172);
            }
            switch ( v166 % 8 )
            {
              case 1:
                goto LABEL_305;
              case 2:
                goto LABEL_304;
              case 3:
                goto LABEL_303;
              case 4:
                goto LABEL_302;
              case 5:
                goto LABEL_301;
              case 6:
                goto LABEL_300;
              case 7:
                v165[6] = v167[6];
LABEL_300:
                v165[5] = v167[5];
LABEL_301:
                v165[4] = v167[4];
LABEL_302:
                v165[3] = v167[3];
LABEL_303:
                v165[2] = v167[2];
LABEL_304:
                v165[1] = v167[1];
LABEL_305:
                *v165 = *v167;
                break;
              default:
                break;
            }
          }
          *((_QWORD *)this + 113) = 0;
          ClpSimplex::createRim(this, 4, 0, 0);
          ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
          ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
          *((_QWORD *)this + 113) = 0x46293E5939A08CEALL;
          v173 = *((_QWORD *)this + 165);
          *((_QWORD *)this + 112) = *(_QWORD *)(v173 + 32);
          *((_DWORD *)this + 308) = *(_DWORD *)(v173 + 112);
          goto LABEL_307;
        }
        ClpSimplexPrimal::unPerturb(this);
        ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), *((double *)this + 110));
        *((_DWORD *)this + 306) = 1;
        *((_DWORD *)this + 80) = -1;
        v32 = *((double *)this + 113);
      }
      if ( v32 < 1.0e20 )
        goto LABEL_50;
      goto LABEL_289;
    }
    ClpSimplex::createRim(this, 4, 0, 0);
    v143 = *((void **)this + 165);
    if ( v143 )
    {
      ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
      operator delete(v143);
    }
    v144 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v144, this, 1);
    *((_QWORD *)this + 165) = v144;
    v145 = *((int *)a4 + 76) >> 31;
    *((_DWORD *)a4 + 76) ^= v145;
    *((_DWORD *)a4 + 76) -= v145;
LABEL_217:
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 1);
    goto LABEL_27;
  }
  if ( !*((_DWORD *)this + 80) )
  {
    *((_DWORD *)this + 308) = 0;
    *((_QWORD *)this + 112) = 0;
  }
  *((_DWORD *)this + 80) = 10;
  return result;
}

