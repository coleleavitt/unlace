__int64 __fastcall sub_13A2140(__int64 *a1, void *a2, size_t a3)
{
  __int64 *v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  _UNKNOWN *__ptr32 *v9; // r12
  unsigned int i; // esi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  void ***v13; // r10
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  char v17; // cl
  unsigned int v18; // r11d
  __int64 v19; // r14
  void *v20; // rbx
  void *v21; // rdi
  unsigned __int64 v22; // rdi
  _QWORD *v23; // r14
  _QWORD *v24; // rbx
  volatile signed __int32 **v25; // rbp
  volatile signed __int32 **v26; // r15
  volatile signed __int32 **v27; // rdi
  volatile signed __int32 *v28; // r13
  _QWORD *v29; // r14
  _QWORD *v30; // rbx
  volatile signed __int32 *v31; // r13
  int v32; // edx
  volatile signed __int32 *v33; // r13
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // r13
  int v37; // eax
  __int64 *v38; // r14
  _QWORD *v39; // r13
  _QWORD *v40; // rbx
  _QWORD *v41; // rdi
  __int64 *v42; // rdi
  _QWORD *v43; // r15
  _QWORD *v44; // rbx
  volatile signed __int32 *v45; // r13
  int v46; // eax
  _DWORD *v47; // r13
  int v48; // eax
  int v49; // esi
  int v50; // r9d
  unsigned __int64 v51; // r8
  void *v52; // rax
  __int64 *v53; // rbp
  unsigned __int64 v54; // rdi
  int v55; // esi
  void *v56; // rax
  unsigned __int64 v57; // rdi
  void *v58; // rax
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // r10
  __m128 v61; // xmm0
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // rbx
  void ***v64; // r11
  int v65; // eax
  unsigned int v66; // ebx
  unsigned __int64 v67; // rax
  void ***v68; // rbx
  unsigned int v69; // edx
  int v70; // ebx
  __m128i si128; // xmm0
  unsigned int v72; // ebx
  void *v73; // r14
  void *v74; // rdi
  int v75; // r12d
  int v76; // ebx
  void *v77; // r11
  int v78; // esi
  unsigned __int64 v79; // r11
  unsigned __int64 v80; // r14
  void ***v81; // r10
  int v82; // eax
  unsigned int v83; // r14d
  void *v84; // rax
  unsigned int v85; // r8d
  __int64 v86; // rax
  __m128i v87; // xmm0
  void *v88; // r14
  void *v89; // rdi
  __m128i v90; // xmm0
  __int64 v91; // r15
  _QWORD *v92; // rcx
  _QWORD *v93; // r14
  _QWORD *v94; // r12
  _QWORD *v95; // rbx
  _QWORD *v96; // rdi
  _QWORD *v97; // rdi
  _QWORD *v98; // r15
  _QWORD *v99; // rbx
  volatile signed __int32 *v100; // r12
  int v101; // eax
  _DWORD *v102; // r12
  int v103; // eax
  unsigned int v104; // r11d
  __int64 v105; // rax
  unsigned int v106; // r9d
  __int64 v107; // rax
  __int64 v108; // r12
  __m128i v109; // xmm0
  void *v110; // rbx
  void *v111; // rdi
  __m128i v112; // xmm0
  unsigned int v113; // r14d
  void *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rbx
  unsigned int v117; // r14d
  __m128i *v118; // rax
  __m128i v119; // xmm0
  void *v120; // rax
  __int64 v121; // r12
  __m128i v122; // xmm0
  unsigned int v123; // ebx
  _QWORD *v124; // rbx
  void *v125; // rax
  __int64 v126; // rax
  _QWORD *v127; // r15
  _QWORD *v128; // r12
  _QWORD *v129; // rdi
  _QWORD *v130; // rdi
  _QWORD *v131; // rbp
  _QWORD *v132; // r12
  volatile signed __int32 *v133; // r15
  int v134; // eax
  _DWORD *v135; // r15
  int v136; // eax
  void *v137; // rax
  void *v138; // rax
  void *v139; // rax
  __int64 v140; // [rsp+18h] [rbp-660h] BYREF
  __int64 *v141; // [rsp+20h] [rbp-658h] BYREF
  unsigned __int64 v142; // [rsp+28h] [rbp-650h]
  __m128 v143; // [rsp+30h] [rbp-648h] BYREF
  __m128 v144; // [rsp+40h] [rbp-638h] BYREF
  __int64 (__fastcall **v145)(); // [rsp+50h] [rbp-628h]
  __int64 (__fastcall **v146)(); // [rsp+58h] [rbp-620h]
  __m128 v147; // [rsp+60h] [rbp-618h] BYREF
  unsigned __int64 v148; // [rsp+70h] [rbp-608h]
  unsigned __int64 v149; // [rsp+78h] [rbp-600h]
  __m128 v150; // [rsp+80h] [rbp-5F8h] BYREF
  unsigned __int64 v151; // [rsp+90h] [rbp-5E8h]
  unsigned __int64 v152; // [rsp+98h] [rbp-5E0h]
  unsigned __int64 v153; // [rsp+A0h] [rbp-5D8h]
  unsigned __int64 v154; // [rsp+A8h] [rbp-5D0h]
  void *v155; // [rsp+C0h] [rbp-5B8h] BYREF
  char v156; // [rsp+C8h] [rbp-5B0h]
  __int64 v157[2]; // [rsp+D0h] [rbp-5A8h] BYREF
  char v158; // [rsp+E0h] [rbp-598h]
  void *v159[2]; // [rsp+F0h] [rbp-588h] BYREF
  char v160; // [rsp+100h] [rbp-578h] BYREF
  void *v161[2]; // [rsp+110h] [rbp-568h] BYREF
  __int128 v162; // [rsp+120h] [rbp-558h]
  void *v163[2]; // [rsp+130h] [rbp-548h] BYREF
  int v164; // [rsp+140h] [rbp-538h] BYREF
  int v165; // [rsp+144h] [rbp-534h]
  void *v166[2]; // [rsp+150h] [rbp-528h] BYREF
  unsigned __int64 v167; // [rsp+160h] [rbp-518h] BYREF
  unsigned __int64 v168; // [rsp+168h] [rbp-510h]
  void *v169[2]; // [rsp+170h] [rbp-508h] BYREF
  __int128 v170; // [rsp+180h] [rbp-4F8h] BYREF
  __int64 v171; // [rsp+190h] [rbp-4E8h]
  char v172; // [rsp+198h] [rbp-4E0h]
  int v173; // [rsp+19Ch] [rbp-4DCh]
  void **v174; // [rsp+1A0h] [rbp-4D8h]
  volatile signed __int32 *v175; // [rsp+1B0h] [rbp-4C8h] BYREF
  void *v176; // [rsp+1B8h] [rbp-4C0h]
  unsigned __int64 v177; // [rsp+1C0h] [rbp-4B8h]
  unsigned __int64 v178; // [rsp+1C8h] [rbp-4B0h]
  __int64 v179; // [rsp+1D0h] [rbp-4A8h]
  void *v180[2]; // [rsp+1D8h] [rbp-4A0h]
  __int64 v181; // [rsp+1E8h] [rbp-490h]
  _BYTE *v182; // [rsp+1F0h] [rbp-488h]
  __int64 v183; // [rsp+1F8h] [rbp-480h]
  _BYTE v184[256]; // [rsp+200h] [rbp-478h] BYREF
  void **v185; // [rsp+300h] [rbp-378h]
  _BYTE v186[872]; // [rsp+310h] [rbp-368h] BYREF

  v5 = (__int64 *)v159;
  v159[1] = nullptr;
  v160 = 0;
  v159[0] = &v160;
  v175 = nullptr;
  sub_FD68E0((__int64)v186, (__int64)v159, (__int64 *)&v175);
  v6 = (__int64)v175;
  if ( v175 && !_InterlockedSub(v175 + 2, 1u) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  sub_FD7D70((__int64)v157, (__int64)v186, a2, a3, -1, 0, 1u, 1);
  if ( (v158 & 1) != 0 )
  {
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v140 = 1;
    goto LABEL_8;
  }
  v8 = (unsigned __int64)v169;
  sub_2231100(v169, v157[0]);
  v179 = 0x200000000LL;
  v175 = (volatile signed __int32 *)v169[0];
  *(_OWORD *)v180 = 0;
  v176 = v169[1];
  v177 = 0;
  v178 = 0;
  v181 = 0;
  v182 = v184;
  v183 = 0x800000000LL;
  v185 = nullptr;
  *(_OWORD *)v161 = 0;
  v162 = 0;
  if ( !v169[1] )
    goto LABEL_31;
  v9 = (_UNKNOWN *__ptr32 *)&unk_2611330;
  for ( i = 0; ; i = v179 )
  {
    v11 = *(unsigned __int8 *)v9;
    if ( i > 7 )
    {
      LOBYTE(v169[1]) &= ~1u;
      LODWORD(v179) = i - 8;
      v22 = (unsigned __int8)v178;
      v178 >>= 8;
      v169[0] = (void *)v22;
    }
    else
    {
      v140 = 0;
      if ( i )
        v140 = v178;
      v12 = (unsigned __int64)v176;
      if ( v177 >= (unsigned __int64)v176 )
      {
        v140 = std::_V2::generic_category((std::_V2 *)v169);
        v170 = 0;
        v163[1] = nullptr;
        v163[0] = &v164;
        LOBYTE(v164) = 0;
        LODWORD(v169[1]) = 0;
        v172 = 0;
        v173 = 1;
        v171 = 0;
        v169[0] = &off_2BEBE68;
        v174 = v163;
        sub_227B8B0(v169, 0, 0, 0);
        v167 = v12;
        v141 = (__int64 *)"Unexpected end of file reading %u of %u bytes";
        v168 = v177;
        v61 = _mm_loadh_ps((const double *)&v141);
        v141 = (__int64 *)v166;
        *(__m128 *)v166 = v61;
        sub_227C560(v169, v166);
        v169[0] = &off_2BEBE68;
        sub_227B7A0(v169);
        v169[0] = v163;
        LOWORD(v171) = 260;
        v20 = (void *)operator new(0x40u);
        sub_2220590(v20, v169, 5, v140);
        v21 = v163[0];
        if ( v163[0] == &v164 )
          goto LABEL_26;
        goto LABEL_25;
      }
      v13 = (void ***)((char *)v175 + v177);
      if ( (unsigned __int64)v176 >= v177 + 8 )
      {
        v8 = (unsigned __int64)*v13;
        v177 += 8LL;
        v16 = 64;
        v17 = 8 - i;
      }
      else
      {
        v178 = 0;
        v14 = (_DWORD)v176 - v177;
        if ( (_DWORD)v176 == (_DWORD)v177 )
        {
          LODWORD(v179) = 0;
          v18 = 8 - i;
LABEL_24:
          LODWORD(v142) = v18;
          v19 = std::_V2::generic_category((std::_V2 *)v8);
          v141 = (__int64 *)v166;
          v174 = v166;
          v170 = 0;
          v169[0] = &off_2BEBE68;
          v166[0] = &v167;
          v166[1] = nullptr;
          LOBYTE(v167) = 0;
          LODWORD(v169[1]) = 0;
          v172 = 0;
          v173 = 1;
          v171 = 0;
          sub_227B8B0(v169, 0, 0, 0);
          v164 = v142;
          v140 = (__int64)"Unexpected end of file reading %u of %u bits";
          v165 = v179;
          *(__m128 *)v163 = _mm_loadh_ps((const double *)&v140);
          sub_227C560(v169, v163);
          v169[0] = &off_2BEBE68;
          sub_227B7A0(v169);
          LOWORD(v171) = 260;
          v169[0] = v141;
          v20 = (void *)operator new(0x40u);
          sub_2220590(v20, v169, 5, v19);
          v21 = v166[0];
          if ( v166[0] == &v167 )
          {
LABEL_26:
            LOBYTE(v169[1]) |= 1u;
            v169[0] = nullptr;
            v163[0] = v20;
            sub_A05760(v141, (_QWORD **)v163);
            if ( v163[0] )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v163[0] + 8LL))(v163[0]);
LABEL_30:
            sub_A0AE70((__int64 *)v169);
LABEL_31:
            if ( !qword_2CD8AA0 )
              sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
            v140 = 2;
            goto LABEL_34;
          }
LABEL_25:
          operator delete(v21);
          goto LABEL_26;
        }
        v15 = 0;
        v8 = 0;
        while ( 1 )
        {
          v8 |= (unsigned __int64)*((unsigned __int8 *)v13 + v15) << (8 * (unsigned __int8)v15);
          v178 = v8;
          if ( v14 - 1 == v15 )
            break;
          ++v15;
        }
        v16 = 8 * v14;
        v17 = 8 - i;
        LODWORD(v179) = 8 * v14;
        v177 += v14;
        if ( 8 - i > 8 * v14 )
        {
          v18 = 8 - i;
          goto LABEL_24;
        }
      }
      LOBYTE(v169[1]) &= ~1u;
      LODWORD(v179) = v16 + i - 8;
      v178 = v8 >> v17;
      v22 = v140 | (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)i + 56)) & v8) << i);
      v169[0] = (void *)v22;
    }
    if ( v11 != v22 )
      goto LABEL_30;
    v8 = (unsigned __int64)v169;
    v9 = (_UNKNOWN *__ptr32 *)((char *)v9 + 1);
    sub_A0AE70((__int64 *)v169);
    if ( v9 == jpt_13AC6B8 )
      break;
  }
  v141 = a1;
  v140 = (__int64)v159;
  while ( 2 )
  {
    v49 = v179;
    if ( (_DWORD)v179 )
    {
      v50 = HIDWORD(v179);
      v51 = v178;
      if ( (unsigned int)v179 >= HIDWORD(v179) )
        goto LABEL_113;
      v60 = v177;
      v59 = (unsigned __int64)v176;
      if ( (unsigned __int64)v176 <= v177 )
      {
        v53 = (__int64 *)v166;
        v143.m128_u64[0] = (unsigned __int64)off_2C02AB8;
        v144 = _mm_loadh_ps((const double *)&off_2BB2608);
        v143.m128_u64[0] = std::_V2::generic_category((std::_V2 *)v8);
        v170 = 0;
        v174 = v163;
        v169[0] = &off_2BEBE68;
        v163[0] = &v164;
        v163[1] = nullptr;
        LOBYTE(v164) = 0;
        LODWORD(v169[1]) = 0;
        v172 = 0;
        v173 = 1;
        v171 = 0;
        sub_227B8B0(v169, 0, 0, 0);
        si128 = _mm_load_si128((const __m128i *)&v144);
        v167 = v59;
        *(__m128i *)v166 = si128;
        v168 = v177;
        sub_227C560(v169, v166);
        v169[0] = &off_2BEBE68;
        sub_227B7A0(v169);
        LOWORD(v171) = 260;
        v169[0] = v163;
        v148 = v148 & 0xFFFFFFFF00000000LL | 5;
        v72 = v148;
        v73 = (void *)operator new(0x40u);
        sub_2220590(v73, v169, v72, v143.m128_u64[0]);
        v74 = v163[0];
        if ( v163[0] != &v164 )
          goto LABEL_157;
        goto LABEL_158;
      }
LABEL_151:
      v67 = v60 + 8;
      v68 = (void ***)((char *)v175 + v60);
      if ( v60 + 8 <= v59 )
      {
        v8 = (unsigned __int64)*v68;
        v69 = 64;
        v178 = (unsigned __int64)*v68;
        goto LABEL_153;
      }
      v178 = 0;
      v104 = v59 - v60;
      if ( (_DWORD)v59 == (_DWORD)v60 )
      {
        v177 = v60;
        LODWORD(v179) = 0;
        v70 = v50 - v49;
      }
      else
      {
        v105 = 0;
        v8 = 0;
        while ( 1 )
        {
          v8 |= (unsigned __int64)*((unsigned __int8 *)v68 + v105) << (8 * (unsigned __int8)v105);
          v178 = v8;
          if ( v104 - 1 == v105 )
            break;
          ++v105;
        }
        v69 = 8 * v104;
        v67 = v60 + v104;
LABEL_153:
        v177 = v67;
        v70 = v50 - v179;
        LODWORD(v179) = v69;
        if ( v50 - v49 <= v69 )
        {
          LOBYTE(v169[1]) &= ~1u;
          v178 = v8 >> v70;
          LODWORD(v179) = v49 - v50 + v69;
          v52 = (void *)(v51
                       | (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v49 - (unsigned __int8)v50 + 64)) & v8) << v49));
          v169[0] = v52;
          goto LABEL_114;
        }
      }
      v53 = (__int64 *)v166;
      v143 = _mm_loadh_ps((const double *)off_2BB2600);
      v121 = std::_V2::generic_category((std::_V2 *)v8);
      v170 = 0;
      v166[0] = &v167;
      v169[0] = &off_2BEBE68;
      v166[1] = nullptr;
      LOBYTE(v167) = 0;
      LODWORD(v169[1]) = 0;
      v172 = 0;
      v173 = 1;
      v171 = 0;
      v174 = v166;
      sub_227B8B0(v169, 0, 0, 0);
      v122 = _mm_load_si128((const __m128i *)&v143);
      v164 = v70;
      *(__m128i *)v163 = v122;
      v165 = v179;
      sub_227C560(v169, v163);
      v169[0] = &off_2BEBE68;
      sub_227B7A0(v169);
      LOWORD(v171) = 260;
      v169[0] = v166;
      v154 = v154 & 0xFFFFFFFF00000000LL | 5;
      v123 = v154;
      v73 = (void *)operator new(0x40u);
      sub_2220590(v73, v169, v123, v121);
      v74 = v166[0];
      if ( v166[0] != &v167 )
