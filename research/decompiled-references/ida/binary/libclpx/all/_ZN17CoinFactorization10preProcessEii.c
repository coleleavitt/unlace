__int64 __fastcall CoinFactorization::preProcess(CoinFactorization *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r8
  _DWORD *v6; // r15
  __int64 v7; // r12
  _DWORD *v8; // rbx
  __int64 v9; // r13
  __int64 result; // rax
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  int *v19; // rax
  __int64 v20; // r11
  __m128d v21; // xmm3
  _DWORD *v22; // rbp
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // edi
  __m128d v27; // xmm2
  __int64 v28; // rsi
  int v29; // r10d
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r11
  __m128d v34; // xmm1
  __int64 v35; // rcx
  __m128d v36; // xmm0
  int *v37; // r9
  int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // xmm0_8
  __int64 v42; // rdx
  __int64 v43; // xmm0_8
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // edx
  __int64 v49; // r8
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int *v53; // rdx
  __int64 v54; // r11
  __int64 v55; // rcx
  _DWORD *v56; // rsi
  int v57; // eax
  __int64 v58; // rsi
  _DWORD *v59; // rbx
  __int64 v60; // rbx
  int *v61; // rax
  int v62; // edx
  __int64 v63; // r8
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // r9
  int *v69; // r9
  __int64 v70; // r8
  __int64 v71; // rsi
  _DWORD *v72; // rdx
  int v73; // edx
  __int64 v74; // r14
  __int64 v75; // r15
  __int64 v76; // r13
  int v77; // ebx
  __int64 v78; // r8
  int v79; // r10d
  int v80; // edx
  unsigned __int64 v81; // rax
  _OWORD *v82; // rax
  __int64 v83; // rdx
  _DWORD *v84; // rax
  _DWORD *v85; // rdx
  _DWORD *v86; // r14
  __int64 v87; // rbp
  _DWORD *v88; // rax
  __int64 v89; // rax
  int v90; // esi
  int v91; // edx
  _DWORD *v92; // rcx
  int v93; // ecx
  __int64 v94; // rax
  int v95; // edx
  __int64 v96; // r13
  int v97; // r9d
  __int64 v98; // rsi
  __int64 v99; // rbx
  __int64 v100; // rcx
  int *v101; // r11
  _DWORD *v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r15
  int v107; // edx
  _DWORD *v108; // r14
  __int64 v109; // r13
  int v110; // ecx
  __int64 v111; // rsi
  __int64 v112; // r11
  __int64 v113; // rcx
  int v114; // ebx
  int *v115; // r10
  __int64 v116; // rcx
  _DWORD *v117; // rsi
  int v118; // edx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // r11
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // xmm0_8
  int v125; // r9d
  int *v126; // rdx
  int v127; // eax
  __int64 *v128; // rcx
  __int64 v129; // rax
  int *v130; // rsi
  int *v131; // rax
  int v132; // r10d
  __int64 v133; // xmm1_8
  __int64 v134; // r9
  int v135; // eax
  int v136; // esi
  int v137; // eax
  double v138; // xmm3_8
  __int64 v139; // rcx
  _DWORD *v140; // rdi
  double v141; // xmm1_8
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r12
  __int64 v145; // rdi
  double v146; // xmm0_8
  _DWORD *v147; // r10
  int v148; // eax
  bool v149; // cc
  double v150; // xmm0_8
  __int64 v151; // rax
  _DWORD *v152; // rbx
  double *v153; // rdx
  _DWORD *v154; // rax
  double v155; // xmm0_8
  int v156; // edx
  int v157; // edx
  __int64 v158; // rdx
  _OWORD *v159; // rax
  _OWORD *v160; // rax
  __int64 v161; // rsi
  int v162; // ecx
  int v163; // ecx
  _OWORD *v164; // rax
  __int64 v165; // rcx
  int v166; // edx
  __int64 v167; // rax
  int v168; // edx
  __int64 v169; // rdx
  int v170; // edx
  _DWORD *v171; // rax
  int v172; // edx
  __int64 v173; // rdx
  int v174; // [rsp+0h] [rbp-90h]
  int v175; // [rsp+0h] [rbp-90h]
  __int64 v176; // [rsp+0h] [rbp-90h]
  __int64 v177; // [rsp+8h] [rbp-88h]
  __int64 v178; // [rsp+8h] [rbp-88h]
  __int64 v179; // [rsp+8h] [rbp-88h]
  __int64 v180; // [rsp+8h] [rbp-88h]
  int v181; // [rsp+14h] [rbp-7Ch]
  __int64 v182; // [rsp+18h] [rbp-78h]
  __int64 v183; // [rsp+18h] [rbp-78h]
  int v184; // [rsp+18h] [rbp-78h]
  __int64 v185; // [rsp+20h] [rbp-70h]
  __int64 v186; // [rsp+28h] [rbp-68h]
  __int64 v187; // [rsp+28h] [rbp-68h]
  __int64 v188; // [rsp+28h] [rbp-68h]
  __int64 v189; // [rsp+28h] [rbp-68h]
  _DWORD *v190; // [rsp+30h] [rbp-60h]
  int v191; // [rsp+30h] [rbp-60h]
  __int64 v192; // [rsp+38h] [rbp-58h]
  _DWORD *v193; // [rsp+38h] [rbp-58h]
  __int64 v194; // [rsp+38h] [rbp-58h]
  int *v195; // [rsp+38h] [rbp-58h]
  CoinFactorization *v196; // [rsp+40h] [rbp-50h]
  __int64 v197; // [rsp+40h] [rbp-50h]
  _DWORD *v198; // [rsp+40h] [rbp-50h]
  double *v199; // [rsp+40h] [rbp-50h]
  __int64 v200; // [rsp+48h] [rbp-48h]
  __int64 v201; // [rsp+48h] [rbp-48h]
  int v202; // [rsp+48h] [rbp-48h]
  int v203; // [rsp+50h] [rbp-40h]
  unsigned int v204; // [rsp+54h] [rbp-3Ch]
  CoinFactorization *v205; // [rsp+58h] [rbp-38h]

  v2 = 0;
  v3 = *((_QWORD *)this + 78);
  v4 = *((_QWORD *)this + 63);
  v5 = *((_QWORD *)this + 75);
  v6 = *((_DWORD **)this + 26);
  v7 = *((_QWORD *)this + 29);
  v8 = *((_DWORD **)this + 32);
  v9 = *((_QWORD *)this + 23);
  if ( *((int *)this + 158) <= -2 )
    v3 = 0;
  v203 = *((_DWORD *)this + 147);
  if ( *((int *)this + 128) <= -2 )
    v4 = 0;
  if ( *((int *)this + 152) <= -2 )
    v5 = 0;
  if ( *((int *)this + 54) <= -2 )
    v6 = nullptr;
  if ( *((int *)this + 60) <= -2 )
    v7 = 0;
  if ( *((int *)this + 66) <= -2 )
    v8 = nullptr;
  v190 = v8;
  if ( *((int *)this + 48) <= -2 )
    v9 = 0;
  if ( *((int *)this + 164) > -2 )
    v2 = *((_QWORD *)this + 81);
  v185 = v2;
  v174 = *((_DWORD *)this + 8);
  result = *((unsigned int *)this + 11);
  v181 = *((_DWORD *)this + 11);
  if ( a2 <= 3 )
    *((_DWORD *)this + 18) = *((_DWORD *)this + 147);
  switch ( a2 )
  {
    case -1:
    case 1:
      v13 = (unsigned int)(v203 - 1);
      goto LABEL_153;
    case 0:
      v11 = v174 + 1;
      if ( v174 != -1 )
      {
        v170 = v174 + 8;
        v171 = v6;
        if ( v11 >= 0 )
          v170 = v174 + 1;
        v172 = v170 >> 3;
        if ( v172 > 0 )
        {
          v173 = (unsigned int)(v172 - 1);
          do
          {
            *(_OWORD *)v171 = 0;
            v171 += 8;
            *((_OWORD *)v171 - 1) = 0;
          }
          while ( &v6[8 * v173 + 8] != v171 );
          v171 = &v6[8 * (int)v173 + 8];
        }
        switch ( v11 % 8 )
        {
          case 1:
            goto LABEL_263;
          case 2:
            goto LABEL_262;
          case 3:
            goto LABEL_261;
          case 4:
            goto LABEL_260;
          case 5:
            goto LABEL_259;
          case 6:
            goto LABEL_258;
          case 7:
            v171[6] = 0;
LABEL_258:
            v171[5] = 0;
LABEL_259:
            v171[4] = 0;
LABEL_260:
            v171[3] = 0;
LABEL_261:
            v171[2] = 0;
LABEL_262:
            v171[1] = 0;
LABEL_263:
            *v171 = 0;
            break;
          default:
            break;
        }
      }
      v12 = *((_DWORD *)this + 13) + 1;
      if ( *((_DWORD *)this + 13) != -1 )
      {
        v166 = *((_DWORD *)this + 13) + 8;
        v167 = v7;
        if ( v12 >= 0 )
          v166 = *((_DWORD *)this + 13) + 1;
        v168 = v166 >> 3;
        if ( v168 > 0 )
        {
          v169 = (unsigned int)(v168 - 1);
          do
          {
            *(_OWORD *)v167 = 0;
            v167 += 32;
            *(_OWORD *)(v167 - 16) = 0;
          }
          while ( v7 + 32 * v169 + 32 != v167 );
          v167 = v7 + 32 * ((int)v169 + 1LL);
        }
        switch ( v12 % 8 )
        {
          case 1:
            goto LABEL_256;
          case 2:
            goto LABEL_255;
          case 3:
            goto LABEL_254;
          case 4:
            goto LABEL_253;
          case 5:
            goto LABEL_252;
          case 6:
            goto LABEL_251;
          case 7:
            *(_DWORD *)(v167 + 24) = 0;
LABEL_251:
            *(_DWORD *)(v167 + 20) = 0;
LABEL_252:
            *(_DWORD *)(v167 + 16) = 0;
LABEL_253:
            *(_DWORD *)(v167 + 12) = 0;
LABEL_254:
            *(_DWORD *)(v167 + 8) = 0;
LABEL_255:
            *(_DWORD *)(v167 + 4) = 0;
LABEL_256:
            *(_DWORD *)v167 = 0;
            break;
          default:
            break;
        }
      }
      if ( v203 <= 0 )
      {
        v13 = (unsigned int)(v203 - 1);
      }
      else
      {
        v13 = (unsigned int)(v203 - 1);
        v14 = 0;
        do
        {
          v15 = *(int *)(v3 + v14);
          v16 = *(int *)(v4 + v14);
          v14 += 4;
          ++v6[v15];
          ++*(_DWORD *)(v7 + 4 * v16);
        }
        while ( 4 * v13 + 4 != v14 );
      }
LABEL_153:
      if ( v181 <= 0 )
      {
        v204 = v181 - 1;
      }
      else
      {
        v118 = 0;
        v204 = v181 - 1;
        v119 = 0;
        do
        {
          v118 += *(_DWORD *)(v7 + v119);
          *(_DWORD *)(v185 + v119) = v118;
          v119 += 4;
        }
        while ( 4LL * (unsigned int)(v181 - 1) + 4 != v119 );
      }
      if ( (int)v13 >= 0 )
      {
        v120 = (int)v13;
        v121 = (int)v13 - 1LL;
        v122 = v121 - v13;
        while ( 1 )
        {
          v123 = *(int *)(v4 + 4 * v120);
          if ( (int)v123 >= 0 )
          {
            v124 = *(_QWORD *)(v5 + 8 * v120);
            v125 = *(_DWORD *)(v3 + 4 * v120);
            *(_DWORD *)(v4 + 4 * v120) = -1;
            do
            {
              v126 = (int *)(v185 + 4 * v123);
              v127 = *v126 - 1;
              *v126 = v127;
              v128 = (__int64 *)(v5 + 8LL * v127);
              v129 = 4LL * v127;
              v130 = (int *)(v4 + v129);
              v131 = (int *)(v3 + v129);
              v132 = *v131;
              v133 = *v128;
              v123 = *v130;
              *v128 = v124;
              *v131 = v125;
              v124 = v133;
              *v130 = -1;
              v125 = v132;
            }
            while ( (int)v123 >= 0 );
          }
          v120 = v121;
          if ( v121 == v122 )
            break;
          --v121;
        }
      }
      goto LABEL_104;
    case 2:
      v204 = v181 - 1;
LABEL_104:
      if ( v174 <= 0 )
      {
        if ( !v174 )
        {
          v184 = -1;
          goto LABEL_170;
        }
        v184 = v174 - 1;
      }
      else
      {
        v80 = 0;
        v184 = v174 - 1;
        v81 = 0;
        do
        {
          *(_DWORD *)(v9 + v81) = v80;
          v80 += v6[v81 / 4];
          v81 += 4LL;
        }
        while ( 4LL * (unsigned int)(v174 - 1) + 4 != v81 );
      }
      if ( v174 / 8 <= 0 )
      {
        v84 = v6;
      }
      else
      {
        v82 = v6;
        v83 = (unsigned int)(v174 / 8 - 1);
        do
        {
          *v82 = 0;
          v82 += 2;
          *(v82 - 1) = 0;
        }
        while ( v82 != (_OWORD *)&v6[8 * v83 + 8] );
        v84 = &v6[8 * (int)v83 + 8];
      }
      switch ( v174 % 8 )
      {
        case 1:
          goto LABEL_169;
        case 2:
          goto LABEL_168;
        case 3:
          goto LABEL_167;
        case 4:
          goto LABEL_166;
        case 5:
          goto LABEL_165;
        case 6:
          goto LABEL_164;
        case 7:
          v84[6] = 0;
LABEL_164:
          v84[5] = 0;
LABEL_165:
          v84[4] = 0;
LABEL_166:
          v84[3] = 0;
LABEL_167:
          v84[2] = 0;
LABEL_168:
          v84[1] = 0;
LABEL_169:
          *v84 = 0;
          break;
        default:
          break;
      }
LABEL_170:
      v134 = 0;
      v189 = v204 + 1LL;
      if ( v181 <= 0 )
        goto LABEL_113;
      v180 = v7;
      v205 = this;
      do
      {
        while ( 1 )
        {
          v135 = *(_DWORD *)(v180 + 4 * v134);
          if ( v135 )
            break;
          if ( ++v134 == v189 )
            goto LABEL_182;
        }
        v142 = *(int *)(v185 + 4 * v134);
        v136 = *(_DWORD *)(v185 + 4 * v134);
        v137 = v136 + v135;
        v195 = (int *)(v3 + 4 * v142);
        v138 = *(double *)(v5 + 8 * v142);
        v199 = (double *)(v5 + 8 * v142);
        v139 = *v195;
        v202 = *v195;
        v140 = &v6[v139];
        LODWORD(v142) = *v140;
        v141 = fabs(v138);
        ++*v140;
        *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v9 + 4 * v139) + (int)v142)) = v134;
        LODWORD(v142) = v136 + 1;
        if ( v136 + 1 >= v137 )
        {
          v154 = v195;
          v155 = v138;
          v153 = v199;
          v152 = v195;
        }
        else
        {
          v142 = (int)v142;
          v143 = (int)v142 + 1LL;
          v144 = v143 + (unsigned int)(v137 - v136 - 2);
          while ( 1 )
          {
            v145 = *(int *)(v3 + 4 * v142);
            v146 = fabs(*(double *)(v5 + 8 * v142));
            v147 = &v6[v145];
            v148 = (*v147)++;
            v149 = v146 <= v141;
            v150 = fmax(v146, v141);
            v151 = *(_DWORD *)(v9 + 4 * v145) + v148;
            if ( !v149 )
              v136 = v142;
            *(_DWORD *)(v4 + 4 * v151) = v134;
            v141 = v150;
            v142 = v143;
            if ( v143 == v144 )
              break;
            ++v143;
          }
          v152 = v195;
          v153 = (double *)(v5 + 8LL * v136);
          v154 = (_DWORD *)(v3 + 4LL * v136);
          v155 = *v153;
        }
        ++v134;
        *v152 = *v154;
        *v199 = v155;
        *v154 = v202;
        *v153 = v138;
      }
      while ( v134 != v189 );
