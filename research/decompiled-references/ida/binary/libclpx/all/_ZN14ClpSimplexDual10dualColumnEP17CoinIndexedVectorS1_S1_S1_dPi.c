__int64 __fastcall ClpSimplexDual::dualColumn(
        ClpSimplexDual *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        int *a7)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  double v15; // xmm13_8
  __int64 v17; // rax
  int v18; // eax
  int v19; // r14d
  __int64 result; // rax
  double v21; // xmm0_8
  double v22; // xmm2_8
  char v23; // bp
  double v24; // xmm3_8
  double v25; // xmm4_8
  __int64 v26; // rdx
  double v27; // xmm4_8
  __int64 v28; // xmm0_8
  __int64 v29; // rdx
  double v30; // xmm0_8
  double v31; // xmm2_8
  __int64 v32; // rdx
  double v33; // xmm1_8
  double v34; // xmm3_8
  double v35; // xmm5_8
  int v36; // eax
  double v37; // xmm4_8
  double v38; // xmm1_8
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  int *v44; // rdi
  __int64 v45; // rax
  double v46; // xmm0_8
  int v47; // r12d
  unsigned __int64 i; // rdx
  int v49; // ecx
  __int64 v50; // r11
  int v51; // ecx
  double v52; // xmm1_8
  __int64 v53; // rax
  __int64 v54; // r11
  double v55; // xmm0_8
  int v56; // esi
  __int64 v57; // r10
  __int64 v58; // rdi
  __int64 v59; // r13
  int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int8 v63; // al
  double v64; // xmm1_8
  double v65; // xmm2_8
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // r11
  _QWORD *v69; // rax
  double v70; // xmm4_8
  double v71; // xmm11_8
  double v72; // xmm7_8
  __int64 v73; // r15
  double *v74; // rdx
  __int64 v75; // r13
  __int64 v76; // r10
  __int64 v77; // r11
  int *v78; // rax
  __int64 v79; // r12
  double v80; // xmm3_8
  __int64 v81; // rbp
  unsigned int v82; // edi
  double v83; // xmm6_8
  double v84; // xmm5_8
  double v85; // xmm2_8
  double v86; // xmm0_8
  bool v87; // cc
  double v88; // xmm0_8
  __int64 v89; // rsi
  double v90; // xmm0_8
  double v91; // xmm1_8
  int v92; // ecx
  double v93; // xmm8_8
  double v94; // xmm2_8
  __int64 v95; // xmm0_8
  __int64 v96; // rsi
  double v97; // xmm5_8
  int v98; // eax
  double v99; // xmm1_8
  double v100; // xmm6_8
  __int64 v101; // rax
  double v102; // xmm2_8
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rdx
  double v106; // xmm1_8
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdi
  double v110; // xmm8_8
  __int64 v111; // rax
  double v112; // xmm1_8
  double v113; // xmm3_8
  double v114; // xmm4_8
  int v115; // r10d
  double v116; // xmm1_8
  double v117; // xmm4_8
  int v118; // r10d
  int v119; // r10d
  _QWORD *v120; // r12
  _QWORD *v121; // rdi
  int v122; // esi
  bool v123; // r13
  __int64 v124; // rax
  __int64 *v125; // rdx
  __int64 v126; // rbp
  __int64 v127; // xmm0_8
  __int64 v128; // rax
  __int64 v129; // rdi
  __int64 v130; // rbp
  __int64 v131; // r11
  int *v132; // rax
  int *v133; // rdx
  __int64 v134; // rdi
  __m128i v135; // xmm0
  __int64 v136; // rdi
  int v137; // ebp
  int v138; // ecx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  int v142; // esi
  double v143; // xmm0_8
  int v144; // r12d
  double v145; // xmm15_8
  int *v146; // rdx
  __int64 v147; // r10
  __int64 v148; // r11
  __int64 v149; // rdi
  __int64 v150; // rax
  double v151; // xmm0_8
  double v152; // xmm1_8
  double v153; // xmm2_8
  double v154; // xmm7_8
  __int64 v155; // r14
  double v156; // xmm10_8
  double v157; // xmm6_8
  double v158; // xmm7_8
  double v159; // xmm5_8
  double v160; // xmm2_8
  __int64 v161; // rax
  double v162; // xmm1_8
  __int64 v163; // rsi
  __int64 v164; // rax
  double *v165; // rdi
  double v166; // xmm0_8
  double v167; // xmm4_8
  double v168; // xmm8_8
  double v169; // xmm0_8
  double v170; // xmm2_8
  double *v171; // rsi
  double *v172; // rax
  double v173; // xmm3_8
  char v174; // al
  int v175; // eax
  int v176; // eax
  int *v177; // rdi
  __int64 v178; // rdx
  __int64 v179; // rax
  int v180; // eax
  double v181; // xmm1_8
  double v182; // xmm0_8
  bool v183; // zf
  CoinMessageHandler *v184; // rax
  CoinMessageHandler *v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  CoinMessageHandler *v190; // rax
  CoinMessageHandler *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rax
  int v197; // eax
  int v198; // eax
  int *v199; // rdi
  int *v200; // r11
  int v201; // r12d
  __int64 v202; // [rsp+0h] [rbp-148h]
  __int64 v203; // [rsp+0h] [rbp-148h]
  __int64 v204; // [rsp+0h] [rbp-148h]
  double v205; // [rsp+8h] [rbp-140h]
  double v206; // [rsp+8h] [rbp-140h]
  double v207; // [rsp+8h] [rbp-140h]
  double v208; // [rsp+10h] [rbp-138h]
  int v209; // [rsp+18h] [rbp-130h]
  double v210; // [rsp+18h] [rbp-130h]
  double v211; // [rsp+20h] [rbp-128h]
  double v212; // [rsp+30h] [rbp-118h]
  unsigned int v213; // [rsp+38h] [rbp-110h]
  double *v214; // [rsp+50h] [rbp-F8h]
  char v215; // [rsp+50h] [rbp-F8h]
  int v216; // [rsp+58h] [rbp-F0h]
  int v217; // [rsp+5Ch] [rbp-ECh]
  double v220; // [rsp+C8h] [rbp-80h] BYREF
  double v221; // [rsp+D0h] [rbp-78h] BYREF
  _DWORD v222[2]; // [rsp+D8h] [rbp-70h]
  int v223; // [rsp+E0h] [rbp-68h]
  _DWORD v224[3]; // [rsp+E4h] [rbp-64h]
  _QWORD v225[2]; // [rsp+F0h] [rbp-58h]
  _QWORD v226[9]; // [rsp+100h] [rbp-48h]

  v205 = *((double *)this + 109);
  CoinIndexedVector::clear(a5);
  v14 = *((_QWORD *)a4 + 1);
  v223 = 0;
  v224[1] = 0;
  v221 = 0.0;
  v15 = v205;
  v225[0] = v14;
  v226[0] = *(_QWORD *)a4;
  v225[1] = *((_QWORD *)a5 + 1);
  v17 = *(_QWORD *)a5;
  *((_QWORD *)this + 99) = 0;
  v226[1] = v17;
  v222[0] = *((_DWORD *)this + 27);
  v224[0] = v222[0];
  v222[1] = v222[0];
  v224[2] = v222[0];
  v220 = 1.0e31;
  v18 = *((_DWORD *)this + 431);
  if ( v18 >= 0 )
  {
    v19 = ClpSimplexDual::dualColumn0(this, a2, a3, a4, a6, &v220, &v221);
    result = *((int *)this + 288);
  }
  else
  {
    v19 = *((_DWORD *)a4 + 4);
    *((_BYTE *)a4 + 28) = 0;
    *((_DWORD *)a4 + 4) = 0;
    v220 = *((double *)this + 218);
    if ( v18 == -1 )
    {
      result = *((int *)this + 432);
      *((_QWORD *)this + 100) = *((_QWORD *)this + 220);
      v95 = *((_QWORD *)this + 221);
      *((_DWORD *)this + 288) = result;
      *((_QWORD *)this + 99) = v95;
    }
    else
    {
      result = *((int *)this + 288);
    }
  }
  *((_DWORD *)this + 431) = 0;
  v223 = v19;
  if ( !v19 )
  {
    if ( (int)result < 0 )
      return result;
    v21 = *((double *)this + 100);
    v22 = *((double *)this + 109);
LABEL_7:
    v21 = fabs(v21 * v221);
    if ( v21 <= v22 * 10.0 )
    {
      v23 = 0;
LABEL_9:
      result = *((int *)this + 288);
      if ( (int)result < 0 )
        goto LABEL_30;
      v24 = *((double *)this + 100);
LABEL_11:
      v25 = fabs(*((double *)this + 9));
      v26 = *((_QWORD *)this + 126);
      *((_QWORD *)this + 101) = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * result);
      v27 = fmax(v25, 0.001);
      v28 = *(_QWORD *)(v26 + 8 * result);
      v29 = *((_QWORD *)this + 150);
      *((_QWORD *)this + 103) = v28;
      v30 = *((double *)this + 99);
      v31 = *(double *)(v29 + 8 * result);
      v32 = *((_QWORD *)this + 147);
      *((double *)this + 102) = v31;
      v33 = *(double *)(v32 + 8 * result);
      v34 = v24 * v30 - v33;
      *((double *)this + 104) = v33;
      v35 = fabs(v31 * v34);
      if ( v35 > v27 )
      {
        if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 1 )
        {
          v210 = v27;
          v207 = fabs(v31 * v34);
          printf("would move objective by %g - original mod %g sol value %g\n", v35, v34, v31);
          v33 = *((double *)this + 104);
          v32 = *((_QWORD *)this + 147);
          v30 = *((double *)this + 99);
          v31 = *((double *)this + 102);
          v27 = v210;
          v35 = v207;
        }
        v34 = v34 * (v27 / v35);
      }
      if ( v23 )
        v34 = 0.0;
      v36 = *((_DWORD *)this + 84);
      if ( (v36 & 0x1800) != 0 )
      {
        v37 = fabs(v34);
        if ( (v36 & 0x4000) == 0 )
        {
          if ( (v36 & 0x800) != 0 )
          {
            if ( v37 >= 1.0e-10 )
              goto LABEL_38;
          }
          else if ( v37 >= 1.0e-12 )
          {
            goto LABEL_38;
          }
LABEL_20:
          v38 = v33 + 0.0;
          v39 = *((int *)this + 288);
          *((double *)this + 104) = v38;
          *(double *)(v32 + 8 * v39) = v38;
          *(double *)(*((_QWORD *)this + 129) + 8 * v39) = *(double *)(*((_QWORD *)this + 129) + 8 * v39) + 0.0;
          if ( v30 < 0.0 )
          {
LABEL_21:
            *((double *)this + 103) = v31;
            v40 = -1;
            goto LABEL_42;
          }
LABEL_41:
          *((double *)this + 101) = v31;
          v40 = 1;
LABEL_42:
          *((_DWORD *)this + 289) = v40;
          v47 = *((_DWORD *)this + 27);
          if ( fabs(v30) < 0.000001 )
          {
            v54 = 0;
            v55 = 0.0;
            while ( 1 )
            {
              if ( v54 )
              {
                v56 = *((_DWORD *)a3 + 4);
                v57 = *((_QWORD *)a3 + 1);
                v58 = *(_QWORD *)a3;
                v59 = *((_QWORD *)this + 149);
                if ( v56 > 0 )
                {
                  v60 = 0;
                  goto LABEL_47;
                }
LABEL_58:
                if ( (_DWORD)v54 == 1 )
                  goto LABEL_31;
              }
              else
              {
                v59 = *((_QWORD *)this + 148);
                v56 = *((_DWORD *)a2 + 4);
                v57 = *((_QWORD *)a2 + 1);
                v58 = *(_QWORD *)a2;
                if ( v56 > 0 )
                {
                  v60 = *((_DWORD *)this + 27);
LABEL_47:
                  v61 = 0;
                  while ( 1 )
                  {
                    v62 = *(int *)(v58 + 4 * v61);
                    v63 = *(_BYTE *)(*((_QWORD *)this + 33) + (int)v62 + v60) & 7;
                    if ( v63 == 2 )
                    {
                      v64 = -1.0;
                    }
                    else
                    {
                      if ( v63 <= 2u )
                      {
                        if ( !v63 )
LABEL_51:
                          v55 = fmax(v55, fabs(*(double *)(v57 + 8 * v61)));
LABEL_52:
                        if ( v56 <= (int)++v61 )
                          goto LABEL_58;
                        continue;
                      }
                      if ( v63 != 3 )
                      {
                        if ( v63 == 4 )
                          goto LABEL_51;
                        goto LABEL_52;
                      }
                      v64 = 1.0;
                    }
                    v65 = *(double *)(v57 + 8 * v61) * v64;
                    if ( v65 <= 0.0 || -*((double *)this + 109) <= v64 * *(double *)(v59 + 8 * v62) - v65 * 1.0e25 )
                      goto LABEL_52;
                    ++v61;
                    v55 = fmax(v55, v65);
                    if ( v56 <= (int)v61 )
                      goto LABEL_58;
                  }
                }
              }
              ++v54;
            }
          }
          goto LABEL_31;
        }
        if ( v37 < 0.0000001 )
          goto LABEL_20;
      }