LABEL_157:
        operator delete(v74);
LABEL_158:
      LOBYTE(v169[1]) |= 1u;
      LOBYTE(v166[1]) |= 1u;
      v169[0] = nullptr;
      v166[0] = v73;
    }
    else
    {
      v59 = (unsigned __int64)v176;
      v60 = v177;
      if ( (unsigned __int64)v176 <= v177 )
      {
        v5 = (__int64 *)v140;
        v140 = 0;
        std::_V2::system_category((std::_V2 *)v8);
        goto LABEL_34;
      }
      v50 = HIDWORD(v179);
      v51 = 0;
      if ( HIDWORD(v179) )
        goto LABEL_151;
      v51 = v178;
LABEL_113:
      LOBYTE(v169[1]) &= ~1u;
      LODWORD(v179) = v179 - v50;
      v52 = (void *)(v51 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v50)));
      v178 = v51 >> v50;
      v169[0] = v52;
LABEL_114:
      LOBYTE(v166[1]) &= ~1u;
      v53 = (__int64 *)v166;
      LODWORD(v166[0]) = (_DWORD)v52;
    }
    sub_A0AE70((__int64 *)v169);
    if ( ((__int64)v166[1] & 1) != 0 )
    {
      v137 = v166[0];
      v141 = (__int64 *)v166;
      v166[0] = nullptr;
      v5 = (__int64 *)v140;
      v163[0] = v137;
      goto LABEL_293;
    }
    if ( LODWORD(v166[0]) != 1 )
    {
      v141 = (__int64 *)v166;
      v5 = (__int64 *)v140;
      if ( qword_2CD8AA0 )
        goto LABEL_291;
      goto LABEL_296;
    }
    v54 = (unsigned __int64)v166;
    sub_A0AE90((__int64 *)v166);
    v55 = v179;
    if ( (unsigned int)v179 > 7 )
    {
      LOBYTE(v169[1]) &= ~1u;
      v156 &= ~1u;
      LODWORD(v56) = (unsigned __int8)v178;
      LODWORD(v179) = v179 - 8;
      v169[0] = (void *)(unsigned __int8)v178;
      v178 >>= 8;
      goto LABEL_119;
    }
    v62 = 0;
    if ( (_DWORD)v179 )
      v62 = v178;
    v63 = (unsigned __int64)v176;
    if ( v177 >= (unsigned __int64)v176 )
    {
      v143.m128_u64[0] = (unsigned __int64)off_2C02AB8;
      v144 = _mm_loadh_ps((const double *)&off_2BB2608);
      v143.m128_u64[0] = std::_V2::generic_category((std::_V2 *)v166);
      v170 = 0;
      v174 = v163;
      v163[0] = &v164;
      v163[1] = nullptr;
      LOBYTE(v164) = 0;
      LODWORD(v169[1]) = 0;
      v172 = 0;
      v173 = 1;
      v171 = 0;
      v169[0] = &off_2BEBE68;
      sub_227B8B0(v169, 0, 0, 0);
      v112 = _mm_load_si128((const __m128i *)&v144);
      v167 = v63;
      *(__m128i *)v166 = v112;
      v168 = v177;
      sub_227C560(v169, v166);
      v169[0] = &off_2BEBE68;
      sub_227B7A0(v169);
      LOWORD(v171) = 260;
      v169[0] = v163;
      v149 = v149 & 0xFFFFFFFF00000000LL | 5;
      v113 = v149;
      v110 = (void *)operator new(0x40u);
      sub_2220590(v110, v169, v113, v143.m128_u64[0]);
      v111 = v163[0];
      if ( v163[0] == &v164 )
        goto LABEL_238;
      goto LABEL_237;
    }
    v64 = (void ***)((char *)v175 + v177);
    if ( (unsigned __int64)v176 < v177 + 8 )
    {
      v178 = 0;
      v106 = (_DWORD)v176 - v177;
      if ( (_DWORD)v176 == (_DWORD)v177 )
      {
        LODWORD(v179) = 0;
        v66 = 8 - v55;
      }
      else
      {
        v107 = 0;
        v54 = 0;
        while ( 1 )
        {
          v54 |= (unsigned __int64)*((unsigned __int8 *)v64 + v107) << (8 * (unsigned __int8)v107);
          v178 = v54;
          if ( v107 == v106 - 1 )
            break;
          ++v107;
        }
        v65 = 8 * v106;
        v66 = 8 - v179;
        LODWORD(v179) = 8 * v106;
        v177 += v106;
        if ( v66 <= 8 * v106 )
          goto LABEL_147;
      }
      v143 = _mm_loadh_ps((const double *)off_2BB2600);
      v108 = std::_V2::generic_category((std::_V2 *)v54);
      v170 = 0;
      v166[0] = &v167;
      v169[0] = &off_2BEBE68;
      v166[1] = nullptr;
      LOBYTE(v167) = 0;
      LODWORD(v169[1]) = 0;
      v172 = 0;
      v173 = 1;
      v171 = 0;
      v174 = v166;
      sub_227B8B0(v169, 0, 0, 0);
      v109 = _mm_load_si128((const __m128i *)&v143);
      v164 = v66;
      *(__m128i *)v163 = v109;
      v165 = v179;
      sub_227C560(v169, v163);
      v169[0] = &off_2BEBE68;
      sub_227B7A0(v169);
      LOWORD(v171) = 260;
      v169[0] = v166;
      v153 = v153 & 0xFFFFFFFF00000000LL | 5;
      v110 = (void *)operator new(0x40u);
      sub_2220590(v110, v169, 5, v108);
      v111 = v166[0];
      if ( v166[0] == &v167 )
        goto LABEL_238;
LABEL_237:
      operator delete(v111);
LABEL_238:
      LOBYTE(v169[1]) |= 1u;
      v156 |= 1u;
      v169[0] = nullptr;
      v155 = v110;
      goto LABEL_120;
    }
    v54 = (unsigned __int64)*v64;
    v177 += 8LL;
    v65 = 64;
    LOBYTE(v66) = 8 - v179;