LABEL_182:
      v7 = v180;
      this = v205;
LABEL_113:
      v85 = nullptr;
      v86 = *((_DWORD **)this + 53);
      v87 = *((_QWORD *)this + 50);
      v88 = *((_DWORD **)this + 47);
      if ( *((int *)this + 108) <= -2 )
        v86 = nullptr;
      v179 = *((_QWORD *)this + 35);
      if ( *((int *)this + 102) <= -2 )
        v87 = 0;
      if ( *((int *)this + 96) <= -2 )
        v88 = nullptr;
      v198 = v88;
      v89 = *((_QWORD *)this + 44);
      if ( *((int *)this + 90) <= -2 )
        v89 = 0;
      v194 = v89;
      if ( *((int *)this + 72) > -2 )
        v85 = *((_DWORD **)this + 35);
      v90 = *((_DWORD *)this + 125) + 2;
      if ( *((_DWORD *)this + 125) != -2 )
      {
        v162 = *((_DWORD *)this + 125) + 9;
        if ( v90 >= 0 )
          v162 = *((_DWORD *)this + 125) + 2;
        v163 = v162 >> 3;
        if ( v163 > 0 )
        {
          v164 = v85;
          v165 = (unsigned int)(v163 - 1);
          do
          {
            *v164 = -1;
            v164 += 2;
            *(v164 - 1) = -1;
          }
          while ( v164 != (_OWORD *)&v85[8 * v165 + 8] );
          v85 += 8 * (int)v165 + 8;
        }
        switch ( v90 % 8 )
        {
          case 1:
            goto LABEL_224;
          case 2:
            goto LABEL_223;
          case 3:
            goto LABEL_222;
          case 4:
            goto LABEL_221;
          case 5:
            goto LABEL_220;
          case 6:
            goto LABEL_219;
          case 7:
            v85[6] = -1;
LABEL_219:
            v85[5] = -1;
LABEL_220:
            v85[4] = -1;
LABEL_221:
            v85[3] = -1;
LABEL_222:
            v85[2] = -1;
LABEL_223:
            v85[1] = -1;
LABEL_224:
            *v85 = -1;
            break;
          default:
            break;
        }
      }
      v91 = *((_DWORD *)this + 11);
      v92 = *((_DWORD **)this + 10);
      if ( *((int *)this + 22) <= -2 )
        v92 = nullptr;
      if ( v91 )
      {
        if ( v91 / 8 > 0 )
        {
          v160 = v92;
          v161 = (unsigned int)(v91 / 8 - 1);
          do
          {
            *v160 = -1;
            v160 += 2;
            *(v160 - 1) = -1;
          }
          while ( &v92[8 * v161 + 8] != (_DWORD *)v160 );
          v92 += 8 * (int)v161 + 8;
        }
        switch ( v91 % 8 )
        {
          case 1:
            goto LABEL_210;
          case 2:
            goto LABEL_209;
          case 3:
            goto LABEL_208;
          case 4:
            goto LABEL_207;
          case 5:
            goto LABEL_206;
          case 6:
            goto LABEL_205;
          case 7:
            v92[6] = -1;
LABEL_205:
            v92[5] = -1;
LABEL_206:
            v92[4] = -1;
LABEL_207:
            v92[3] = -1;
LABEL_208:
            v92[2] = -1;
LABEL_209:
            v92[1] = -1;
LABEL_210:
            *v92 = -1;
            break;
          default:
            break;
        }
      }
      v93 = *((_DWORD *)this + 13) + 1;
      if ( *((_DWORD *)this + 13) != -1 )
      {
        v156 = *((_DWORD *)this + 13) + 8;
        if ( v93 >= 0 )
          v156 = *((_DWORD *)this + 13) + 1;
        v157 = v156 >> 3;
        if ( v157 > 0 )
        {
          v158 = (unsigned int)(v157 - 1);
          v159 = v190;
          do
          {
            *v159 = 0;
            v159 += 2;
            *(v159 - 1) = 0;
          }
          while ( &v190[8 * v158 + 8] != (_DWORD *)v159 );
          v190 += 8 * (int)v158 + 8;
        }
        switch ( v93 % 8 )
        {
          case 1:
            goto LABEL_198;
          case 2:
            goto LABEL_197;
          case 3:
            goto LABEL_196;
          case 4:
            goto LABEL_195;
          case 5:
            goto LABEL_194;
          case 6:
            goto LABEL_193;
          case 7:
            v190[6] = 0;
LABEL_193:
            v190[5] = 0;
LABEL_194:
            v190[4] = 0;
LABEL_195:
            v190[3] = 0;
LABEL_196:
            v190[2] = 0;
LABEL_197:
            v190[1] = 0;
LABEL_198:
            *v190 = 0;
            break;
          default:
            break;
        }
      }
      if ( v174 > 0 )
      {
        v94 = 0;
        v201 = v9;
        v95 = 0;
        v96 = *((_QWORD *)this + 38);
        v187 = *((_QWORD *)this + 41);
        do
        {
          while ( 1 )
          {
            v97 = v95 + 1;
            v98 = 0;
            v99 = 0;
            v86[v94] = v95 - 1;
            *(_DWORD *)(v87 + v94 * 4) = v95 + 1;
            v100 = v179;
            if ( *((int *)this + 78) > -2 )
              v98 = v96;
            if ( *((int *)this + 72) <= -2 )
              v100 = 0;
            v101 = (int *)(v100 + 4LL * (int)v6[v94]);
            if ( *((int *)this + 84) > -2 )
              v99 = v187;
            v102 = (_DWORD *)(v94 * 4 + v98);
            v103 = *v101;
            *(_DWORD *)(v99 + v94 * 4) = -2 - v6[v94];
            *v101 = v95;
            if ( (int)v103 < 0 )
              break;
            ++v94;
            *v102 = v103;
            *(_DWORD *)(v99 + 4 * v103) = v95++;
            if ( v97 == v174 )
              goto LABEL_139;
          }
          ++v94;
          *v102 = -1;
          ++v95;
        }
        while ( v97 != v174 );
LABEL_139:
        v9 = v201;
      }
      v86[*((int *)this + 10)] = v184;
      *(_DWORD *)(v87 + 4LL * *((int *)this + 10)) = 0;
      *v86 = *((_DWORD *)this + 10);
      v104 = 4LL * v174;
      *(_DWORD *)(v87 + v104 - 4) = *((_DWORD *)this + 10);
      *(_DWORD *)(v9 + 4LL * *((int *)this + 10)) = v203;
      if ( v181 > 0 )
      {
        v105 = -(__int64)v174;
        v106 = *((_QWORD *)this + 38);
        v107 = 0;
        v176 = *((_QWORD *)this + 41);
        v108 = &v198[v105];
        v109 = v194 + 4 * v105;
        v188 = v7 + 4 * v105;
        do
        {
          v110 = v107++ - 1;
          v111 = 0;
          v112 = v176;
          v108[(unsigned __int64)v104 / 4] = v110;
          *(_DWORD *)(v109 + v104) = v107;
          v113 = v179;
          v114 = v107 + v184;
          if ( *((int *)this + 78) > -2 )
            v111 = v106;
          if ( *((int *)this + 72) <= -2 )
            v113 = 0;
          v115 = (int *)(v113 + 4LL * *(int *)(v188 + v104));
          v116 = *v115;
          if ( *((int *)this + 84) <= -2 )
            v112 = 0;
          v117 = (_DWORD *)(v104 + v111);
          *(_DWORD *)(v112 + v104) = -2 - *(_DWORD *)(v188 + v104);
          *v115 = v114;
          if ( (int)v116 >= 0 )
          {
            *v117 = v116;
            *(_DWORD *)(v112 + 4 * v116) = v114;
          }
          else
          {
            *v117 = -1;
          }
          v104 += 4;
        }
        while ( v107 != v181 );
        v198[*((int *)this + 13)] = v204;
        *(_DWORD *)(v194 + 4LL * *((int *)this + 13)) = 0;
        *v198 = *((_DWORD *)this + 13);
        goto LABEL_21;
      }
      v198[*((int *)this + 13)] = v204;
      *(_DWORD *)(v194 + 4LL * *((int *)this + 13)) = 0;
      *v198 = *((_DWORD *)this + 13);
      if ( v181 )
