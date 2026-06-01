__int64 __fastcall sub_1548270(const __m128i *a1, __int64 *a2, __int64 *a3, __int64 *a4, __m128i a5)
{
  const __m128i *v5; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  unsigned int v13; // edx
  __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int16 v18; // dx
  __int64 v19; // r13
  __int16 v20; // ax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 result; // rax
  __int64 *v27; // rdi
  bool v28; // zf
  unsigned int v29; // edx
  __int8 v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rax
  const __m128i *v36; // rdi
  __int16 v37; // dx
  __int16 v38; // ax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 (__fastcall *v42)(_QWORD); // rax
  _QWORD *v43; // rdi
  const __m128i *v44; // r15
  __int64 *v45; // rdi
  int *m128i_i32; // rsi
  unsigned int v47; // r8d
  __int64 *v48; // r15
  __int64 v49; // rcx
  int v50; // r8d
  unsigned __int8 *v51; // rax
  __int64 *v52; // r10
  _QWORD *v53; // rdx
  __int64 v54; // rax
  __int64 *v55; // r9
  __int64 v56; // rcx
  __int64 *v57; // rax
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rdx
  __int64 *v60; // rcx
  __int64 *v61; // r8
  void *v62; // rax
  __int64 *v63; // rsi
  __int64 *v64; // r11
  __int64 *v65; // rdi
  __int64 *v66; // r15
  unsigned __int64 v67; // rax
  __int64 *v68; // rcx
  __int64 *v69; // rax
  __int64 *v70; // rbp
  __int64 *v71; // r12
  __int64 *v72; // rbx
  __int64 *v73; // rdi
  __int64 *v74; // rdi
  __int64 *v75; // rax
  __int64 *v76; // r12
  __int64 *v77; // rbp
  void **v78; // rbx
  __int64 (__fastcall *v79)(_QWORD); // rax
  _QWORD *v80; // rdi
  const __m128i *v81; // r13
  __int64 *v82; // rdi
  int *v83; // rsi
  unsigned int v84; // r8d
  __int64 *v85; // r13
  unsigned __int8 *v86; // r15
  int v87; // r8d
  __int64 v88; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // rax
  __int64 *v91; // r9
  __int64 v92; // r15
  unsigned __int64 v93; // rdx
  __int64 v94; // r15
  unsigned __int64 v95; // rax
  __int64 *v96; // rcx
  unsigned __int64 v97; // r15
  void *v98; // rax
  __int64 *v99; // rsi
  __int64 *v100; // r8
  _BYTE *v101; // rdi
  __int64 *v102; // r13
  unsigned __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r15
  __int64 *v106; // r12
  __int64 *v107; // rbp
  __int64 v108; // rbx
  void *v109; // rdi
  __int64 *v110; // rdi
  __int64 *v111; // rdi
  void **v112; // r15
  unsigned __int8 *v113; // rbx
  _QWORD *v114; // rdx
  __int64 v115; // rax
  void **v116; // r12
  unsigned __int64 v117; // rax
  __int64 v118; // r13
  __int64 v119; // rbx
  void *v120; // rdi
  void **v121; // rdi
  void **v122; // rdi
  void **v123; // rbx
  void **v124; // r13
  __int64 v125; // rdx
  unsigned __int64 v126; // rdx
  int v127; // eax
  unsigned __int8 *v128; // rbx
  _QWORD *v129; // rdx
  __int64 v130; // rax
  void **v131; // r12
  unsigned __int64 v132; // rax
  __int64 v133; // r13
  __int64 v134; // rbx
  void *v135; // rdi
  void **v136; // rdi
  void **v137; // rdi
  void **v138; // rbx
  void **v139; // r13
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // r14
  __int64 v147; // rbx
  int v148; // r12d
  unsigned __int8 *v149; // r15
  void *v150; // rdi
  unsigned __int64 v151; // rdx
  int v152; // eax
  unsigned __int64 v153; // rdx
  int v154; // eax
  unsigned __int64 v155; // rdx
  int v156; // eax
  __int64 *v157; // rax
  int v158; // edx
  void **v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // r12
  __int64 v163; // r13
  __int64 v164; // r12
  void *v165; // rdi
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rbp
  __int64 *v171; // r12
  __int64 *v172; // r15
  __int64 v173; // rbx
  void *v174; // rdi
  __int64 v175; // rax
  int v176; // edx
  void **v177; // rdi
  __int64 v178; // rcx
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // rax
  __int64 v183; // rbx
  int v184; // r12d
  __int64 v185; // r13
  void *v186; // rdi
  unsigned __int64 v187; // rdx
  int v188; // eax
  unsigned __int64 v189; // rdx
  int v190; // eax
  int v191; // r15d
  __int64 v192; // rax
  __int64 *v193; // rdi
  __int64 v194; // r15
  __int64 v195; // rcx
  __int64 v196; // rax
  __int64 v197; // r15
  __int64 v198; // rdx
  __int64 v199; // r15
  void *v200; // rdi
  __int64 v201; // rax
  __int64 v202; // r12
  __int64 v203; // r13
  __int64 v204; // r12
  void *v205; // rdi
  __int64 v206; // r15
  int v207; // eax
  void *v208; // rdi
  _BYTE *v209; // [rsp+0h] [rbp-218h]
  __int64 *v210; // [rsp+8h] [rbp-210h]
  void **v211; // [rsp+10h] [rbp-208h]
  __int64 v212; // [rsp+18h] [rbp-200h]
  __int64 *v213; // [rsp+20h] [rbp-1F8h]
  __int64 *v214; // [rsp+28h] [rbp-1F0h]
  __int64 *v215; // [rsp+30h] [rbp-1E8h]
  __int64 *v216; // [rsp+38h] [rbp-1E0h]
  __m128i *v217; // [rsp+40h] [rbp-1D8h] BYREF
  __int8 v218; // [rsp+48h] [rbp-1D0h]
  const __m128i *v219; // [rsp+50h] [rbp-1C8h]
  int v220; // [rsp+58h] [rbp-1C0h]
  __int16 v221; // [rsp+5Ch] [rbp-1BCh]
  __int64 (__fastcall *v222)(__int64); // [rsp+60h] [rbp-1B8h]
  __int64 v223; // [rsp+68h] [rbp-1B0h]
  __int64 v224; // [rsp+70h] [rbp-1A8h]
  __m128i *v225; // [rsp+80h] [rbp-198h] BYREF
  __int8 v226; // [rsp+88h] [rbp-190h]
  const __m128i *v227; // [rsp+90h] [rbp-188h]
  int v228; // [rsp+98h] [rbp-180h]
  __int16 v229; // [rsp+9Ch] [rbp-17Ch]
  __int64 (__fastcall *v230)(__int64); // [rsp+A0h] [rbp-178h]
  __int64 v231; // [rsp+A8h] [rbp-170h]
  __int64 v232; // [rsp+B0h] [rbp-168h]
  _DWORD v233[2]; // [rsp+C0h] [rbp-158h] BYREF
  char v234; // [rsp+C8h] [rbp-150h]
  __int64 v235; // [rsp+CCh] [rbp-14Ch]
  char v236; // [rsp+D4h] [rbp-144h]
  void *v237; // [rsp+D8h] [rbp-140h]
  __int64 v238; // [rsp+E0h] [rbp-138h]
  _BYTE v239[24]; // [rsp+E8h] [rbp-130h] BYREF
  _DWORD v240[2]; // [rsp+100h] [rbp-118h] BYREF
  char v241; // [rsp+108h] [rbp-110h]
  __int64 v242; // [rsp+10Ch] [rbp-10Ch]
  char v243; // [rsp+114h] [rbp-104h]
  void *v244; // [rsp+118h] [rbp-100h]
  __int64 v245; // [rsp+120h] [rbp-F8h]
  _BYTE v246[24]; // [rsp+128h] [rbp-F0h] BYREF
  void *v247; // [rsp+140h] [rbp-D8h] BYREF
  unsigned __int64 v248; // [rsp+148h] [rbp-D0h]
  __int64 v249; // [rsp+150h] [rbp-C8h]
  void *v250; // [rsp+160h] [rbp-B8h]
  __int16 v251; // [rsp+180h] [rbp-98h]
  void *v252; // [rsp+190h] [rbp-88h] BYREF
  unsigned __int64 v253; // [rsp+198h] [rbp-80h]
  __int64 v254; // [rsp+1A0h] [rbp-78h]
  void *v255; // [rsp+1B0h] [rbp-68h]
  _BYTE v256[16]; // [rsp+1C0h] [rbp-58h] BYREF
  __int16 v257; // [rsp+1D0h] [rbp-48h]

  v5 = a1;
  v210 = (__int64 *)v233;
  v209 = v239;
  if ( a1[2].m128i_i16[0] == 20 )
    goto LABEL_24;
LABEL_2:
  v9 = *((unsigned int *)a2 + 2);
  if ( v9 + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
  {
    sub_2237220(a2, a2 + 2, v9 + 1, 8);
    v9 = *((unsigned int *)a2 + 2);
  }
  *(_QWORD *)(*a2 + 8 * v9) = 0;
  ++*((_DWORD *)a2 + 2);
  while ( 1 )
  {
    v10 = sub_1565350(v5, 0);
    if ( v10 == 1 )
      goto LABEL_139;
    v11 = *((unsigned int *)a3 + 2);
    v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFELL);
    if ( v11 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      v211 = (void **)v12;
      sub_2237220(a3, a3 + 2, v11 + 1, 8);
      v11 = *((unsigned int *)a3 + 2);
      v12 = (__int64 *)v211;
    }
    *(_QWORD *)(*a3 + 8 * v11) = v12;
    ++*((_DWORD *)a3 + 2);
    if ( v5[2].m128i_i16[0] != 22 )
      break;
    v219 = v5;
    v13 = v5[5].m128i_u16[4];
    v217 = (__m128i *)&v5[122];
    v14 = v5[122].m128i_i8[0];
    v5[122].m128i_i8[0] = 1;
    v218 = v14;
    v222 = sub_146A990;
    v15 = v5->m128i_i64[1];
    v220 = 1507350;
    v16 = *(_QWORD *)(v15 + 56);
    v221 = 63;
    v223 = 0;
    v224 = 0;
    if ( v13 >= *(_DWORD *)(v16 + 144) )
      sub_1568800(&v217);
    else
      LODWORD(v224) = sub_146A990((__int64)v5);
    v17 = sub_14BFC10(v5, 0, a5);
    v18 = HIWORD(v220);
    v19 = v17;
    v20 = v219[2].m128i_i16[0];
    if ( HIWORD(v220) != v20 )
    {
      if ( v20 != 63
        || ((v21 = v219->m128i_i64[1], v22 = *(_QWORD *)(v21 + 2944), v22 >= *(unsigned int *)(v21 + 2912))
          ? (v23 = sub_14180A0(v21, 1u), v18 = HIWORD(v220))
          : (v23 = *(_QWORD *)(v21 + 2904) + 24 * v22),
            *(_WORD *)(v23 + 16) != v18) )
      {
        sub_15688B0(&v217);
        goto LABEL_17;
      }
      v44 = v219;
      v45 = (__int64 *)v219->m128i_i64[1];
      m128i_i32 = v219[1].m128i_i32;
      v219[2].m128i_i32[2] = v219[1].m128i_i32[0];
      sub_14634E0(v45, m128i_i32);
      v47 = v44[2].m128i_u32[2];
      v48 = (__int64 *)&v252;
      LODWORD(v211) = v47;
      sub_1564820(&v252, v219, v47, 1917);
      v49 = HIWORD(v220);
      v50 = (int)v211;
      v51 = (unsigned __int8 *)v252;
      if ( !v252 )
      {
        v126 = v253;
        v127 = *(_DWORD *)(v253 + 14976);
        if ( v127 )
        {
          v142 = (unsigned int)(v127 - 1);
          *(_DWORD *)(v253 + 14976) = v142;
          v51 = *(unsigned __int8 **)(v126 + 8 * v142 + 14848);
          v143 = *((unsigned int *)v51 + 134);
          *v51 = 0;
          v144 = *((_QWORD *)v51 + 66);
          *((_DWORD *)v51 + 106) = 0;
          v145 = v144 + (v143 << 6);
          if ( v144 != v145 )
          {
            v211 = (void **)v5;
            v146 = v49;
            v212 = (__int64)a2;
            v147 = v145;
            v213 = a3;
            v214 = a4;
            v148 = v50;
            v215 = (__int64 *)&v252;
            v149 = v51;
            do
            {
              while ( 1 )
              {
                v147 -= 64;
                v150 = *(void **)(v147 + 24);
                if ( v150 == (void *)(v147 + 40) )
                  break;
                operator delete(v150);
                if ( v144 == v147 )
                  goto LABEL_187;
              }
            }
            while ( v144 != v147 );
LABEL_187:
            v50 = v148;
            v49 = v146;
            v51 = v149;
            v5 = (const __m128i *)v211;
            a2 = (__int64 *)v212;
            a3 = v213;
            a4 = v214;
            v48 = v215;
          }
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v212 = HIWORD(v220);
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          v50 = (int)v211;
          *((_QWORD *)v51 + 66) = v51 + 544;
          v49 = v212;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        v252 = v51;
      }
      v52 = (__int64 *)v240;
      v51[*v51 + 1] = 4;
      v53 = v252;
      v54 = *(unsigned __int8 *)v252;
      *(_BYTE *)v252 = v54 + 1;
      v53[v54 + 2] = v49;
      v242 = 0;
      v243 = 0;
      v244 = v246;
      v245 = 0;
      v246[0] = 0;
      v246[16] = 0;
      v240[0] = v50;
      v240[1] = v50;
      v241 = 1;
      if ( !v50 )
        goto LABEL_53;
      v55 = (__int64 *)v252;
      if ( v252 )
      {
        v56 = *((unsigned int *)v252 + 134);
        v57 = *((__int64 **)v252 + 66);
        v58 = *((unsigned int *)v252 + 135);
        v59 = v56 + 1;
        v60 = &v57[8 * v56];
      }
      else
      {
        v151 = v253;
        v152 = *(_DWORD *)(v253 + 14976);
        if ( v152 )
        {
          v166 = (unsigned int)(v152 - 1);
          *(_DWORD *)(v253 + 14976) = v166;
          v55 = *(__int64 **)(v151 + 8 * v166 + 14848);
          v167 = *((unsigned int *)v55 + 134);
          *(_BYTE *)v55 = 0;
          v168 = v55[66];
          *((_DWORD *)v55 + 106) = 0;
          v169 = v168 + (v167 << 6);
          if ( v168 != v169 )
          {
            v212 = (__int64)a3;
            v170 = v168;
            v213 = a4;
            v171 = v55;
            v214 = v48;
            v172 = a2;
            v173 = v169;
            do
            {
              while ( 1 )
              {
                v173 -= 64;
                v174 = *(void **)(v173 + 24);
                if ( v174 == (void *)(v173 + 40) )
                  break;
                v211 = (void **)v52;
                operator delete(v174);
                v52 = (__int64 *)v211;
                if ( v170 == v173 )
                  goto LABEL_220;
              }
            }
            while ( v170 != v173 );
LABEL_220:
            v55 = v171;
            a2 = v172;
            a3 = (__int64 *)v212;
            a4 = v213;
            v48 = v214;
            v168 = v55[66];
          }
          *((_DWORD *)v55 + 134) = 0;
          v58 = *((unsigned int *)v55 + 135);
          v57 = (__int64 *)v168;
        }
        else
        {
          v211 = (void **)v240;
          v55 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v55 = 0;
          v55[12] = (__int64)(v55 + 14);
          v55[16] = (__int64)(v55 + 18);
          v55[20] = (__int64)(v55 + 22);
          v55[24] = (__int64)(v55 + 26);
          v55[28] = (__int64)(v55 + 30);
          v55[32] = (__int64)(v55 + 34);
          v55[36] = (__int64)(v55 + 38);
          v55[40] = (__int64)(v55 + 42);
          v55[44] = (__int64)(v55 + 46);
          v55[48] = (__int64)(v55 + 50);
          v55[52] = (__int64)(v55 + 54);
          v55[13] = 0;
          *((_BYTE *)v55 + 112) = 0;
          v55[17] = 0;
          *((_BYTE *)v55 + 144) = 0;
          v55[21] = 0;
          *((_BYTE *)v55 + 176) = 0;
          v55[25] = 0;
          *((_BYTE *)v55 + 208) = 0;
          v55[29] = 0;
          *((_BYTE *)v55 + 240) = 0;
          v55[33] = 0;
          *((_BYTE *)v55 + 272) = 0;
          v55[37] = 0;
          *((_BYTE *)v55 + 304) = 0;
          v55[41] = 0;
          *((_BYTE *)v55 + 336) = 0;
          v55[45] = 0;
          *((_BYTE *)v55 + 368) = 0;
          v55[49] = 0;
          *((_BYTE *)v55 + 400) = 0;
          v55[53] = 0x800000000LL;
          v57 = v55 + 68;
          v52 = (__int64 *)v211;
          v55[66] = (__int64)(v55 + 68);
          v55[67] = 0x600000000LL;
          v58 = 6;
        }
        v252 = v55;
        v60 = v57;
        v59 = 1;
      }
      v61 = v52;
      if ( v59 > v58 )
      {
        v211 = (void **)(v55 + 68);
        if ( v57 > v52 || v60 <= v52 )
        {
          v215 = v52;
          v214 = v55;
          v213 = v55 + 66;
          v212 = sub_2237400(v55 + 66, v211, v59, 64, &v247);
          sub_9EF810(v213, v212);
          v55 = v214;
          v175 = v212;
          v176 = (int)v247;
          v52 = v215;
          v177 = (void **)v214[66];
          if ( v177 == v211 )
          {
            v195 = *((unsigned int *)v214 + 134);
            v214[66] = v212;
            v61 = v52;
            *((_DWORD *)v55 + 135) = v176;
            v60 = (__int64 *)(v175 + (v195 << 6));
          }
          else
          {
            v214 = v215;
            v213 = (__int64 *)v212;
            v212 = (__int64)v55;
            v211 = (void **)v247;
            free(v177);
            v55 = (__int64 *)v212;
            v52 = v214;
            v178 = *(unsigned int *)(v212 + 536);
            *(_QWORD *)(v212 + 528) = v213;
            *(_DWORD *)(v212 + 540) = (_DWORD)v211;
            v61 = v214;
            v60 = &v213[8 * v178];
          }
        }
        else
        {
          v216 = v55;
          v215 = v52;
          v212 = (char *)v52 - (char *)v57;
          v214 = v55 + 66;
          v213 = (__int64 *)sub_2237400(v55 + 66, v55 + 68, v59, 64, &v247);
          sub_9EF810(v214, (__int64)v213);
          v55 = v216;
          v157 = v213;
          v158 = (int)v247;
          v52 = v215;
          v159 = (void **)v216[66];
          if ( v159 == v211 )
          {
            v216[66] = (__int64)v213;
            *((_DWORD *)v55 + 135) = v158;
          }
          else
          {
            v214 = v213;
            v213 = (__int64 *)v247;
            v211 = (void **)v216;
            free(v159);
            v55 = (__int64 *)v211;
            v157 = v214;
            v52 = v215;
            v211[66] = v214;
            *((_DWORD *)v211 + 135) = (_DWORD)v213;
          }
          v61 = (__int64 *)((char *)v157 + v212);
          v60 = &v157[8 * (unsigned __int64)*((unsigned int *)v55 + 134)];
        }
      }
      *v60 = *v61;
      *((_DWORD *)v60 + 2) = *((_DWORD *)v61 + 2);
      *(__int64 *)((char *)v60 + 12) = *(__int64 *)((char *)v61 + 12);
      *((_DWORD *)v60 + 5) = *((_DWORD *)v61 + 5);
      v62 = v60 + 5;
      v60[3] = (__int64)(v60 + 5);
      v63 = (__int64 *)v61[3];
      v64 = (__int64 *)v61[4];
      if ( (__int64 *)((char *)v63 + (_QWORD)v64) && !v63 )
LABEL_261:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v64 > 0xF )
      {
        v216 = v52;
        v215 = v60;
        v214 = v61;
        v213 = v63;
        v212 = (__int64)v55;
        if ( (__int64)v64 < 0 )
          goto LABEL_262;
        v211 = (void **)v64;
        v62 = (void *)operator new((unsigned __int64)v64 + 1);
        v60 = v215;
        v64 = (__int64 *)v211;
        v55 = (__int64 *)v212;
        v63 = v213;
        v61 = v214;
        v52 = v216;
        v215[3] = (__int64)v62;
        v215[5] = (__int64)v211;
      }
      else
      {
        if ( v64 == (__int64 *)((char *)&dword_0 + 1) )
        {
          *((_BYTE *)v60 + 40) = *(_BYTE *)v63;
LABEL_51:
          v60[4] = (__int64)v64;
          *((_BYTE *)v64 + (_QWORD)v62) = 0;
          v65 = (__int64 *)v244;
          *((_BYTE *)v60 + 56) = *((_BYTE *)v61 + 56);
          ++*((_DWORD *)v55 + 134);
          if ( v65 != v52 + 5 )
            operator delete(v65);
LABEL_53:
          if ( (_BYTE)v257 )
          {
            sub_FC7790(v254, v48, SHIBYTE(v257));
            v254 = 0;
            v257 = 0;
          }
          if ( v255 != v48 + 6 )
            operator delete(v255);
          v66 = (__int64 *)v252;
          if ( v252 )
          {
            v67 = v253;
            if ( v253 )
            {
              if ( (unsigned __int64)v252 < v253 || (unsigned __int64)v252 > v253 + 14848 )
              {
                v68 = *((__int64 **)v252 + 66);
                v69 = &v68[8 * (unsigned __int64)*((unsigned int *)v252 + 134)];
                if ( v68 != v69 )
                {
                  v211 = (void **)a3;
                  v70 = v68;
                  v212 = (__int64)a4;
                  v71 = a2;
                  v72 = v69;
                  do
                  {
                    while ( 1 )
                    {
                      v72 -= 8;
                      v73 = (__int64 *)v72[3];
                      if ( v73 == v72 + 5 )
                        break;
                      operator delete(v73);
                      if ( v70 == v72 )
                        goto LABEL_64;
                    }
                  }
                  while ( v70 != v72 );
LABEL_64:
                  a2 = v71;
                  a3 = (__int64 *)v211;
                  a4 = (__int64 *)v212;
                  v69 = (__int64 *)v66[66];
                }
                if ( v69 != v66 + 68 )
                  free(v69);
                v74 = (__int64 *)v66[52];
                v75 = v66 + 52;
                if ( v74 != v66 + 54 )
                {
                  v211 = (void **)(v66 + 52);
                  free(v74);
                  v75 = (__int64 *)v211;
                }
                v212 = (__int64)a4;
                v76 = a3;
                v77 = a2;
                v211 = (void **)(v66 + 12);
                v78 = (void **)v75;
                do
                {
                  while ( 1 )
                  {
                    v78 -= 4;
                    if ( *v78 == v78 + 2 )
                      break;
                    operator delete(*v78);
                    if ( v78 == v211 )
                      goto LABEL_72;
                  }
                }
                while ( v78 != v211 );
LABEL_72:
                a2 = v77;
                a3 = v76;
                a4 = (__int64 *)v212;
                operator delete(v66, 0x3A0u);
              }
              else
              {
                v125 = *(unsigned int *)(v253 + 14976);
                *(_DWORD *)(v253 + 14976) = v125 + 1;
                *(_QWORD *)(v67 + 8 * v125 + 14848) = v66;
              }
            }
          }
          v42 = v222;
          v43 = (__int64 *)((char *)v219->m128i_i64 + v223);
          if ( ((unsigned __int8)v222 & 1) == 0 )
            goto LABEL_39;
LABEL_38:
          v42 = *(__int64 (__fastcall **)(_QWORD))((char *)v42 + *v43 - 1);
          goto LABEL_39;
        }
        if ( !v64 )
          goto LABEL_51;
      }
      v215 = v52;
      v214 = v60;
      v213 = v61;
      v212 = (__int64)v55;
      v211 = (void **)v64;
      memcpy(v62, v63, (size_t)v64);
      v60 = v214;
      v52 = v215;
      v61 = v213;
      v55 = (__int64 *)v212;
      v62 = (void *)v214[3];
      v64 = (__int64 *)v211;
      goto LABEL_51;
    }
    v42 = v222;
    v43 = (__int64 *)((char *)v219->m128i_i64 + v223);
    if ( ((unsigned __int8)v222 & 1) != 0 )
      goto LABEL_38;
LABEL_39:
    HIDWORD(v224) = v42(v43);
LABEL_17:
    if ( v19 == 1 )
    {
      LOWORD(v252) = 23;
      sub_15680D0(v5, &v252, 1, 1);
      result = 1;
      goto LABEL_21;
    }
    v24 = *((unsigned int *)a4 + 2);
    v25 = v19 & 0xFFFFFFFFFFFFFFFELL;
    if ( v24 + 1 > (unsigned __int64)*((unsigned int *)a4 + 3) )
    {
      sub_2237220(a4, a4 + 2, v24 + 1, 8);
      *(_QWORD *)(*a4 + 8LL * (unsigned int)(*((_DWORD *)a4 + 2))++) = v25;
      if ( v5[2].m128i_i16[0] != 66 )
      {
LABEL_20:
        result = 0;
LABEL_21:
        v217->m128i_i8[0] = v218;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(*a4 + 8 * v24) = v25;
      ++*((_DWORD *)a4 + 2);
      if ( v5[2].m128i_i16[0] != 66 )
        goto LABEL_20;
    }
    v27 = (__int64 *)v5->m128i_i64[1];
    v5[2].m128i_i32[2] = v5[1].m128i_i32[0];
    sub_14634E0(v27, v5[1].m128i_i32);
    v28 = v5[2].m128i_i16[0] == 20;
    v217->m128i_i8[0] = v218;
    if ( !v28 )
      goto LABEL_2;
LABEL_24:
    v29 = v5[5].m128i_u16[5];
    v227 = v5;
    v225 = (__m128i *)&v5[122];
    v30 = v5[122].m128i_i8[0];
    v5[122].m128i_i8[0] = 1;
    v226 = v30;
    v230 = sub_14789E0;
    v31 = v5->m128i_i64[1];
    v228 = 1376276;
    v229 = 63;
    v32 = *(_QWORD *)(v31 + 56);
    v231 = 0;
    v232 = 0;
    if ( v29 >= *(_DWORD *)(v32 + 144) )
      sub_1568800(&v225);
    else
      LODWORD(v232) = sub_14789E0((__int64)v5);
    if ( v5[2].m128i_i16[0] != 5 )
    {
      sub_1564840(&v252, v5, &v5[1], 14);
      v128 = (unsigned __int8 *)v252;
      if ( !v252 )
      {
        v189 = v253;
        v190 = *(_DWORD *)(v253 + 14976);
        if ( v190 )
        {
          v201 = (unsigned int)(v190 - 1);
          *(_DWORD *)(v253 + 14976) = v201;
          v128 = *(unsigned __int8 **)(v189 + 8 * v201 + 14848);
          v202 = *((unsigned int *)v128 + 134);
          *v128 = 0;
          v203 = *((_QWORD *)v128 + 66);
          *((_DWORD *)v128 + 106) = 0;
          v204 = v203 + (v202 << 6);
          while ( v203 != v204 )
          {
            while ( 1 )
            {
              v204 -= 64;
              v205 = *(void **)(v204 + 24);
              if ( v205 == (void *)(v204 + 40) )
                break;
              operator delete(v205);
              if ( v203 == v204 )
                goto LABEL_255;
            }
          }
LABEL_255:
          *((_DWORD *)v128 + 134) = 0;
        }
        else
        {
          v128 = (unsigned __int8 *)operator new(0x3A0u);
          *v128 = 0;
          *((_QWORD *)v128 + 12) = v128 + 112;
          *((_QWORD *)v128 + 16) = v128 + 144;
          *((_QWORD *)v128 + 20) = v128 + 176;
          *((_QWORD *)v128 + 24) = v128 + 208;
          *((_QWORD *)v128 + 28) = v128 + 240;
          *((_QWORD *)v128 + 32) = v128 + 272;
          *((_QWORD *)v128 + 36) = v128 + 304;
          *((_QWORD *)v128 + 40) = v128 + 336;
          *((_QWORD *)v128 + 44) = v128 + 368;
          *((_QWORD *)v128 + 48) = v128 + 400;
          *((_QWORD *)v128 + 52) = v128 + 432;
          v128[112] = 0;
          *((_QWORD *)v128 + 13) = 0;
          *((_QWORD *)v128 + 17) = 0;
          v128[144] = 0;
          *((_QWORD *)v128 + 21) = 0;
          v128[176] = 0;
          *((_QWORD *)v128 + 25) = 0;
          v128[208] = 0;
          *((_QWORD *)v128 + 29) = 0;
          v128[240] = 0;
          *((_QWORD *)v128 + 33) = 0;
          v128[272] = 0;
          *((_QWORD *)v128 + 37) = 0;
          v128[304] = 0;
          *((_QWORD *)v128 + 41) = 0;
          v128[336] = 0;
          *((_QWORD *)v128 + 45) = 0;
          v128[368] = 0;
          *((_QWORD *)v128 + 49) = 0;
          v128[400] = 0;
          *((_QWORD *)v128 + 53) = 0x800000000LL;
          *((_QWORD *)v128 + 66) = v128 + 544;
          *((_QWORD *)v128 + 67) = 0x600000000LL;
        }
        v252 = v128;
      }
      v128[*v128 + 1] = 4;
      v129 = v252;
      v130 = *(unsigned __int8 *)v252;
      *(_BYTE *)v252 = v130 + 1;
      v129[v130 + 2] = 5;
      if ( (_BYTE)v257 )
      {
        sub_FC7790(v254, (__int64 *)&v252, SHIBYTE(v257));
        v254 = 0;
        v257 = 0;
      }
      if ( v255 != v256 )
        operator delete(v255);
      v131 = (void **)v252;
      if ( v252 )
      {
        v132 = v253;
        if ( v253 )
        {
          if ( (unsigned __int64)v252 < v253 || (unsigned __int64)v252 > v253 + 14848 )
          {
            v133 = *((_QWORD *)v252 + 66);
            v134 = v133 + ((unsigned __int64)*((unsigned int *)v252 + 134) << 6);
            while ( v133 != v134 )
            {
              while ( 1 )
              {
                v134 -= 64;
                v135 = *(void **)(v134 + 24);
                if ( v135 == (void *)(v134 + 40) )
                  break;
                operator delete(v135);
                if ( v133 == v134 )
                  goto LABEL_164;
              }
            }
LABEL_164:
            v136 = (void **)v131[66];
            if ( v136 != v131 + 68 )
              free(v136);
            v137 = (void **)v131[52];
            if ( v137 != v131 + 54 )
              free(v137);
            v138 = v131 + 48;
            v139 = v131 + 8;
            do
            {
              while ( *v138 != v138 + 2 )
              {
                operator delete(*v138);
                v138 -= 4;
                if ( v139 == v138 )
                  goto LABEL_171;
              }
              v138 -= 4;
            }
            while ( v139 != v138 );
LABEL_171:
            operator delete(v131, 0x3A0u);
          }
          else
          {
            v160 = *(unsigned int *)(v253 + 14976);
            *(_DWORD *)(v253 + 14976) = v160 + 1;
            *(_QWORD *)(v132 + 8 * v160 + 14848) = v131;
          }
        }
      }
      LOWORD(v252) = 23;
      sub_15680D0(v5, &v252, 1, 1);
      v225->m128i_i8[0] = v226;
      return 1;
    }
    v33 = (__int64 *)v5->m128i_i64[1];
    v34 = v5[1].m128i_i64[1];
    v5[2].m128i_i32[2] = v5[1].m128i_i32[0];
    sub_14634E0(v33, v5[1].m128i_i32);
    v35 = *((unsigned int *)a2 + 2);
    if ( v35 + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
    {
      sub_2237220(a2, a2 + 2, v35 + 1, 8);
      v35 = *((unsigned int *)a2 + 2);
    }
    *(_QWORD *)(*a2 + 8 * v35) = v34;
    v36 = v227;
    v37 = HIWORD(v228);
    ++*((_DWORD *)a2 + 2);
    v38 = v36[2].m128i_i16[0];
    if ( v37 != v38 )
    {
      if ( v38 != 63
        || ((v39 = v36->m128i_i64[1], v40 = *(_QWORD *)(v39 + 2944), v40 >= *(unsigned int *)(v39 + 2912))
          ? (v41 = sub_14180A0(v39, 1u), v37 = HIWORD(v228))
          : (v41 = *(_QWORD *)(v39 + 2904) + 24 * v40),
            *(_WORD *)(v41 + 16) != v37) )
      {
        sub_15688B0(&v225);
        goto LABEL_35;
      }
      v81 = v227;
      v82 = (__int64 *)v227->m128i_i64[1];
      v83 = v227[1].m128i_i32;
      v227[2].m128i_i32[2] = v227[1].m128i_i32[0];
      sub_14634E0(v82, v83);
      v84 = v81[2].m128i_u32[2];
      v85 = (__int64 *)&v247;
      LODWORD(v211) = v84;
      sub_1564820(&v247, v227, v84, 1917);
      v86 = (unsigned __int8 *)v247;
      v87 = (int)v211;
      v88 = HIWORD(v228);
      if ( !v247 )
      {
        v155 = v248;
        v156 = *(_DWORD *)(v248 + 14976);
        if ( v156 )
        {
          v179 = (unsigned int)(v156 - 1);
          *(_DWORD *)(v248 + 14976) = v179;
          v86 = *(unsigned __int8 **)(v155 + 8 * v179 + 14848);
          v180 = *((unsigned int *)v86 + 134);
          *v86 = 0;
          v181 = *((_QWORD *)v86 + 66);
          *((_DWORD *)v86 + 106) = 0;
          v182 = v181 + (v180 << 6);
          if ( v181 != v182 )
          {
            v211 = (void **)a2;
            v183 = v182;
            v212 = (__int64)a3;
            v213 = a4;
            v184 = v87;
            v214 = (__int64 *)&v247;
            v185 = v88;
            do
            {
              while ( 1 )
              {
                v183 -= 64;
                v186 = *(void **)(v183 + 24);
                if ( v186 == (void *)(v183 + 40) )
                  break;
                operator delete(v186);
                if ( v181 == v183 )
                  goto LABEL_230;
              }
            }
            while ( v181 != v183 );
LABEL_230:
            v87 = v184;
            v88 = v185;
            a2 = (__int64 *)v211;
            a3 = (__int64 *)v212;
            a4 = v213;
            v85 = v214;
          }
          *((_DWORD *)v86 + 134) = 0;
        }
        else
        {
          v212 = HIWORD(v228);
          v86 = (unsigned __int8 *)operator new(0x3A0u);
          *v86 = 0;
          *((_QWORD *)v86 + 12) = v86 + 112;
          *((_QWORD *)v86 + 16) = v86 + 144;
          *((_QWORD *)v86 + 20) = v86 + 176;
          *((_QWORD *)v86 + 24) = v86 + 208;
          *((_QWORD *)v86 + 28) = v86 + 240;
          *((_QWORD *)v86 + 32) = v86 + 272;
          *((_QWORD *)v86 + 36) = v86 + 304;
          *((_QWORD *)v86 + 40) = v86 + 336;
          *((_QWORD *)v86 + 44) = v86 + 368;
          *((_QWORD *)v86 + 48) = v86 + 400;
          *((_QWORD *)v86 + 52) = v86 + 432;
          *((_QWORD *)v86 + 13) = 0;
          v86[112] = 0;
          *((_QWORD *)v86 + 17) = 0;
          v86[144] = 0;
          *((_QWORD *)v86 + 21) = 0;
          v86[176] = 0;
          *((_QWORD *)v86 + 25) = 0;
          v86[208] = 0;
          *((_QWORD *)v86 + 29) = 0;
          v86[240] = 0;
          *((_QWORD *)v86 + 33) = 0;
          v86[272] = 0;
          *((_QWORD *)v86 + 37) = 0;
          v86[304] = 0;
          *((_QWORD *)v86 + 41) = 0;
          v86[336] = 0;
          *((_QWORD *)v86 + 45) = 0;
          v86[368] = 0;
          *((_QWORD *)v86 + 49) = 0;
          v86[400] = 0;
          *((_QWORD *)v86 + 53) = 0x800000000LL;
          v87 = (int)v211;
          *((_QWORD *)v86 + 66) = v86 + 544;
          v88 = v212;
          *((_QWORD *)v86 + 67) = 0x600000000LL;
        }
        v247 = v86;
      }
      v86[*v86 + 1] = 4;
      v89 = v247;
      v90 = *(unsigned __int8 *)v247;
      *(_BYTE *)v247 = v90 + 1;
      v89[v90 + 2] = v88;
      v235 = 0;
      v236 = 0;
      v237 = v209;
      v238 = 0;
      v239[0] = 0;
      v239[16] = 0;
      v233[0] = v87;
      v233[1] = v87;
      v234 = 1;
      if ( !v87 )
        goto LABEL_92;
      v91 = (__int64 *)v247;
      if ( v247 )
      {
        v92 = *((unsigned int *)v247 + 134);
        v93 = v92 + 1;
        v94 = v92 << 6;
      }
      else
      {
        v187 = v248;
        v188 = *(_DWORD *)(v248 + 14976);
        if ( v188 )
        {
          v196 = (unsigned int)(v188 - 1);
          *(_DWORD *)(v248 + 14976) = v196;
          v91 = *(__int64 **)(v187 + 8 * v196 + 14848);
          v197 = *((unsigned int *)v91 + 134);
          *(_BYTE *)v91 = 0;
          v198 = v91[66];
          *((_DWORD *)v91 + 106) = 0;
          v199 = v198 + (v197 << 6);
          while ( v198 != v199 )
          {
            while ( 1 )
            {
              v199 -= 64;
              v200 = *(void **)(v199 + 24);
              if ( v200 == (void *)(v199 + 40) )
                break;
              v212 = v198;
              v211 = (void **)v91;
              operator delete(v200);
              v198 = v212;
              v91 = (__int64 *)v211;
              if ( v212 == v199 )
                goto LABEL_250;
            }
          }
LABEL_250:
          *((_DWORD *)v91 + 134) = 0;
        }
        else
        {
          v91 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v91 = 0;
          v91[12] = (__int64)(v91 + 14);
          v91[16] = (__int64)(v91 + 18);
          v91[20] = (__int64)(v91 + 22);
          v91[24] = (__int64)(v91 + 26);
          v91[28] = (__int64)(v91 + 30);
          v91[32] = (__int64)(v91 + 34);
          v91[36] = (__int64)(v91 + 38);
          v91[40] = (__int64)(v91 + 42);
          v91[44] = (__int64)(v91 + 46);
          v91[48] = (__int64)(v91 + 50);
          v91[52] = (__int64)(v91 + 54);
          *((_BYTE *)v91 + 112) = 0;
          v91[13] = 0;
          v91[17] = 0;
          *((_BYTE *)v91 + 144) = 0;
          v91[21] = 0;
          *((_BYTE *)v91 + 176) = 0;
          v91[25] = 0;
          *((_BYTE *)v91 + 208) = 0;
          v91[29] = 0;
          *((_BYTE *)v91 + 240) = 0;
          v91[33] = 0;
          *((_BYTE *)v91 + 272) = 0;
          v91[37] = 0;
          *((_BYTE *)v91 + 304) = 0;
          v91[41] = 0;
          *((_BYTE *)v91 + 336) = 0;
          v91[45] = 0;
          *((_BYTE *)v91 + 368) = 0;
          v91[49] = 0;
          *((_BYTE *)v91 + 400) = 0;
          v91[53] = 0x800000000LL;
          v91[66] = (__int64)(v91 + 68);
          v91[67] = 0x600000000LL;
        }
        v247 = v91;
        v94 = 0;
        v93 = 1;
      }
      v95 = v91[66];
      v96 = v210;
      v97 = v95 + v94;
      if ( *((unsigned int *)v91 + 135) < v93 )
      {
        if ( v95 > (unsigned __int64)v210 || v97 <= (unsigned __int64)v210 )
        {
          v213 = v91;
          v212 = (__int64)(v91 + 68);
          v211 = (void **)(v91 + 66);
          v206 = sub_2237400(v91 + 66, v91 + 68, v93, 64, &v252);
          sub_9EF810((__int64 *)v211, v206);
          v91 = v213;
          v207 = (int)v252;
          v208 = (void *)v213[66];
          if ( v208 == (void *)v212 )
          {
            v213[66] = v206;
          }
          else
          {
            v212 = (__int64)v252;
            v211 = (void **)v213;
            free(v208);
            v91 = (__int64 *)v211;
            v207 = v212;
            v211[66] = (void *)v206;
          }
          *((_DWORD *)v91 + 135) = v207;
          v96 = v210;
          v97 = ((unsigned __int64)*((unsigned int *)v91 + 134) << 6) + v206;
        }
        else
        {
          v215 = v91;
          v211 = (void **)((char *)v210 - v95);
          v214 = v91 + 68;
          v213 = v91 + 66;
          v212 = sub_2237400(v91 + 66, v91 + 68, v93, 64, &v252);
          sub_9EF810(v213, v212);
          v91 = v215;
          v191 = (int)v252;
          v192 = v212;
          v193 = (__int64 *)v215[66];
          if ( v193 != v214 )
          {
            v213 = v215;
            free(v193);
            v192 = v212;
            v91 = v213;
          }
          *((_DWORD *)v91 + 135) = v191;
          v194 = *((unsigned int *)v91 + 134);
          v91[66] = v192;
          v96 = (__int64 *)((char *)v211 + v192);
          v97 = v192 + (v194 << 6);
        }
      }
      *(_QWORD *)v97 = *v96;
      *(_DWORD *)(v97 + 8) = *((_DWORD *)v96 + 2);
      *(_QWORD *)(v97 + 12) = *(__int64 *)((char *)v96 + 12);
      *(_DWORD *)(v97 + 20) = *((_DWORD *)v96 + 5);
      v98 = (void *)(v97 + 40);
      *(_QWORD *)(v97 + 24) = v97 + 40;
      v99 = (__int64 *)v96[3];
      v100 = (__int64 *)v96[4];
      if ( (__int64 *)((char *)v99 + (_QWORD)v100) && !v99 )
        goto LABEL_261;
      if ( (unsigned __int64)v100 > 0xF )
      {
        if ( (__int64)v100 < 0 )
LABEL_262:
          std::__throw_length_error("basic_string::_M_create");
        v214 = v96;
        v213 = v99;
        v212 = (__int64)v91;
        v211 = (void **)v100;
        v98 = (void *)operator new((unsigned __int64)v100 + 1);
        v100 = (__int64 *)v211;
        v91 = (__int64 *)v212;
        v99 = v213;
        v96 = v214;
        *(_QWORD *)(v97 + 24) = v98;
        *(_QWORD *)(v97 + 40) = v211;
      }
      else
      {
        if ( v100 == (__int64 *)((char *)&dword_0 + 1) )
        {
          *(_BYTE *)(v97 + 40) = *(_BYTE *)v99;
LABEL_90:
          *(_QWORD *)(v97 + 32) = v100;
          *((_BYTE *)v100 + (_QWORD)v98) = 0;
          v101 = v237;
          *(_BYTE *)(v97 + 56) = *((_BYTE *)v96 + 56);
          ++*((_DWORD *)v91 + 134);
          if ( v101 != v209 )
            operator delete(v101);
LABEL_92:
          if ( (_BYTE)v251 )
          {
            sub_FC7790(v249, v85, SHIBYTE(v251));
            v249 = 0;
            v251 = 0;
          }
          if ( v250 != v85 + 6 )
            operator delete(v250);
          v102 = (__int64 *)v247;
          if ( v247 )
          {
            v103 = v248;
            if ( v248 )
            {
              if ( (unsigned __int64)v247 < v248 || (unsigned __int64)v247 > v248 + 14848 )
              {
                v104 = *((_QWORD *)v247 + 66);
                v105 = v104 + ((unsigned __int64)*((unsigned int *)v247 + 134) << 6);
                if ( v104 != v105 )
                {
                  v211 = (void **)a4;
                  v106 = a3;
                  v107 = a2;
                  v108 = v104;
                  do
                  {
                    while ( 1 )
                    {
                      v105 -= 64;
                      v109 = *(void **)(v105 + 24);
                      if ( v109 == (void *)(v105 + 40) )
                        break;
                      operator delete(v109);
                      if ( v108 == v105 )
                        goto LABEL_103;
                    }
                  }
                  while ( v108 != v105 );
LABEL_103:
                  a2 = v107;
                  a3 = v106;
                  a4 = (__int64 *)v211;
                }
                v110 = (__int64 *)v102[66];
                if ( v110 != v102 + 68 )
                  free(v110);
                v111 = (__int64 *)v102[52];
                if ( v111 != v102 + 54 )
                  free(v111);
                v112 = (void **)(v102 + 48);
                v211 = (void **)(v102 + 8);
                do
                {
                  while ( *v112 != v112 + 2 )
                  {
                    operator delete(*v112);
                    v112 -= 4;
                    if ( v112 == v211 )
                      goto LABEL_111;
                  }
                  v112 -= 4;
                }
                while ( v211 != v112 );
LABEL_111:
                operator delete(v102, 0x3A0u);
              }
              else
              {
                v141 = *(unsigned int *)(v248 + 14976);
                *(_DWORD *)(v248 + 14976) = v141 + 1;
                *(_QWORD *)(v103 + 8 * v141 + 14848) = v102;
              }
            }
          }
          v79 = v230;
          v80 = (__int64 *)((char *)v227->m128i_i64 + v231);
          if ( ((unsigned __int8)v230 & 1) == 0 )
            goto LABEL_78;
LABEL_77:
          v79 = *(__int64 (__fastcall **)(_QWORD))((char *)v79 + *v80 - 1);
          goto LABEL_78;
        }
        if ( !v100 )
          goto LABEL_90;
      }
      v213 = v96;
      v212 = (__int64)v91;
      v211 = (void **)v100;
      memcpy(v98, v99, (size_t)v100);
      v98 = *(void **)(v97 + 24);
      v96 = v213;
      v91 = (__int64 *)v212;
      v100 = (__int64 *)v211;
      goto LABEL_90;
    }
    v79 = v230;
    v80 = (__int64 *)((char *)v36->m128i_i64 + v231);
    if ( ((unsigned __int8)v230 & 1) != 0 )
      goto LABEL_77;
LABEL_78:
    HIDWORD(v232) = v79(v80);
LABEL_35:
    v225->m128i_i8[0] = v226;
  }
  sub_1564840(&v252, v5, &v5[1], 1625);
  v113 = (unsigned __int8 *)v252;
  if ( !v252 )
  {
    v153 = v253;
    v154 = *(_DWORD *)(v253 + 14976);
    if ( v154 )
    {
      v161 = (unsigned int)(v154 - 1);
      *(_DWORD *)(v253 + 14976) = v161;
      v113 = *(unsigned __int8 **)(v153 + 8 * v161 + 14848);
      v162 = *((unsigned int *)v113 + 134);
      *v113 = 0;
      v163 = *((_QWORD *)v113 + 66);
      *((_DWORD *)v113 + 106) = 0;
      v164 = v163 + (v162 << 6);
      while ( v163 != v164 )
      {
        while ( 1 )
        {
          v164 -= 64;
          v165 = *(void **)(v164 + 24);
          if ( v165 == (void *)(v164 + 40) )
            break;
          operator delete(v165);
          if ( v163 == v164 )
            goto LABEL_215;
        }
      }
LABEL_215:
      *((_DWORD *)v113 + 134) = 0;
    }
    else
    {
      v113 = (unsigned __int8 *)operator new(0x3A0u);
      *v113 = 0;
      *((_QWORD *)v113 + 12) = v113 + 112;
      *((_QWORD *)v113 + 16) = v113 + 144;
      *((_QWORD *)v113 + 20) = v113 + 176;
      *((_QWORD *)v113 + 24) = v113 + 208;
      *((_QWORD *)v113 + 28) = v113 + 240;
      *((_QWORD *)v113 + 32) = v113 + 272;
      *((_QWORD *)v113 + 36) = v113 + 304;
      *((_QWORD *)v113 + 40) = v113 + 336;
      *((_QWORD *)v113 + 44) = v113 + 368;
      *((_QWORD *)v113 + 48) = v113 + 400;
      *((_QWORD *)v113 + 52) = v113 + 432;
      *((_QWORD *)v113 + 13) = 0;
      v113[112] = 0;
      *((_QWORD *)v113 + 17) = 0;
      v113[144] = 0;
      *((_QWORD *)v113 + 21) = 0;
      v113[176] = 0;
      *((_QWORD *)v113 + 25) = 0;
      v113[208] = 0;
      *((_QWORD *)v113 + 29) = 0;
      v113[240] = 0;
      *((_QWORD *)v113 + 33) = 0;
      v113[272] = 0;
      *((_QWORD *)v113 + 37) = 0;
      v113[304] = 0;
      *((_QWORD *)v113 + 41) = 0;
      v113[336] = 0;
      *((_QWORD *)v113 + 45) = 0;
      v113[368] = 0;
      *((_QWORD *)v113 + 49) = 0;
      v113[400] = 0;
      *((_QWORD *)v113 + 53) = 0x800000000LL;
      *((_QWORD *)v113 + 66) = v113 + 544;
      *((_QWORD *)v113 + 67) = 0x600000000LL;
    }
    v252 = v113;
  }
  v113[*v113 + 1] = 1;
  v114 = v252;
  v115 = *(unsigned __int8 *)v252;
  *(_BYTE *)v252 = v115 + 1;
  v114[v115 + 2] = "asm operand";
  if ( (_BYTE)v257 )
  {
    sub_FC7790(v254, (__int64 *)&v252, SHIBYTE(v257));
    v254 = 0;
    v257 = 0;
  }
  if ( v255 != v256 )
    operator delete(v255);
  v116 = (void **)v252;
  if ( v252 )
  {
    v117 = v253;
    if ( v253 )
    {
      if ( (unsigned __int64)v252 < v253 || (unsigned __int64)v252 > v253 + 14848 )
      {
        v118 = *((_QWORD *)v252 + 66);
        v119 = v118 + ((unsigned __int64)*((unsigned int *)v252 + 134) << 6);
        while ( v118 != v119 )
        {
          while ( 1 )
          {
            v119 -= 64;
            v120 = *(void **)(v119 + 24);
            if ( v120 == (void *)(v119 + 40) )
              break;
            operator delete(v120);
            if ( v118 == v119 )
              goto LABEL_131;
          }
        }
LABEL_131:
        v121 = (void **)v116[66];
        if ( v121 != v116 + 68 )
          free(v121);
        v122 = (void **)v116[52];
        if ( v122 != v116 + 54 )
          free(v122);
        v123 = v116 + 48;
        v124 = v116 + 8;
        do
        {
          while ( *v123 != v123 + 2 )
          {
            operator delete(*v123);
            v123 -= 4;
            if ( v123 == v124 )
              goto LABEL_138;
          }
          v123 -= 4;
        }
        while ( v123 != v124 );
LABEL_138:
        operator delete(v116, 0x3A0u);
      }
      else
      {
        v140 = *(unsigned int *)(v253 + 14976);
        *(_DWORD *)(v253 + 14976) = v140 + 1;
        *(_QWORD *)(v117 + 8 * v140 + 14848) = v116;
      }
    }
  }
LABEL_139:
  LOWORD(v252) = 23;
  sub_15680D0(v5, &v252, 1, 1);
  return 1;
}