LABEL_147:
    LOBYTE(v169[1]) &= ~1u;
    LODWORD(v179) = v65 + v55 - 8;
    v178 = v54 >> v66;
    v156 &= ~1u;
    v56 = (void *)(v62 | ((v54 & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v55 + 56))) << v55));
    v169[0] = v56;
LABEL_119:
    LODWORD(v155) = (_DWORD)v56;
LABEL_120:
    v57 = (unsigned __int64)v169;
    sub_A0AE70((__int64 *)v169);
    if ( (v156 & 1) != 0 )
    {
      v58 = v155;
      LOBYTE(v166[1]) |= 1u;
      v155 = nullptr;
      v166[0] = v58;
      goto LABEL_122;
    }
    if ( (char)v155 >= 0 )
    {
      LOBYTE(v166[1]) &= ~1u;
      LODWORD(v166[0]) = (_DWORD)v155;
      goto LABEL_122;
    }
    v75 = (unsigned __int8)v155 & 0x7F;
    v76 = 7;
    v143.m128_u64[0] = (unsigned __int64)v163;
    v144.m128_u64[0] = (unsigned __int64)&v164;
    while ( 2 )
    {
      v78 = v179;
      if ( (unsigned int)v179 > 7 )
      {
        LOBYTE(v166[1]) &= ~1u;
        LOBYTE(v169[1]) &= ~1u;
        LODWORD(v77) = (unsigned __int8)v178;
        LODWORD(v179) = v179 - 8;
        v166[0] = (void *)(unsigned __int8)v178;
        v178 >>= 8;
        goto LABEL_161;
      }
      v79 = 0;
      if ( (_DWORD)v179 )
        v79 = v178;
      v80 = (unsigned __int64)v176;
      if ( v177 >= (unsigned __int64)v176 )
      {
        v145 = off_2C02AB8;
        v147 = _mm_loadh_ps((const double *)&off_2BB2608);
        v145 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v57);
        v163[0] = (void *)v144.m128_u64[0];
        v174 = (void **)v143.m128_u64[0];
        v170 = 0;
        v169[0] = &off_2BEBE68;
        v146 = &off_2BEBE68;
        v163[1] = nullptr;
        LOBYTE(v164) = 0;
        LODWORD(v169[1]) = 0;
        v172 = 0;
        v173 = 1;
        v171 = 0;
        sub_227B8B0(v169, 0, 0, 0);
        v90 = _mm_load_si128((const __m128i *)&v147);
        v167 = v80;
        *(__m128i *)v166 = v90;
        v168 = v177;
        sub_227C560(v169, v166);
        v169[0] = v146;
        sub_227B7A0(v169);
        LOWORD(v171) = 260;
        v169[0] = (void *)v143.m128_u64[0];
        v142 = v142 & 0xFFFFFFFF00000000LL | 5;
        v88 = (void *)operator new(0x40u);
        sub_2220590(v88, v169, (unsigned int)v142, v145);
        v89 = v163[0];
        if ( v163[0] != (void *)v144.m128_u64[0] )
LABEL_181:
          operator delete(v89);
LABEL_182:
        LOBYTE(v166[1]) |= 1u;
        LOBYTE(v169[1]) |= 1u;
        v166[0] = nullptr;
        v169[0] = v88;
      }
      else
      {
        v81 = (void ***)((char *)v175 + v177);
        if ( (unsigned __int64)v176 >= v177 + 8 )
        {
          v57 = (unsigned __int64)*v81;
          v177 += 8LL;
          v82 = 64;
          LOBYTE(v83) = 8 - v179;
          goto LABEL_173;
        }
        v178 = 0;
        v85 = (_DWORD)v176 - v177;
        if ( (_DWORD)v176 == (_DWORD)v177 )
        {
          LODWORD(v179) = 0;
          v83 = 8 - v78;
          goto LABEL_180;
        }
        v86 = 0;
        v57 = 0;
        while ( 1 )
        {
          v57 |= (unsigned __int64)*((unsigned __int8 *)v81 + v86) << (8 * (unsigned __int8)v86);
          v178 = v57;
          if ( v85 - 1 == v86 )
            break;
          ++v86;
        }
        v82 = 8 * v85;
        v83 = 8 - v179;
        LODWORD(v179) = 8 * v85;
        v177 += v85;
        if ( v83 > 8 * v85 )
        {
LABEL_180:
          v145 = off_2C02AD8;
          v150 = _mm_loadh_ps((const double *)off_2BB2600);
          v145 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v57);
          v166[0] = &v167;
          v147.m128_u64[0] = (unsigned __int64)&v167;
          v170 = 0;
          v169[0] = &off_2BEBE68;
          v146 = &off_2BEBE68;
          v166[1] = nullptr;
          LOBYTE(v167) = 0;
          LODWORD(v169[1]) = 0;
          v172 = 0;
          v173 = 1;
          v171 = 0;
          v174 = v166;
          sub_227B8B0(v169, 0, 0, 0);
          v87 = _mm_load_si128((const __m128i *)&v150);
          v164 = v83;
          *(__m128i *)v163 = v87;
          v165 = v179;
          sub_227C560(v169, v143.m128_u64[0]);
          v169[0] = v146;
          sub_227B7A0(v169);
          v169[0] = v166;
          LOWORD(v171) = 260;
          v151 = v151 & 0xFFFFFFFF00000000LL | 5;
          v88 = (void *)operator new(0x40u);
          sub_2220590(v88, v169, (unsigned int)v151, v145);
          v89 = v166[0];
          if ( v166[0] != (void *)v147.m128_u64[0] )
            goto LABEL_181;
          goto LABEL_182;
        }