LABEL_38:
      v52 = v33 + v34;
      v53 = *((int *)this + 288);
      *((double *)this + 104) = v52;
      *(double *)(v32 + 8 * v53) = v52;
      *(double *)(*((_QWORD *)this + 129) + 8 * v53) = *(double *)(*((_QWORD *)this + 129) + 8 * v53) + v34;
      if ( v34 != 0.0 )
        ++*((_DWORD *)this + 335);
      if ( v30 < 0.0 )
        goto LABEL_21;
      goto LABEL_41;
    }
    goto LABEL_23;
  }
  if ( (int)result >= 0 )
  {
    v24 = *((double *)this + 100);
    v21 = 10.0 * *((double *)this + 109);
    if ( fabs(v221 * v24) <= v21 )
    {
      v23 = 0;
      goto LABEL_11;
    }
LABEL_23:
    v23 = 0;
    goto LABEL_24;
  }
  v70 = v220 * 10.0;
  *((_QWORD *)this + 100) = 0x4A511B0EC57E649ALL;
  if ( v70 > 0.0000001 )
  {
    if ( v70 >= 1.0e22 )
    {
LABEL_104:
      v21 = *((double *)this + 100);
      v22 = *((double *)this + 109);
      goto LABEL_7;
    }
  }
  else
  {
    v70 = 0.0000001;
  }
  v71 = 0.0;
  v208 = a6;
  v72 = -v205;
  v209 = 0;
  v213 = *((_DWORD *)this + 27);
  v216 = -1;
  v206 = 0.0;
  while ( 1 )
  {
    v73 = v209;
    v220 = 1.0e50;
    v74 = (double *)v225[v209];
    v12 = 1 - v209;
    v75 = v226[v209];
    v76 = v225[v12];
    v77 = v226[v12];
    v214 = v74;
    if ( v19 > 0 )
    {
      v78 = (int *)v226[v209];
      v79 = *((_QWORD *)this + 147);
      v80 = a6;
      v81 = v75 + 4LL * (unsigned int)(v19 - 1) + 4;
      v82 = v213;
      v13 = 0xFFFFFFFFLL;
      v83 = 0.0;
      v19 = 0;
      v84 = 0.0;
      while ( 1 )
      {
        while ( 1 )
        {
          v89 = *v78;
          v90 = *v74;
          v91 = *(double *)(v79 + 8 * v89);
          v92 = *v78;
          v93 = v91 - v70 * *v74;
          if ( *v74 >= 0.0 )
            break;
          if ( v93 > v15 )
          {
            v94 = *(double *)(*((_QWORD *)this + 126) + 8 * v89) - *(double *)(*((_QWORD *)this + 123) + 8 * v89);
            v84 = v84 - v90 * v94;
            v83 = v83 - v94 * (v91 + *((double *)this + 109));
            goto LABEL_95;
          }
          if ( v91 - v220 * v90 > v15 && -v90 >= a6 )
            v220 = (v91 - v15) / v90;
LABEL_109:
          ++v78;
          v96 = v19;
          ++v74;
          ++v19;
          *(double *)(v76 + 8 * v96) = v90;
          *(_DWORD *)(v77 + 4 * v96) = v92;
          if ( (int *)v81 == v78 )
            goto LABEL_110;
        }
        if ( v72 <= v93 )
        {
          if ( v72 > v91 - v220 * v90 && v90 >= a6 )
            v220 = (v91 + v15) / v90;
          goto LABEL_109;
        }
        v85 = *(double *)(*((_QWORD *)this + 126) + 8 * v89) - *(double *)(*((_QWORD *)this + 123) + 8 * v89);
        v84 = v84 + v90 * v85;
        v83 = v83 + v85 * (v91 - *((double *)this + 109));
LABEL_95:
        *(double *)(v76 + 8LL * (int)--v82) = v90;
        v86 = fabs(v90);
        *(_DWORD *)(v77 + 4LL * (int)v82) = v92;
        v87 = v86 <= v80;
        v88 = fmax(v86, v80);
        if ( !v87 )
          v13 = v82;
        ++v78;
        ++v74;
        v80 = v88;
        if ( (int *)v81 == v78 )
          goto LABEL_110;
      }
    }
    v80 = a6;
    v82 = v213;
    v83 = 0.0;
    v13 = 0xFFFFFFFFLL;
    v84 = 0.0;
    v19 = 0;
LABEL_110:
    v97 = v84 + v71;
    v98 = v19;
    if ( v224[2 * v12 - 1] >= v19 )
      v98 = v224[2 * v12 - 1];
    v99 = fabs(*((double *)this + 108));
    v11 = v82;
    if ( v224[2 * v12] <= (signed int)v82 )
      v11 = (unsigned int)v224[2 * v12];
    v222[v12] = v82;
    v224[2 * v12 - 1] = v98;
    v224[2 * v12] = v11;
    if ( 1.0e-10 * fabs(v97) + 0.00000001 + fabs(v97) >= v99 )
      break;
    v100 = v83 + v206;
    if ( v100 < 0.0 )
      break;
    if ( v80 <= 0.001 && v80 <= v208 )
    {
      v13 = (int)v222[v209];
      v119 = v222[v209];
      v120 = (_QWORD *)(8 * v13 + v225[v12]);
      v121 = (_QWORD *)(v225[v209] + 8 * v13);
      v122 = *((_DWORD *)this + 27) - v13;
      v123 = *((_DWORD *)this + 27) == (_DWORD)v13;
      if ( v120 != v121 && *((_DWORD *)this + 27) != (_DWORD)v13 )
      {
        if ( v122 >> 3 > 0 )
        {
          v124 = 8 * v13 + v225[v12];
          v125 = (__int64 *)(v225[v209] + 8 * v13);
          v126 = (unsigned int)((v122 >> 3) - 1);
          do
          {
            v127 = *v125;
            v124 += 64;
            v125 += 8;
            *(_QWORD *)(v124 - 64) = v127;
            *(_QWORD *)(v124 - 56) = *(v125 - 7);
            *(_QWORD *)(v124 - 48) = *(v125 - 6);
            *(_QWORD *)(v124 - 40) = *(v125 - 5);
            *(_QWORD *)(v124 - 32) = *(v125 - 4);
            *(_QWORD *)(v124 - 24) = *(v125 - 3);
            *(_QWORD *)(v124 - 16) = *(v125 - 2);
            *(_QWORD *)(v124 - 8) = *(v125 - 1);
          }
          while ( (_QWORD *)v124 != &v120[8 * v126 + 8] );
          v128 = ((int)v126 + 1LL) << 6;
          v121 = (_QWORD *)((char *)v121 + v128);
          v120 = (_QWORD *)((char *)v120 + v128);
        }
        switch ( v122 % 8 )
        {
          case 1:
            goto LABEL_165;
          case 2:
            goto LABEL_164;
          case 3:
            goto LABEL_163;
          case 4:
            goto LABEL_162;
          case 5:
            goto LABEL_161;
          case 6:
            goto LABEL_160;
          case 7:
            v120[6] = v121[6];
LABEL_160:
            v120[5] = v121[5];
LABEL_161:
            v120[4] = v121[4];
LABEL_162:
            v120[3] = v121[3];
LABEL_163:
            v120[2] = v121[2];
LABEL_164:
            v120[1] = v121[1];
LABEL_165:
            *v120 = *v121;
            break;
          default:
            break;
        }
      }
      v129 = v226[v12];
      v130 = v226[v209];
      v131 = 4 * v13;
      v132 = (int *)(v129 + 4 * v13);
      v133 = (int *)(v130 + 4 * v13);
      if ( v132 != v133 && !v123 )
      {
        v13 = (unsigned int)(v122 >> 3);
        if ( (int)v13 > 0 )
        {
          if ( ((unsigned __int64)v133 >= v129 + v131 + 32 || (unsigned __int64)v132 >= v131 + 32 + v130)
            && (unsigned int)v13 > 1 )
          {
            v134 = 0;
            v13 = (unsigned int)(v13 - 1);
            do
            {
              v135 = _mm_loadu_si128((const __m128i *)&v133[v134 + 4]);
              *(__m128i *)&v132[v134] = _mm_loadu_si128((const __m128i *)&v133[v134]);
              *(__m128i *)&v132[v134 + 4] = v135;
              v134 += 8;
            }
            while ( 8 * (v13 + 1) != v134 );
          }
          else
          {
            v199 = v132;
            v200 = v133;
            v13 = (unsigned int)(v13 - 1);
            do
            {
              v201 = *v200;
              v199 += 8;
              v200 += 8;
              *(v199 - 8) = v201;
              *(v199 - 7) = *(v200 - 7);
              *(v199 - 6) = *(v200 - 6);
              *(v199 - 5) = *(v200 - 5);
              *(v199 - 4) = *(v200 - 4);
              *(v199 - 3) = *(v200 - 3);
              *(v199 - 2) = *(v200 - 2);
              *(v199 - 1) = *(v200 - 1);
            }
            while ( &v132[8 * v13 + 8] != v199 );
          }
          v136 = 32 * ((int)v13 + 1LL);
          v133 = (int *)((char *)v133 + v136);
          v132 = (int *)((char *)v132 + v136);
        }
        switch ( v122 % 8 )
        {
          case 1:
            goto LABEL_181;
          case 2:
            goto LABEL_180;
          case 3:
            goto LABEL_179;
          case 4:
            goto LABEL_178;
          case 5:
            goto LABEL_177;
          case 6:
            goto LABEL_176;
          case 7:
            v132[6] = v133[6];
LABEL_176:
            v132[5] = v133[5];
LABEL_177:
            v132[4] = v133[4];
LABEL_178:
            v132[3] = v133[3];
LABEL_179:
            v132[2] = v133[2];
LABEL_180:
            v132[1] = v133[1];
LABEL_181:
            *v132 = *v133;
            break;
          default:
            break;
        }
      }
      v222[v12] = v119;
      if ( v119 <= (int)v11 )
        v11 = (unsigned int)v119;
      v224[2 * v12] = v11;
    }
    else
    {
      v208 = v80;
      v216 = v13;
    }
    v71 = v97;
    v206 = v100;
    v70 = v220 + v220;
    v209 = 1 - v209;
    if ( v220 + v220 >= 1.0e22 )
    {
      v101 = *((int *)this + 288);
      v23 = 0;
      v215 = 0;
      goto LABEL_121;
    }
  }
  v137 = *((_DWORD *)this + 27);
  v138 = v137 - 1;
  if ( (int)v82 > v137 - 1 )
  {
    v144 = 0;
  }
  else
  {
    v12 = (__int64)v214;
    v139 = v138;
    v140 = v138 - v82 + 1LL;
    v141 = 0;
    v13 = v75;
    do
    {
      v142 = *(_DWORD *)(v77 + 4 * v139);
      v143 = *(double *)(v76 + 8 * v139--);
      v214[v141] = v143;
      *(_DWORD *)(v75 + 4 * v141++) = v142;
    }
    while ( v140 != v141 );
    v144 = v137 - v82;
  }
  v217 = 100;
  v145 = v71;
  v215 = 0;
  while ( 2 )
  {
    v11 = v225[v73];
    v146 = (int *)v226[v73];
    LODWORD(v73) = 1 - v209;
    v220 = 1.0e50;
    v147 = v225[1 - v209];
    v148 = v226[1 - v209];
    if ( !v144 )
    {
      *((_DWORD *)this + 288) = -1;
      v157 = a6;
      v158 = 0.0;
      v159 = 0.0;
      v220 = 1.0000000001e50;
      v197 = 0;
      if ( v224[2 * (int)v73 - 1] >= 0 )
        v197 = v224[2 * (int)v73 - 1];
      v87 = v224[2 * (int)v73] <= v137;
      v224[2 * (int)v73 - 1] = v197;
      v198 = v137;
      if ( v87 )
        v198 = v224[2 * (int)v73];
      v224[2 * (int)v73] = v198;
      goto LABEL_231;
    }
    v149 = (unsigned int)(v144 - 1);
    v12 = *((_QWORD *)this + 147);
    v150 = 0;
    v151 = 1.0e50;
    v13 = v149 + 1;
    while ( 1 )
    {
LABEL_199:
      v152 = *(double *)(v11 + 8 * v150);
      v153 = *(double *)(v12 + 8LL * v146[v150]);
      v154 = v153 - v152 * v151;
      if ( v152 >= 0.0 )
      {
        if ( -v15 > v154 && v152 >= a6 )
        {
          v151 = (v153 + v15) / v152;
          v220 = v151;
        }
        goto LABEL_198;
      }
      if ( v154 > v15 && -v152 >= a6 )
        break;
LABEL_198:
      if ( v13 == ++v150 )
        goto LABEL_203;
    }
    ++v150;
    v151 = (v153 - v15) / v152;
    v220 = v151;
    if ( v13 != v150 )
      goto LABEL_199;
LABEL_203:
    *((_DWORD *)this + 288) = -1;
    v155 = (__int64)&v146[v149 + 1];
    v156 = a6;
    v212 = 0.0;
    v157 = a6;
    v144 = 0;
    v158 = 0.0;
    v159 = 0.0;
    v220 = v151 * 1.0000000001;
    v160 = v151 * 1.0000000001;
    while ( 2 )
    {
      v162 = *(double *)v11;
      v163 = *v146;
      v164 = 8 * v163;
      v165 = (double *)(v12 + 8 * v163);
      v166 = *v165;
      v167 = *v165 - v160 * *(double *)v11;
      if ( *(double *)v11 < 0.0 )
      {
        if ( v167 >= 0.0 )
        {
          v168 = *((double *)this + 109);
          v169 = -v166 - v168;
          goto LABEL_210;
        }
LABEL_205:
        ++v146;
        v161 = v144;
        v11 += 8;
        ++v144;
        *(double *)(v147 + 8 * v161) = v162;
        *(_DWORD *)(v148 + 4 * v161) = v163;
        if ( (int *)v155 == v146 )
          goto LABEL_222;
LABEL_206:
        v160 = v220;
        continue;
      }
      break;
    }
    if ( v167 > 0.0 )
      goto LABEL_205;
    v168 = *((double *)this + 109);
    v169 = v166 - v168;
LABEL_210:
    v13 = --v137;
    *(double *)(v147 + 8LL * v137) = v162;
    v170 = fabs(v162);
    *(_DWORD *)(v148 + 4LL * v137) = v163;
    v171 = (double *)(v164 + *((_QWORD *)this + 126));
    v172 = (double *)(*((_QWORD *)this + 123) + v164);
    if ( v170 <= v157 )
    {
      v173 = *v171 - *v172;
      if ( a6 <= v170 || v220 >= 1.0e20 )
        goto LABEL_221;
      v174 = 0;
LABEL_214:
      if ( v162 < 0.0 )
      {
        if ( v167 <= v168 )
          goto LABEL_218;
        if ( v173 < 1.0e20 )
        {
          v212 = v167 * v173 + v212;
          goto LABEL_218;
        }
      }
      else
      {
        if ( -v168 <= v167 )
          goto LABEL_218;
        if ( v173 < 1.0e20 )
        {
          v212 = v212 - v167 * v173;
          goto LABEL_218;
        }
      }
      v212 = v212 + 1.0e20;
LABEL_218:
      if ( v174 )
        goto LABEL_219;
      goto LABEL_221;
    }
    v173 = *v171 - *v172;
    if ( a6 > v170 && v220 < 1.0e20 )
    {
      v174 = 1;
      goto LABEL_214;
    }
LABEL_219:
    *((_DWORD *)this + 288) = v137;
    v157 = fabs(v162);
    *((double *)this + 100) = *v165 / v162;
    if ( v156 <= 0.5 * v170 )
      v156 = 0.5 * v170;
LABEL_221:
    ++v146;
    v11 += 8;
    v159 = v159 + v170 * v173;
    v158 = v158 + v169 * v173;
    if ( (int *)v155 != v146 )
      goto LABEL_206;
LABEL_222:
    v175 = v144;
    if ( v224[2 * (int)v73 - 1] >= v144 )
      v175 = v224[2 * (int)v73 - 1];
    v87 = v224[2 * (int)v73] <= v137;
    v224[2 * (int)v73 - 1] = v175;
    v176 = v137;
    if ( v87 )
      v176 = v224[2 * (int)v73];
    v224[2 * (int)v73] = v176;
    if ( v212 <= 10000.0 )
      goto LABEL_231;
    v177 = *((int **)this + 43);
    if ( v177[26] > 1 )
    {
      v211 = v159;
      v184 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                     (CoinMessageHandler *)v177,
                                     (__int64)"maybe forcing re-factorization - sum ",
                                     (__int64)v146,
                                     v11,
                                     v12,
                                     v13,
                                     v202);
      v185 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v184);
      v190 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v185, (__int64)" ", v186, v187, v188, v189, v203);
      v191 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v190);
      v196 = CoinMessageHandler::operator<<(v191, (__int64)" pivots", v192, v193, v194, v195, v204);
      CoinMessageHandler::operator<<(v196, 0, v212);
      v178 = *((_QWORD *)this + 158);
      v179 = *(_QWORD *)(v178 + 8);
      v159 = v211;
      if ( !v179 )
        goto LABEL_257;
