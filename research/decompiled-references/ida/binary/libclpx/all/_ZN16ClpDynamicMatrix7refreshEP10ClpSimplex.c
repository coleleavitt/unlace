__int64 __fastcall ClpDynamicMatrix::refresh(ClpDynamicMatrix *this, ClpSimplex *a2, __m128d a3)
{
  ClpDynamicMatrix *v3; // r14
  ClpSimplex *v4; // r15
  unsigned __int64 v5; // rax
  _DWORD *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  double v27; // xmm5_8
  __int64 v28; // r13
  __m128d v29; // xmm4
  __int64 v30; // r10
  __int64 i; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __m128d v36; // xmm0
  double v37; // xmm1_8
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // r11
  unsigned __int64 v48; // r9
  unsigned int v49; // r8d
  __int64 v50; // xmm0_8
  int v51; // r9d
  __int64 v52; // rdi
  __int64 v53; // xmm0_8
  int v54; // r9d
  __int64 v55; // xmm0_8
  __int64 v56; // r11
  __int64 v57; // rdi
  unsigned int v58; // r9d
  __int64 v59; // rbp
  __int64 v60; // r8
  __int64 v61; // r11
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // edi
  __int128 v65; // xmm0
  unsigned int v66; // eax
  int v67; // edi
  __int64 v68; // rdx
  __int64 v69; // xmm0_8
  int v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // xmm0_8
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // xmm0_8
  int v76; // r9d
  __int64 v77; // rdx
  int v78; // r8d
  __int64 v79; // xmm0_8
  unsigned int v80; // edx
  int v81; // r8d
  int v82; // edi
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // xmm0_8
  __int64 v86; // rax
  __int64 v87; // xmm0_8
  __int64 v88; // rdx
  int v89; // eax
  int v90; // ecx
  int v91; // edx
  int v92; // ecx
  int v93; // eax
  ClpSimplex *v94; // rbx
  __int64 v95; // r15
  __int64 v96; // r14
  __int64 v97; // r13
  void *v98; // r12
  __int64 v99; // rcx
  __int64 v100; // r8
  ClpNonLinearCost **v101; // r10
  __int64 v102; // r9
  int v103; // edi
  int v104; // ebp
  int v105; // esi
  __int64 v106; // rdi
  double *v107; // r11
  double v108; // xmm1_8
  double v109; // xmm2_8
  int v110; // eax
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  int v114; // esi
  int v115; // r11d
  __int64 v116; // rax
  int v117; // ebp
  double v118; // xmm1_8
  int v119; // ebp
  int v120; // esi
  int v121; // ebx
  int v122; // esi
  __int64 v123; // rdx
  double *v124; // r11
  double *v125; // r10
  double *v126; // rdx
  int v127; // eax
  int v128; // eax
  signed int v129; // esi
  __int64 v130; // rbx
  signed int v131; // edi
  signed int v132; // ebp
  int v133; // r9d
  __int64 v134; // rax
  signed int j; // r8d
  signed int k; // edx
  signed int *v137; // rdx
  unsigned __int64 v138; // r9
  signed int v139; // ecx
  __int64 v140; // r8
  int v141; // edi
  int v142; // esi
  __int64 v143; // r9
  int v144; // r8d
  int v145; // ecx
  int v146; // esi
  int v147; // r10d
  __int64 v148; // r8
  int v149; // r11d
  unsigned int v150; // edx
  unsigned int v151; // ecx
  int v152; // r10d
  unsigned int v153; // r9d
  unsigned int v154; // esi
  unsigned int v155; // ecx
  __int64 v156; // rdx
  __m128i v157; // xmm3
  unsigned int v158; // ecx
  __m128i si128; // xmm2
  unsigned int v160; // eax
  __m128i v161; // xmm0
  int v162; // esi
  int v163; // edx
  int v164; // edi
  int v165; // eax
  int v167; // r9d
  __int64 v168; // r12
  int v169; // r9d
  _QWORD *v170; // rdi
  _QWORD *v171; // rax
  __int64 v172; // r8
  unsigned int v173; // ecx
  __int64 v174; // r10
  _QWORD *v175; // rsi
  int v176; // edx
  _DWORD *v177; // rax
  int v178; // edx
  __int64 v179; // rdx
  int v180; // edx
  _QWORD *v181; // rax
  _DWORD *v182; // rax
  _OWORD *v183; // rdx
  unsigned __int64 v184; // rax
  __int64 v185; // xmm0_8
  unsigned int v186; // ecx
  __int64 v187; // [rsp+8h] [rbp-F0h]
  int v188; // [rsp+10h] [rbp-E8h]
  int v189; // [rsp+14h] [rbp-E4h]
  __int64 v190; // [rsp+18h] [rbp-E0h]
  __int64 v191; // [rsp+20h] [rbp-D8h]
  double v192; // [rsp+28h] [rbp-D0h]
  int v193; // [rsp+30h] [rbp-C8h]
  _DWORD *v194; // [rsp+30h] [rbp-C8h]
  ClpNonLinearCost **v195; // [rsp+30h] [rbp-C8h]
  __int64 v196; // [rsp+30h] [rbp-C8h]
  __int64 v197; // [rsp+38h] [rbp-C0h]
  ClpDynamicMatrix *v198; // [rsp+38h] [rbp-C0h]
  __int64 v199; // [rsp+38h] [rbp-C0h]
  int v200; // [rsp+40h] [rbp-B8h]
  __int64 v201; // [rsp+40h] [rbp-B8h]
  __int64 v202; // [rsp+40h] [rbp-B8h]
  int v203; // [rsp+48h] [rbp-B0h]
  __int64 v204; // [rsp+48h] [rbp-B0h]
  ClpNonLinearCost **v205; // [rsp+48h] [rbp-B0h]
  __int64 v206; // [rsp+50h] [rbp-A8h]
  __int64 v207; // [rsp+50h] [rbp-A8h]
  int v208; // [rsp+58h] [rbp-A0h]
  __int64 v209; // [rsp+58h] [rbp-A0h]
  __int64 v210; // [rsp+60h] [rbp-98h]
  _DWORD *v211; // [rsp+70h] [rbp-88h]
  void *v212; // [rsp+70h] [rbp-88h]
  __int64 v213; // [rsp+78h] [rbp-80h]
  unsigned __int64 v214; // [rsp+80h] [rbp-78h]
  int v215; // [rsp+80h] [rbp-78h]
  double v216; // [rsp+88h] [rbp-70h]
  int v217; // [rsp+88h] [rbp-70h]
  __m128d v218; // [rsp+90h] [rbp-68h]
  __int64 v219; // [rsp+90h] [rbp-68h]
  __int64 v220; // [rsp+A0h] [rbp-58h]
  __int64 v221; // [rsp+A0h] [rbp-58h]
  _DWORD *v222; // [rsp+A8h] [rbp-50h]
  unsigned int v223; // [rsp+A8h] [rbp-50h]
  int v224; // [rsp+B0h] [rbp-48h]
  bool v225; // [rsp+B0h] [rbp-48h]
  int v226; // [rsp+B4h] [rbp-44h]

  v3 = this;
  if ( *((_DWORD *)this + 64) == *((_DWORD *)this + 62) )
  {
    ClpDynamicMatrix::initialProblem(this);
    return 1;
  }
  v4 = a2;
  if ( *((_QWORD *)a2 + 165) )
  {
    v5 = *((int *)this + 51);
    if ( v5 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v6 = (_DWORD *)operator new[](4 * v5);
    v7 = *((_DWORD *)this + 51);
    v188 = v7;
    if ( v7 )
    {
      v176 = v7 + 7;
      if ( v7 >= 0 )
        v176 = *((_DWORD *)this + 51);
      v177 = v6;
      v178 = v176 >> 3;
      if ( v178 > 0 )
      {
        a3 = 0;
        v179 = (unsigned int)(v178 - 1);
        do
        {
          *(_OWORD *)v177 = 0;
          v177 += 8;
          *((_OWORD *)v177 - 1) = 0;
        }
        while ( v177 != &v6[8 * v179 + 8] );
        v177 = &v6[8 * (int)v179 + 8];
      }
      switch ( v188 % 8 )
      {
        case 1:
          goto LABEL_139;
        case 2:
          goto LABEL_138;
        case 3:
          goto LABEL_137;
        case 4:
          goto LABEL_136;
        case 5:
          goto LABEL_135;
        case 6:
          goto LABEL_134;
        case 7:
          v177[6] = 0;
LABEL_134:
          v177[5] = 0;
LABEL_135:
          v177[4] = 0;
LABEL_136:
          v177[3] = 0;
LABEL_137:
          v177[2] = 0;
LABEL_138:
          v177[1] = 0;
LABEL_139:
          *v177 = 0;
          break;
        default:
          break;
      }
    }
    v189 = *((_DWORD *)a2 + 27);
    v8 = *((_QWORD **)this + 11);
    v9 = v8[5];
    v10 = v8[7];
    v206 = v8[4];
    v197 = v8[6];
    v213 = *((_QWORD *)a2 + 129);
    v190 = *((_QWORD *)a2 + 123);
    v191 = *((_QWORD *)a2 + 126);
    v11 = *((int *)this + 64);
    v208 = *(_DWORD *)(v197 + 4 * v11);
    v12 = *((_DWORD *)this + 62);
    *((_DWORD *)v3 + 62) = v11;
    v203 = v12;
    v210 = *((_QWORD *)a2 + 150);
    if ( (int)v11 < v12 )
    {
      v13 = v12;
      v14 = v11 + 1;
      v15 = *((_QWORD *)v3 + 24);
      v16 = v11 + 1 + (unsigned int)(v13 - 1 - v11);
      while ( 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v4 + 33) + v11) & 7) == 1 )
        {
          v17 = *(_DWORD *)(v197 + 4 * v11) + *(_DWORD *)(v10 + 4 * v11);
          v18 = (int)v11 - *((_DWORD *)v3 + 64);
          v19 = *(_DWORD *)(v9 + 4LL * v17 - 4) - *((_DWORD *)v3 + 66);
          v20 = *(_DWORD *)(v15 + 4 * v19);
          ++v6[v19];
          *(_DWORD *)(*((_QWORD *)v3 + 22) + 4LL * v20) = *(_DWORD *)(*((_QWORD *)v3 + 45) + 4 * v18);
        }
        v11 = v14;
        if ( v14 == v16 )
          break;
        ++v14;
      }
    }
    *((_DWORD *)v3 + 51) = 0;
    if ( v188 > 0 )
    {
      v21 = *((_QWORD *)v3 + 24);
      v22 = 0;
      v23 = (unsigned int)(v188 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          v24 = v6[v22];
          if ( (*(_BYTE *)(*((_QWORD *)v4 + 33) + *((_DWORD *)v4 + 27) + (int)v22 + *((_DWORD *)v3 + 66)) & 7) == 1 )
          {
            ++v24;
            *(_DWORD *)(*((_QWORD *)v3 + 22) + 4LL * *(int *)(v21 + 4 * v22)) = *((_DWORD *)v3 + 75)
                                                                              + *(_DWORD *)(v21 + 4 * v22);
          }
          if ( v24 <= 1 )
            break;
          v25 = *((_DWORD *)v3 + 51);
          v6[v22++] = v25;
          *((_DWORD *)v3 + 51) = v25 + 1;
          if ( v22 == v23 )
            goto LABEL_17;
        }
        v6[v22++] = -1;
      }
      while ( v22 != v23 );
    }