LABEL_173:
        LOBYTE(v166[1]) &= ~1u;
        LODWORD(v179) = v82 + v78 - 8;
        v178 = v57 >> v83;
        LOBYTE(v169[1]) &= ~1u;
        v77 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v78 + 56)) & v57) << v78) | v79);
        v166[0] = v77;
LABEL_161:
        LODWORD(v169[0]) = (_DWORD)v77;
      }
      sub_A0AE90((__int64 *)&v155);
      v156 = (__int64)v169[1] & 1 | v156 & 0xFE;
      if ( ((__int64)v169[1] & 1) != 0 )
      {
        v84 = v169[0];
        v169[0] = nullptr;
        v155 = v84;
      }
      else
      {
        LODWORD(v155) = v169[0];
      }
      sub_A0AE90((__int64 *)v169);
      v57 = (unsigned __int64)v166;
      sub_A0AE70((__int64 *)v166);
      if ( (v156 & 1) != 0 )
      {
        v120 = v155;
        LOBYTE(v166[1]) |= 1u;
        v155 = nullptr;
        v166[0] = v120;
        goto LABEL_122;
      }
      v75 |= ((unsigned __int8)v155 & 0x7F) << v76;
      if ( ((unsigned __int8)v155 & 0x80) == 0 )
      {
        LOBYTE(v166[1]) &= ~1u;
        LODWORD(v166[0]) = v75;
        goto LABEL_122;
      }
      v76 += 7;
      if ( v76 != 35 )
        continue;
      break;
    }
    v116 = std::_V2::generic_category((std::_V2 *)v166);
    v169[0] = &v170;
    v152 = v152 & 0xFFFFFFFF00000000LL | 0x54;
    v117 = v152;
    v118 = (__m128i *)operator new(0x11u);
    v119 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
    v118[1].m128i_i8[0] = 0;
    v169[0] = v118;
    *v118 = v119;
    *(_QWORD *)&v170 = 16;
    v169[1] = &word_10;
    sub_22205D0(v163, v169, v117, v116);
    if ( v169[0] != &v170 )
      operator delete(v169[0]);
    LOBYTE(v166[1]) |= 1u;
    v166[0] = v163[0];