LABEL_229:
      v180 = *(_DWORD *)(v179 + 68);
    }
    else
    {
      v178 = *((_QWORD *)this + 158);
      v179 = *(_QWORD *)(v178 + 8);
      if ( v179 )
        goto LABEL_229;
LABEL_257:
      v180 = *(_DWORD *)(*(_QWORD *)(v178 + 16) + 52LL);
    }
    if ( v180 > 3 )
    {
      v101 = *((int *)this + 288);
      v23 = 1;
    }
    else
    {
LABEL_231:
      v181 = *((double *)this + 100);
      v222[(int)v73] = v137;
      v182 = fabs(*((double *)this + 108));
      if ( v181 < 0.0 )
        v159 = v159 + v182;
      if ( v206 >= 0.0 || v181 * (v182 - v145) + v206 >= 0.0 || (v11 = (unsigned int)v216, v216 < 0) )
      {
        v145 = v145 + v159;
        v206 = v158 + v206;
      }
      else
      {
        v157 = 0.0;
      }
      if ( 0.1 * v208 > v157 && v208 > 0.000001 && (v157 < 0.001 || v145 + v145 > v182) )
      {
        v101 = v216;
        v209 = 1 - v209;
        v23 = 0;
        *((_DWORD *)this + 288) = v216;
      }
      else
      {
        v101 = *((int *)this + 288);
        if ( (_DWORD)v101 == -1 && v220 > *((double *)this + 94) )
        {
          v23 = 0;
          if ( a6 < 0.0 )
          {
            v101 = v216;
            v209 = 1 - v209;
            v23 = 0;
            *((_DWORD *)this + 288) = v216;
          }
        }
        else if ( v145 >= v182 )
        {
          v23 = 0;
          v215 = 1;
        }
        else
        {
          v183 = v217-- == 1;
          v208 = fmax(v157, v208);
          if ( !v183 )
          {
            v209 = 1 - v209;
            v137 = *((_DWORD *)this + 27);
            v73 = (int)v73;
            v215 = 1;
            v216 = *((_DWORD *)this + 288);
            continue;
          }
          v216 = *((_DWORD *)this + 288);
          v23 = 0;
          v215 = 1;
        }
      }
    }
    break;
  }