LABEL_17:
    v26 = *((_DWORD *)v3 + 64);
    if ( v203 > v26 )
    {
      v27 = 0.0;
      v28 = v26;
      v211 = v6;
      v29 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
      v200 = 0;
      v30 = v10;
      v192 = 0.0;
      v187 = v26 + 1LL + (unsigned int)(v203 - 1 - v26);
      for ( i = v26 + 1LL; ; ++i )
      {
        v32 = *((_QWORD *)v3 + 45);
        v33 = *(int *)(v32 + 4LL * ((int)v28 - v26));
        if ( (unsigned __int8)((*(_BYTE *)(*((_QWORD *)v4 + 33) + v28) & 7) - 2) <= 1u )
          break;
        v224 = v211[*(_DWORD *)(v9 + 4LL * (*(_DWORD *)(v197 + 4 * v28) + *(_DWORD *)(v30 + 4 * v28)) - 4)
                  - *((_DWORD *)v3 + 66)];
        if ( v224 < 0 )
          goto LABEL_26;
        v220 = v30;
        v216 = v27;
        v218 = v29;
        *(_DWORD *)(v32 + 4LL * (*((_DWORD *)v3 + 62) - v26)) = v33;
        v39 = 4 * (v33 + 1);
        v193 = *(_DWORD *)(*((_QWORD *)v3 + 41) + v39) - *(_DWORD *)(*((_QWORD *)v3 + 41) + v39 - 4);
        *(_DWORD *)(v30 + 4LL * *((int *)v3 + 62)) = v193 + 1;
        v40 = *((int *)v3 + 62);
        *(_QWORD *)(v213 + 8 * v40) = *(_QWORD *)(v213 + 8 * v28);
        *(_QWORD *)(v190 + 8 * v40) = *(_QWORD *)(v190 + 8 * v28);
        *(_QWORD *)(v191 + 8 * v40) = *(_QWORD *)(v191 + 8 * v28);
        ClpNonLinearCost::setOne(
          *((ClpNonLinearCost **)v4 + 165),
          v40,
          *(double *)(v210 + 8 * v28),
          v27,
          1.797693134862316e308,
          *(double *)(*((_QWORD *)v3 + 44) + 8 * v33));
        v27 = v216;
        v30 = v220;
        v29 = v218;
        v41 = *(_DWORD *)(*((_QWORD *)v3 + 41) + v39 - 4);
        v226 = v41;
        if ( v193 > 0 )
        {
          v42 = *((_QWORD *)v3 + 42);
          v43 = v41;
          v44 = 8LL * v41;
          v45 = 4 * v43;
          v46 = *((_QWORD *)v3 + 43);
          v47 = (__int64 *)(v46 + v44);
          v219 = 8LL * v208;
          v214 = v219 + v206;
          v221 = 4LL * v208;
          v48 = v42 + v45;
          v222 = (_DWORD *)(v9 + v221);
          if ( (unsigned int)v193 > 0xE
            && (v46 + v44 >= (unsigned __int64)(v206 + v219 + 32) || v219 + v206 >= (unsigned __int64)(v46 + v44 + 32))
            && (v42 + v45 >= (unsigned __int64)(v9 + v221 + 16) || v9 + v221 >= (unsigned __int64)(v42 + v45 + 16))
            && ((unsigned __int64)v222 >= v206 + 8 * (v208 + (__int64)v193) || v214 >= v9 + 4 * (v208 + (__int64)v193)) )
          {
            v49 = -(int)(v48 >> 2) & 3;
            if ( v49 )
            {
              v50 = *v47;
              v217 = 1;
              *v222 = *(_DWORD *)v48;
              v51 = v208 + 1;
              v215 = v208 + 1;
              *(_QWORD *)(v206 + 8LL * v208) = v50;
              if ( v49 != 1 )
              {
                v52 = v51;
                v53 = *(_QWORD *)(v46 + v44 + 8);
                v217 = 2;
                *(_DWORD *)(v9 + 4LL * v51) = *(_DWORD *)(v42 + v45 + 4);
                v54 = v208 + 2;
                *(_QWORD *)(v206 + 8 * v52) = v53;
                v215 = v208 + 2;
                if ( v49 != 2 )
                {
                  v55 = *(_QWORD *)(v46 + v44 + 16);
                  v215 = v208 + 3;
                  v217 = 3;
                  *(_DWORD *)(v9 + 4LL * v54) = *(_DWORD *)(v42 + v45 + 8);
                  *(_QWORD *)(v206 + 8LL * v54) = v55;
                }
              }
            }
            else
            {
              v217 = 0;
              v215 = v208;
            }
            v223 = v193 - v49;
            v56 = 4LL * v49;
            v57 = 8LL * v49;
            v58 = (v193 - v49) >> 2;
            v59 = v46 + v57 + v44;
            v60 = v42 + v56 + v45;
            v61 = v9 + v221 + v56;
            v62 = v206 + v219 + v57;
            v63 = 0;
            v64 = 0;
            do
            {
              ++v64;
              *(__m128i *)(v61 + v63) = _mm_load_si128((const __m128i *)(v60 + v63));
              v65 = *(_OWORD *)(v59 + 2 * v63 + 16);
              *(_OWORD *)(v62 + 2 * v63) = *(_OWORD *)(v59 + 2 * v63);
              *(_OWORD *)(v62 + 2 * v63 + 16) = v65;
              v63 += 16;
            }
            while ( v58 > v64 );
            v66 = (v223 & 0xFFFFFFFC) + v217;
            v67 = (v223 & 0xFFFFFFFC) + v215;
            if ( (v223 & 0xFFFFFFFC) != v223 )
            {
              v68 = (int)(v226 + v66);
              v69 = *(_QWORD *)(v46 + 8 * v68);
              *(_DWORD *)(v9 + 4LL * v67) = *(_DWORD *)(v42 + 4 * v68);
              v70 = v67 + 1;
              *(_QWORD *)(v206 + 8LL * v67) = v69;
              if ( v193 > (int)(v66 + 1) )
              {
                v71 = (int)(v226 + v66 + 1);
                v72 = *(_QWORD *)(v46 + 8 * v71);
                *(_DWORD *)(v9 + 4LL * v70) = *(_DWORD *)(v42 + 4 * v71);
                v73 = v67 + 2;
                *(_QWORD *)(v206 + 8LL * v70) = v72;
                if ( v193 > (int)(v66 + 2) )
                {
                  v74 = (int)(v226 + v66 + 2);
                  v75 = *(_QWORD *)(v46 + 8 * v74);
                  *(_DWORD *)(v9 + 4LL * v73) = *(_DWORD *)(v42 + 4 * v74);
                  v76 = v67 + 3;
                  *(_QWORD *)(v206 + 8LL * v73) = v75;
                  if ( v193 > (int)(v66 + 3) )
                  {
                    v77 = (int)(v226 + v66 + 3);
                    v78 = *(_DWORD *)(v42 + 4 * v77);
                    v79 = *(_QWORD *)(v46 + 8 * v77);
                    v80 = v66 + 4;
                    *(_DWORD *)(v9 + 4LL * v76) = v78;
                    v81 = v67 + 4;
                    *(_QWORD *)(v206 + 8LL * v76) = v79;
                    if ( v193 > (int)(v66 + 4) )
                    {
                      v82 = v67 + 5;
                      v83 = v66 + 5;
                      v84 = (int)(v226 + v80);
                      v85 = *(_QWORD *)(v46 + 8 * v84);
                      *(_DWORD *)(v9 + 4LL * v81) = *(_DWORD *)(v42 + 4 * v84);
                      *(_QWORD *)(v206 + 8LL * v81) = v85;
                      if ( v193 > v83 )
                      {
                        v86 = v226 + v83;
                        v87 = *(_QWORD *)(v46 + 8 * v86);
                        *(_DWORD *)(v9 + 4LL * v82) = *(_DWORD *)(v42 + 4 * v86);
                        *(_QWORD *)(v206 + 8LL * v82) = v87;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v184 = 0;
            do
            {
              v185 = v47[v184 / 4];
              v222[v184 / 4] = *(_DWORD *)(v48 + v184);
              *(_QWORD *)(v214 + 2 * v184) = v185;
              v184 += 4LL;
            }
            while ( v184 != 4LL * (unsigned int)(v193 - 1) + 4 );
          }
          v208 += v193;
        }
        v88 = v208;
        *(_DWORD *)(v9 + 4LL * v208++) = *((_DWORD *)v3 + 66) + v224;
        *(_QWORD *)(v206 + 8 * v88) = 0x3FF0000000000000LL;
        *(_BYTE *)(*((_QWORD *)v4 + 33) + *((int *)v3 + 62)) = *(_BYTE *)(*((_QWORD *)v4 + 33) + *((int *)v3 + 62))
                                                             & 0xF8
                                                             | *(_BYTE *)(*((_QWORD *)v4 + 33) + v28) & 7;
        a3 = (__m128d)*(unsigned __int64 *)(v210 + 8 * v28);
        v28 = i;
        v89 = *((_DWORD *)v3 + 62);
        *(double *)(v210 + 8LL * v89++) = a3.m128d_f64[0];
        *((_DWORD *)v3 + 62) = v89;
        *(_DWORD *)(v197 + 4LL * v89) = v208;
        if ( i == v187 )
        {
LABEL_49:
          v6 = v211;
          v10 = v30;
          v90 = v203;
          v225 = v200 != 0;
          goto LABEL_50;
        }
LABEL_27:
        v26 = *((_DWORD *)v3 + 64);
      }
      v34 = *((_QWORD *)v3 + 48);
      v35 = *((_QWORD *)v3 + 47);
      if ( v34 )
      {
        v36 = (__m128d)*(unsigned __int64 *)(v210 + 8 * v28);
        *(_QWORD *)&v37 = COERCE_UNSIGNED_INT64(*(double *)(v210 + 8 * v28) - *(double *)(v34 + 8 * v33))
                        & *(_QWORD *)&v29.m128d_f64[0];
        if ( v35 )
        {
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36.m128d_f64[0] - *(double *)(v35 + 8 * v33)) & *(_QWORD *)&v29.m128d_f64[0]) <= v37 )
          {
LABEL_23:
            *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) = *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) & 0xF8 | 3;
            v38 = v190;
LABEL_24:
            a3 = (__m128d)*(unsigned __int64 *)(v38 + 8 * v28);
            a3.m128d_f64[0] = a3.m128d_f64[0] * *(double *)(v213 + 8 * v28) + v192;
            v192 = a3.m128d_f64[0];
LABEL_25:
            ++v200;
LABEL_26:
            v28 = i;
            if ( i == v187 )
              goto LABEL_49;
            goto LABEL_27;
          }
LABEL_29:
          *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) = *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) & 0xF8 | 2;
          v38 = v191;
          goto LABEL_24;
        }
        a3 = _mm_and_pd(v36, v29);
        if ( a3.m128d_f64[0] > v37 )
          goto LABEL_29;
      }
      else if ( v35 )
      {
        goto LABEL_23;
      }
      *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) = *(_BYTE *)(*((_QWORD *)v3 + 46) + v33) & 0xF8 | 3;
      goto LABEL_25;
    }
    v225 = 0;
    v90 = v203;
    v192 = 0.0;