LABEL_122:
    sub_A0AE90((__int64 *)&v155);
    if ( ((__int64)v166[1] & 1) != 0 )
    {
      v138 = v166[0];
      v141 = (__int64 *)v166;
      v5 = (__int64 *)v140;
      v166[0] = nullptr;
      v163[0] = v138;
LABEL_293:
      sub_A05760(v169, (_QWORD **)v163);
      if ( v163[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v163[0] + 8LL))(v163[0]);
      if ( qword_2CD8AA0 )
      {
LABEL_291:
        v140 = 3;
        goto LABEL_133;
      }
LABEL_296:
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
      goto LABEL_291;
    }
    if ( LODWORD(v166[0]) == 8 )
    {
      v91 = sub_13A17E0((__int64)v141, (__int64)&v175);
      if ( !(_DWORD)v91 )
        goto LABEL_149;
      goto LABEL_186;
    }
    if ( LODWORD(v166[0]) == 9 )
    {
      v91 = sub_13A1B50((std::_V2 *)v141, (__int64)&v175);
      if ( !(_DWORD)v91 )
        goto LABEL_149;
LABEL_186:
      v141 = (__int64 *)v166;
      v5 = (__int64 *)v140;
      v140 = v91;
      goto LABEL_133;
    }
    if ( LODWORD(v166[0]) )
    {
      sub_A0BAF0((__int64 *)&v155, (__int64)&v175);
      if ( v155 )
      {
        v141 = (__int64 *)v166;
        v163[0] = v155;
        v5 = (__int64 *)v140;
        v155 = nullptr;
        sub_A05760(v169, (_QWORD **)v163);
        if ( v163[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v163[0] + 8LL))(v163[0]);
        if ( !qword_2CD8AA0 )
          sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
        v140 = 4;
        if ( v155 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v155 + 8LL))(v155);
        goto LABEL_133;
      }