LABEL_21:
        *(_DWORD *)(v194 + 4LL * v181 - 4) = *((_DWORD *)this + 13);
LABEL_22:
      result = *((int *)this + 13);
      *(_DWORD *)(v185 + 4 * result) = v203;
      return result;
    case 3:
      v204 = v181 - 1;
      v184 = v174 - 1;
      goto LABEL_113;
    case 4:
      v17 = 0;
      v200 = *((_QWORD *)this + 69);
      if ( *((int *)this + 140) > -2 )
        v17 = *((_QWORD *)this + 69);
      v18 = v17;
      if ( v174 <= 0 )
      {
        if ( v181 <= 0 )
          goto LABEL_69;
      }
      else
      {
        v19 = v6;
        do
        {
          if ( *v19 >= 0 )
            *v19 = 0;
          ++v19;
        }
        while ( &v6[v174 - 1 + 1] != v19 );
        if ( v181 <= 0 )
          goto LABEL_57;
      }
      v192 = v4;
      v20 = 0;
      v21 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
      v177 = v7;
      v22 = v6;
      v196 = this;
      v182 = 4LL * (unsigned int)(v181 - 1) + 4;
      do
      {
        while ( 1 )
        {
          v23 = *(_DWORD *)(v177 + v20);
          if ( v23 )
            break;
          v20 += 4;
          if ( v182 == v20 )
            goto LABEL_56;
        }
        v24 = *(_DWORD *)(v185 + v20);
        v25 = v24 + v23;
        if ( v24 >= v25 )
        {
          *(_DWORD *)((char *)v190 + v20) = 0;
          *(_DWORD *)(v185 + v20) = v24;
          v45 = 0;
        }
        else
        {
          v186 = v20;
          v26 = 0;
          v27 = (__m128d)0xBFF0000000000000LL;
          v28 = (unsigned int)(v25 - v24 - 1) + 1LL;
          v29 = -1;
          v30 = v3 + 4LL * v24;
          v31 = v5 + 8LL * v24;
          v32 = 0;
          v33 = v28;
          do
          {
            while ( 1 )
            {
              v36 = (__m128d)*(unsigned __int64 *)(v31 + 8 * v32);
              v37 = &v22[*(int *)(v30 + 4 * v32)];
              v38 = *(_DWORD *)(v30 + 4 * v32);
              if ( *v37 >= 0 )
                break;
              ++v32;
              v39 = v24++;
              *(_DWORD *)(v3 + 4 * v39) = v38;
              *(double *)(v5 + 8 * v39) = v36.m128d_f64[0];
              if ( v33 == v32 )
                goto LABEL_47;
            }
            ++*v37;
            v34 = _mm_and_pd(v36, v21);
            if ( v34.m128d_f64[0] > v27.m128d_f64[0] )
              v29 = v26;
            else
              v34 = v27;
            ++v32;
            v35 = v26++;
            *(_DWORD *)(v9 + 4 * v35) = v38;
            *(double *)(v18 + 8 * v35) = v36.m128d_f64[0];
            v27 = v34;
          }
          while ( v33 != v32 );
LABEL_47:
          v20 = v186;
          *(_DWORD *)((char *)v190 + v186) = v24 - *(_DWORD *)(v185 + v186);
          *(_DWORD *)(v185 + v186) = v24;
          if ( v29 != -1 )
          {
            v40 = v24++;
            v41 = *(_QWORD *)(v18 + 8LL * v29);
            *(_DWORD *)(v3 + 4 * v40) = *(_DWORD *)(v9 + 4LL * v29);
            *(_QWORD *)(v5 + 8 * v40) = v41;
          }
          if ( v26 )
          {
            v42 = 0;
            do
            {
              if ( v29 != (_DWORD)v42 )
              {
                v43 = *(_QWORD *)(v18 + 8 * v42);
                v44 = v24++;
                *(_DWORD *)(v3 + 4 * v44) = *(_DWORD *)(v9 + 4 * v42);
                *(_QWORD *)(v5 + 8 * v44) = v43;
              }
              ++v42;
            }
            while ( (unsigned int)(v26 - 1) + 1LL != v42 );
          }
          v45 = v24 - *(_DWORD *)(v185 + v186);
        }
        *(_DWORD *)(v177 + v20) = v45;
        v20 += 4;
      }
      while ( v182 != v20 );
