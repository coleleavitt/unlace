unsigned __int64 __fastcall sub_F9D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 v8; // rbx
  _DWORD *v9; // rax
  unsigned int v10; // edi
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128i *v16; // r12
  unsigned int *v17; // rax
  const __m128i *v18; // rax
  __m128i *v19; // r14
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int32 *v25; // rdx
  int v26; // ecx
  unsigned __int32 v27; // esi
  unsigned int v28; // ecx
  __int32 v29; // eax
  int v30; // esi
  unsigned int v31; // r10d
  __m128i *v32; // rax
  unsigned int v33; // r12d
  unsigned int v34; // r11d
  int v35; // r8d
  unsigned int v36; // r13d
  int v37; // r9d
  int v38; // edi
  int v39; // edx
  unsigned int v40; // ebx
  unsigned int v41; // ecx
  __int32 *v42; // rax
  __int32 *v43; // rdx
  unsigned int v44; // esi
  unsigned int v45; // ebp
  __m128i *v46; // r15
  unsigned int v47; // r14d
  __m128i *v48; // r12
  unsigned int v49; // eax
  unsigned int v50; // r13d
  __int64 v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // r9
  __int32 *v54; // rax
  unsigned __int64 v55; // r11
  __int64 v56; // r10
  unsigned int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // ebx
  unsigned int v62; // r13d
  unsigned int v63; // r12d
  const __m128i *v64; // rbx
  unsigned int *v65; // rax
  unsigned int v66; // r12d
  unsigned int v67; // ebp
  const __m128i *v68; // r14
  __int32 *v69; // rbx
  int v70; // eax
  int v71; // r9d
  int v72; // r10d
  unsigned int v73; // ebp
  int v74; // r13d
  int v75; // r9d
  bool v76; // zf
  int *v77; // r9
  __int64 v78; // r10
  int v79; // r12d
  unsigned int v80; // eax
  const __m128i *v81; // r13
  unsigned int v82; // r10d
  unsigned int v83; // r11d
  int v84; // eax
  int v85; // r10d
  int v86; // r9d
  int v87; // r8d
  __int32 *v88; // r12
  int v89; // ecx
  int v90; // r9d
  int v91; // eax
  __int32 v92; // eax
  unsigned int v93; // edx
  __int64 v94; // rcx
  int v95; // esi
  int v96; // ecx
  unsigned int v97; // esi
  unsigned int v98; // edx
  __int32 *v99; // rsi
  unsigned __int32 v100; // eax
  unsigned int v101; // ecx
  unsigned int v102; // esi
  unsigned int v103; // ebx
  unsigned int v104; // eax
  __int64 v105; // rdx
  int v106; // r13d
  unsigned int v107; // edi
  __int64 v108; // r8
  unsigned int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // edx
  int v112; // edx
  __int32 *v113; // rcx
  __int64 v114; // rax
  unsigned int v115; // edx
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  unsigned int v118; // r11d
  unsigned int v119; // edx
  __int64 v120; // r8
  __int32 *v121; // rax
  __int32 *v122; // r8
  unsigned int *v123; // rdx
  unsigned int v124; // eax
  const __m128i *v125; // r8
  __int32 v126; // edx
  unsigned int v127; // r12d
  int v128; // r13d
  __int64 v129; // r9
  __int64 v130; // r9
  int v131; // r13d
  int v132; // r11d
  int v133; // r13d
  unsigned int v134; // r10d
  __int64 v135; // r11
  int v136; // eax
  int v137; // r9d
  int v138; // eax
  int v139; // r10d
  __int64 v140; // rdx
  __int64 v141; // rsi
  int v142; // edi
  int v143; // esi
  int v144; // edi
  unsigned int v145; // r9d
  int v146; // eax
  unsigned int v147; // ecx
  __m128i *v149; // rdx
  char *v150; // rsi
  const __m128i *v151; // rcx
  __m128i *v152; // rdx
  __m128i v153; // xmm2
  unsigned int v154; // esi
  unsigned int v155; // r10d
  __m128i *v156; // rdx
  unsigned int v157; // [rsp+8h] [rbp-1B0h]
  int v158; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *v159; // [rsp+8h] [rbp-1B0h]
  __int64 v160; // [rsp+8h] [rbp-1B0h]
  const __m128i *v161; // [rsp+10h] [rbp-1A8h]
  __int64 v162; // [rsp+10h] [rbp-1A8h]
  int v163; // [rsp+10h] [rbp-1A8h]
  __int64 v164; // [rsp+18h] [rbp-1A0h]
  unsigned int v165; // [rsp+18h] [rbp-1A0h]
  unsigned int v166; // [rsp+18h] [rbp-1A0h]
  unsigned int v167; // [rsp+18h] [rbp-1A0h]
  unsigned int v168; // [rsp+20h] [rbp-198h]
  __int64 v169; // [rsp+20h] [rbp-198h]
  unsigned __int64 v170; // [rsp+28h] [rbp-190h]
  int v171; // [rsp+28h] [rbp-190h]
  int v172; // [rsp+28h] [rbp-190h]
  unsigned int v173; // [rsp+34h] [rbp-184h]
  _DWORD *v174; // [rsp+38h] [rbp-180h]
  int v175; // [rsp+40h] [rbp-178h]
  int v176; // [rsp+40h] [rbp-178h]
  unsigned int v177; // [rsp+44h] [rbp-174h]
  unsigned int *v178; // [rsp+48h] [rbp-170h]
  unsigned __int64 v179; // [rsp+50h] [rbp-168h]
  unsigned __int64 v180; // [rsp+58h] [rbp-160h]
  unsigned __int64 v181; // [rsp+60h] [rbp-158h]
  __int64 (__fastcall *v182)(unsigned int *, __int64, int *, __int64, unsigned __int64, int *, bool); // [rsp+68h] [rbp-150h]
  __m128i *v183; // [rsp+70h] [rbp-148h]
  __int32 *v186; // [rsp+98h] [rbp-120h]
  unsigned int v188; // [rsp+A8h] [rbp-110h]
  int v189; // [rsp+ACh] [rbp-10Ch]
  int v190; // [rsp+B8h] [rbp-100h] BYREF
  unsigned int v191; // [rsp+BCh] [rbp-FCh] BYREF
  __m128i v192; // [rsp+C0h] [rbp-F8h] BYREF
  __m128i v193; // [rsp+D0h] [rbp-E8h]
  __int64 v194; // [rsp+E0h] [rbp-D8h]
  __int64 v195; // [rsp+E8h] [rbp-D0h]
  int v196; // [rsp+F0h] [rbp-C8h]
  unsigned __int64 v197; // [rsp+104h] [rbp-B4h]
  int v198; // [rsp+10Ch] [rbp-ACh]
  __m128i v199; // [rsp+110h] [rbp-A8h] BYREF
  __int64 (__fastcall *v200)(int, int, int, int, int, int, int, int); // [rsp+120h] [rbp-98h]
  __int64 (__fastcall *v201)(int, int, int, int, int, int, int, int); // [rsp+128h] [rbp-90h]
  __int64 (__fastcall *v202)(int, int, int, int, int, int, int, int); // [rsp+130h] [rbp-88h]
  __int64 (__fastcall *v203)(int, int, int, int, int, int, int, int); // [rsp+138h] [rbp-80h]
  __int64 (__fastcall *v204)(int, int, int, int, int, int, int, int); // [rsp+140h] [rbp-78h]
  __int64 (__fastcall *v205)(int, int, int, int, int, int, int, int); // [rsp+148h] [rbp-70h]
  __int64 (__fastcall *v206)(int, int, int, int, int, int, int, int); // [rsp+150h] [rbp-68h]
  __int64 (__fastcall *v207)(int, int, int, int, int, int, int, int); // [rsp+158h] [rbp-60h]
  __int64 (__fastcall *v208)(int, int, int, int, int, int, int, int); // [rsp+160h] [rbp-58h]
  __int64 (__fastcall *v209)(int, int, int, int, int, int, int, int); // [rsp+168h] [rbp-50h]
  unsigned __int64 v210; // [rsp+178h] [rbp-40h]

  v6 = a1;
  v8 = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v210 = __readfsqword(0x28u);
  v9 = (_DWORD *)(a1 + 144);
  v10 = *(_DWORD *)(a1 + 272);
  v174 = v9;
  v180 = a4 + a5;
  v11 = *(_DWORD *)(v6 + 276) <= 0xFFFu;
  v181 = a4 + a5 - 8;
  v199.m128i_i64[0] = (__int64)sub_FCBD0;
  v199.m128i_i64[1] = (__int64)sub_FB790;
  v200 = sub_FC510;
  v201 = sub_FBE50;
  v202 = sub_FFE00;
  v203 = sub_FE1E0;
  v204 = sub_FD3D0;
  v205 = sub_FEFF0;
  v206 = sub_103CA0;
  v207 = sub_101DF0;
  v208 = sub_102D40;
  v209 = sub_100E90;
  v12 = 4095;
  if ( v11 )
    v12 = *(_DWORD *)(v6 + 276);
  v188 = v12;
  if ( v10 <= 2 )
  {
    v177 = 4;
    v182 = (__int64 (__fastcall *)(unsigned int *, __int64, int *, __int64, unsigned __int64, int *, bool))v199.m128i_i64[4 * a6];
  }
  else
  {
    v13 = 6;
    if ( v10 <= 6 )
      v13 = v10;
    v182 = (__int64 (__fastcall *)(unsigned int *, __int64, int *, __int64, unsigned __int64, int *, bool))v199.m128i_i64[4 * a6 + (unsigned int)(v13 - 3)];
    v14 = 4;
    if ( v10 == 3 )
      v14 = 3;
    v177 = v14;
  }
  v15 = *(_DWORD *)(v6 + 44);
  v16 = *(__m128i **)(v6 + 184);
  v200 = nullptr;
  v199 = 0;
  v190 = v15;
  v17 = *(unsigned int **)(v6 + 176);
  LODWORD(v201) = 0;
  v178 = v17;
  v18 = *(const __m128i **)(v6 + 288);
  if ( v18 )
  {
    v192 = _mm_loadu_si128(v18);
    v193 = _mm_loadu_si128(v18 + 1);
    v194 = v18[2].m128i_i64[0];
  }
  else
  {
    v192 = 0u;
    v193 = 0u;
    v194 = 0;
  }
  v195 = 0;
  v196 = 0;
  sub_F81A0((__int64)&v192, 0, a5);
  sub_F8520(v6 + 144, a4, a5, 2);
  v179 = a4 + (a4 == v8);
  if ( v181 > v179 )
  {
    v183 = (__m128i *)a4;
    v19 = v16;
    v186 = &v16->m128i_i32[7 * v177];
    while ( 1 )
    {
      v20 = v179 - (_DWORD)v183;
      v21 = ((__int64 (__fastcall *)(unsigned int *, __int64, int *, unsigned __int64, unsigned __int64, __int64, bool, _QWORD))v182)(
              v178,
              v6,
              &v190,
              v179,
              v180,
              a3,
              (_DWORD)v179 == (_DWORD)v183,
              v177);
      v191 = v21;
      if ( v193.m128i_i64[1] && v193.m128i_i64[1] > (unsigned __int64)v192.m128i_i64[1] )
      {
        sub_F8AC0(&v192, (__int64)v178, &v191, v179 - a4, v180 - v179);
        v21 = v191;
      }
      if ( !v21 )
      {
        ++v179;
        goto LABEL_14;
      }
      v19->m128i_i32[3] = v20;
      v19->m128i_i32[2] = 0;
      v19->m128i_i32[0] = sub_F8370(v20, (__int64)v174, 2);
      v19[1].m128i_i64[0] = *(_QWORD *)a3;
      v19[1].m128i_i32[2] = *(_DWORD *)(a3 + 8);
      v22 = &v178[2 * v191 - 2];
      if ( v22[1] > v188 )
      {
        v23 = *(_QWORD *)v22;
        v173 = 0;
        v24 = 0;
        v199.m128i_i32[3] = 0;
        *(__int64 *)((char *)v199.m128i_i64 + 4) = v23;
        goto LABEL_21;
      }
      v59 = (__int64)&v19[1].m128i_i64[1] + 4;
      v60 = v20 + 1;
      v61 = v177 + v20;
      v169 = (__int64)&v19[1].m128i_i64[1] + 4;
      do
      {
        *(_DWORD *)(v59 + 12) = v60++;
        v59 += 28;
        *(_DWORD *)(v59 - 28) = 0x40000000;
        *(_DWORD *)(v59 - 20) = 0;
      }
      while ( v61 != v60 );
      v62 = v177;
      v63 = v177 - 1;
      if ( v191 )
      {
        v165 = 0;
        v64 = v19;
        do
        {
          v65 = &v178[2 * v165];
          v66 = v65[1];
          v67 = *v65;
          if ( v66 >= v62 )
          {
            v68 = v64;
            do
            {
              v69 = &v68->m128i_i32[7 * v62];
              v69[2] = v62++;
              v69[1] = v67;
              v69[3] = 0;
              v70 = sub_F8370(0, (__int64)v174, 2);
              *v69 = v70 + v71 + v72;
            }
            while ( v66 >= v62 );
            v64 = v68;
          }
          ++v165;
        }
        while ( v165 < v191 );
        v19 = (__m128i *)v64;
        v64->m128i_i32[7 * v62] = 0x40000000;
        v63 = v62 - 1;
        if ( v62 == 1 )
        {
          v162 = 0;
          v125 = v64;
LABEL_93:
          v199 = _mm_loadu_si128(v125);
          v200 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int))v125[1].m128i_i64[0];
          LODWORD(v201) = v125[1].m128i_i32[2];
          if ( !v199.m128i_i32[2] )
            goto LABEL_116;
          v126 = v199.m128i_i32[3];
          v127 = v63 - v199.m128i_i32[2];
          v173 = v127;
          if ( v199.m128i_i32[3] )
          {
            v173 = v127 - v199.m128i_i32[3];
            *(_QWORD *)a3 = v200;
            *(_DWORD *)(a3 + 8) = (_DWORD)v201;
            v31 = v173 + 2;
            v32 = (__m128i *)((char *)v19 + 28 * v173 + 56);
            v32->m128i_i32[3] = v126;
            v32->m128i_i32[2] = 0;
            v156 = (__m128i *)((char *)v19 + 28 * v173 + 28);
            *v156 = _mm_load_si128(&v199);
            v156[1].m128i_i64[0] = (__int64)v200;
            v156[1].m128i_i32[2] = (int)v201;
            v25 = &v19->m128i_i32[7 * v173];
          }
          else
          {
            v24 = v127;
LABEL_21:
            v25 = &v19->m128i_i32[7 * v24];
            v26 = v25[3];
            v197 = *((_QWORD *)v25 + 2);
            v198 = v25[6];
            if ( v199.m128i_i32[1] > 3u )
            {
              v30 = HIDWORD(v197);
              v28 = v197;
              v29 = v199.m128i_i32[1] - 3;
            }
            else
            {
              v27 = v199.m128i_i32[1] + (v26 == 0) - 1;
              v28 = v197;
              if ( v27 )
              {
                v29 = v197 - 1;
                if ( v27 == 3 || (v29 = *((_DWORD *)&v197 + v27), v27 > 1) )
                  v30 = HIDWORD(v197);
                else
                  v30 = v198;
              }
              else
              {
                v29 = v197;
                v30 = v198;
                v28 = HIDWORD(v197);
              }
            }
            v197 = __PAIR64__(v28, v29);
            v198 = v30;
            *(_QWORD *)a3 = __PAIR64__(v28, v29);
            *(_DWORD *)(a3 + 8) = v198;
            v31 = v173 + 2;
            v32 = (__m128i *)((char *)v19 + 28 * v173 + 56);
          }
          *v32 = _mm_load_si128(&v199);
          v32[1].m128i_i64[0] = (__int64)v200;
          v32[1].m128i_i32[2] = (int)v201;
          v33 = v25[2];
          v34 = v25[3];
          v35 = *v25;
          v36 = v25[1];
          v37 = v25[4];
          v38 = v25[5];
          v39 = v25[6];
          v32->m128i_i32[3] = v34;
          if ( v33 )
          {
            v40 = v31;
            v41 = v173;
            while ( 1 )
            {
              v42 = &v19->m128i_i32[7 * --v40];
              v42[3] = v34;
              v41 -= v33 + v34;
              v42[6] = v39;
              *v42 = v35;
              v42[1] = v36;
              v42[2] = v33;
              v43 = &v19->m128i_i32[7 * v41];
              v42[4] = v37;
              v42[5] = v38;
              v44 = v43[2];
              v34 = v43[3];
              v35 = *v43;
              v45 = v43[1];
              v37 = v43[4];
              v38 = v43[5];
              v39 = v43[6];
              v42[3] = v34;
              if ( !v44 )
                break;
              v33 = v44;
              v36 = v45;
            }
            if ( v40 > v31 )
            {
LABEL_119:
              sub_F82A0(v174, 2);
              goto LABEL_14;
            }
          }
          else
          {
            v33 = v32->m128i_u32[2];
            v36 = v32->m128i_u32[1];
            v40 = v31;
          }
          v164 = v6;
          v46 = v19;
          v47 = v33;
          v157 = v31;
          v48 = v183;
          v161 = (const __m128i *)(v180 - 32);
          v49 = v36;
          v50 = v34;
          while ( 2 )
          {
            v53 = (__m128i *)((char *)v48 + v50);
            if ( v47 )
            {
              v170 = (unsigned __int64)v48->m128i_u64 + v50;
              v168 = v49;
              sub_F8450((__int64)v174, v50, (unsigned __int8 *)v48, v49, v47);
              v56 = v47;
              v57 = v168;
              if ( (unsigned __int64)v161 < v170 )
              {
                sub_F8040(*(__m128i **)(a2 + 24), v48, v170, v161);
                v57 = v168;
                goto LABEL_41;
              }
              *(__m128i *)*(_QWORD *)(a2 + 24) = _mm_loadu_si128(v48);
              if ( v55 > 0x10 )
              {
                v149 = *(__m128i **)(a2 + 24);
                v149[1] = _mm_loadu_si128(v48 + 1);
                if ( (__int64)(v55 - 16) > 16 )
                {
                  v150 = &v149->m128i_i8[v55];
                  v151 = v48 + 2;
                  v152 = v149 + 2;
                  do
                  {
                    v153 = _mm_loadu_si128(v151);
                    v152 += 2;
                    v151 += 2;
                    v152[-2] = v153;
                    v152[-1] = _mm_loadu_si128(v151 - 1);
                  }
                  while ( v150 > (char *)v152 );
                }
LABEL_41:
                *(_QWORD *)(a2 + 24) += v55;
                v51 = *(_QWORD *)(a2 + 8);
                if ( v55 > 0xFFFF )
                {
                  v58 = v51 - *(_QWORD *)a2;
                  *(_DWORD *)(a2 + 72) = 1;
                  *(_DWORD *)(a2 + 76) = v58 >> 3;
                }
              }
              else
              {
                *(_QWORD *)(a2 + 24) += v55;
                v51 = *(_QWORD *)(a2 + 8);
              }
              *(_WORD *)(v51 + 4) = v50;
              **(_DWORD **)(a2 + 8) = v57;
              v52 = *(_QWORD *)(a2 + 8);
              if ( (unsigned __int64)(v56 - 3) > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                *(_DWORD *)(a2 + 76) = (v52 - *(_QWORD *)a2) >> 3;
              }
              *(_WORD *)(v52 + 6) = v56 - 3;
              *(_QWORD *)(a2 + 8) += 8LL;
              v53 = (__m128i *)((char *)v48 + v50 + v47);
              v48 = v53;
            }
            if ( ++v40 > v157 )
            {
              v183 = v48;
              v19 = v46;
              v6 = v164;
              v179 = (unsigned __int64)v53;
              goto LABEL_119;
            }
            v54 = &v46->m128i_i32[7 * v40];
            v50 = v54[3];
            v47 = v54[2];
            v49 = v54[1];
            continue;
          }
        }
      }
      else
      {
        *v186 = 0x40000000;
      }
      v173 = 1;
      v73 = v63;
      while ( 1 )
      {
LABEL_61:
        v162 = v173;
        v159 = (unsigned __int8 *)(v179 + v173);
        v81 = (__m128i *)((char *)v19 + 28 * v173 - 28);
        sub_F8B80(v159 - 1, (__int64)v174, 2);
        sub_F8370(v82, (__int64)v174, 2);
        v84 = sub_F8370(v83, (__int64)v174, 2);
        v87 = v81->m128i_i32[0] + v86 - v84;
        v88 = &v19->m128i_i32[7 * v173];
        v89 = *v88;
        v90 = v88[3];
        if ( v87 <= *v88 )
        {
          v166 = v88[1];
          v91 = v88[2];
          *(__m128i *)v88 = _mm_loadu_si128(v81);
          v171 = v91;
          *((_QWORD *)v88 + 2) = v81[1].m128i_i64[0];
          v92 = v81[1].m128i_i32[2];
          v88[3] = v85;
          v88[6] = v92;
          *v88 = v87;
          if ( v90
            || (v176 = v89,
                v189 = v87,
                v128 = sub_F8370(1u, (__int64)v174, 2),
                v131 = v128 - sub_F8370(0, v129, 2),
                v131 >= 0)
            || v180 <= (unsigned __int64)v159 )
          {
            v90 = v85;
          }
          else
          {
            v174 = (_DWORD *)v130;
            v133 = sub_F8B80(v159, v130, 2) + v176 + v131;
            sub_F8370(v132 + 2, (__int64)v174, 2);
            v136 = sub_F8370(v134, v135, 2);
            v138 = v189 + v137 - v136;
            v90 = v139;
            if ( v133 < v138 )
            {
              v140 = (__int64)&v19[1].m128i_i64[1] + 28 * v173 + 4;
              if ( v133 < *(_DWORD *)v140 )
              {
                v141 = (__int64)v19->m128i_i64 + 28 * (v173 - v171);
                v142 = *(_DWORD *)(v141 + 12);
                v197 = *(_QWORD *)(v141 + 16);
                v198 = *(_DWORD *)(v141 + 24);
                if ( v166 <= 3 )
                {
                  v145 = v197;
                  v154 = v166 + (v142 == 0) - 1;
                  if ( v166 + (v142 == 0) == 1 )
                  {
                    v143 = v198;
                    v144 = HIDWORD(v197);
                  }
                  else
                  {
                    v155 = v197 - 1;
                    if ( v166 + (v142 == 0) == 4 || (v155 = *((_DWORD *)&v197 + v154), v154 > 1) )
                      v143 = HIDWORD(v197);
                    else
                      v143 = v198;
                    v144 = v197;
                    v145 = v155;
                  }
                }
                else
                {
                  v143 = HIDWORD(v197);
                  v144 = v197;
                  v145 = v166 - 3;
                }
                v198 = v143;
                LODWORD(v197) = v145;
                if ( v73 < v173 + 1 )
                  v73 = v173 + 1;
                HIDWORD(v197) = v144;
                *(_DWORD *)(v140 + 4) = v166;
                *(_DWORD *)v140 = v176;
                *(_DWORD *)(v140 + 8) = v171;
                *(_QWORD *)(v140 + 16) = v197;
                v146 = v198;
                *(_DWORD *)(v140 + 12) = 1;
                *(_DWORD *)(v140 + 24) = v146;
                *(_DWORD *)v140 = v133;
                v90 = v88[3];
              }
            }
          }
        }
        if ( !v90 )
        {
          v93 = v88[1];
          v94 = (__int64)v19->m128i_i64 + 28 * (v173 - v88[2]);
          v95 = *(_DWORD *)(v94 + 12);
          v197 = *(_QWORD *)(v94 + 16);
          v198 = *(_DWORD *)(v94 + 24);
          if ( v93 <= 3 )
          {
            v147 = v93 + (v95 == 0) - 1;
            if ( v93 + (v95 == 0) == 1 )
            {
              v97 = HIDWORD(v197);
              v96 = v198;
              v98 = v197;
            }
            else
            {
              v98 = v197 - 1;
              if ( v147 == 3 || (v98 = *((_DWORD *)&v197 + v147), v147 > 1) )
              {
                v96 = HIDWORD(v197);
                v97 = v197;
              }
              else
              {
                v96 = v198;
                v97 = v197;
              }
            }
          }
          else
          {
            v96 = HIDWORD(v197);
            v97 = v197;
            v98 = v93 - 3;
          }
          v198 = v96;
          v197 = __PAIR64__(v97, v98);
          *((_QWORD *)v88 + 2) = __PAIR64__(v97, v98);
          v88[6] = v198;
        }
        if ( v181 >= (unsigned __int64)v159 )
        {
          if ( v73 == v173 )
          {
            v125 = (__m128i *)((char *)v19 + 28 * v173);
            v63 = v73;
            goto LABEL_93;
          }
          v158 = *v88;
          v74 = sub_F8370(0, (__int64)v174, 2);
          v76 = v75 == 0;
          v77 = v88 + 4;
          v79 = v78;
          v80 = v182(v178, v6, &v190, v78, v180, v77, v76);
          v191 = v80;
          if ( v193.m128i_i64[1] && v193.m128i_i64[1] > (unsigned __int64)v192.m128i_i64[1] )
          {
            sub_F8AC0(&v192, (__int64)v178, &v191, v79 - a4, v180 - v79);
            v80 = v191;
          }
          if ( v80 )
            break;
        }
        if ( ++v173 > v73 )
          goto LABEL_92;
      }
      v99 = (__int32 *)&v178[2 * v80 - 2];
      v100 = v99[1];
      v101 = v100 + v173;
      if ( v100 <= v188 && v101 <= 0xFFF && v180 > v179 + v173 + (unsigned __int64)v100 )
      {
        v175 = 0;
        v102 = v178[1];
        v103 = v177;
        v163 = v158 + v74;
        v167 = *v178;
        while ( v103 > v102 )
        {
LABEL_86:
          if ( v175 + 1 >= v191 )
          {
            ++v173;
            v19[1].m128i_i32[7 * v73 + 3] = 0x40000000;
            if ( v173 > v73 )
            {
LABEL_92:
              v162 = v73;
              v63 = v73;
              v125 = (__m128i *)((char *)v19 + 28 * v73);
              goto LABEL_93;
            }
            goto LABEL_61;
          }
          v123 = &v178[2 * (v175 + 1)];
          v102 = v123[1];
          v167 = *v123;
          v103 = v177;
          if ( v175 != -1 )
            v103 = v178[2 * v175 + 1] + 1;
          ++v175;
        }
        _BitScanReverse(&v104, v167);
        v104 ^= 0x1Fu;
        v105 = 31 - v104;
        v172 = 47 - v104;
        v106 = (_DWORD)v105 << 8;
        v107 = v173 + v102;
        v160 = 4 * v105;
        while ( 1 )
        {
          v114 = v102 - 3;
          if ( *(_DWORD *)(v6 + 224) == 1 )
          {
            _BitScanReverse(&v124, v102 - 2);
            v111 = ((v172 + 31 - (v124 ^ 0x1F)) << 8) + (((v102 << 8) - 512) >> (31 - (v124 ^ 0x1F)));
          }
          else
          {
            v115 = *(_DWORD *)(*(_QWORD *)(v6 + 168) + v160) + 1;
            _BitScanReverse(&v116, v115);
            v117 = 31 - (v116 ^ 0x1F);
            v118 = v117 << 8;
            v119 = v115 << 8 >> v117;
            if ( (unsigned int)v114 > 0x7F )
            {
              _BitScanReverse((unsigned int *)&v114, v114);
              v108 = 67 - ((unsigned int)v114 ^ 0x1F);
            }
            else
            {
              v108 = *((unsigned __int8 *)qword_1360C0 + v114);
            }
            v109 = *(_DWORD *)(*(_QWORD *)(v6 + 160) + 4 * v108) + 1;
            _BitScanReverse(&v110, v109);
            v111 = v106
                 + *(_DWORD *)(v6 + 216)
                 + *(_DWORD *)(v6 + 220)
                 + 51
                 - v118
                 - v119
                 + (*((unsigned __int8 *)qword_136180 + v108) << 8)
                 - ((31 - (v110 ^ 0x1F)) << 8)
                 - (v109 << 8 >> (31 - (v110 ^ 0x1F)));
          }
          v112 = v163 + v111;
          v113 = &v19->m128i_i32[7 * v107];
          if ( v73 < v107 )
          {
            v120 = v73 + 1;
            v121 = &v19->m128i_i32[7 * v120];
            v122 = (__int32 *)(v169 + 28 * (v107 - v73 - 1 + v120));
            do
            {
              *v121 = 0x40000000;
              v121 += 7;
              *(v121 - 4) = 1;
            }
            while ( v122 != v121 );
            v73 = v107;
          }
          else if ( v112 >= *v113 )
          {
            --v102;
            --v107;
            if ( v102 < v103 )
              goto LABEL_86;
            continue;
          }
          v113[2] = v102--;
          --v107;
          v113[3] = 0;
          v113[1] = v167;
          *v113 = v112;
          if ( v102 < v103 )
            goto LABEL_86;
        }
      }
      v199.m128i_i64[1] = v100;
      v24 = v173;
      v199.m128i_i32[1] = *v99;
      if ( v100 )
        goto LABEL_21;
      v162 = v101;
LABEL_116:
      v179 += v162;
LABEL_14:
      if ( v181 <= v179 )
        return v180 - (_QWORD)v183;
    }
  }
  v183 = (__m128i *)a4;
  return v180 - (_QWORD)v183;
}