LABEL_149:
      v8 = (unsigned __int64)v53;
      sub_A0AE90(v53);
      continue;
    }
    break;
  }
  sub_202B890(v169, &v175, 0);
  if ( (v171 & 1) != 0 )
  {
    v139 = v169[0];
    v141 = (__int64 *)v166;
    v169[0] = nullptr;
    v5 = (__int64 *)v140;
    v163[0] = v139;
    sub_A0E8E0((_QWORD **)v163);
    if ( v163[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v163[0] + 8LL))(v163[0]);
    v140 = 3;
    sub_139FE70();
    sub_A0B130((__int64)v169);
  }
  else
  {
    if ( BYTE8(v162) )
    {
      v92 = v161[1];
      v93 = v161[0];
      v143.m128_u64[0] = (unsigned __int64)v161[1];
      if ( BYTE8(v170) )
      {
        v124 = v161[0];
        v161[0] = v169[0];
        v125 = v169[1];
        *(_OWORD *)v169 = 0;
        v161[1] = v125;
        v126 = v170;
        *(_QWORD *)&v170 = 0;
        *(_QWORD *)&v162 = v126;
        if ( v93 != v92 )
        {
          v144.m128_u64[0] = (unsigned __int64)v166;
          do
          {
            while ( 1 )
            {
              v127 = (_QWORD *)v124[9];
              v128 = (_QWORD *)v124[8];
              if ( v127 != v128 )
              {
                do
                {
                  while ( 1 )
                  {
                    v129 = (_QWORD *)v128[1];
                    if ( v129 == v128 + 3 )
                      break;
                    operator delete(v129);
                    v128 += 5;
                    if ( v128 == v127 )
                      goto LABEL_261;
                  }
                  v128 += 5;
                }
                while ( v127 != v128 );
LABEL_261:
                v128 = (_QWORD *)v124[8];
              }
              if ( v128 )
                operator delete(v128);
              v130 = (_QWORD *)v124[4];
              if ( v130 != v124 + 6 )
                operator delete(v130);
              v131 = (_QWORD *)v124[2];
              v132 = (_QWORD *)v124[1];
              if ( v131 != v132 )
              {
                if ( &_pthread_key_create )
                {
                  do
                  {
                    v133 = (volatile signed __int32 *)v132[1];
                    if ( v133 )
                    {
                      if ( !_InterlockedSub(v133 + 2, 1u) )
                      {
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 16LL))(v133);
                        if ( !_InterlockedSub(v133 + 3, 1u) )
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 24LL))(v133);
                      }
                    }
                    v132 += 2;
                  }
                  while ( v131 != v132 );
                }
                else
                {
                  do
                  {
                    v135 = (_DWORD *)v132[1];
                    if ( v135 )
                    {
                      v136 = v135[2];
                      v135[2] = v136 - 1;
                      if ( v136 == 1 )
                      {
                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v135 + 16LL))(v135);
                        v134 = v135[3];
                        v135[3] = v134 - 1;
                        if ( v134 == 1 )
                          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v135 + 24LL))(v135);
                      }
                    }
                    v132 += 2;
                  }
                  while ( v132 != v131 );
                }
                v132 = (_QWORD *)v124[1];
              }
              if ( !v132 )
                break;
              v124 += 11;
              operator delete(v132);
              if ( v124 == (_QWORD *)v143.m128_u64[0] )
                goto LABEL_285;
            }
            v124 += 11;
          }
          while ( v124 != (_QWORD *)v143.m128_u64[0] );