LABEL_121:
  if ( v216 >= 0 && (int)v101 < 0 )
  {
    v21 = *((double *)this + 107);
    v87 = v21 <= *((double *)this + 105);
    *((_DWORD *)this + 288) = v216;
    v209 = 1 - v209;
    v101 = v216;
    if ( v87 )
    {
LABEL_124:
      v102 = 0.0;
      goto LABEL_125;
    }
    v102 = 1.0e-18;
LABEL_126:
    v103 = *((_QWORD *)this + 147);
    v104 = 1 - v209;
    v105 = v225[v104];
    v11 = v226[v104];
    v106 = *(double *)(v105 + 8 * v101);
    *((double *)this + 99) = v106;
    v107 = *(int *)(v11 + 4 * v101);
    *((_DWORD *)this + 288) = v107;
    v21 = fmax(*(double *)(v103 + 8 * v107) / v106, 0.0);
    *((double *)this + 100) = v21;
    if ( v102 > v21 && fabs(v106) < 100000.0 )
    {
      *((double *)this + 100) = v102;
      v21 = v102;
    }
    if ( v23 )
    {
LABEL_24:
      v41 = *((_QWORD *)this + 158);
      v42 = *(_QWORD *)(v41 + 8);
      if ( !v42 )
        goto LABEL_187;
      goto LABEL_25;
    }
    if ( !v215 )
      goto LABEL_185;
    v13 = (unsigned int)v222[v104];
    v22 = *((double *)this + 109);
    v12 = (unsigned int)(*((_DWORD *)this + 27) - 1);
    if ( (int)v13 > (int)v12 )
      goto LABEL_7;
    v108 = (int)v12;
    v109 = (int)v12 - 1LL;
    v12 = v109 - (unsigned int)(v12 - v13);
    while ( 1 )
    {
      v110 = *(double *)(v105 + 8 * v108);
      v111 = 8LL * *(int *)(v11 + 4 * v108);
      v112 = v110 * v21;
      v13 = v103 + v111;
      v113 = *(double *)(v103 + v111);
      v114 = v113 - v110 * v21;
      if ( v110 < 0.0 )
      {
        if ( v114 <= v22 )
          goto LABEL_140;
        v118 = *((_DWORD *)this + 84);
        v116 = v112 - v113 + v15;
        if ( (v118 & 0x5800) == 0 )
          goto LABEL_138;
        v117 = fabs(v116);
        if ( (v118 & 0x4000) != 0 )
        {
          if ( v117 < 0.00000001 )
          {
LABEL_150:
            *(double *)v13 = v113 + 0.0;
            *(double *)(*((_QWORD *)this + 129) + v111) = *(double *)(*((_QWORD *)this + 129) + v111) + 0.0;
            goto LABEL_140;
          }
        }
        else
        {
          if ( (v118 & 0x800) != 0 )
            goto LABEL_137;
          if ( v117 < 1.0e-12 )
            goto LABEL_150;
        }
      }
      else
      {
        if ( -v114 <= v22 )
          goto LABEL_140;
        v115 = *((_DWORD *)this + 84);
        v116 = v112 - v113 - v15;
        if ( (v115 & 0x1800) == 0 )
          goto LABEL_138;
        v117 = fabs(v116);
        if ( (v115 & 0x800) != 0 )
        {
LABEL_137:
          if ( v117 < 1.0e-10 )
            goto LABEL_150;
          goto LABEL_138;
        }
        if ( v117 < 1.0e-12 )
          goto LABEL_150;
      }
LABEL_138:
      *(double *)v13 = v113 + v116;
      *(double *)(*((_QWORD *)this + 129) + v111) = *(double *)(*((_QWORD *)this + 129) + v111) + v116;
      if ( v116 != 0.0 )
        ++*((_DWORD *)this + 335);
LABEL_140:
      v108 = v109;
      if ( v12 == v109 )
        goto LABEL_7;
      --v109;
    }
  }
  v21 = *((double *)this + 107);
  v102 = 1.0e-18;
  if ( v21 <= *((double *)this + 105) )
    goto LABEL_124;
