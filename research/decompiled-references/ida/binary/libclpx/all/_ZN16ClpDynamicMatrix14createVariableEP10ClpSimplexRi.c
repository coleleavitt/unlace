void __fastcall ClpDynamicMatrix::createVariable(ClpDynamicMatrix *this, ClpSimplex *a2, int *a3)
{
  int v4; // r12d
  int v6; // r15d
  __int64 v7; // r13
  int v8; // r14d
  int v9; // r8d
  double v10; // xmm0_8
  __int64 v11; // rax
  int v12; // esi
  int v13; // eax
  int v14; // r12d
  __int64 v15; // r15
  double v16; // xmm1_8
  int *v17; // rcx
  int v18; // r9d
  double v19; // xmm4_8
  int v20; // esi
  __int64 v21; // rax
  double v22; // xmm0_8
  signed int v23; // r9d
  CoinPackedMatrix *v24; // rdi
  int v25; // r13d
  __int64 v26; // r8
  int v27; // edx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // r10d
  __int64 v32; // rsi
  int v33; // r14d
  __int64 v34; // rsi
  __int64 v35; // r13
  __int64 v36; // rcx
  unsigned __int64 v37; // r10
  __int64 *v38; // r14
  unsigned __int64 v39; // r12
  _DWORD *v40; // r9
  unsigned int v41; // edi
  __int64 v42; // xmm0_8
  int v43; // r10d
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // xmm0_8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // xmm0_8
  __int64 v50; // r8
  unsigned int v51; // r14d
  unsigned int v52; // r11d
  __int64 v53; // rdi
  unsigned int v54; // r11d
  __int64 v55; // r13
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r12
  __int64 v59; // rdi
  __int128 v60; // xmm0
  int v61; // edi
  unsigned int v62; // r10d
  __int64 v63; // r8
  __int64 v64; // xmm0_8
  int v65; // r11d
  __int64 v66; // r8
  __int64 v67; // xmm0_8
  int v68; // r9d
  __int64 v69; // r8
  __int64 v70; // xmm0_8
  int v71; // r11d
  __int64 v72; // r8
  int v73; // r9d
  __int64 v74; // xmm0_8
  unsigned int v75; // r8d
  int v76; // r9d
  signed int v77; // r10d
  __int64 v78; // r8
  int v79; // edi
  __int64 v80; // xmm0_8
  __int64 v81; // r10
  __int64 v82; // xmm0_8
  __int64 v83; // rax
  __int64 v84; // rsi
  char v85; // dl
  __int64 v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rcx
  char v89; // dl
  __int64 *v90; // rdi
  __int64 v91; // xmm0_8
  __int64 *v92; // rsi
  __int64 v93; // rax
  int v94; // eax
  int v95; // esi
  int v96; // eax
  _QWORD *v97; // rcx
  double v98; // xmm4_8
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rax
  double v103; // xmm0_8
  char v104; // dl
  __int64 v105; // rdx
  double v106; // xmm1_8
  __int64 v107; // rax
  double *v108; // rcx
  double v109; // xmm1_8
  double *v110; // rcx
  double *v111; // rsi
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r10
  CoinPackedMatrix *v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rcx
  int *v118; // rdx
  int v119; // r8d
  int v120; // r9d
  int v121; // esi
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // r9
  __int64 v125; // r10
  _DWORD *v126; // rcx
  unsigned __int64 v127; // rsi
  unsigned int v128; // eax
  int v129; // edx
  _QWORD *v130; // rsi
  int v131; // ecx
  __int64 v132; // rdx
  __int64 v133; // xmm0_8
  __int64 v134; // rdx
  __int64 v135; // xmm0_8
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rdi
  __int64 v141; // rsi
  unsigned int v142; // r11d
  __int64 v143; // r8
  __int64 v144; // rdx
  __int64 v145; // rax
  unsigned int v146; // ecx
  __int128 v147; // xmm0
  int v148; // ecx
  unsigned int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // xmm0_8
  int v152; // edi
  __int64 v153; // rdx
  __int64 v154; // xmm0_8
  int v155; // esi
  __int64 v156; // rdx
  __int64 v157; // xmm0_8
  int v158; // edi
  __int64 v159; // rdx
  __int64 v160; // xmm0_8
  int v161; // esi
  int v162; // ecx
  __int64 v163; // rdx
  int v164; // eax
  __int64 v165; // xmm0_8
  __int64 v166; // rax
  __int64 v167; // xmm0_8
  __int64 v168; // rdx
  __int64 v169; // rsi
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // rsi
  __int64 v173; // rax
  double *v174; // rdx
  __int64 v175; // xmm0_8
  __int64 v176; // rcx
  double *v177; // rdi
  double v178; // xmm2_8
  __int64 v179; // rax
  int v180; // edx
  char v181; // dl
  __int64 v182; // rcx
  int v183; // edx
  int v184; // esi
  _QWORD *v185; // rdx
  __int64 v186; // rdx
  unsigned __int64 v187; // rcx
  __int64 v188; // xmm0_8
  unsigned __int64 v189; // rax
  __int64 v190; // xmm0_8
  signed int v192; // [rsp+10h] [rbp-108h]
  double v193; // [rsp+10h] [rbp-108h]
  __int64 v194; // [rsp+10h] [rbp-108h]
  double v195; // [rsp+10h] [rbp-108h]
  int v196; // [rsp+10h] [rbp-108h]
  __int64 v197; // [rsp+18h] [rbp-100h]
  __int64 v198; // [rsp+20h] [rbp-F8h]
  __int64 v199; // [rsp+28h] [rbp-F0h]
  __int64 v200; // [rsp+30h] [rbp-E8h]
  int v201; // [rsp+3Ch] [rbp-DCh]
  int v202; // [rsp+3Ch] [rbp-DCh]
  int v203[2]; // [rsp+40h] [rbp-D8h]
  int v204; // [rsp+40h] [rbp-D8h]
  __int64 v205; // [rsp+48h] [rbp-D0h]
  double v206; // [rsp+48h] [rbp-D0h]
  __int64 v207; // [rsp+50h] [rbp-C8h]
  __int64 v208; // [rsp+50h] [rbp-C8h]
  int v209[2]; // [rsp+58h] [rbp-C0h]
  int v210; // [rsp+58h] [rbp-C0h]
  int v211; // [rsp+60h] [rbp-B8h]
  int v212; // [rsp+68h] [rbp-B0h]
  double *v213; // [rsp+68h] [rbp-B0h]
  int v214; // [rsp+70h] [rbp-A8h]
  double *v215; // [rsp+70h] [rbp-A8h]
  double *v216; // [rsp+78h] [rbp-A0h]
  unsigned int v217; // [rsp+80h] [rbp-98h]
  __int64 v218; // [rsp+80h] [rbp-98h]
  double v219; // [rsp+88h] [rbp-90h]
  int v220; // [rsp+90h] [rbp-88h]
  int v221; // [rsp+90h] [rbp-88h]
  int v222; // [rsp+94h] [rbp-84h]
  unsigned __int64 v223; // [rsp+98h] [rbp-80h]
  int v224; // [rsp+98h] [rbp-80h]
  __int64 v225; // [rsp+98h] [rbp-80h]
  __int64 v226; // [rsp+A0h] [rbp-78h]
  __int64 v227; // [rsp+A8h] [rbp-70h]
  double v228; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v229; // [rsp+B0h] [rbp-68h]
  int v230; // [rsp+B0h] [rbp-68h]
  int v231; // [rsp+B0h] [rbp-68h]
  __int64 v232; // [rsp+B8h] [rbp-60h]
  __int64 v233; // [rsp+C0h] [rbp-58h]
  _QWORD *v234; // [rsp+C8h] [rbp-50h]
  int v235; // [rsp+D8h] [rbp-40h]
  unsigned int v236; // [rsp+DCh] [rbp-3Ch]

  v4 = *((_DWORD *)this + 65) + *((_DWORD *)a2 + 26);
  if ( *a3 < v4 )
    goto LABEL_33;
  v6 = *((_DWORD *)this + 12);
  v7 = *((_QWORD *)a2 + 16);
  v8 = *((_DWORD *)this + 50);
  v197 = *((_QWORD *)a2 + 123);
  v9 = *((_DWORD *)this + 66);
  v10 = *((double *)this + 19);
  v198 = *((_QWORD *)a2 + 126);
  v199 = *((_QWORD *)a2 + 150);
  v11 = *((_QWORD *)a2 + 147);
  v12 = *((_DWORD *)this + 40);
  v200 = v11;
  v13 = v6;
  if ( *(int *)(*((_QWORD *)this + 23) + 4LL * v12) >= 0 )
  {
LABEL_3:
    v14 = v8 + v4;
    if ( v14 > v13 )
    {
      v94 = *((_DWORD *)this + 51) + v9 + *((_DWORD *)this + 65) - 1;
      *a3 = v94;
      *(double *)(v200 + 8LL * v94) = v10;
      goto LABEL_33;
    }
    v211 = v6 - v14;
    v15 = v6 - v14;
    v16 = *(double *)(*((_QWORD *)this + 44) + 8 * v15);
    v17 = (int *)(*((_QWORD *)this + 41) + 4 * v15);
    v18 = v17[1];
    v19 = v16 - v10;
    v20 = *v17;
    if ( *v17 < v18 )
    {
      v21 = 0;
      do
      {
        v22 = *(double *)(v7 + 8LL * *(int *)(*((_QWORD *)this + 42) + 4LL * v20 + 4 * v21))
            * *(double *)(*((_QWORD *)this + 43) + 8LL * v20 + 8 * v21);
        ++v21;
        v19 = v19 - v22;
      }
      while ( v21 != (unsigned int)(v18 - v20 - 1) + 1LL );
    }
    v23 = v18 - v20;
    v24 = *((CoinPackedMatrix **)this + 11);
    v25 = v23 + 1;
    v192 = v23;
    *(_QWORD *)v203 = *((_QWORD *)v24 + 6);
    v220 = *(_DWORD *)(*((_QWORD *)this + 23) + 4LL * *((int *)this + 40)) + v9;
    v26 = 4LL * *((int *)this + 62);
    v27 = *(_DWORD *)(*(_QWORD *)v203 + v26) + v23 + 1;
    v201 = *(_DWORD *)(*(_QWORD *)v203 + v26);
    v28 = *((_DWORD *)this + 67);
    if ( v27 > v28 )
    {
      v95 = *((_DWORD *)this + 65);
      v206 = v19;
      v96 = 3 * v28 / 2;
      if ( v96 >= v27 )
        v27 = v96;
      *((_DWORD *)this + 67) = v27;
      CoinPackedMatrix::reserve(v24, v95, v27, 0);
      v97 = *((_QWORD **)this + 11);
      v19 = v206;
      v31 = v192;
      v29 = v97[4];
      v30 = v97[5];
      v26 = 4LL * *((int *)this + 62);
      *(_QWORD *)v203 = v97[6];
      v32 = v97[7];
      v16 = *(double *)(*((_QWORD *)this + 44) + 8 * v15);
      v17 = (int *)(4 * v15 + *((_QWORD *)this + 41));
    }
    else
    {
      v29 = *((_QWORD *)v24 + 4);
      v30 = *((_QWORD *)v24 + 5);
      v31 = v23;
      v32 = *((_QWORD *)v24 + 7);
    }
    *(_DWORD *)(v32 + v26) = v25;
    v33 = *v17;
    *(double *)(*((_QWORD *)a2 + 129) + 8LL * *((int *)this + 62)) = v16;
    if ( v31 > 0 )
    {
      v34 = *((_QWORD *)this + 42);
      v35 = v31;
      v36 = *((_QWORD *)this + 43);
      v214 = v33;
      v207 = 4LL * v33;
      v37 = v34 + v207;
      v205 = 8LL * v33;
      v38 = (__int64 *)(v36 + v205);
      v39 = v29 + 8LL * v201;
      *(_QWORD *)v209 = 4LL * v201;
      v40 = (_DWORD *)(v30 + *(_QWORD *)v209);
      if ( (v36 + v205 >= (unsigned __int64)(v29 + 8LL * v201 + 32) || v39 >= v36 + v205 + 32)
        && (unsigned int)v192 > 0xE
        && (v30 + *(_QWORD *)v209 >= (unsigned __int64)(v29 + 8 * (v201 + v35)) || v39 >= v30 + 4 * (v201 + v35))
        && (v37 >= v30 + *(_QWORD *)v209 + 16 || (unsigned __int64)v40 >= v34 + v207 + 16) )
      {
        v41 = -(int)(v37 >> 2) & 3;
        if ( v41 )
        {
          v42 = *v38;
          v212 = 1;
          *v40 = *(_DWORD *)v37;
          v43 = v201 + 1;
          *(_QWORD *)(v29 + 8LL * v201) = v42;
          if ( v41 != 1 )
          {
            v44 = v43;
            v212 = 2;
            v45 = v214 + 1;
            v46 = *(_QWORD *)(v36 + 8 * v45);
            *(_DWORD *)(v30 + 4LL * v43) = *(_DWORD *)(v34 + 4 * v45);
            v43 = v201 + 2;
            *(_QWORD *)(v29 + 8 * v44) = v46;
            if ( v41 != 2 )
            {
              v47 = v43;
              v212 = 3;
              v48 = v214 + 2;
              v49 = *(_QWORD *)(v36 + 8 * v48);
              *(_DWORD *)(v30 + 4LL * v43) = *(_DWORD *)(v34 + 4 * v48);
              v43 = v201 + 3;
              *(_QWORD *)(v29 + 8 * v47) = v49;
            }
          }
        }
        else
        {
          v43 = v201;
          v212 = 0;
        }
        v50 = v41;
        v51 = 0;
        v52 = v192 - v41;
        v53 = 4LL * v41;
        v50 *= 8;
        v217 = v52;
        v54 = v52 >> 2;
        v55 = v34 + v53 + v207;
        v56 = v36 + v50 + v205;
        v57 = v29 + 8LL * v201 + v50;
        v58 = v30 + *(_QWORD *)v209 + v53;
        v59 = 0;
        do
        {
          ++v51;
          *(__m128i *)(v58 + v59) = _mm_load_si128((const __m128i *)(v55 + v59));
          v60 = *(_OWORD *)(v56 + 2 * v59 + 16);
          *(_OWORD *)(v57 + 2 * v59) = *(_OWORD *)(v56 + 2 * v59);
          *(_OWORD *)(v57 + 2 * v59 + 16) = v60;
          v59 += 16;
        }
        while ( v54 > v51 );
        v61 = (v217 & 0xFFFFFFFC) + v43;
        v62 = (v217 & 0xFFFFFFFC) + v212;
        if ( (v217 & 0xFFFFFFFC) != v217 )
        {
          v63 = (int)(v214 + v62);
          v64 = *(_QWORD *)(v36 + 8 * v63);
          *(_DWORD *)(v30 + 4LL * v61) = *(_DWORD *)(v34 + 4 * v63);
          v65 = v61 + 1;
          *(_QWORD *)(v29 + 8LL * v61) = v64;
          if ( v192 > (int)(v62 + 1) )
          {
            v66 = (int)(v214 + v62 + 1);
            v67 = *(_QWORD *)(v36 + 8 * v66);
            *(_DWORD *)(v30 + 4LL * v65) = *(_DWORD *)(v34 + 4 * v66);
            v68 = v61 + 2;
            *(_QWORD *)(v29 + 8LL * v65) = v67;
            if ( v192 > (int)(v62 + 2) )
            {
              v69 = (int)(v214 + v62 + 2);
              v70 = *(_QWORD *)(v36 + 8 * v69);
              *(_DWORD *)(v30 + 4LL * v68) = *(_DWORD *)(v34 + 4 * v69);
              v71 = v61 + 3;
              *(_QWORD *)(v29 + 8LL * v68) = v70;
              if ( v192 > (int)(v62 + 3) )
              {
                v72 = (int)(v214 + v62 + 3);
                v73 = *(_DWORD *)(v34 + 4 * v72);
                v74 = *(_QWORD *)(v36 + 8 * v72);
                v75 = v62 + 4;
                *(_DWORD *)(v30 + 4LL * v71) = v73;
                v76 = v61 + 4;
                *(_QWORD *)(v29 + 8LL * v71) = v74;
                if ( v192 > (int)(v62 + 4) )
                {
                  v77 = v62 + 5;
                  v78 = (int)(v214 + v75);
                  v79 = v61 + 5;
                  v80 = *(_QWORD *)(v36 + 8 * v78);
                  *(_DWORD *)(v30 + 4LL * v76) = *(_DWORD *)(v34 + 4 * v78);
                  *(_QWORD *)(v29 + 8LL * v76) = v80;
                  if ( v192 > v77 )
                  {
                    v81 = v214 + v77;
                    v82 = *(_QWORD *)(v36 + 8 * v81);
                    *(_DWORD *)(v30 + 4LL * v79) = *(_DWORD *)(v34 + 4 * v81);
                    *(_QWORD *)(v29 + 8LL * v79) = v82;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v187 = 0;
        do
        {
          v188 = v38[v187 / 4];
          v40[v187 / 4] = *(_DWORD *)(v37 + v187);
          *(_QWORD *)(v39 + 2 * v187) = v188;
          v187 += 4LL;
        }
        while ( v187 != 4LL * (unsigned int)(v192 - 1) + 4 );
      }
      v201 += v192;
    }
    *(_DWORD *)(v30 + 4LL * v201) = v220;
    *(_QWORD *)(v29 + 8LL * v201) = 0x3FF0000000000000LL;
    *(_DWORD *)(*((_QWORD *)this + 45) + 4LL * (*((_DWORD *)this + 62) - *((_DWORD *)this + 64))) = v211;
    v83 = *((int *)this + 62);
    *(_QWORD *)(*((_QWORD *)a2 + 150) + 8 * v83) = 0;
    *(_BYTE *)(*((_QWORD *)a2 + 33) + v83) &= ~0x40u;
    v84 = *((_QWORD *)this + 47);
    if ( v84 )
    {
      v85 = *(_BYTE *)(*((_QWORD *)this + 46) + v15);
      v86 = *((int *)this + 62);
      *(_QWORD *)(v197 + 8 * v86) = *(_QWORD *)(v84 + 8 * v15);
      v87 = *((_QWORD *)this + 48);
      v88 = 8 * v86;
      v89 = v85 & 7;
      v90 = (__int64 *)(8 * v86 + v198);
      if ( !v87 )
      {
        v91 = 0x7FEFFFFFFFFFFFFFLL;
        *v90 = 0x7FEFFFFFFFFFFFFFLL;
        goto LABEL_29;
      }
    }
    else
    {
      v87 = *((_QWORD *)this + 48);
      v86 = *((int *)this + 62);
      if ( !v87 )
      {
        *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) & 0xF8 | 3;
        v186 = *((int *)this + 62);
        *(_QWORD *)(v197 + 8 * v186) = 0;
        v93 = 8 * v186;
        *(_QWORD *)(v198 + 8 * v186) = 0x7FEFFFFFFFFFFFFFLL;
LABEL_32:
        v193 = v19;
        ClpModel::setObjectiveOffset(
          a2,
          *(double *)(*((_QWORD *)this + 44) + 8 * v15) * *(double *)(v199 + v93) + *((double *)a2 + 5));
        ClpNonLinearCost::setOne(
          *((ClpNonLinearCost **)a2 + 165),
          *((_DWORD *)this + 62),
          *(double *)(v199 + 8LL * *((int *)this + 62)),
          *(double *)(v197 + 8LL * *((int *)this + 62)),
          *(double *)(v198 + 8LL * *((int *)this + 62)),
          *(double *)(*((_QWORD *)this + 44) + 8 * v15));
        *a3 = *((_DWORD *)this + 62);
        *(_DWORD *)(*(_QWORD *)v203 + 4LL * *((int *)this + 62) + 4) = v201 + 1;
        *(double *)(v200 + 8LL * *a3) = v193;
LABEL_33:
        *((_DWORD *)this + 12) = -1;
        return;
      }
      v88 = 8 * v86;
      v181 = *(_BYTE *)(*((_QWORD *)this + 46) + v15);
      *(_QWORD *)(v197 + 8 * v86) = 0;
      v89 = v181 & 7;
      v90 = (__int64 *)(8 * v86 + v198);
    }
    v91 = *(_QWORD *)(v87 + 8 * v15);
    *v90 = v91;
LABEL_29:
    v92 = (__int64 *)(v88 + v199);
    if ( v89 == 3 )
    {
      *v92 = *(_QWORD *)(v197 + v88);
      *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) & 0xF8 | 3;
    }
    else
    {
      *v92 = v91;
      *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v86) & 0xF8 | 2;
    }
    v93 = 8LL * *((int *)this + 62);
    goto LABEL_32;
  }
  v204 = *((_DWORD *)this + 51) + v9;
  *(double *)(v7 + 8LL * v204) = v10;
  ClpDynamicMatrix::keyValue(this, v12);
  v98 = v10;
  *(_DWORD *)(*((_QWORD *)this + 23) + 4LL * *((int *)this + 40)) = *((_DWORD *)this + 51);
  v99 = *((int *)this + 51);
  v100 = *((_QWORD *)this + 24);
  *((_DWORD *)this + 51) = v99 + 1;
  *(_DWORD *)(v100 + 4 * v99) = *((_DWORD *)this + 40);
  v101 = *((int *)this + 40);
  v102 = *(int *)(*((_QWORD *)this + 39) + 4 * v101);
  v210 = *((_DWORD *)this + 65) + v204;
  if ( (int)v102 < 0 )
  {
    v219 = -0.0;
    v103 = 0.0;
  }
  else
  {
    v103 = 0.0;
    do
    {
      v104 = *(_BYTE *)(*((_QWORD *)this + 46) + v102) & 7;
      if ( v104 == 2 )
      {
        v103 = v103 + *(double *)(*((_QWORD *)this + 48) + 8 * v102);
      }
      else if ( v104 == 3 )
      {
        v105 = *((_QWORD *)this + 47);
        if ( v105 )
          v103 = v103 + *(double *)(v105 + 8 * v102);
      }
      v102 = *(int *)(*((_QWORD *)this + 40) + 4 * v102);
    }
    while ( (int)v102 >= 0 );
    v219 = -v103;
  }
  v106 = *(double *)(*((_QWORD *)this + 27) + 8 * v101);
  v107 = 8LL * v210;
  v108 = (double *)(v107 + v197);
  v213 = (double *)(v107 + v197);
  if ( v106 <= -1.0e20 )
    *v108 = -1.797693134862316e308;
  else
    *v108 = v106;
  v109 = *(double *)(*((_QWORD *)this + 28) + 8 * v101);
  v110 = (double *)(v107 + v198);
  v215 = (double *)(v107 + v198);
  if ( v109 >= 1.0e20 )
    *v110 = 1.797693134862316e308;
  else
    *v110 = v109;
  v111 = (double *)(v199 + v107);
  v216 = (double *)(v199 + v107);
  if ( *(_DWORD *)(*((_QWORD *)this + 22) + 4 * v101) >= *((_DWORD *)this + 75) )
  {
    v182 = v210;
    *(_BYTE *)(v210 + *((_QWORD *)a2 + 33)) = *(_BYTE *)(v210 + *((_QWORD *)a2 + 33)) & 0xF8 | 1;
    *(_QWORD *)(*((_QWORD *)a2 + 147) + 8LL * v210) = 0;
    *v216 = v103 + v98;
    *(double *)(*((_QWORD *)this + 1) + 8LL * v204) = v219;
LABEL_86:
    *(_QWORD *)(*((_QWORD *)a2 + 129) + 8 * v182) = 0;
    ClpNonLinearCost::setOne(*((ClpNonLinearCost **)a2 + 165), v210, *v216, *v213, *v215, 0.0);
    v13 = *((_DWORD *)this + 12);
    v9 = *((_DWORD *)this + 66);
    v10 = *((double *)this + 19);
    goto LABEL_3;
  }
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 30) + 1256LL) + 4LL * v204) = *((_DWORD *)this + 62);
  *(_DWORD *)(*((_QWORD *)this + 21) + 4LL * *((int *)this + 62)) = v204;
  *(_BYTE *)(v210 + *((_QWORD *)a2 + 33)) = *(_BYTE *)(v210 + *((_QWORD *)a2 + 33)) & 0xF8
                                          | *(_BYTE *)(*((_QWORD *)this + 29) + *((int *)this + 40)) & 7;
  v112 = *((int *)this + 40);
  *(_QWORD *)(*((_QWORD *)a2 + 147) + 8LL * v210) = *((_QWORD *)this + 19);
  v113 = *((_QWORD *)this + 22);
  *v111 = v98;
  v114 = *(int *)(v113 + 4 * v112);
  v222 = *(_DWORD *)(v113 + 4 * v112);
  v218 = v114;
  *(_BYTE *)(v114 + *((_QWORD *)this + 46)) = *(_BYTE *)(v114 + *((_QWORD *)this + 46)) & 0xF8 | 1;
  v115 = *((CoinPackedMatrix **)this + 11);
  v226 = *((_QWORD *)v115 + 6);
  v116 = *((_QWORD *)this + 41);
  v117 = 4LL * *((int *)this + 62);
  v118 = (int *)(v116 + 4 * (v114 + 1) - 4);
  v119 = *((_DWORD *)this + 67);
  v221 = *(_DWORD *)(v226 + v117);
  LODWORD(v116) = *(_DWORD *)(v116 + 4 * (v114 + 1)) - *v118;
  v120 = v116 + 1;
  v202 = v116;
  v121 = v221 + v116 + 1;
  if ( v121 > v119 )
  {
    v231 = v120;
    v228 = v98;
    v225 = 4 * (v114 + 1) - 4;
    v183 = 3 * v119 / 2;
    if ( v183 < v121 )
      v183 = v121;
    v184 = *((_DWORD *)this + 65);
    *((_DWORD *)this + 67) = v183;
    CoinPackedMatrix::reserve(v115, v184, v183, 0);
    v185 = *((_QWORD **)this + 11);
    v120 = v231;
    v98 = v228;
    v122 = v185[7];
    v117 = 4LL * *((int *)this + 62);
    v194 = v185[4];
    v208 = v185[5];
    v226 = v185[6];
    v118 = (int *)(*((_QWORD *)this + 41) + v225);
  }
  else
  {
    v122 = *((_QWORD *)v115 + 7);
    v194 = *((_QWORD *)v115 + 4);
    v208 = *((_QWORD *)v115 + 5);
  }
  *(_DWORD *)(v122 + v117) = v120;
  v234 = (_QWORD *)(*((_QWORD *)this + 44) + 8 * v218);
  *(_QWORD *)(*((_QWORD *)a2 + 129) + 8LL * *((int *)this + 62)) = *v234;
  v123 = *v118;
  if ( v202 > 0 )
  {
    v124 = *((_QWORD *)this + 43);
    v125 = *((_QWORD *)this + 42);
    v227 = 8 * v123;
    v235 = *v118;
    v232 = 4 * v123;
    v229 = v124 + 8 * v123;
    v223 = 8LL * v221 + v194;
    v233 = 4LL * v221;
    v126 = (_DWORD *)(v233 + v208);
    v127 = v125 + 4 * v123;
    if ( (v229 >= v194 + 8LL * v221 + 32 || v223 >= v229 + 32)
      && (unsigned int)v202 > 0xE
      && (v233 + v208 >= (unsigned __int64)(v194 + 8 * (v221 + (__int64)v202))
       || v223 >= v208 + 4 * (v221 + (__int64)v202))
      && ((unsigned __int64)v126 >= v125 + v232 + 16 || v127 >= v208 + v233 + 16) )
    {
      v128 = -(int)(v127 >> 2) & 3;
      if ( v128 )
      {
        v129 = *(_DWORD *)v127;
        v130 = (_QWORD *)v229;
        v230 = 1;
        *v126 = v129;
        *(_QWORD *)(v194 + 8LL * v221) = *v130;
        v131 = v221 + 1;
        v224 = v221 + 1;
        if ( v128 != 1 )
        {
          v230 = 2;
          v224 = v221 + 2;
          v132 = v235 + 1;
          v133 = *(_QWORD *)(v124 + 8 * v132);
          *(_DWORD *)(v208 + 4LL * v131) = *(_DWORD *)(v125 + 4 * v132);
          *(_QWORD *)(v194 + 8LL * v131) = v133;
          if ( v128 != 2 )
          {
            v230 = 3;
            v134 = v235 + 2;
            v135 = *(_QWORD *)(v124 + 8 * v134);
            *(_DWORD *)(v208 + 4LL * v224) = *(_DWORD *)(v125 + 4 * v134);
            *(_QWORD *)(v194 + 8LL * v224) = v135;
            v224 = v221 + 3;
          }
        }
      }
      else
      {
        v230 = 0;
        v224 = v221;
      }
      v136 = 4LL * v128;
      v137 = 8LL * v128;
      v138 = v136 + v232;
      v139 = v137 + v227;
      v140 = v208 + v233 + v136;
      v141 = v194 + 8LL * v221 + v137;
      v236 = v202 - v128;
      v142 = (v202 - v128) >> 2;
      v143 = v125 + v138;
      v144 = v124 + v139;
      v145 = 0;
      v146 = 0;
      do
      {
        ++v146;
        *(__m128i *)(v140 + v145) = _mm_load_si128((const __m128i *)(v143 + v145));
        v147 = *(_OWORD *)(v144 + 2 * v145 + 16);
        *(_OWORD *)(v141 + 2 * v145) = *(_OWORD *)(v144 + 2 * v145);
        *(_OWORD *)(v141 + 2 * v145 + 16) = v147;
        v145 += 16;
      }
      while ( v142 > v146 );
      v148 = (v236 & 0xFFFFFFFC) + v224;
      v149 = (v236 & 0xFFFFFFFC) + v230;
      if ( v236 != (v236 & 0xFFFFFFFC) )
      {
        v150 = (int)(v235 + v149);
        v151 = *(_QWORD *)(v124 + 8 * v150);
        *(_DWORD *)(v208 + 4LL * v148) = *(_DWORD *)(v125 + 4 * v150);
        v152 = v148 + 1;
        *(_QWORD *)(v194 + 8LL * v148) = v151;
        if ( v202 > (int)(v149 + 1) )
        {
          v153 = (int)(v235 + v149 + 1);
          v154 = *(_QWORD *)(v124 + 8 * v153);
          *(_DWORD *)(v208 + 4LL * v152) = *(_DWORD *)(v125 + 4 * v153);
          v155 = v148 + 2;
          *(_QWORD *)(v194 + 8LL * v152) = v154;
          if ( v202 > (int)(v149 + 2) )
          {
            v156 = (int)(v235 + v149 + 2);
            v157 = *(_QWORD *)(v124 + 8 * v156);
            *(_DWORD *)(v208 + 4LL * v155) = *(_DWORD *)(v125 + 4 * v156);
            v158 = v148 + 3;
            *(_QWORD *)(v194 + 8LL * v155) = v157;
            if ( v202 > (int)(v149 + 3) )
            {
              v159 = (int)(v235 + v149 + 3);
              v160 = *(_QWORD *)(v124 + 8 * v159);
              *(_DWORD *)(v208 + 4LL * v158) = *(_DWORD *)(v125 + 4 * v159);
              v161 = v148 + 4;
              *(_QWORD *)(v194 + 8LL * v158) = v160;
              if ( v202 > (int)(v149 + 4) )
              {
                v162 = v148 + 5;
                v163 = (int)(v235 + v149 + 4);
                v164 = v149 + 5;
                v165 = *(_QWORD *)(v124 + 8 * v163);
                *(_DWORD *)(v208 + 4LL * v161) = *(_DWORD *)(v125 + 4 * v163);
                *(_QWORD *)(v194 + 8LL * v161) = v165;
                if ( v202 > v164 )
                {
                  v166 = v235 + v164;
                  v167 = *(_QWORD *)(v124 + 8 * v166);
                  *(_DWORD *)(v208 + 4LL * v162) = *(_DWORD *)(v125 + 4 * v166);
                  *(_QWORD *)(v194 + 8LL * v162) = v167;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v189 = 0;
      do
      {
        v190 = *(_QWORD *)(v229 + 2 * v189);
        v126[v189 / 4] = *(_DWORD *)(v127 + v189);
        *(_QWORD *)(v223 + 2 * v189) = v190;
        v189 += 4LL;
      }
      while ( v189 != 4LL * (unsigned int)(v202 - 1) + 4 );
    }
    v221 += v202;
  }
  v168 = *((_QWORD *)this + 45);
  *(_DWORD *)(v208 + 4LL * v221) = v204;
  v169 = v194;
  v195 = v98;
  *(_QWORD *)(v169 + 8LL * v221) = 0x3FF0000000000000LL;
  *(_DWORD *)(v168 + 4LL * (*((_DWORD *)this + 62) - *((_DWORD *)this + 64))) = v222;
  ClpModel::setObjectiveOffset(a2, v98 * *(double *)v234 + *((double *)a2 + 5));
  v170 = *((int *)this + 62);
  *(double *)(*((_QWORD *)a2 + 150) + 8 * v170) = v195;
  *(_BYTE *)(*((_QWORD *)a2 + 33) + v170) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v170) & 0xF8 | 1;
  v171 = *((_QWORD *)this + 47);
  if ( v171 )
  {
    v172 = *((int *)this + 62);
    v173 = 8 * v172;
    v174 = (double *)(v197 + 8 * v172);
    v175 = *(_QWORD *)(v171 + 8 * v218);
    v176 = *((_QWORD *)this + 48);
    *(_QWORD *)v174 = v175;
    v177 = (double *)(8 * v172 + v198);
    if ( v176 )
    {
LABEL_73:
      v178 = *(double *)(v176 + 8 * v218);
      *v177 = v178;
      goto LABEL_74;
    }
  }
  else
  {
    v176 = *((_QWORD *)this + 48);
    v172 = *((int *)this + 62);
    v173 = 8 * v172;
    v174 = (double *)(v197 + 8 * v172);
    *v174 = 0.0;
    v177 = (double *)(8 * v172 + v198);
    if ( v176 )
      goto LABEL_73;
  }
  v178 = 1.797693134862316e308;
  *v177 = 1.797693134862316e308;
LABEL_74:
  ClpNonLinearCost::setOne(
    *((ClpNonLinearCost **)a2 + 165),
    v172,
    *(double *)(v199 + v173),
    *v174,
    v178,
    *(double *)(*((_QWORD *)this + 44) + 8 * v218));
  *(_DWORD *)(v226 + 4LL * *((int *)this + 62) + 4) = v221 + 1;
  *(_QWORD *)(v200 + 8LL * *((int *)this + 62)) = 0;
  ClpDynamicMatrix::modifyOffset(this, v222, v195);
  *(double *)(*((_QWORD *)this + 1) + 8LL * v204) = v219;
  (*(void (__fastcall **)(ClpDynamicMatrix *, ClpSimplex *, _QWORD, _QWORD))(*(_QWORD *)this + 208LL))(
    this,
    a2,
    *((_QWORD *)a2 + 133),
    *((unsigned int *)this + 62));
  ClpFactorization::updateColumnFT(
    *((ClpFactorization **)a2 + 158),
    *((CoinIndexedVector **)a2 + 134),
    *((CoinIndexedVector **)a2 + 133));
  v196 = ClpFactorization::replaceColumn(
           *((ClpFactorization **)a2 + 158),
           a2,
           *((CoinIndexedVector **)a2 + 134),
           *((CoinIndexedVector **)a2 + 133),
           v204,
           *(double *)(*(_QWORD *)(*((_QWORD *)a2 + 133) + 8LL) + 8LL * v204),
           0,
           0.00000001);
  CoinIndexedVector::clear(*((CoinIndexedVector **)a2 + 133));
  if ( !v196 )
  {
    ++*((_DWORD *)this + 62);
    v182 = v210;
    goto LABEL_86;
  }
  if ( v196 == 3 )
  {
    v179 = *(_QWORD *)(*((_QWORD *)a2 + 158) + 8LL);
    if ( v179 )
    {
      v180 = *(_DWORD *)(v179 + 68);
      if ( (double)*(int *)(v179 + 64) * 0.5 > (double)v180 && v180 <= 399 )
        *(double *)(v179 + 16) = 1.1 * *(double *)(v179 + 16);
    }
  }
  else
  {
    printf("Bad returncode %d from replaceColumn\n", v196);
  }
  *a3 = -1;
}