LABEL_50:
    v91 = *((_DWORD *)v3 + 62);
    v92 = v90 - v91;
    v93 = v91;
    if ( v92 )
    {
      v167 = v92 + 7;
      v168 = 8LL * v91;
      if ( v92 >= 0 )
        v167 = v92;
      v169 = v167 >> 3;
      v170 = (_QWORD *)(v210 + v168);
      if ( v169 > 0 )
      {
        v171 = (_QWORD *)(v210 + v168);
        v172 = (unsigned int)(v169 - 1);
        do
        {
          *v171 = 0;
          v171[1] = 0;
          v171 += 8;
          *(v171 - 6) = 0;
          *(v171 - 5) = 0;
          *(v171 - 4) = 0;
          *(v171 - 3) = 0;
          *(v171 - 2) = 0;
          *(v171 - 1) = 0;
        }
        while ( v171 != &v170[8 * v172 + 8] );
        v170 += 8 * (int)v172 + 8;
        v173 = v92 % 8;
        v174 = v173;
        v175 = (_QWORD *)(v213 + v168);
        switch ( v173 )
        {
          case 1u:
            goto LABEL_146;
          case 2u:
            goto LABEL_145;
          case 3u:
            goto LABEL_144;
          case 4u:
            goto LABEL_143;
          case 5u:
            goto LABEL_142;
          case 6u:
            goto LABEL_141;
          case 7u:
            goto LABEL_140;
          default:
            goto LABEL_148;
        }
      }
      v186 = v92 % 8;
      v174 = v186;
      v175 = (_QWORD *)(v213 + v168);
      switch ( v186 )
      {
        case 1u:
          goto LABEL_146;
        case 2u:
          goto LABEL_145;
        case 3u:
          goto LABEL_144;
        case 4u:
          goto LABEL_143;
        case 5u:
          goto LABEL_142;
        case 6u:
          goto LABEL_141;
        case 7u:
LABEL_140:
          v170[6] = 0;
          v174 = 7;
LABEL_141:
          v170[5] = 0;
LABEL_142:
          v170[4] = 0;
LABEL_143:
          v170[3] = 0;
LABEL_144:
          v170[2] = 0;
LABEL_145:
          v170[1] = 0;
LABEL_146:
          *v170 = 0;
          if ( v169 > 0 )
          {
            LODWORD(v172) = v169 - 1;
LABEL_148:
            v181 = v175;
            do
            {
              *v181 = 0;
              v181[1] = 0;
              v181 += 8;
              *(v181 - 6) = 0;
              *(v181 - 5) = 0;
              *(v181 - 4) = 0;
              *(v181 - 3) = 0;
              *(v181 - 2) = 0;
              *(v181 - 1) = 0;
            }
            while ( v181 != &v175[8 * (unsigned int)v172 + 8] );
            v175 += 8 * (unsigned int)v172 + 8;
            v182 = (_DWORD *)(v10 + 4LL * v91);
            switch ( (int)v174 )
            {
              case 1:
                goto LABEL_157;
              case 2:
                goto LABEL_156;
              case 3:
                goto LABEL_155;
              case 4:
                goto LABEL_154;
              case 5:
                goto LABEL_153;
              case 6:
                goto LABEL_152;
              case 7:
                goto LABEL_151;
              default:
                goto LABEL_159;
            }
          }
          break;
        default:
          break;
      }
      v182 = (_DWORD *)(v10 + 4LL * v91);
      switch ( (int)v174 )
      {
        case 1:
          goto LABEL_157;
        case 2:
          goto LABEL_156;
        case 3:
          goto LABEL_155;
        case 4:
          goto LABEL_154;
        case 5:
          goto LABEL_153;
        case 6:
          goto LABEL_152;
        case 7:
LABEL_151:
          v175[6] = 0;
          v174 = 7;
LABEL_152:
          v175[5] = 0;
LABEL_153:
          v175[4] = 0;
LABEL_154:
          v175[3] = 0;
LABEL_155:
          v175[2] = 0;
LABEL_156:
          v175[1] = 0;
LABEL_157:
          *v175 = 0;
          if ( v169 > 0 )
          {
            LODWORD(v172) = v169 - 1;
LABEL_159:
            a3 = 0;
            v183 = v182;
            do
            {
              *v183 = 0;
              v183 += 2;
              *(v183 - 1) = 0;
            }
            while ( v183 != (_OWORD *)&v182[8 * (unsigned int)v172 + 8] );
            v182 += 8 * (unsigned int)v172 + 8;
          }
          switch ( v174 )
          {
            case 1LL:
              goto LABEL_169;
            case 2LL:
              goto LABEL_168;
            case 3LL:
              goto LABEL_167;
            case 4LL:
              goto LABEL_166;
            case 5LL:
              goto LABEL_165;
            case 6LL:
              goto LABEL_164;
            case 7LL:
              v182[6] = 0;
LABEL_164:
              v182[5] = 0;
LABEL_165:
              v182[4] = 0;
LABEL_166:
              v182[3] = 0;
LABEL_167:
              v182[2] = 0;
LABEL_168:
              v182[1] = 0;
LABEL_169:
              *v182 = 0;
              v93 = *((_DWORD *)v3 + 62);
              break;
            default:
              v91 = *((_DWORD *)v3 + 62);
              goto LABEL_180;
          }
          break;
        default:
LABEL_180:
          v93 = v91;
          break;
      }
    }
    if ( v203 > v93 )
    {
      v194 = v6;
      v198 = v3;
      v94 = v4;
      v95 = v93;
      v96 = v93 + 1LL;
      v97 = (unsigned int)(v203 - 1 - v93) + v96;
      while ( 1 )
      {
        a3 = 0;
        ClpNonLinearCost::setOne(*((ClpNonLinearCost **)v94 + 165), v95, 0.0, 0.0, 1.797693134862316e308, 0.0);
        *(_BYTE *)(v95 + *((_QWORD *)v94 + 33)) = *(_BYTE *)(v95 + *((_QWORD *)v94 + 33)) & 0xF8 | 3;
        *(_QWORD *)(v190 + 8 * v95) = 0;
        *(_QWORD *)(v191 + 8 * v95) = 0x7FEFFFFFFFFFFFFFLL;
        v95 = v96;
        if ( v96 == v97 )
          break;
        ++v96;
      }
      v4 = v94;
      v3 = v198;
      v6 = v194;
    }
    *((_DWORD *)v3 + 51) = 0;
    if ( v188 > 0 )
    {
      v98 = nullptr;
      v99 = v190;
      v212 = (void *)((unsigned int)(v188 - 1) + 1LL);
      v100 = v191;
      v101 = (ClpNonLinearCost **)v4;
      v102 = v210;
      while ( 1 )
      {
        v114 = *(_DWORD *)(*((_QWORD *)v3 + 24) + 4LL * (_QWORD)v98);
        v115 = v6[(_QWORD)v98];
        v116 = v114;
        if ( v115 >= 0 )
          break;
        v117 = *(_DWORD *)(*((_QWORD *)v3 + 22) + 4LL * v114);
        *(_DWORD *)(*((_QWORD *)v3 + 23) + 4LL * v114) = -1;
        if ( v117 >= *((_DWORD *)v3 + 75) )
        {
LABEL_63:
          v98 = (char *)v98 + 1;
          if ( v98 == v212 )
            goto LABEL_67;
        }
        else
        {
          v205 = v101;
          v202 = v102;
          v98 = (char *)v98 + 1;
          v199 = v100;
          v196 = v99;
          *(_BYTE *)(v117 + *((_QWORD *)v3 + 46)) &= 0xF8u;
          ClpDynamicMatrix::keyValue(v3, v114);
          v118 = *(double *)(*((_QWORD *)v3 + 44) + 8LL * v117) * a3.m128d_f64[0];
          a3 = _mm_xor_pd(a3, (__m128d)xmmword_289BF0);
          v192 = v118 + v192;
          ClpDynamicMatrix::modifyOffset(v3, v117, a3.m128d_f64[0]);
          v101 = v205;
          v102 = v202;
          v100 = v199;
          v99 = v196;
          if ( v98 == v212 )
          {
LABEL_67:
            v4 = (ClpSimplex *)v101;
            goto LABEL_68;
          }
        }
      }
      v103 = *((_DWORD *)v3 + 66);
      v104 = v189 + v103 + (_DWORD)v98;
      v105 = v103 + v189 + v115;
      v106 = *((_QWORD *)v3 + 27);
      v107 = (double *)(v102 + 8LL * v105);
      *v107 = *(double *)(v102 + 8LL * v104);
      *(_QWORD *)(v99 + 8LL * v105) = *(_QWORD *)(v99 + 8LL * v104);
      *(_QWORD *)(v100 + 8LL * v105) = *(_QWORD *)(v100 + 8LL * v104);
      *(_QWORD *)(v213 + 8LL * v105) = *(_QWORD *)(v213 + 8LL * v104);
      v108 = *(double *)(v106 + 8 * v116);
      if ( v108 <= -1.0e20 )
        v108 = -1.797693134862316e308;
      v109 = *(double *)(*((_QWORD *)v3 + 28) + 8 * v116);
      if ( v109 >= 1.0e20 )
        v109 = 1.797693134862316e308;
      v209 = v102;
      v207 = v100;
      v204 = v99;
      v201 = v116;
      v195 = v101;
      ClpNonLinearCost::setOne(v101[165], v105, *v107, v108, v109, 0.0);
      v101 = v195;
      v99 = v204;
      v100 = v207;
      v102 = v209;
      *((_BYTE *)v195[33] + v105) = *((_BYTE *)v195[33] + v105) & 0xF8 | *((_BYTE *)v195[33] + v104) & 7;
      *(_DWORD *)(*((_QWORD *)v3 + 23) + 4 * v201) = *((_DWORD *)v3 + 51);
      v110 = *((_DWORD *)v3 + 66);
      v111 = *((int *)v3 + 51);
      v112 = *((_QWORD *)v3 + 1);
      a3 = (__m128d)*(unsigned __int64 *)(v112 + 8LL * (v110 + (int)v98));
      *(double *)(v112 + 8LL * ((int)v111 + v110)) = a3.m128d_f64[0];
      v113 = *((_QWORD *)v3 + 24);
      *((_DWORD *)v3 + 51) = v111 + 1;
      *(_DWORD *)(v113 + 4 * v111) = *(_DWORD *)(v113 + 4LL * (_QWORD)v98);
      goto LABEL_63;
    }
