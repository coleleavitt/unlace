void __fastcall sub_10CE470(__int64 a1, __int64 a2, int a3, char a4)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r9
  size_t v16; // rbx
  __int64 v17; // rbp
  char v18; // cl
  char v19; // al
  char v20; // r10
  unsigned int v21; // r8d
  __int64 *v22; // rax
  const char *v23; // rbp
  __int64 v24; // rax
  __int64 *v25; // rbp
  __int64 *v26; // rbx
  bool v27; // zf
  char *v28; // r14
  size_t v29; // rax
  size_t v30; // r15
  __int64 v31; // r12
  char v32; // r14
  unsigned int v33; // r8d
  _BYTE *v34; // rbp
  size_t v35; // rbx
  char *v36; // r14
  size_t v37; // rax
  unsigned __int8 *v38; // rbp
  _BYTE *v39; // r9
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __m128i *v42; // rax
  size_t v43; // rcx
  unsigned __int8 *v44; // rbp
  _BYTE *v45; // rsi
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rax
  void **v51; // rcx
  _BYTE *v52; // rdi
  __int64 v53; // rax
  void **v54; // rbx
  unsigned __int64 v55; // rax
  void **v56; // r14
  void **v57; // rbp
  void **v58; // rdi
  void **v59; // rdi
  void **v60; // r14
  void **v61; // rbp
  size_t v62; // rbx
  _BYTE *v63; // rbp
  _BYTE *v64; // r15
  signed __int64 v65; // r13
  unsigned __int8 *v66; // r12
  _QWORD *v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  void **v72; // r13
  _BYTE *v73; // rdi
  __int64 v74; // rax
  void **v75; // r12
  unsigned __int64 v76; // rax
  void **v77; // r13
  void **v78; // rbp
  void **v79; // rdi
  void **v80; // rdi
  void **v81; // rbp
  void **v82; // r13
  unsigned __int8 *v83; // rbx
  _BYTE *v84; // r9
  void **v85; // rdx
  __int64 v86; // rax
  __m128i *v87; // rax
  size_t v88; // rcx
  unsigned __int8 *v89; // r14
  _BYTE *v90; // rsi
  __int64 v91; // rcx
  _QWORD *v92; // rax
  void **v93; // rdx
  __int64 v94; // r8
  __int64 v95; // rax
  void **v96; // rcx
  unsigned __int8 *v97; // rdi
  void *v98; // rax
  void **v99; // r14
  void **v100; // rbp
  void **v101; // rdi
  void **v102; // rdi
  void **v103; // r14
  void **v104; // rbp
  void *v105; // rdi
  size_t v106; // rdx
  __int64 v107; // rdx
  unsigned __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdi
  __int64 v113; // rbx
  unsigned __int8 *v114; // r12
  _BYTE *v115; // rbp
  void *v116; // rdi
  unsigned __int64 v117; // rdx
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r12
  __int64 v124; // rbx
  void *v125; // rdi
  size_t v126; // rdx
  unsigned __int64 v127; // rdx
  int v128; // eax
  unsigned __int64 v129; // rdx
  int v130; // eax
  size_t v131; // rdx
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rax
  __int64 v137; // r14
  __int64 v138; // r13
  __int64 v139; // rbx
  __int64 v140; // rbp
  void *v141; // rdi
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  __int64 v146; // rbx
  _BYTE *v147; // r12
  __int64 v148; // rbp
  void *v149; // rdi
  unsigned __int64 v150; // rdx
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // r14
  __int64 v154; // rdx
  __int64 v155; // r14
  void *v156; // rdi
  __int64 v158; // [rsp+0h] [rbp-2C8h]
  int v159; // [rsp+Ch] [rbp-2BCh]
  _DWORD *v160; // [rsp+10h] [rbp-2B8h]
  char v161; // [rsp+20h] [rbp-2A8h]
  _QWORD *v162; // [rsp+20h] [rbp-2A8h]
  _BYTE *v163; // [rsp+20h] [rbp-2A8h]
  _BYTE *v164; // [rsp+20h] [rbp-2A8h]
  __int64 v165; // [rsp+20h] [rbp-2A8h]
  __int64 v166; // [rsp+20h] [rbp-2A8h]
  void **v167; // [rsp+20h] [rbp-2A8h]
  __int64 v168; // [rsp+20h] [rbp-2A8h]
  __int64 v169; // [rsp+20h] [rbp-2A8h]
  __int64 v170; // [rsp+20h] [rbp-2A8h]
  __int64 v171; // [rsp+20h] [rbp-2A8h]
  void **v172; // [rsp+20h] [rbp-2A8h]
  unsigned __int8 *v173; // [rsp+20h] [rbp-2A8h]
  unsigned __int8 *v174; // [rsp+20h] [rbp-2A8h]
  void *v178; // [rsp+40h] [rbp-288h]
  _QWORD *v179; // [rsp+40h] [rbp-288h]
  _QWORD *src; // [rsp+48h] [rbp-280h]
  _QWORD *srca; // [rsp+48h] [rbp-280h]
  void *srcb; // [rsp+48h] [rbp-280h]
  __int64 *v183[2]; // [rsp+60h] [rbp-268h] BYREF
  char v184; // [rsp+70h] [rbp-258h]
  void *v185[2]; // [rsp+80h] [rbp-248h] BYREF
  _BYTE v186[16]; // [rsp+90h] [rbp-238h] BYREF
  void *v187; // [rsp+A0h] [rbp-228h]
  size_t n; // [rsp+A8h] [rbp-220h]
  __m128i v189; // [rsp+B0h] [rbp-218h] BYREF
  void *v190[2]; // [rsp+C0h] [rbp-208h] BYREF
  _BYTE v191[16]; // [rsp+D0h] [rbp-1F8h] BYREF
  void *v192; // [rsp+E0h] [rbp-1E8h]
  size_t v193; // [rsp+E8h] [rbp-1E0h]
  __m128i v194; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v195; // [rsp+100h] [rbp-1C8h]
  size_t v196; // [rsp+108h] [rbp-1C0h]
  _QWORD v197[2]; // [rsp+110h] [rbp-1B8h] BYREF
  void *v198; // [rsp+120h] [rbp-1A8h]
  size_t v199; // [rsp+128h] [rbp-1A0h]
  _QWORD v200[2]; // [rsp+130h] [rbp-198h] BYREF
  void *v201; // [rsp+140h] [rbp-188h]
  size_t v202; // [rsp+148h] [rbp-180h]
  _QWORD v203[2]; // [rsp+150h] [rbp-178h] BYREF
  void *ptr[2]; // [rsp+160h] [rbp-168h] BYREF
  _BYTE v205[48]; // [rsp+170h] [rbp-158h] BYREF
  void *v206; // [rsp+1A0h] [rbp-128h] BYREF
  unsigned __int64 v207; // [rsp+1A8h] [rbp-120h]
  __int64 v208; // [rsp+1B0h] [rbp-118h]
  void *v209; // [rsp+1C0h] [rbp-108h]
  __int64 v210; // [rsp+1D0h] [rbp-F8h] BYREF
  __int16 v211; // [rsp+1E0h] [rbp-E8h]
  void **v212; // [rsp+1F0h] [rbp-D8h] BYREF
  unsigned __int64 v213; // [rsp+1F8h] [rbp-D0h]
  __int64 v214; // [rsp+200h] [rbp-C8h]
  void *v215; // [rsp+210h] [rbp-B8h]
  __int64 v216; // [rsp+220h] [rbp-A8h] BYREF
  __int16 v217; // [rsp+230h] [rbp-98h]
  void *v218; // [rsp+240h] [rbp-88h] BYREF
  unsigned __int64 v219; // [rsp+248h] [rbp-80h]
  __int64 v220; // [rsp+250h] [rbp-78h]
  void *v221; // [rsp+260h] [rbp-68h]
  __int64 v222; // [rsp+270h] [rbp-58h] BYREF
  __int16 v223; // [rsp+280h] [rbp-48h]

  v4 = (_QWORD *)a2;
  v5 = *(_QWORD *)(a1 + 152);
  *(_BYTE *)(v5 + 24) = *(_BYTE *)a2 & 1 | *(_BYTE *)(v5 + 24) & 0xEE | 0x10;
  *(_DWORD *)(a1 + 12) = (*(_BYTE *)(a2 + 40) & 8) != 0;
  *(_BYTE *)(a1 + 7) = (*(_BYTE *)(a2 + 2) & 0x20) != 0;
  *(_BYTE *)(a1 + 8) = (*(_BYTE *)(a2 + 2) & 0x40) != 0;
  *(_BYTE *)(a1 + 9) = (*(_BYTE *)(a2 + 2) & 4) != 0;
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 )
    *(_DWORD *)(a1 + 20) = v6;
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 )
    *(_DWORD *)(a1 + 24) = v7;
  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
    *(_DWORD *)(a1 + 28) = v8;
  if ( (*(_BYTE *)a2 & 8) != 0 )
    *(_BYTE *)(v5 + 25) = 4;
  else
    *(_BYTE *)(v5 + 25) = (*(_BYTE *)a2 & 4) == 0 ? 1 : 3;
  ptr[0] = v205;
  ptr[1] = (void *)0xA00000000LL;
  v9 = *(_DWORD **)(a1 + 32);
  v160 = v9;
  if ( v9 )
    ++*v9;
  v159 = 0;
  do
  {
    v10 = (__int64 *)v4[18];
    v11 = (__int64)(v4[19] - (_QWORD)v10) >> 5;
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      v13 = v10[1];
      v14 = 32LL * (unsigned int)(v11 - 1);
      v15 = *v10;
      if ( v13 == 8 )
      {
LABEL_14:
        v16 = 8;
        if ( *(_QWORD *)v15 == 0x303D74616D726F66LL )
        {
          v16 = 9;
          v23 = "no-format";
          goto LABEL_63;
        }
        if ( *(_WORD *)v15 == 28526 )
          goto LABEL_28;
LABEL_16:
        v17 = v15;
        v18 = 1;
        v19 = 0;
        v20 = 1;
        v21 = 3;
        goto LABEL_17;
      }
      while ( 1 )
      {
        v16 = v13;
        if ( v13 <= 2 || *(_WORD *)v15 != 28526 )
          goto LABEL_16;
LABEL_28:
        v23 = (const char *)v15;
        if ( *(_BYTE *)(v15 + 2) != 45 )
          goto LABEL_16;
LABEL_63:
        v16 -= 3LL;
        v17 = (__int64)(v23 + 3);
        v18 = 0;
        v19 = 1;
        v20 = 0;
        v21 = 1;
LABEL_17:
        if ( v16 == 14 )
        {
          if ( *(_QWORD *)v17 != 0x682D6D6574737973LL
            || *(_DWORD *)(v17 + 8) != 1701077349
            || *(_WORD *)(v17 + 12) != 29554 )
          {
            goto LABEL_19;
          }
          if ( !v159 )
            *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) = *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) & 0xEF | (16 * v19);
          goto LABEL_24;
        }
        if ( v16 != 10 )
          break;
        if ( *(_QWORD *)v17 != 0x6968747972657665LL || *(_WORD *)(v17 + 8) != 26478 )
          goto LABEL_19;
        if ( v159 )
          goto LABEL_24;
        v24 = *(_QWORD *)(a1 + 152);
        if ( !v20 )
        {
          *(_BYTE *)(v24 + 24) &= ~2u;
          sub_FD0770(a1, 0, 1u, 0);
          goto LABEL_24;
        }
        *(_BYTE *)(v24 + 24) |= 2u;
        if ( v14 == v12 )
          goto LABEL_36;