LABEL_125:
  if ( (int)v101 >= 0 )
    goto LABEL_126;
LABEL_185:
  if ( !v23 )
    goto LABEL_104;
  v41 = *((_QWORD *)this + 158);
  v42 = *(_QWORD *)(v41 + 8);
  if ( v42 )
  {
LABEL_25:
    v43 = *(_DWORD *)(v42 + 68);
    goto LABEL_26;
  }
LABEL_187:
  v43 = *(_DWORD *)(*(_QWORD *)(v41 + 16) + 52LL);
LABEL_26:
  if ( !v43 )
    goto LABEL_9;
  v44 = *((int **)this + 43);
  if ( v44[26] > 1 )
  {
    v45 = CoinMessageHandler::operator<<(
            (CoinMessageHandler *)v44,
            (__int64)"forcing re-factorization",
            v41,
            v11,
            v12,
            v13,
            v202);
    CoinMessageHandler::operator<<(v45, 0, v21);
  }
  v46 = *((double *)this + 116);
  *((_DWORD *)this + 288) = -1;
  *((double *)this + 116) = -v46;
LABEL_30:
  v47 = *((_DWORD *)this + 27);
  *((_QWORD *)this + 99) = 0;
LABEL_31:
  for ( i = 0; i != 16; i += 8LL )
  {
    v49 = v224[i / 4 - 1];
    v50 = v225[i / 8];
    if ( v49 )
    {
      if ( v49 / 8 <= 0 )
      {
        v67 = (_QWORD *)v225[i / 8];
      }
      else
      {
        v66 = (_QWORD *)v225[i / 8];
        do
        {
          *v66 = 0;
          v66[1] = 0;
          v66 += 8;
          *(v66 - 6) = 0;
          *(v66 - 5) = 0;
          *(v66 - 4) = 0;
          *(v66 - 3) = 0;
          *(v66 - 2) = 0;
          *(v66 - 1) = 0;
        }
        while ( (_QWORD *)(v50 + (((unsigned int)(v49 / 8 - 1) + 1LL) << 6)) != v66 );
        v67 = (_QWORD *)(v50 + ((v49 / 8 - 1 + 1LL) << 6));
      }
      switch ( v49 % 8 )
      {
        case 1:
          goto LABEL_74;
        case 2:
          goto LABEL_73;
        case 3:
          goto LABEL_72;
        case 4:
          goto LABEL_71;
        case 5:
          goto LABEL_70;
        case 6:
          goto LABEL_69;
        case 7:
          v67[6] = 0;
LABEL_69:
          v67[5] = 0;
LABEL_70:
          v67[4] = 0;
LABEL_71:
          v67[3] = 0;
LABEL_72:
          v67[2] = 0;
LABEL_73:
          v67[1] = 0;
LABEL_74:
          *v67 = 0;
          result = (int)v224[i / 4];
          v51 = v47 - result;
          if ( v47 != (_DWORD)result )
            goto LABEL_75;
          continue;
        default:
          break;
      }
    }
    result = (int)v224[i / 4];
    v51 = v47 - result;
    if ( v47 != (_DWORD)result )
    {
LABEL_75:
      v68 = (_QWORD *)(v50 + 8 * result);
      if ( v51 / 8 > 0 )
      {
        v69 = v68;
        do
        {
          *v69 = 0;
          v69[1] = 0;
          v69 += 8;
          *(v69 - 6) = 0;
          *(v69 - 5) = 0;
          *(v69 - 4) = 0;
          *(v69 - 3) = 0;
          *(v69 - 2) = 0;
          *(v69 - 1) = 0;
        }
        while ( &v68[8 * (unsigned int)(v51 / 8 - 1) + 8] != v69 );
        v68 += 8 * (v51 / 8 - 1) + 8;
      }
      result = (unsigned int)(v51 >> 31) >> 29;
      switch ( v51 % 8 )
      {
        case 1:
          goto LABEL_86;
        case 2:
          goto LABEL_85;
        case 3:
          goto LABEL_84;
        case 4:
          goto LABEL_83;
        case 5:
          goto LABEL_82;
        case 6:
          goto LABEL_81;
        case 7:
          v68[6] = 0;
LABEL_81:
          v68[5] = 0;
LABEL_82:
          v68[4] = 0;
LABEL_83:
          v68[3] = 0;
LABEL_84:
          v68[2] = 0;
LABEL_85:
          v68[1] = 0;
LABEL_86:
          *v68 = 0;
          break;
        default:
          continue;
      }
    }
  }
  return result;
}