LABEL_56:
      v6 = v22;
      v7 = v177;
      v4 = v192;
      this = v196;
      if ( v174 <= 0 )
        goto LABEL_62;
LABEL_57:
      v46 = 0;
      v47 = 0;
      do
      {
        *(_DWORD *)(v9 + 4 * v46) = v47;
        v48 = v6[v46];
        if ( v48 > 0 )
        {
          v6[v46] = 0;
          v47 += v48;
        }
        ++v46;
      }
      while ( v174 > (int)v46 );
      if ( v181 <= 0 )
        goto LABEL_69;
LABEL_62:
      v49 = 0;
      do
      {
        while ( 1 )
        {
          v50 = *(_DWORD *)(v7 + 4 * v49);
          if ( v50 )
          {
            v51 = *(_DWORD *)(v185 + 4 * v49);
            v52 = v51 + v50;
            if ( v51 < v52 )
              break;
          }
          if ( v181 <= (int)++v49 )
            goto LABEL_69;
        }
        v53 = (int *)(v3 + 4LL * v51);
        v54 = v3 + 4 + 4 * ((unsigned int)(v52 - v51 - 1) + (__int64)v51);
        do
        {
          v55 = *v53++;
          v56 = &v6[v55];
          v57 = (*v56)++;
          *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v9 + 4 * v55) + v57)) = v49;
        }
        while ( (int *)v54 != v53 );
        ++v49;
      }
      while ( v181 > (int)v49 );