LABEL_25:
        v12 += 32;
        v22 = (__int64 *)(v12 + v4[18]);
        v13 = v22[1];
        v15 = *v22;
        if ( v13 == 8 )
          goto LABEL_14;
      }
      if ( v16 <= 4 )
      {
        if ( !v159 )
          goto LABEL_61;
        goto LABEL_23;
      }
LABEL_19:
      if ( *(_DWORD *)v17 == 1869771365 && *(_BYTE *)(v17 + 4) == 114 )
      {
        if ( v16 <= 5 )
        {
LABEL_77:
          if ( !v159 )
            *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) = (4 * v20) | *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) & 0xFB;
          goto LABEL_24;
        }
        if ( *(_BYTE *)(v17 + 5) == 61 )
        {
          v34 = (_BYTE *)(v17 + 6);
          v35 = v16 - 6;
          if ( !v35 )
            goto LABEL_77;
LABEL_91:
          if ( v159 )
          {
            if ( sub_FD40E0((__int64)v160, 0, v34, v35, (__int64)ptr) )
              sub_10CD360(a1, 0, "-Werror=", 8, v34, v35);
          }
          else
          {
            sub_FD0A00(a1, (__int64)v34, v35, v18);
          }
LABEL_24:
          if ( v14 == v12 )
            goto LABEL_36;
          goto LABEL_25;
        }
        if ( v16 == 35
          && !(*(_QWORD *)(v17 + 5) ^ 0x6963696C706D692DLL | *(_QWORD *)(v17 + 13) ^ 0x6974636E75662D74LL)
          && *(_QWORD *)(v17 + 21) == 0x616C6365642D6E6FLL
          && *(_DWORD *)(v17 + 29) == 1769234802
          && *(_WORD *)(v17 + 33) == 28271 )
        {
          v34 = (_BYTE *)(v17 + 6);
          v35 = 29;
          goto LABEL_91;
        }
        v163 = (_BYTE *)v15;
        if ( !v159 )
          goto LABEL_24;
        sub_FC70B0((__int64)&v206, a1, 0, 854);
        v38 = (unsigned __int8 *)v206;
        v39 = v163;
        if ( !v206 )
        {
          v108 = v207;
          v109 = *(_DWORD *)(v207 + 14976);
          if ( v109 )
          {
            v110 = (unsigned int)(v109 - 1);
            *(_DWORD *)(v207 + 14976) = v110;
            v38 = *(unsigned __int8 **)(v108 + 8 * v110 + 14848);
            v111 = *((unsigned int *)v38 + 134);
            *v38 = 0;
            v112 = *((_QWORD *)v38 + 66);
            *((_DWORD *)v38 + 106) = 0;
            v111 <<= 6;
            v113 = v112 + v111;
            v168 = v112;
            if ( v112 != v112 + v111 )
            {
              src = v4;
              v114 = v38;
              v115 = v39;
              do
              {
                while ( 1 )
                {
                  v113 -= 64;
                  v116 = *(void **)(v113 + 24);
                  if ( v116 == (void *)(v113 + 40) )
                    break;
                  operator delete(v116);
                  if ( v168 == v113 )
                    goto LABEL_252;
                }
              }
              while ( v168 != v113 );
LABEL_252:
              v39 = v115;
              v38 = v114;
              v4 = src;
            }
            *((_DWORD *)v38 + 134) = 0;
          }
          else
          {
            v38 = (unsigned __int8 *)operator new(0x3A0u);
            *v38 = 0;
            *((_QWORD *)v38 + 12) = v38 + 112;
            *((_QWORD *)v38 + 16) = v38 + 144;
            *((_QWORD *)v38 + 20) = v38 + 176;
            *((_QWORD *)v38 + 24) = v38 + 208;
            *((_QWORD *)v38 + 28) = v38 + 240;
            *((_QWORD *)v38 + 32) = v38 + 272;
            *((_QWORD *)v38 + 36) = v38 + 304;
            *((_QWORD *)v38 + 40) = v38 + 336;
            *((_QWORD *)v38 + 44) = v38 + 368;
            *((_QWORD *)v38 + 48) = v38 + 400;
            *((_QWORD *)v38 + 52) = v38 + 432;
            *((_QWORD *)v38 + 13) = 0;
            v38[112] = 0;
            *((_QWORD *)v38 + 17) = 0;
            v38[144] = 0;
            *((_QWORD *)v38 + 21) = 0;
            v38[176] = 0;
            *((_QWORD *)v38 + 25) = 0;
            v38[208] = 0;
            *((_QWORD *)v38 + 29) = 0;
            v38[240] = 0;
            *((_QWORD *)v38 + 33) = 0;
            v38[272] = 0;
            *((_QWORD *)v38 + 37) = 0;
            v38[304] = 0;
            *((_QWORD *)v38 + 41) = 0;
            v38[336] = 0;
            *((_QWORD *)v38 + 45) = 0;
            v38[368] = 0;
            *((_QWORD *)v38 + 49) = 0;
            v38[400] = 0;
            *((_QWORD *)v38 + 53) = 0x800000000LL;
            v39 = v163;
            *((_QWORD *)v38 + 66) = v38 + 544;
            *((_QWORD *)v38 + 67) = 0x600000000LL;
          }
          v206 = v38;
        }
        v38[*v38 + 1] = 1;
        v40 = v206;
        v41 = *(unsigned __int8 *)v206;
        *(_BYTE *)v206 = v41 + 1;
        v40[v41 + 2] = "-Werror";
        v185[0] = v186;
        if ( v39 )
        {
          sub_10CD2A0(v185, v39, (__int64)&v39[v13]);
        }
        else
        {
          v185[1] = nullptr;
          v186[0] = 0;
        }
        v42 = (__m128i *)sub_99BDC0(v185, 0, 0, "-W", 2u);
        v187 = &v189;
        if ( (__m128i *)v42->m128i_i64[0] == &v42[1] )
        {
          v189 = _mm_loadu_si128(v42 + 1);
        }
        else
        {
          v187 = (void *)v42->m128i_i64[0];
          v189.m128i_i64[0] = v42[1].m128i_i64[0];
        }
        v43 = v42->m128i_u64[1];
        v44 = (unsigned __int8 *)v206;
        v42[1].m128i_i8[0] = 0;
        n = v43;
        v42->m128i_i64[0] = (__int64)v42[1].m128i_i64;
        v45 = v187;
        v42->m128i_i64[1] = 0;
        v46 = n;
        if ( !v44 )
        {
          v117 = v207;
          v118 = *(_DWORD *)(v207 + 14976);
          if ( v118 )
          {
            v119 = (unsigned int)(v118 - 1);
            *(_DWORD *)(v207 + 14976) = v119;
            v44 = *(unsigned __int8 **)(v117 + 8 * v119 + 14848);
            v120 = *((unsigned int *)v44 + 134);
            *v44 = 0;
            v121 = *((_QWORD *)v44 + 66);
            *((_DWORD *)v44 + 106) = 0;
            v122 = v121 + (v120 << 6);
            v169 = v121;
            if ( v121 != v122 )
            {
              srca = v4;
              v123 = v46;
              v124 = v122;
              do
              {
                while ( 1 )
                {
                  v124 -= 64;
                  v125 = *(void **)(v124 + 24);
                  if ( v125 == (void *)(v124 + 40) )
                    break;
                  operator delete(v125);
                  if ( v169 == v124 )
                    goto LABEL_259;
                }
              }
              while ( v169 != v124 );
LABEL_259:
              v46 = v123;
              v4 = srca;
            }
            *((_DWORD *)v44 + 134) = 0;
          }
          else
          {
            srcb = (void *)n;
            v44 = (unsigned __int8 *)operator new(0x3A0u);
            *v44 = 0;
            *((_QWORD *)v44 + 12) = v44 + 112;
            *((_QWORD *)v44 + 16) = v44 + 144;
            *((_QWORD *)v44 + 20) = v44 + 176;
            *((_QWORD *)v44 + 24) = v44 + 208;
            *((_QWORD *)v44 + 28) = v44 + 240;
            *((_QWORD *)v44 + 32) = v44 + 272;
            *((_QWORD *)v44 + 36) = v44 + 304;
            *((_QWORD *)v44 + 40) = v44 + 336;
            *((_QWORD *)v44 + 44) = v44 + 368;
            *((_QWORD *)v44 + 48) = v44 + 400;
            *((_QWORD *)v44 + 52) = v44 + 432;
            *((_QWORD *)v44 + 13) = 0;
            v44[112] = 0;
            *((_QWORD *)v44 + 17) = 0;
            v44[144] = 0;
            *((_QWORD *)v44 + 21) = 0;
            v44[176] = 0;
            *((_QWORD *)v44 + 25) = 0;
            v44[208] = 0;
            *((_QWORD *)v44 + 29) = 0;
            v44[240] = 0;
            *((_QWORD *)v44 + 33) = 0;
            v44[272] = 0;
            *((_QWORD *)v44 + 37) = 0;
            v44[304] = 0;
            *((_QWORD *)v44 + 41) = 0;
            v44[336] = 0;
            *((_QWORD *)v44 + 45) = 0;
            v44[368] = 0;
            *((_QWORD *)v44 + 49) = 0;
            v44[400] = 0;
            *((_QWORD *)v44 + 53) = 0x800000000LL;
            *((_QWORD *)v44 + 66) = v44 + 544;
            v46 = (__int64)srcb;
            *((_QWORD *)v44 + 67) = 0x600000000LL;
          }
          v206 = v44;
        }
        v44[*v44 + 1] = 0;
        v195 = v197;
        if ( &v45[v46] && !v45 )
          goto LABEL_151;
        if ( (unsigned __int64)v46 > 0xF )
        {
          if ( v46 < 0 )
            goto LABEL_334;
          v165 = v46;
          v47 = (_QWORD *)operator new(v46 + 1);
          v46 = v165;
          v195 = v47;
          v197[0] = v165;
        }
        else
        {
          if ( v46 == 1 )
          {
            LOBYTE(v197[0]) = *v45;
            v47 = v197;
            goto LABEL_106;
          }
          v47 = v197;
          if ( !v46 )
          {
LABEL_106:
            v196 = v46;
            *((_BYTE *)v47 + v46) = 0;
            v48 = v206;
            v49 = *(unsigned __int8 *)v206;
            *(_BYTE *)v206 = v49 + 1;
            v50 = 4 * (v49 + 3);
            v51 = (void **)&v48[v50];
            v52 = (_BYTE *)v48[v50];
            if ( v195 == v197 )
            {
              v106 = v196;
              if ( v196 )
              {
                if ( v196 == 1 )
                {
                  *v52 = v197[0];
                  v106 = v196;
                  v52 = *v51;
                }
                else
                {
                  v167 = v51;
                  memcpy(v52, v195, v196);
                  v51 = v167;
                  v106 = v196;
                  v52 = *v167;
                }
              }
              v51[1] = (void *)v106;
              v52[v106] = 0;
              v52 = v195;
              goto LABEL_110;
            }
            if ( v52 == (_BYTE *)&v48[v50 + 2] )
            {
              *v51 = v195;
              v51[1] = (void *)v196;
              v51[2] = (void *)v197[0];
            }
            else
            {
              v53 = v48[4 * (int)v49 + 14];
              *v51 = v195;
              v51[1] = (void *)v196;
              v51[2] = (void *)v197[0];
              if ( v52 )
              {
                v195 = v52;
                v197[0] = v53;
LABEL_110:
                v196 = 0;
                *v52 = 0;
                if ( v195 != v197 )
                  operator delete(v195);
                if ( v187 != &v189 )
                  operator delete(v187);
                if ( v185[0] != v186 )
                  operator delete(v185[0]);
                if ( (_BYTE)v211 )
                {
                  sub_FC7790(v208, (__int64 *)&v206, SHIBYTE(v211));
                  v208 = 0;
                  v211 = 0;
                }
                if ( v209 != &v210 )
                  operator delete(v209);
                v54 = (void **)v206;
                if ( !v206 )
                  goto LABEL_24;
                v55 = v207;
                if ( !v207 )
                  goto LABEL_24;
                if ( (unsigned __int64)v206 >= v207 && (unsigned __int64)v206 <= v207 + 14848 )
                  goto LABEL_243;
                v56 = *((void ***)v206 + 66);
                v57 = &v56[8 * (unsigned __int64)*((unsigned int *)v206 + 134)];
                if ( v56 != v57 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v57 -= 8;
                      v58 = (void **)v57[3];
                      if ( v58 == v57 + 5 )
                        break;
                      operator delete(v58);
                      if ( v56 == v57 )
                        goto LABEL_126;
                    }
                  }
                  while ( v56 != v57 );
LABEL_126:
                  v57 = (void **)v54[66];
                }
                if ( v57 != v54 + 68 )
                  free(v57);
                v59 = (void **)v54[52];
                if ( v59 != v54 + 54 )
                  free(v59);
                v60 = v54 + 48;
                v61 = v54 + 8;
                do
                {
                  while ( *v60 != v60 + 2 )
                  {
                    operator delete(*v60);
                    v60 -= 4;
                    if ( v60 == v61 )
                      goto LABEL_134;
                  }
                  v60 -= 4;
                }
                while ( v61 != v60 );
                goto LABEL_134;
              }
            }
            v52 = v197;
            v195 = v197;
            goto LABEL_110;
          }
        }
        v166 = v46;
        memcpy(v47, v45, v46);
        v47 = v195;
        v46 = v166;
        goto LABEL_106;
      }
      if ( v16 <= 0xB || *(_QWORD *)v17 != 0x72652D6C61746166LL || *(_DWORD *)(v17 + 8) != 1936879474 )
      {
        if ( !v159 )
        {
LABEL_61:
          sub_FD0810(a1, 0, v17, v16, v21);
          goto LABEL_24;
        }
LABEL_23:
        v161 = v20;
        if ( sub_FD40E0((__int64)v160, 0, (const void *)v17, v16, (__int64)ptr) )
        {
          v36 = "-W";
          if ( !v161 )
            v36 = "-Wno-";
          v37 = strlen(v36);
          sub_10CD360(a1, 0, v36, v37, (_BYTE *)v17, v16);
        }
        goto LABEL_24;
      }
      if ( v16 == 12 )
      {
        if ( !v159 )
          *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) = (8 * v20) | *(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) & 0xF7;
        goto LABEL_24;
      }
      if ( (*(_BYTE *)(v17 + 12) & 0xEF) == 0x2D && v16 != 13 )
      {
        v62 = v16 - 13;
        v63 = (_BYTE *)(v17 + 13);
        if ( v159 )
        {
          if ( sub_FD40E0((__int64)v160, 0, v63, v62, (__int64)ptr) )
            sub_10CD360(a1, 0, "-Wfatal-errors=", 15, v63, v62);
        }
        else
        {
          sub_FD08F0(a1, (__int64)v63, v62, v18);
        }
        goto LABEL_24;
      }
      v164 = (_BYTE *)v15;
      if ( !v159 )
        goto LABEL_24;
      sub_FC70B0((__int64)&v212, a1, 0, 854);
      v83 = (unsigned __int8 *)v212;
      v84 = v164;
      if ( !v212 )
      {
        v129 = v213;
        v130 = *(_DWORD *)(v213 + 14976);
        if ( v130 )
        {
          v142 = (unsigned int)(v130 - 1);
          *(_DWORD *)(v213 + 14976) = v142;
          v83 = *(unsigned __int8 **)(v129 + 8 * v142 + 14848);
          v143 = *((unsigned int *)v83 + 134);
          *v83 = 0;
          v144 = *((_QWORD *)v83 + 66);
          *((_DWORD *)v83 + 106) = 0;
          v145 = v144 + (v143 << 6);
          if ( v144 != v145 )
          {
            v174 = v83;
            v146 = v145;
            v179 = v4;
            v147 = v84;
            v148 = v144;
            do
            {
              while ( 1 )
              {
                v146 -= 64;
                v149 = *(void **)(v146 + 24);
                if ( v149 == (void *)(v146 + 40) )
                  break;
                operator delete(v149);
                if ( v148 == v146 )
                  goto LABEL_320;
              }
            }
            while ( v148 != v146 );
LABEL_320:
            v84 = v147;
            v83 = v174;
            v4 = v179;
          }
          *((_DWORD *)v83 + 134) = 0;
        }
        else
        {
          v83 = (unsigned __int8 *)operator new(0x3A0u);
          *v83 = 0;
          *((_QWORD *)v83 + 12) = v83 + 112;
          *((_QWORD *)v83 + 16) = v83 + 144;
          *((_QWORD *)v83 + 20) = v83 + 176;
          *((_QWORD *)v83 + 24) = v83 + 208;
          *((_QWORD *)v83 + 28) = v83 + 240;
          *((_QWORD *)v83 + 32) = v83 + 272;
          *((_QWORD *)v83 + 36) = v83 + 304;
          *((_QWORD *)v83 + 40) = v83 + 336;
          *((_QWORD *)v83 + 44) = v83 + 368;
          *((_QWORD *)v83 + 48) = v83 + 400;
          *((_QWORD *)v83 + 52) = v83 + 432;
          *((_QWORD *)v83 + 13) = 0;
          v83[112] = 0;
          *((_QWORD *)v83 + 17) = 0;
          v83[144] = 0;
          *((_QWORD *)v83 + 21) = 0;
          v83[176] = 0;
          *((_QWORD *)v83 + 25) = 0;
          v83[208] = 0;
          *((_QWORD *)v83 + 29) = 0;
          v83[240] = 0;
          *((_QWORD *)v83 + 33) = 0;
          v83[272] = 0;
          *((_QWORD *)v83 + 37) = 0;
          v83[304] = 0;
          *((_QWORD *)v83 + 41) = 0;
          v83[336] = 0;
          *((_QWORD *)v83 + 45) = 0;
          v83[368] = 0;
          *((_QWORD *)v83 + 49) = 0;
          v83[400] = 0;
          *((_QWORD *)v83 + 53) = 0x800000000LL;
          v84 = v164;
          *((_QWORD *)v83 + 66) = v83 + 544;
          *((_QWORD *)v83 + 67) = 0x600000000LL;
        }
        v212 = (void **)v83;
      }
      v83[*v83 + 1] = 1;
      v85 = v212;
      v86 = *(unsigned __int8 *)v212;
      *(_BYTE *)v212 = v86 + 1;
      v85[v86 + 2] = "-Wfatal-errors";
      v190[0] = v191;
      if ( v84 )
      {
        sub_10CD2A0(v190, v84, (__int64)&v84[v13]);
      }
      else
      {
        v190[1] = nullptr;
        v191[0] = 0;
      }
      v87 = (__m128i *)sub_99BDC0(v190, 0, 0, "-W", 2u);
      v192 = &v194;
      if ( (__m128i *)v87->m128i_i64[0] == &v87[1] )
      {
        v194 = _mm_loadu_si128(v87 + 1);
      }
      else
      {
        v192 = (void *)v87->m128i_i64[0];
        v194.m128i_i64[0] = v87[1].m128i_i64[0];
      }
      v88 = v87->m128i_u64[1];
      v89 = (unsigned __int8 *)v212;
      v87[1].m128i_i8[0] = 0;
      v193 = v88;
      v87->m128i_i64[0] = (__int64)v87[1].m128i_i64;
      v90 = v192;
      v87->m128i_i64[1] = 0;
      v91 = v193;
      if ( !v89 )
      {
        v127 = v213;
        v128 = *(_DWORD *)(v213 + 14976);
        if ( v128 )
        {
          v133 = (unsigned int)(v128 - 1);
          *(_DWORD *)(v213 + 14976) = v133;
          v89 = *(unsigned __int8 **)(v127 + 8 * v133 + 14848);
          v134 = *((unsigned int *)v89 + 134);
          *v89 = 0;
          v135 = *((_QWORD *)v89 + 66);
          *((_DWORD *)v89 + 106) = 0;
          v136 = v135 + (v134 << 6);
          if ( v135 != v136 )
          {
            v173 = v89;
            v137 = v14;
            v138 = v91;
            v139 = v136;
            v140 = v135;
            do
            {
              while ( 1 )
              {
                v139 -= 64;
                v141 = *(void **)(v139 + 24);
                if ( v141 == (void *)(v139 + 40) )
                  break;
                operator delete(v141);
                if ( v140 == v139 )
                  goto LABEL_312;
              }
            }
            while ( v140 != v139 );
LABEL_312:
            v91 = v138;
            v14 = v137;
            v89 = v173;
          }
          *((_DWORD *)v89 + 134) = 0;
        }
        else
        {
          v178 = (void *)v193;
          v89 = (unsigned __int8 *)operator new(0x3A0u);
          *v89 = 0;
          *((_QWORD *)v89 + 12) = v89 + 112;
          *((_QWORD *)v89 + 16) = v89 + 144;
          *((_QWORD *)v89 + 20) = v89 + 176;
          *((_QWORD *)v89 + 24) = v89 + 208;
          *((_QWORD *)v89 + 28) = v89 + 240;
          *((_QWORD *)v89 + 32) = v89 + 272;
          *((_QWORD *)v89 + 36) = v89 + 304;
          *((_QWORD *)v89 + 40) = v89 + 336;
          *((_QWORD *)v89 + 44) = v89 + 368;
          *((_QWORD *)v89 + 48) = v89 + 400;
          *((_QWORD *)v89 + 52) = v89 + 432;
          *((_QWORD *)v89 + 13) = 0;
          v89[112] = 0;
          *((_QWORD *)v89 + 17) = 0;
          v89[144] = 0;
          *((_QWORD *)v89 + 21) = 0;
          v89[176] = 0;
          *((_QWORD *)v89 + 25) = 0;
          v89[208] = 0;
          *((_QWORD *)v89 + 29) = 0;
          v89[240] = 0;
          *((_QWORD *)v89 + 33) = 0;
          v89[272] = 0;
          *((_QWORD *)v89 + 37) = 0;
          v89[304] = 0;
          *((_QWORD *)v89 + 41) = 0;
          v89[336] = 0;
          *((_QWORD *)v89 + 45) = 0;
          v89[368] = 0;
          *((_QWORD *)v89 + 49) = 0;
          v89[400] = 0;
          *((_QWORD *)v89 + 53) = 0x800000000LL;
          *((_QWORD *)v89 + 66) = v89 + 544;
          v91 = (__int64)v178;
          *((_QWORD *)v89 + 67) = 0x600000000LL;
        }
        v212 = (void **)v89;
      }
      v89[*v89 + 1] = 0;
      v198 = v200;
      if ( &v90[v91] && !v90 )
        goto LABEL_151;
      if ( (unsigned __int64)v91 > 0xF )
      {
        if ( v91 < 0 )
          goto LABEL_334;
        v170 = v91;
        v92 = (_QWORD *)operator new(v91 + 1);
        v91 = v170;
        v198 = v92;
        v200[0] = v170;
      }
      else
      {
        if ( v91 == 1 )
        {
          LOBYTE(v200[0]) = *v90;
          v92 = v200;
          goto LABEL_196;
        }
        v92 = v200;
        if ( !v91 )
        {
LABEL_196:
          v199 = v91;
          *((_BYTE *)v92 + v91) = 0;
          v93 = v212;
          v94 = *(unsigned __int8 *)v212;
          *(_BYTE *)v212 = v94 + 1;
          v95 = 4 * (v94 + 3);
          v96 = &v93[v95];
          v97 = (unsigned __int8 *)v93[v95];
          if ( v198 == v200 )
          {
            v126 = v199;
            if ( v199 )
            {
              if ( v199 == 1 )
              {
                *v97 = v200[0];
                v126 = v199;
                v97 = (unsigned __int8 *)*v96;
              }
              else
              {
                v172 = v96;
                memcpy(v97, v198, v199);
                v96 = v172;
                v126 = v199;
                v97 = (unsigned __int8 *)*v172;
              }
            }
            v96[1] = (void *)v126;
            v97[v126] = 0;
            v97 = (unsigned __int8 *)v198;
            goto LABEL_200;
          }
          if ( v97 == (unsigned __int8 *)&v93[v95 + 2] )
          {
            *v96 = v198;
            v96[1] = (void *)v199;
            v96[2] = (void *)v200[0];
          }
          else
          {
            v98 = v93[4 * (int)v94 + 14];
            *v96 = v198;
            v96[1] = (void *)v199;
            v96[2] = (void *)v200[0];
            if ( v97 )
            {
              v198 = v97;
              v200[0] = v98;
LABEL_200:
              v199 = 0;
              *v97 = 0;
              if ( v198 != v200 )
                operator delete(v198);
              if ( v192 != &v194 )
                operator delete(v192);
              if ( v190[0] != v191 )
                operator delete(v190[0]);
              if ( (_BYTE)v217 )
              {
                sub_FC7790(v214, (__int64 *)&v212, SHIBYTE(v217));
                v214 = 0;
                v217 = 0;
              }
              if ( v215 != &v216 )
                operator delete(v215);
              v54 = v212;
              if ( !v212 )
                goto LABEL_24;
              v55 = v213;
              if ( !v213 )
                goto LABEL_24;
              if ( (unsigned __int64)v212 >= v213 && (unsigned __int64)v212 <= v213 + 14848 )
              {
LABEL_243:
                v107 = *(unsigned int *)(v55 + 14976);
                *(_DWORD *)(v55 + 14976) = v107 + 1;
                *(_QWORD *)(v55 + 8 * v107 + 14848) = v54;
                goto LABEL_24;
              }
              v99 = (void **)v212[66];
              v100 = &v99[8 * (unsigned __int64)*((unsigned int *)v212 + 134)];
              if ( v99 != v100 )
              {
                do
                {
                  while ( 1 )
                  {
                    v100 -= 8;
                    v101 = (void **)v100[3];
                    if ( v101 == v100 + 5 )
                      break;
                    operator delete(v101);
                    if ( v99 == v100 )
                      goto LABEL_217;
                  }
                }
                while ( v99 != v100 );
LABEL_217:
                v100 = (void **)v54[66];
              }
              if ( v100 != v54 + 68 )
                free(v100);
              v102 = (void **)v54[52];
              if ( v102 != v54 + 54 )
                free(v102);
              v103 = v54 + 48;
              v104 = v54 + 8;
              while ( 1 )
              {
                v105 = *v103;
                if ( *v103 != v103 + 2 )
                  break;
LABEL_226:
                v103 -= 4;
                if ( v104 == v103 )
                  goto LABEL_134;
              }
              while ( 1 )
              {
                operator delete(v105);
                v103 -= 4;
                if ( v104 == v103 )
                  break;
                v105 = *v103;
                if ( *v103 == v103 + 2 )
                  goto LABEL_226;
              }
LABEL_134:
              operator delete(v54, 0x3A0u);
              goto LABEL_24;
            }
          }
          v97 = (unsigned __int8 *)v200;
          v198 = v200;
          goto LABEL_200;
        }
      }
      v171 = v91;
      memcpy(v92, v90, v91);
      v92 = v198;
      v91 = v171;
      goto LABEL_196;
    }