LABEL_285:
          v53 = (__int64 *)v144.m128_u64[0];
        }
        if ( v93 )
          operator delete(v93);
      }
      else
      {
        BYTE8(v162) = 0;
        if ( v161[0] != (void *)v143.m128_u64[0] )
        {
          do
          {
            while ( 1 )
            {
              v94 = (_QWORD *)v93[9];
              v95 = (_QWORD *)v93[8];
              if ( v94 != v95 )
              {
                do
                {
                  while ( 1 )
                  {
                    v96 = (_QWORD *)v95[1];
                    if ( v96 == v95 + 3 )
                      break;
                    operator delete(v96);
                    v95 += 5;
                    if ( v95 == v94 )
                      goto LABEL_194;
                  }
                  v95 += 5;
                }
                while ( v94 != v95 );
LABEL_194:
                v95 = (_QWORD *)v93[8];
              }
              if ( v95 )
                operator delete(v95);
              v97 = (_QWORD *)v93[4];
              if ( v97 != v93 + 6 )
                operator delete(v97);
              v98 = (_QWORD *)v93[2];
              v99 = (_QWORD *)v93[1];
              if ( v98 != v99 )
              {
                if ( &_pthread_key_create )
                {
                  do
                  {
                    v100 = (volatile signed __int32 *)v99[1];
                    if ( v100 )
                    {
                      if ( !_InterlockedSub(v100 + 2, 1u) )
                      {
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 16LL))(v100);
                        if ( !_InterlockedSub(v100 + 3, 1u) )
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 24LL))(v100);
                      }
                    }
                    v99 += 2;
                  }
                  while ( v98 != v99 );
                }
                else
                {
                  do
                  {
                    v102 = (_DWORD *)v99[1];
                    if ( v102 )
                    {
                      v103 = v102[2];
                      v102[2] = v103 - 1;
                      if ( v103 == 1 )
                      {
                        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v102 + 16LL))(v102);
                        v101 = v102[3];
                        v102[3] = v101 - 1;
                        if ( v101 == 1 )
                          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v102 + 24LL))(v102);
                      }
                    }
                    v99 += 2;
                  }
                  while ( v99 != v98 );
                }
                v99 = (_QWORD *)v93[1];
              }
              if ( !v99 )
                break;
              v93 += 11;
              operator delete(v99);
              if ( v93 == (_QWORD *)v143.m128_u64[0] )
                goto LABEL_218;
            }
            v93 += 11;
          }
          while ( v93 != (_QWORD *)v143.m128_u64[0] );
        }
LABEL_218:
        if ( v161[0] )
          operator delete(v161[0]);
      }
    }
    else if ( BYTE8(v170) )
    {
      BYTE8(v162) = 1;
      v161[0] = v169[0];
      v114 = v169[1];
      *(_OWORD *)v169 = 0;
      v161[1] = v114;
      v115 = v170;
      *(_QWORD *)&v170 = 0;
      *(_QWORD *)&v162 = v115;
    }
    sub_A0B130((__int64)v169);
    if ( BYTE8(v162) )
    {
      v185 = v161;
      goto LABEL_149;
    }
    v141 = v53;
    v5 = (__int64 *)v140;
    if ( !qword_2CD8AA0 )
      sub_2230020(&qword_2CD8AA0, sub_139FCD0, sub_139FE30);
    v140 = 6;
  }