LABEL_69:
      v58 = v200;
      v59 = *((_DWORD **)this + 47);
      if ( *((int *)this + 96) <= -2 )
        v59 = nullptr;
      v193 = v59;
      v60 = *((_QWORD *)this + 44);
      if ( *((int *)this + 90) <= -2 )
        v60 = 0;
      v197 = v60;
      if ( *((int *)this + 140) <= -2 )
        v58 = 0;
      if ( *((int *)this + 192) < -1 )
      {
        dword_0 = 0;
        BUG();
      }
      **((_DWORD **)this + 95) = 0;
      if ( v174 > 0 )
      {
        v61 = v6;
        v62 = 0;
        do
        {
          if ( *v61 < 0 )
          {
            v63 = v62;
            *v61 = 0;
            ++v62;
            *(_QWORD *)(v58 + 8 * v63) = 0xBFF0000000000000LL;
          }
          ++v61;
        }
        while ( &v6[v174 - 1 + 1] != v61 );
      }
      v64 = 0;
      v65 = 4LL * v174;
      v66 = 0x3FFFFFFFFFFFFFFFLL * v174;
      v191 = v174 - 1;
      v183 = v66 * 4 + v60;
      v178 = v7 - v65;
      while ( *((_DWORD *)this + 11) > v64 )
      {
        v73 = v64++ - 1;
        v74 = 0;
        v68 = *((_QWORD *)this + 35);
        v75 = 0;
        v71 = *((_QWORD *)this + 41);
        v76 = 0;
        v193[v66 + (unsigned __int64)v65 / 4] = v73;
        v67 = *((_QWORD *)this + 38);
        *(_DWORD *)(v183 + v65) = v64;
        v175 = *(_DWORD *)(v178 + v65);
        v77 = v64 + v191;
        if ( *((int *)this + 78) > -2 )
          v74 = v67;
        v78 = *(int *)(v74 + v65);
        if ( *((int *)this + 72) > -2 )
          v75 = v68;
        if ( *((int *)this + 84) > -2 )
          v76 = v71;
        v79 = *(_DWORD *)(v76 + v65);
        if ( v79 >= 0 )
          *(_DWORD *)(v74 + 4LL * v79) = v78;
        else
          *(_DWORD *)(v75 + 4LL * (-2 - v79)) = v78;
        if ( (int)v78 >= 0 )
          *(_DWORD *)(v76 + 4 * v78) = v79;
        *(_DWORD *)(v74 + v65) = -2;
        *(_DWORD *)(v76 + v65) = -2;
        if ( *((int *)this + 78) <= -2 )
          v67 = 0;
        if ( *((int *)this + 72) <= -2 )
          v68 = 0;
        v69 = (int *)(v68 + 4LL * v175);
        v70 = *v69;
        if ( *((int *)this + 84) <= -2 )
          v71 = 0;
        v72 = (_DWORD *)(v65 + v67);
        *(_DWORD *)(v71 + v65) = -2 - v175;
        *v69 = v77;
        if ( (int)v70 < 0 )
        {
          *v72 = -1;
        }
        else
        {
          *v72 = v70;
          *(_DWORD *)(v71 + 4 * v70) = v77;
        }
        v65 += 4;
      }
      v193[*((int *)this + 13)] = v181 - 1;
      *(_DWORD *)(v197 + 4LL * *((int *)this + 13)) = 0;
      *v193 = *((_DWORD *)this + 13);
      if ( v181 )
        *(_DWORD *)(v197 + 4LL * v181 - 4) = *((_DWORD *)this + 13);
      goto LABEL_22;
    default:
      return result;
  }
}

