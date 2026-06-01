__int64 __fastcall sub_19D9460(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        void *a5,
        int a6,
        __m128i a7,
        double a8,
        int a9,
        __int64 a10,
        unsigned __int8 a11)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r15
  int v35; // ebp
  __int64 v36; // r12
  _WORD *v37; // rax
  unsigned __int64 v38; // r13
  __int64 v39; // rbx
  __int16 v40; // ax
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // r12
  __int64 v53; // rax
  __int64 v54; // r12
  _WORD *v55; // rax
  __int64 v56; // r10
  __int16 v57; // ax
  __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r15
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r10
  char v69; // al
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r12
  _WORD *v74; // rax
  __int64 v75; // r10
  __int16 v76; // ax
  _WORD *v77; // rax
  __int64 v78; // r10
  __int16 v79; // ax
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  _WORD *v83; // rax
  __int64 v84; // r10
  __int16 v85; // ax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r14
  int v92; // r8d
  int v93; // r9d
  int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  unsigned __int64 v103; // r13
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rbx
  size_t v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  const char *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rbp
  char *v118; // rax
  signed __int64 v119; // rdx
  unsigned __int64 v120; // r10
  __int64 v121; // rax
  __int64 v122; // rbp
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rax
  const char *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // r13
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // rax
  const char *v142; // rax
  signed __int64 v143; // rdx
  signed __int64 v144; // rbp
  char *v145; // r14
  __int64 v146; // rax
  __int64 v147; // [rsp+0h] [rbp-218h]
  int v148[2]; // [rsp+0h] [rbp-218h]
  int v149[2]; // [rsp+0h] [rbp-218h]
  int v150; // [rsp+0h] [rbp-218h]
  int v151; // [rsp+0h] [rbp-218h]
  int v152[2]; // [rsp+0h] [rbp-218h]
  __int64 v153; // [rsp+0h] [rbp-218h]
  int v154[2]; // [rsp+0h] [rbp-218h]
  _QWORD *v155; // [rsp+8h] [rbp-210h]
  int v156; // [rsp+8h] [rbp-210h]
  unsigned __int64 v158; // [rsp+10h] [rbp-208h]
  int v159; // [rsp+10h] [rbp-208h]
  unsigned __int64 v160; // [rsp+18h] [rbp-200h]
  int v161[2]; // [rsp+20h] [rbp-1F8h]
  __int64 v162; // [rsp+20h] [rbp-1F8h]
  int v163; // [rsp+28h] [rbp-1F0h]
  void **p_ptr; // [rsp+30h] [rbp-1E8h]
  int v165; // [rsp+38h] [rbp-1E0h]
  int v166; // [rsp+3Ch] [rbp-1DCh] BYREF
  void *v167; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int64 v168; // [rsp+48h] [rbp-1D0h] BYREF
  int v169[2]; // [rsp+50h] [rbp-1C8h] BYREF
  int v170[2]; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v171; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v172; // [rsp+68h] [rbp-1B0h] BYREF
  unsigned __int64 v173; // [rsp+70h] [rbp-1A8h] BYREF
  int v174; // [rsp+78h] [rbp-1A0h]
  unsigned __int64 v175; // [rsp+80h] [rbp-198h] BYREF
  __int64 v176; // [rsp+88h] [rbp-190h]
  int v177[2]; // [rsp+90h] [rbp-188h] BYREF
  int v178[2]; // [rsp+98h] [rbp-180h]
  int v179[4]; // [rsp+A0h] [rbp-178h]
  const char *v180; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v181; // [rsp+B8h] [rbp-160h]
  int v182; // [rsp+C0h] [rbp-158h]
  void *v183; // [rsp+C8h] [rbp-150h]
  int v184; // [rsp+D0h] [rbp-148h]
  int v185[6]; // [rsp+D8h] [rbp-140h] BYREF
  int v186[2]; // [rsp+F0h] [rbp-128h] BYREF
  int v187; // [rsp+F8h] [rbp-120h]
  __int64 *v188; // [rsp+100h] [rbp-118h]
  void *v189; // [rsp+108h] [rbp-110h]
  int v190; // [rsp+110h] [rbp-108h]
  int v191[6]; // [rsp+118h] [rbp-100h] BYREF
  char v192; // [rsp+130h] [rbp-E8h]
  int v193; // [rsp+138h] [rbp-E0h]
  int v194; // [rsp+140h] [rbp-D8h]
  int v195; // [rsp+148h] [rbp-D0h]
  void *ptr; // [rsp+150h] [rbp-C8h] BYREF
  int v197[2]; // [rsp+158h] [rbp-C0h]
  __int64 *v198; // [rsp+160h] [rbp-B8h] BYREF
  void **v199; // [rsp+168h] [rbp-B0h]
  unsigned __int8 *v200; // [rsp+170h] [rbp-A8h] BYREF
  int v201; // [rsp+178h] [rbp-A0h]
  int v202; // [rsp+180h] [rbp-98h]
  int v203; // [rsp+188h] [rbp-90h]
  int v204; // [rsp+190h] [rbp-88h]
  int v205; // [rsp+198h] [rbp-80h]
  int v206; // [rsp+1A0h] [rbp-78h]
  int v207; // [rsp+1A8h] [rbp-70h]
  int v208; // [rsp+1B0h] [rbp-68h]
  int v209; // [rsp+1B8h] [rbp-60h]
  __int64 v210; // [rsp+1C0h] [rbp-58h]
  int v211; // [rsp+1C8h] [rbp-50h]
  unsigned int v212; // [rsp+1D0h] [rbp-48h]
  char v213; // [rsp+1D4h] [rbp-44h]

  v168 = a3;
  v167 = a5;
  v166 = a6;
  v155 = (_QWORD *)sub_168B6C0((__int64)a1);
  v16 = sub_F67A50(a2, a2, v13, v14, v15);
  v21 = (unsigned __int64)v167;
  v147 = sub_F62610(v16, a2, v17, v18, v19, v20);
  if ( ((unsigned __int8)v167 & 7) == 0 )
  {
    if ( a11 )
    {
      LODWORD(v172) = a9;
      HIDWORD(v172) = a9;
    }
    else
    {
      v172 = sub_EEC8C0(v168, a2, *(double *)a7.m128i_i64);
    }
    v22 = *a1;
    v23 = *(_QWORD *)(a2 + 32);
    v199 = &v167;
    ptr = off_2BC7160;
    v197[0] = 4856;
    v198 = &v172;
    if ( (unsigned __int8)sub_1E63C20(v22, (unsigned int)v166, v23, 1, &ptr) )
      return 1;
    v28 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v160 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = sub_BAD2F0(v147, v21 & 0xFFFFFFFFFFFFFFF8LL, 1, v24, v25, v26);
    v34 = v29;
    if ( v29 )
    {
      if ( !(unsigned __int8)sub_18F5260(*a1, v29, &v166, 1u, 0, 0, a7, a8, 0, 0, 0) )
      {
        v35 = v166;
        v36 = v155[2390];
        if ( !a11 )
        {
          v37 = (_WORD *)sub_EEE9A0(48, v155, 8u);
          v38 = v168;
          v39 = (__int64)v37;
          *v37 = *v37 & 0xFE00 | 0x20;
          if ( unk_2CD7484 )
            sub_EE9B50(32);
          v40 = *(_WORD *)(v39 + 1);
          *(_QWORD *)(v39 + 8) = v36;
          *(_QWORD *)(v39 + 16) = v34 & 0xFFFFFFFFFFFFFFFBLL;
          *(_QWORD *)(v39 + 24) = 0;
          *(_WORD *)(v39 + 1) = v40 & 0xF801 | 0x1A;
LABEL_16:
          *(_DWORD *)(v39 + 32) = v35;
          *(_DWORD *)(v39 + 36) = 0;
          *(_QWORD *)(v39 + 40) = v38 & 0xFFFFFFFFFFFFFFF9LL;
LABEL_17:
          v41 = sub_B63A40(v39);
          *(_BYTE *)(v39 + 1) = (v41 << 6) | *(_BYTE *)(v39 + 1) & 0x3F;
          *(_BYTE *)(v39 + 2) = *(_BYTE *)(v39 + 2) & 0xF8 | (v41 >> 2) & 7;
          return v39;
        }
        v39 = sub_EEE9A0(48, v155, 8u);
        *(_WORD *)v39 = *(_WORD *)v39 & 0xFE00 | 0x20;
        if ( unk_2CD7484 )
          sub_EE9B50(32);
        v58 = *(_WORD *)(v39 + 1);
        *(_QWORD *)(v39 + 8) = v36;
        *(_QWORD *)(v39 + 16) = v34 & 0xFFFFFFFFFFFFFFFBLL;
        *(_QWORD *)(v39 + 24) = 0;
        *(_WORD *)(v39 + 1) = v58 & 0xF801 | 0x1A;
        goto LABEL_36;
      }
      return 1;
    }
    v49 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 35 > 1 )
    {
      v59 = sub_F63050(v49, v28, v30, v31);
      v51 = *(_BYTE *)(v59 + 19) >> 2;
      v60 = v51 + ((*(_WORD *)(v59 + 18) >> 3) & 0x7F);
      *(_QWORD *)v161 = v59 + 8 * v60 + 48;
      v49 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v49 + 16) - 35 > 1 )
        v49 = sub_F63050(v49, v28, v60, v51);
      v50 = (*(_WORD *)(v49 + 18) >> 3) & 0x7F;
    }
    else
    {
      v50 = (*(_WORD *)(v49 + 18) >> 3) & 0x7F;
      v51 = v49 + 8 * (v50 + (*(_BYTE *)(v49 + 19) >> 2)) + 48;
      *(_QWORD *)v161 = v51;
    }
    if ( v49 + 8 * v50 + 48 != *(_QWORD *)v161 )
    {
      v163 = a2;
      p_ptr = &ptr;
      v52 = (__int64 *)(v49 + 8 * v50 + 48);
      while ( 1 )
      {
        v53 = sub_BAD2F0(*v52, v160, 1, v51, v32, v33);
        if ( v53 )
          break;
        if ( *(__int64 **)v161 == ++v52 )
          goto LABEL_40;
      }
      *(_QWORD *)v148 = v53;
      if ( (unsigned __int8)sub_18F5260(*a1, v53, &v166, 1u, 0, 0, a7, a8, 0, 0, 0) )
        return 1;
      v35 = v166;
      v54 = v155[2390];
      if ( !a11 )
      {
        v77 = (_WORD *)sub_EEE9A0(48, v155, 8u);
        v38 = v168;
        v78 = *(_QWORD *)v148;
        v39 = (__int64)v77;
        *v77 = *v77 & 0xFE00 | 0x20;
        if ( unk_2CD7484 )
        {
          sub_EE9B50(32);
          v78 = *(_QWORD *)v148;
        }
        v79 = *(_WORD *)(v39 + 1);
        *(_QWORD *)(v39 + 8) = v54;
        *(_QWORD *)(v39 + 16) = v78 & 0xFFFFFFFFFFFFFFFBLL;
        *(_QWORD *)(v39 + 24) = 0;
        *(_WORD *)(v39 + 1) = v79 & 0xF801 | 0x1A;
        goto LABEL_16;
      }
      v55 = (_WORD *)sub_EEE9A0(48, v155, 8u);
      v56 = *(_QWORD *)v148;
      v39 = (__int64)v55;
      *v55 = *v55 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
      {
        sub_EE9B50(32);
        v56 = *(_QWORD *)v148;
      }
      v57 = *(_WORD *)(v39 + 1);
      *(_QWORD *)(v39 + 8) = v54;
      *(_QWORD *)(v39 + 16) = v56 & 0xFFFFFFFFFFFFFFFBLL;
      *(_QWORD *)(v39 + 24) = 0;
      *(_WORD *)(v39 + 1) = v57 & 0xF801 | 0x1A;
LABEL_36:
      *(_DWORD *)(v39 + 32) = v35;
      *(_DWORD *)(v39 + 36) = a9;
      *(_QWORD *)(v39 + 40) = *(_QWORD *)(a10 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF9LL | 2;
      goto LABEL_17;
    }
LABEL_40:
    *(_QWORD *)v169 = v160 | 1;
    v64 = sub_BAD910(v147, v160 | 1, 1, 0, 1, 0);
    if ( v64
      || (v64 = sub_19CF3D0(*(__int64 *)v169, a2, 1, v61, v62, v63)) != 0
      || (v64 = sub_BADBA0(v147, (__int64)v169, 1, v80, v81, v82)) != 0 )
    {
      if ( (unsigned __int8)sub_18F5260(*a1, v64, &v166, 1u, 0, 0, a7, a8, 0, 0, 0) )
        return 1;
    }
    *(_QWORD *)v170 = sub_FE87C0(*(_QWORD *)(*a1 + 240) + 552LL, *(_QWORD *)(*a1 + 240) + 680LL, v160);
    v68 = sub_BAD910(v147, *(__int64 *)v170, 1, 0, 1, 0);
    if ( v68
      || (v68 = sub_19CF3D0(*(__int64 *)v170, a2, 1, v65, v66, v67)) != 0
      || (v68 = sub_BADBA0(v147, (__int64)v170, 1, v86, v87, v88)) != 0 )
    {
      v158 = v68;
      v69 = sub_18F5260(*a1, v68, &v166, 1u, 0, 0, a7, a8, 0, 0, 0);
      v68 = v158;
      if ( v69 )
        return 1;
      if ( (*(_BYTE *)(v158 + 29) & 2) != 0 && (*(_BYTE *)(v158 + 58) & 8) != 0 )
      {
        v111 = sub_BAD2F0(v147, v160, 1, v70, v71, v72);
        v68 = v158;
        if ( !v111 )
        {
          v112 = sub_BACEB0(v158, 1);
          v68 = v158;
          if ( v112 )
          {
            if ( *(char *)(v112 + 72) >= 0 )
            {
              v153 = v112;
              sub_168B9F0((__int64)&ptr, a1, v166, 0x1C7Cu, 0);
              v113 = sub_17B3DD0((__int64)&ptr, (__int64 *)&v167);
              v175 = a2 & 0xFFFFFFFFFFFFFFF0LL;
              v114 = sub_162B6D0(v113, (__int64 *)&v175);
              v115 = sub_995750(v153);
              v181 = v116;
              v180 = v115;
              v117 = sub_166BAF0(v114, (__int64)&v180);
              v118 = (char *)sub_995750(v153);
              LOBYTE(v178[0]) = 1;
              v177[0] = v166;
              v177[1] = v166;
              sub_19CF590((__int64)v186, *(__int64 *)v177, 1, v118, v119);
              sub_1589170(v117, v186);
              v120 = v158;
              if ( v189 != v191 )
              {
                operator delete(v189);
                v120 = v158;
              }
              *(_QWORD *)v154 = v120;
              sub_15F7200(&ptr);
              v68 = *(_QWORD *)v154;
            }
          }
        }
      }
    }
    else if ( !v64 )
    {
      *(_QWORD *)v178 = 0x101010101LL;
      *(_OWORD *)v179 = 0;
      ptr = v167;
      *(_QWORD *)v177 = off_2BC70F0;
      v89 = *a1;
      v197[0] = v166;
      v156 = v89;
      v90 = v147 + 48;
      if ( !v147 )
        v90 = 0;
      v162 = v90;
      sub_B85890(&v198, (__int64)v167);
      sub_1A6BD60((unsigned int)v186, v156, (unsigned int)&ptr, 0, 0, 0, (__int64)v177, 1, v162, 0, a2, 1);
      if ( *(_QWORD *)v186 )
      {
        if ( (v186[0] & 7) != 0 || v160 != (*(_QWORD *)v186 & 0xFFFFFFFFFFFFFFF8LL) )
        {
          v150 = v186[0];
          v91 = *a1;
          sub_168B9B0((__int64)&ptr, (__int64)a1, 4857);
          sub_AE9DF0((unsigned __int8 **)&ptr, (__int64)v167, 9u);
          sub_AE9DF0((unsigned __int8 **)&ptr, a2 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          sub_1A60AF0(
            v91,
            (int)v186,
            (int)&ptr,
            1,
            v92,
            v93,
            v150,
            v156,
            a4,
            v160,
            v162,
            v163,
            (int)p_ptr,
            v165,
            (int)v167,
            v168,
            v169[0],
            v170[0],
            v171,
            v172,
            v173,
            v174,
            v175,
            v176,
            v177[0],
            v178[0],
            v179[0],
            v179[2],
            (int)v180,
            v181,
            v182,
            (int)v183,
            v184,
            v185[0],
            v185[2],
            v185[4],
            v186[0],
            v187,
            (int)v188,
            (int)v189,
            v190,
            v191[0],
            v191[2],
            v191[4],
            v192,
            v193,
            v194,
            v195,
            ptr,
            v197[0],
            (char)v198,
            (int)v199,
            (int)v200,
            v201,
            v202,
            v203,
            v204,
            v205,
            v206,
            v207,
            v208,
            v209,
            v210,
            v211,
            v212);
          v94 = v151;
          if ( ptr && *(_QWORD *)v197 )
          {
            sub_1580C40(*(unsigned __int64 *)v197, (unsigned __int64)ptr);
            v94 = v151;
          }
          v95 = sub_19D9460((_DWORD)a1, a2, v168, v159, v94, v166, a9, a10, a11);
LABEL_71:
          *(_QWORD *)v152 = v95;
          sub_17A1D90(v186);
          return *(_QWORD *)v152;
        }
        if ( (_DWORD)v189 )
        {
          v121 = *v188;
          if ( *v188 )
          {
            if ( (*(_BYTE *)(v121 + 28) & 0x7F) == 0x4B && (*(_BYTE *)(v121 + 73) & 0x40) != 0 )
            {
              sub_168B9F0((__int64)&ptr, a1, v166, 0xD6Cu, 0);
              v122 = sub_17B3DD0((__int64)&ptr, (__int64 *)&v167);
              v126 = sub_A5E7C0(a2, (__int64)&v167, v123, v124, v125);
              v130 = sub_9C7D40(v126, (__int64)&v167, v127, v128, v129);
              v131 = sub_995750(v130);
              v176 = v132;
              v175 = (unsigned __int64)v131;
              v133 = sub_166BAF0(v122, (__int64)&v175);
              v137 = sub_A5E7C0(a2, (__int64)&v175, v134, v135, v136);
              v141 = sub_9C7D40(v137, (__int64)&v175, v138, v139, v140);
              v142 = sub_995750(v141);
              v144 = v143;
              v145 = (char *)v142;
              v173 = sub_EEC8C0(v168, (__int64)&v175, 0.0);
              LOBYTE(v174) = 1;
              sub_19CF590((__int64)&v180, v173, 1, v145, v144);
              sub_1589170(v133, &v180);
              if ( v183 != v185 )
                operator delete(v183);
              sub_15F7200(&ptr);
              v95 = 1;
              goto LABEL_71;
            }
          }
        }
      }
      sub_17A1D90(v186);
      v99 = sub_BAE3D0(v147, v160, &v171, v96, v97, v98);
      v103 = v99;
      if ( v99 )
      {
        v104 = sub_F67AB0(*(_QWORD *)(*(_QWORD *)(v99 + 48) & 0xFFFFFFFFFFFFFFF0LL), v160, v100, v101, v102);
        if ( v104 )
        {
          v105 = *(_QWORD *)(v104 + 32);
          v106 = *a1;
          v197[0] = 4854;
          v199 = &v167;
          ptr = off_2BC7188;
          v198 = (__int64 *)&v168;
          if ( (unsigned __int8)sub_1E63C20(v106, (unsigned int)v166, v105, 1, &ptr) )
            return 1;
        }
        sub_168B9F0((__int64)&ptr, a1, v166, 0xFEFu, 0);
        v107 = sub_17B3DD0((__int64)&ptr, (__int64 *)&v167);
        v173 = a2 & 0xFFFFFFFFFFFFFFF0LL;
        v108 = sub_162B6D0(v107, (__int64 *)&v173);
        v175 = *(_QWORD *)(v103 + 40);
        v109 = sub_15894B0(v108, (__int64 *)&v175);
        v110 = j__strlen("->");
        LOBYTE(v181) = 1;
        LODWORD(v180) = a4;
        HIDWORD(v180) = a4;
        sub_19CF590((__int64)v186, (__int64)v180, 1, "->", v110);
        sub_1589170(v109, v186);
        if ( v189 != v191 )
          operator delete(v189);
      }
      else
      {
        sub_168B9F0((__int64)&ptr, a1, v166, 0x12F7u, 0);
        v146 = sub_17B3DD0((__int64)&ptr, (__int64 *)&v167);
        *(_QWORD *)v186 = a2 & 0xFFFFFFFFFFFFFFF0LL;
        sub_162B6D0(v146, (__int64 *)v186);
      }
      sub_15F7200(&ptr);
      return 1;
    }
    v35 = v166;
    *(_QWORD *)v149 = v68;
    v73 = v155[2390];
    if ( !a11 )
    {
      v83 = (_WORD *)sub_EEE9A0(48, v155, 8u);
      v38 = v168;
      v84 = *(_QWORD *)v149;
      v39 = (__int64)v83;
      *v83 = *v83 & 0xFE00 | 0x20;
      if ( unk_2CD7484 )
      {
        sub_EE9B50(32);
        v84 = *(_QWORD *)v149;
      }
      v85 = *(_WORD *)(v39 + 1);
      *(_QWORD *)(v39 + 8) = v73;
      *(_QWORD *)(v39 + 24) = v84 & 0xFFFFFFFFFFFFFFF9LL;
      *(_WORD *)(v39 + 1) = v85 & 0xF801 | 0x1A;
      *(_QWORD *)(v39 + 16) = v64 | 4;
      goto LABEL_16;
    }
    v74 = (_WORD *)sub_EEE9A0(48, v155, 8u);
    v75 = *(_QWORD *)v149;
    v39 = (__int64)v74;
    *v74 = *v74 & 0xFE00 | 0x20;
    if ( unk_2CD7484 )
    {
      sub_EE9B50(32);
      v75 = *(_QWORD *)v149;
    }
    v76 = *(_WORD *)(v39 + 1);
    *(_QWORD *)(v39 + 8) = v73;
    *(_QWORD *)(v39 + 24) = v75 & 0xFFFFFFFFFFFFFFF9LL;
    *(_WORD *)(v39 + 1) = v76 & 0xF801 | 0x1A;
    *(_QWORD *)(v39 + 16) = v64 | 4;
    goto LABEL_36;
  }
  sub_168B9F0((__int64)&ptr, a1, v166, 0xFD4u, 0);
  if ( (_BYTE)v211 )
  {
    sub_AE9DF0(&v200, (__int64)v167, 9u);
  }
  else if ( v213 )
  {
    v44 = sub_168B9E0(&ptr);
    v47 = (__int64)v198;
    if ( v198 )
      v47 = (*(__int64 (__fastcall **)(__int64 *))(*v198 + 32))(v198);
    *(_QWORD *)v186 = v47;
    v48 = sub_1587BC0(v44, (__int64 *)v186, v42, v43, v45, v46);
    sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v212 + 8), (__int64)v167, 9u);
  }
  *(_QWORD *)v186 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  sub_162B6D0((__int64)&ptr, (__int64 *)v186);
  sub_15F7200(&ptr);
  return 1;
}