LABEL_133:
  sub_A0AE90(v141);
LABEL_34:
  if ( BYTE8(v162) )
  {
    v38 = (__int64 *)v161[0];
    v141 = (__int64 *)v161[1];
    if ( v161[1] != v161[0] )
    {
      do
      {
        while ( 1 )
        {
          v39 = (_QWORD *)v38[9];
          v40 = (_QWORD *)v38[8];
          if ( v39 != v40 )
          {
            do
            {
              while ( 1 )
              {
                v41 = (_QWORD *)v40[1];
                if ( v41 == v40 + 3 )
                  break;
                operator delete(v41);
                v40 += 5;
                if ( v39 == v40 )
                  goto LABEL_80;
              }
              v40 += 5;
            }
            while ( v39 != v40 );
LABEL_80:
            v40 = (_QWORD *)v38[8];
          }
          if ( v40 )
            operator delete(v40);
          v42 = (__int64 *)v38[4];
          if ( v42 != v38 + 6 )
            operator delete(v42);
          v43 = (_QWORD *)v38[2];
          v44 = (_QWORD *)v38[1];
          if ( v43 != v44 )
          {
            if ( &_pthread_key_create )
            {
              do
              {
                while ( 1 )
                {
                  v45 = (volatile signed __int32 *)v44[1];
                  if ( v45 )
                  {
                    if ( !_InterlockedSub(v45 + 2, 1u) )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
                      if ( !_InterlockedSub(v45 + 3, 1u) )
                        break;
                    }
                  }
                  v44 += 2;
                  if ( v43 == v44 )
                    goto LABEL_93;
                }
                v44 += 2;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 24LL))(v45);
              }
              while ( v43 != v44 );
            }
            else
            {
              do
              {
                v47 = (_DWORD *)v44[1];
                if ( v47 )
                {
                  v48 = v47[2];
                  v47[2] = v48 - 1;
                  if ( v48 == 1 )
                  {
                    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v47 + 16LL))(v47);
                    v46 = v47[3];
                    v47[3] = v46 - 1;
                    if ( v46 == 1 )
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v47 + 24LL))(v47);
                  }
                }
                v44 += 2;
              }
              while ( v44 != v43 );
            }
LABEL_93:
            v44 = (_QWORD *)v38[1];
          }
          if ( !v44 )
            break;
          v38 += 11;
          operator delete(v44);
          if ( v38 == v141 )
            goto LABEL_96;
        }
        v38 += 11;
      }
      while ( v141 != v38 );
LABEL_96:
      v38 = (__int64 *)v161[0];
    }
    if ( v38 )
      operator delete(v38);
  }
  v23 = v182;
  v24 = &v182[32 * (unsigned int)v183];
  if ( v182 != (_BYTE *)v24 )
  {
    v141 = v5;
    do
    {
      while ( 1 )
      {
        v24 -= 4;
        v25 = (volatile signed __int32 **)v24[1];
        v26 = (volatile signed __int32 **)v24[2];
        v27 = v25;
        if ( v26 != v25 )
        {
          if ( &_pthread_key_create )
          {
            do
            {
              while ( 1 )
              {
                v28 = v25[1];
                if ( v28 )
                {
                  if ( !_InterlockedSub(v28 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
                    if ( !_InterlockedSub(v28 + 3, 1u) )
                      break;
                  }
                }
                v25 += 2;
                if ( v26 == v25 )
                  goto LABEL_45;
              }
              v25 += 2;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 24LL))(v28);
            }
            while ( v26 != v25 );
          }
          else
          {
            do
            {
              v33 = v25[1];
              if ( v33 )
              {
                v34 = *((_DWORD *)v33 + 2);
                *((_DWORD *)v33 + 2) = v34 - 1;
                if ( v34 == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
                  v32 = *((_DWORD *)v33 + 3);
                  *((_DWORD *)v33 + 3) = v32 - 1;
                  if ( v32 == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 24LL))(v33);
                }
              }
              v25 += 2;
            }
            while ( v26 != v25 );
          }
LABEL_45:
          v27 = (volatile signed __int32 **)v24[1];
        }
        if ( !v27 )
          break;
        operator delete(v27);
        if ( v23 == v24 )
          goto LABEL_48;
      }
    }
    while ( v23 != v24 );
LABEL_48:
    v5 = v141;
    v24 = v182;
  }
  if ( v24 != (_QWORD *)v184 )
    free(v24);
  v29 = v180[1];
  v30 = v180[0];
  if ( v180[1] != v180[0] )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        while ( 1 )
        {
          v31 = (volatile signed __int32 *)v30[1];
          if ( v31 )
          {
            if ( !_InterlockedSub(v31 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
              if ( !_InterlockedSub(v31 + 3, 1u) )
                break;
            }
          }
          v30 += 2;
          if ( v29 == v30 )
            goto LABEL_59;
        }
        v30 += 2;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 24LL))(v31);
      }
      while ( v29 != v30 );
    }
    else
    {
      do
      {
        v36 = (_DWORD *)v30[1];
        if ( v36 )
        {
          v37 = v36[2];
          v36[2] = v37 - 1;
          if ( v37 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 16LL))(v36);
            v35 = v36[3];
            v36[3] = v35 - 1;
            if ( v35 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v36 + 24LL))(v36);
          }
        }
        v30 += 2;
      }
      while ( v29 != v30 );
    }
LABEL_59:
    v30 = v180[0];
  }
  if ( v30 )
    operator delete(v30);
LABEL_8:
  sub_FC2AF0(v157);
  sub_FD6C20((__int64)v186);
  if ( v159[0] != v5 + 2 )
    operator delete(v159[0]);
  return (unsigned int)v140;
}