LABEL_36:
    v25 = (__int64 *)v4[25];
    v26 = (__int64 *)v4[24];
    if ( v26 != v25 )
    {
      v162 = v4;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = v26[1];
          v31 = *v26;
          if ( v30 > 2 && *(_WORD *)v31 == 28526 && *(_BYTE *)(v31 + 2) == 45 )
          {
            v30 -= 3LL;
            v31 += 3;
            v32 = 0;
            v33 = 1;
          }
          else
          {
            v32 = 1;
            v33 = 2;
          }
          if ( v30 != 10 || *(_QWORD *)v31 != 0x6968747972657665LL || *(_WORD *)(v31 + 8) != 26478 )
            break;
          if ( !v159 )
            sub_FD0770(a1, 1u, v33, 0);
LABEL_42:
          v26 += 4;
          if ( v25 == v26 )
            goto LABEL_50;
        }
        if ( v159 )
        {
          if ( sub_FD40E0((__int64)v160, 1u, (const void *)v31, v30, (__int64)ptr) )
          {
            v27 = v32 == 0;
            v28 = "-Rno-";
            if ( !v27 )
              v28 = "-R";
            v29 = strlen(v28);
            sub_10CD360(a1, 1, v28, v29, (_BYTE *)v31, v30);
          }
          goto LABEL_42;
        }
        v26 += 4;
        sub_FD0810(a1, 1, v31, v30, v33);
        if ( v25 == v26 )
        {
LABEL_50:
          v4 = v162;
          break;
        }
      }
    }
    if ( v159 == 1 )
      break;
    v159 = 1;
  }
  while ( a4 );
  if ( v4[15] )
  {
    LOWORD(v221) = 260;
    v218 = v4 + 14;
    sub_225D6F0((unsigned int)v183, a3, (unsigned int)&v218, -1, 1, 0, 1);
    if ( (v184 & 1) == 0 )
    {
      sub_FCAF10(a1, v183[0]);
      sub_FC2AF0((__int64 *)v183);
      goto LABEL_53;
    }
    if ( !a4 )
      goto LABEL_138;
    sub_FC70B0((__int64)&v218, a1, 0, 443);
    v64 = (_BYTE *)v4[14];
    v65 = v4[15];
    v66 = (unsigned __int8 *)v218;
    if ( !v218 )
    {
      v150 = v219;
      v151 = *(_DWORD *)(v219 + 14976);
      if ( v151 )
      {
        v152 = (unsigned int)(v151 - 1);
        *(_DWORD *)(v219 + 14976) = v152;
        v66 = *(unsigned __int8 **)(v150 + 8 * v152 + 14848);
        v153 = *((unsigned int *)v66 + 134);
        v154 = *((_QWORD *)v66 + 66);
        *v66 = 0;
        *((_DWORD *)v66 + 106) = 0;
        v155 = v154 + (v153 << 6);
        while ( v154 != v155 )
        {
          while ( 1 )
          {
            v155 -= 64;
            v156 = *(void **)(v155 + 24);
            if ( v156 == (void *)(v155 + 40) )
              break;
            v158 = v154;
            operator delete(v156);
            v154 = v158;
            if ( v158 == v155 )
              goto LABEL_332;
          }
        }
LABEL_332:
        *((_DWORD *)v66 + 134) = 0;
      }
      else
      {
        v66 = (unsigned __int8 *)operator new(0x3A0u);
        *v66 = 0;
        *((_QWORD *)v66 + 12) = v66 + 112;
        *((_QWORD *)v66 + 16) = v66 + 144;
        *((_QWORD *)v66 + 20) = v66 + 176;
        *((_QWORD *)v66 + 24) = v66 + 208;
        *((_QWORD *)v66 + 28) = v66 + 240;
        *((_QWORD *)v66 + 32) = v66 + 272;
        *((_QWORD *)v66 + 36) = v66 + 304;
        *((_QWORD *)v66 + 40) = v66 + 336;
        *((_QWORD *)v66 + 44) = v66 + 368;
        *((_QWORD *)v66 + 48) = v66 + 400;
        *((_QWORD *)v66 + 52) = v66 + 432;
        *((_QWORD *)v66 + 13) = 0;
        v66[112] = 0;
        *((_QWORD *)v66 + 17) = 0;
        v66[144] = 0;
        *((_QWORD *)v66 + 21) = 0;
        v66[176] = 0;
        *((_QWORD *)v66 + 25) = 0;
        v66[208] = 0;
        *((_QWORD *)v66 + 29) = 0;
        v66[240] = 0;
        *((_QWORD *)v66 + 33) = 0;
        v66[272] = 0;
        *((_QWORD *)v66 + 37) = 0;
        v66[304] = 0;
        *((_QWORD *)v66 + 41) = 0;
        v66[336] = 0;
        *((_QWORD *)v66 + 45) = 0;
        v66[368] = 0;
        *((_QWORD *)v66 + 49) = 0;
        v66[400] = 0;
        *((_QWORD *)v66 + 53) = 0x800000000LL;
        *((_QWORD *)v66 + 66) = v66 + 544;
        *((_QWORD *)v66 + 67) = 0x600000000LL;
      }
      v218 = v66;
    }
    v66[*v66 + 1] = 0;
    v201 = v203;
    if ( &v64[v65] && !v64 )
LABEL_151:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v65 > 0xF )
    {
      if ( v65 < 0 )
LABEL_334:
        std::__throw_length_error("basic_string::_M_create");
      v67 = (_QWORD *)operator new(v65 + 1);
      v203[0] = v65;
      v201 = v67;
    }
    else
    {
      if ( v65 == 1 )
      {
        LOBYTE(v203[0]) = *v64;
        v67 = v203;
        goto LABEL_155;
      }
      v67 = v203;
      if ( !v65 )
      {
LABEL_155:
        v202 = v65;
        *((_BYTE *)v67 + v65) = 0;
        v68 = v218;
        v69 = *(unsigned __int8 *)v218;
        *(_BYTE *)v218 = v69 + 1;
        v70 = (unsigned __int8)v69;
        v71 = 4 * (v69 + 3);
        v72 = (void **)&v68[v71];
        v73 = (_BYTE *)v68[v71];
        if ( v201 == v203 )
        {
          v131 = v202;
          if ( v202 )
          {
            if ( v202 == 1 )
              *v73 = v203[0];
            else
              memcpy(v73, v201, v202);
            v131 = v202;
            v73 = *v72;
          }
          v72[1] = (void *)v131;
          v73[v131] = 0;
          v73 = v201;
        }
        else
        {
          if ( v73 == (_BYTE *)&v68[v71 + 2] )
          {
            *v72 = v201;
            v72[1] = (void *)v202;
            v72[2] = (void *)v203[0];
          }
          else
          {
            v74 = v68[4 * v70 + 14];
            *v72 = v201;
            v72[1] = (void *)v202;
            v72[2] = (void *)v203[0];
            if ( v73 )
            {
              v201 = v73;
              v203[0] = v74;
              goto LABEL_159;
            }
          }
          v73 = v203;
          v201 = v203;
        }
LABEL_159:
        v202 = 0;
        *v73 = 0;
        if ( v201 != v203 )
          operator delete(v201);
        if ( (_BYTE)v223 )
        {
          sub_FC7790(v220, (__int64 *)&v218, SHIBYTE(v223));
          v220 = 0;
          v223 = 0;
        }
        if ( v221 != &v222 )
          operator delete(v221);
        v75 = (void **)v218;
        if ( v218 )
        {
          v76 = v219;
          if ( v219 )
          {
            if ( (unsigned __int64)v218 < v219 || (unsigned __int64)v218 > v219 + 14848 )
            {
              v77 = *((void ***)v218 + 66);
              v78 = &v77[8 * (unsigned __int64)*((unsigned int *)v218 + 134)];
              if ( v77 != v78 )
              {
                do
                {
                  while ( 1 )
                  {
                    v78 -= 8;
                    v79 = (void **)v78[3];
                    if ( v79 == v78 + 5 )
                      break;
                    operator delete(v79);
                    if ( v77 == v78 )
                      goto LABEL_171;
                  }
                }
                while ( v77 != v78 );
LABEL_171:
                v78 = (void **)v75[66];
              }
              if ( v78 != v75 + 68 )
                free(v78);
              v80 = (void **)v75[52];
              if ( v80 != v75 + 54 )
                free(v80);
              v81 = v75 + 48;
              v82 = v75 + 8;
              do
              {
                while ( *v81 != v81 + 2 )
                {
                  operator delete(*v81);
                  v81 -= 4;
                  if ( v82 == v81 )
                    goto LABEL_179;
                }
                v81 -= 4;
              }
              while ( v82 != v81 );
LABEL_179:
              operator delete(v75, 0x3A0u);
            }
            else
            {
              v132 = *(unsigned int *)(v219 + 14976);
              *(_DWORD *)(v219 + 14976) = v132 + 1;
              *(_QWORD *)(v76 + 8 * v132 + 14848) = v75;
            }
          }
        }
LABEL_138:
        sub_FC2AF0((__int64 *)v183);
        goto LABEL_53;
      }
    }
    memcpy(v67, v64, v65);
    v67 = v201;
    goto LABEL_155;
  }
LABEL_53:
  if ( v160 )
  {
    v27 = (*v160)-- == 1;
    if ( v27 )
    {
      sub_FD5580((__int64)v160);
      operator delete(v160, 0x18u);
    }
  }
  if ( ptr[0] != v205 )
    free(ptr[0]);
}