LABEL_68:
    ClpModel::setObjectiveOffset(v4, *((double *)v4 + 5) - v192);
    operator delete[](v6);
    v119 = *((_DWORD *)v3 + 51);
    if ( v188 > v119 )
    {
      v120 = *((_DWORD *)v3 + 66);
      v121 = *((_DWORD *)v3 + 51);
      do
      {
        v122 = v189 + v121 + v120;
        v123 = 8LL * v122;
        v124 = (double *)(v190 + v123);
        v125 = (double *)(v210 + v123);
        v126 = (double *)(v191 + v123);
        *v125 = 0.0;
        *v124 = -1.797693134862316e308;
        *v126 = 1.797693134862316e308;
        *(_QWORD *)(v213 + 8LL * v122) = 0;
        ClpNonLinearCost::setOne(*((ClpNonLinearCost **)v4 + 165), v122, *v125, *v124, *v126, 0.0);
        *(_BYTE *)(v122 + *((_QWORD *)v4 + 33)) = *(_BYTE *)(v122 + *((_QWORD *)v4 + 33)) & 0xF8 | 1;
        v120 = *((_DWORD *)v3 + 66);
        v127 = v120 + v121++;
        *(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL * v127) = 0;
      }
      while ( v188 != v121 );
      v119 = *((_DWORD *)v3 + 51);
    }
    if ( v188 != v119 || v225 )
    {
      v128 = *((_DWORD *)v3 + 66);
      v129 = *((_DWORD *)v3 + 64);
      v130 = *((_QWORD *)v4 + 157);
      v131 = *((_DWORD *)v3 + 65);
      v132 = v128 + v189;
      v133 = v188 + v128;
      LODWORD(v134) = 0;
      for ( j = v129; *((_DWORD *)v3 + 62) > j; LODWORD(v134) = v134 + 1 )
      {
        v134 = (int)v134;
        for ( k = *(_DWORD *)(v130 + 4LL * (int)v134);
              v129 > k || v131 <= k && v132 > k;
              k = *(_DWORD *)(v130 + 4 * v134++ + 4) )
        {
          ;
        }
        *(_DWORD *)(v130 + 4LL * (int)v134) = j++;
      }
      if ( v133 > (int)v134 )
      {
        v137 = (signed int *)(v130 + 4LL * (int)v134);
        v138 = v130 + 4 * ((int)v134 + (unsigned __int64)(unsigned int)(v133 - 1 - v134)) + 4;
        do
        {
          v139 = *v137;
          if ( v129 > *v137 || v131 <= v139 && v132 > v139 )
          {
            v140 = (int)v134;
            LODWORD(v134) = v134 + 1;
            *(_DWORD *)(v130 + 4 * v140) = v139;
          }
          ++v137;
        }
        while ( v137 != (signed int *)v138 );
      }
      v141 = *((_DWORD *)v3 + 51);
      v142 = *((_DWORD *)v3 + 66);
      if ( v141 > 0 )
      {
        v143 = *((_QWORD *)v4 + 33);
        v144 = *((_DWORD *)v4 + 27);
        v145 = 0;
        while ( 1 )
        {
          while ( (*(_BYTE *)(v143 + v144 + v145 + v142) & 7) != 1 )
          {
            if ( ++v145 >= v141 )
              goto LABEL_92;
          }
          v180 = v132 + v145++;
          *(_DWORD *)(v130 + 4LL * (int)v134) = v180;
          v141 = *((_DWORD *)v3 + 51);
          LODWORD(v134) = v134 + 1;
          v142 = *((_DWORD *)v3 + 66);
          if ( v141 <= v145 )
            break;
          v143 = *((_QWORD *)v4 + 33);
          v144 = *((_DWORD *)v4 + 27);
        }
      }
LABEL_92:
      v146 = v141 + v142;
      if ( v146 > (int)v134 )
      {
        printf("lost %d sets\n", v146 - v134);
        v141 = *((_DWORD *)v3 + 51);
        v147 = v188;
        LODWORD(v134) = v141 + *((_DWORD *)v3 + 66);
        if ( v188 <= v141 )
          return 1;
      }
      else
      {
        v147 = v188;
        if ( v188 <= v141 )
          return 1;
      }
      v148 = (int)v134;
      v149 = v147 - v141;
      v150 = -(int)((unsigned __int64)(v130 + 4LL * (int)v134) >> 2) & 3;
      v151 = v150 + 3;
      if ( v150 + 3 < 5 )
        v151 = 5;
      if ( v151 > v147 - 1 - v141 )
        goto LABEL_105;
      if ( v150 )
      {
        v152 = v134 + 1;
        *(_DWORD *)(v130 + 4LL * (int)v134) = v132 + v141;
        v153 = v141 + 1;
        if ( v150 != 1 )
        {
          *(_DWORD *)(v130 + 4LL * v152) = v132 + v153;
          v153 = v141 + 2;
          v152 = v134 + 2;
          if ( v150 != 2 )
          {
            v152 = v134 + 3;
            *(_DWORD *)(v130 + 4LL * ((int)v134 + 2)) = v132 + v153;
            v153 = v141 + 3;
          }
        }
      }
      else
      {
        v152 = v134;
        v153 = v141;
      }
      v154 = v149 - v150;
      v155 = v149 - v150;
      v156 = v130 + 4 * ((int)v134 + (unsigned __int64)v150);
      v157 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v132), 0);
      v158 = v155 >> 2;
      si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v160 = 0;
      v161 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v153), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v160;
        v156 += 16;
        *(__m128i *)(v156 - 16) = _mm_add_epi32(v157, v161);
        v161 = _mm_add_epi32(v161, si128);
      }
      while ( v160 < v158 );
      v141 = (v154 & 0xFFFFFFFC) + v153;
      LODWORD(v134) = (v154 & 0xFFFFFFFC) + v152;
      if ( (v154 & 0xFFFFFFFC) != v154 )
      {
        v148 = (int)v134;
LABEL_105:
        *(_DWORD *)(v130 + 4 * v148) = v132 + v141;
        if ( v188 > v141 + 1 )
        {
          *(_DWORD *)(v130 + 4LL * ((int)v134 + 1)) = v132 + v141 + 1;
          if ( v188 > v141 + 2 )
          {
            *(_DWORD *)(v130 + 4LL * ((int)v134 + 2)) = v132 + v141 + 2;
            if ( v188 > v141 + 3 )
            {
              v162 = v134 + 4;
              *(_DWORD *)(v130 + 4LL * ((int)v134 + 3)) = v132 + v141 + 3;
              v163 = v141 + 4;
              if ( v188 > v141 + 4 )
              {
                v164 = v141 + 5;
                v165 = v134 + 5;
                *(_DWORD *)(v130 + 4LL * v162) = v132 + v163;
                if ( v188 > v164 )
                  *(_DWORD *)(v130 + 4LL * v165) = v164 + v132;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

