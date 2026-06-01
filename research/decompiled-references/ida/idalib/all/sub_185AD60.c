__m128i *__fastcall sub_185AD60(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const __m128i a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        char a13)
{
  __m128i v14; // xmm1
  char v15; // r14
  unsigned __int32 v16; // r15d
  __m128i si128; // xmm2
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rbp
  char v28; // dl
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdi
  __int64 *v32; // rbx
  unsigned int v33; // ecx
  __m128i *v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rsi
  _QWORD *v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v48; // rbp
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  char v54; // al
  __int64 v55; // rax
  __int64 *v56; // rbx
  __int64 v57; // rax
  char v58; // cl
  unsigned int v59; // edx
  __m128 v60; // xmm0
  __m128i v61; // xmm3
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  int v66; // ebp
  __int64 *v67; // rbx
  size_t v68; // rax
  __int64 v69; // rdi
  unsigned __int64 v70; // rax
  _DWORD *v71; // rax
  char v72; // al
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 *v75; // rsi
  void *v76; // rax
  int v77; // r8d
  int v78; // r9d
  __int64 v79; // rax
  __int64 v80; // rbp
  unsigned __int8 v81; // si
  int v82; // eax
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v91; // r13
  __int64 *i; // r15
  __int64 v93; // rcx
  __int64 *v94; // rbx
  __int64 *v95; // rbp
  __int64 *v96; // r13
  __int64 v97; // rdi
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // r15
  __int64 v101; // rcx
  unsigned __int64 v102; // rbp
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rsi
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int64 v109; // rbp
  void *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  _QWORD *v116; // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // [rsp-10h] [rbp-3A8h]
  __int64 v124; // [rsp-8h] [rbp-3A0h]
  __int64 v125; // [rsp+0h] [rbp-398h]
  int v126[2]; // [rsp+0h] [rbp-398h]
  int *v127; // [rsp+0h] [rbp-398h]
  int v128; // [rsp+8h] [rbp-390h]
  __m128i *v129; // [rsp+8h] [rbp-390h]
  int v130[2]; // [rsp+8h] [rbp-390h]
  __int64 v131; // [rsp+8h] [rbp-390h]
  unsigned __int64 v132; // [rsp+10h] [rbp-388h]
  int *v133; // [rsp+10h] [rbp-388h]
  _QWORD *v134; // [rsp+18h] [rbp-380h]
  __int64 v135; // [rsp+20h] [rbp-378h]
  int v136; // [rsp+28h] [rbp-370h]
  int v137; // [rsp+2Ch] [rbp-36Ch] BYREF
  int v138; // [rsp+30h] [rbp-368h] BYREF
  int v139; // [rsp+34h] [rbp-364h] BYREF
  int v140[2]; // [rsp+38h] [rbp-360h] BYREF
  int v141; // [rsp+40h] [rbp-358h]
  __int64 v142; // [rsp+48h] [rbp-350h] BYREF
  int v143[2]; // [rsp+50h] [rbp-348h] BYREF
  int v144; // [rsp+58h] [rbp-340h]
  int v145[2]; // [rsp+60h] [rbp-338h] BYREF
  int v146[2]; // [rsp+68h] [rbp-330h]
  int v147[4]; // [rsp+70h] [rbp-328h] BYREF
  int v148[2]; // [rsp+80h] [rbp-318h]
  int v149; // [rsp+88h] [rbp-310h]
  int v150[2]; // [rsp+90h] [rbp-308h] BYREF
  int v151[2]; // [rsp+98h] [rbp-300h]
  int v152[4]; // [rsp+A0h] [rbp-2F8h]
  int v153; // [rsp+B0h] [rbp-2E8h]
  int v154[2]; // [rsp+B8h] [rbp-2E0h]
  int v155[2]; // [rsp+C0h] [rbp-2D8h]
  int v156; // [rsp+C8h] [rbp-2D0h]
  int v157[2]; // [rsp+D0h] [rbp-2C8h] BYREF
  int v158[2]; // [rsp+D8h] [rbp-2C0h]
  int v159[2]; // [rsp+E0h] [rbp-2B8h]
  int v160[2]; // [rsp+E8h] [rbp-2B0h]
  int v161[2]; // [rsp+F0h] [rbp-2A8h]
  int v162[2]; // [rsp+F8h] [rbp-2A0h]
  int v163[2]; // [rsp+100h] [rbp-298h]
  int v164[2]; // [rsp+108h] [rbp-290h]
  int v165[2]; // [rsp+110h] [rbp-288h] BYREF
  __int64 v166; // [rsp+118h] [rbp-280h]
  int v167; // [rsp+120h] [rbp-278h]
  void *v168; // [rsp+128h] [rbp-270h]
  char v169; // [rsp+130h] [rbp-268h]
  int v170[5]; // [rsp+138h] [rbp-260h] BYREF
  char v171; // [rsp+14Ch] [rbp-24Ch]
  void *v172; // [rsp+150h] [rbp-248h]
  int v173; // [rsp+158h] [rbp-240h]
  char v174; // [rsp+160h] [rbp-238h]
  int v175; // [rsp+168h] [rbp-230h]
  void *ptr[2]; // [rsp+170h] [rbp-228h] BYREF
  __int64 v177; // [rsp+180h] [rbp-218h]
  int v178; // [rsp+188h] [rbp-210h]
  int v179; // [rsp+190h] [rbp-208h]
  int v180; // [rsp+198h] [rbp-200h]
  int v181; // [rsp+1A0h] [rbp-1F8h]
  int v182; // [rsp+1A8h] [rbp-1F0h]
  int v183; // [rsp+1B0h] [rbp-1E8h]
  int v184; // [rsp+1B8h] [rbp-1E0h]
  __int64 v185; // [rsp+1C0h] [rbp-1D8h]
  int v186; // [rsp+1C8h] [rbp-1D0h]
  char v187; // [rsp+1D0h] [rbp-1C8h]
  __int64 v188; // [rsp+200h] [rbp-198h] BYREF
  _QWORD *v189; // [rsp+208h] [rbp-190h]
  __int64 v190; // [rsp+210h] [rbp-188h]
  _OWORD v191[5]; // [rsp+218h] [rbp-180h] BYREF
  __int64 v192; // [rsp+268h] [rbp-130h]
  __int64 *v193; // [rsp+270h] [rbp-128h]
  __m128i v194; // [rsp+278h] [rbp-120h]
  __int64 v195; // [rsp+288h] [rbp-110h]
  __int64 v196; // [rsp+290h] [rbp-108h]
  __int64 v197; // [rsp+298h] [rbp-100h]
  __int64 v198; // [rsp+2A0h] [rbp-F8h]
  int v199[2]; // [rsp+2B0h] [rbp-E8h] BYREF
  __int64 *v200; // [rsp+2B8h] [rbp-E0h] BYREF
  __int64 v201; // [rsp+2C0h] [rbp-D8h]
  _OWORD v202[5]; // [rsp+2C8h] [rbp-D0h] BYREF
  unsigned __int64 v203; // [rsp+318h] [rbp-80h]
  __int64 *v204; // [rsp+320h] [rbp-78h]
  __m128i v205; // [rsp+328h] [rbp-70h]
  __int64 v206; // [rsp+338h] [rbp-60h]
  __int64 v207; // [rsp+340h] [rbp-58h]
  __int64 v208; // [rsp+348h] [rbp-50h]
  __int64 v209; // [rsp+350h] [rbp-48h]

  v139 = a3;
  v14 = _mm_loadu_si128(&a8);
  *(_QWORD *)v140 = a2;
  v136 = a12;
  v138 = a4;
  v128 = a6;
  v15 = a13;
  LOBYTE(v137) = a5;
  v16 = a8.m128i_u32[2];
  *(__m128i *)v147 = v14;
  *(_QWORD *)v148 = a9;
  if ( (a8.m128i_i8[0] & 7) == 3 )
  {
    a2 = (__int64 *)a1[68];
    if ( ((_BYTE)a2[1] & 0x7Fu) - 59 <= 2 )
    {
      a2 -= 8;
      if ( a2 )
      {
        v48 = a1[31];
        v49 = sub_A7A9D0(v48, (__int64)a2, a9, a4, a5, a6);
        a2 = (__int64 *)(*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                       | ((unsigned __int8)*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v49) & 7);
        *(_QWORD *)v147 = sub_B87BD0(v48 + 17536, (__int64)a2);
      }
    }
  }
  si128 = _mm_load_si128((const __m128i *)v147);
  v188 = 0;
  v191[4] = 0;
  v189 = v191;
  v190 = 0x800000000LL;
  v192 = 0;
  v193 = a1;
  v194 = si128;
  v195 = *(_QWORD *)v148;
  v196 = 0;
  v197 = 8;
  v198 = 65537;
  sub_1A395A0(&v188);
  BYTE2(v198) = 0;
  if ( *(_QWORD *)v140 )
  {
    sub_1A49A10(a1, &v188, *(_QWORD *)v140, 0, 0);
    a2 = *(__int64 **)v140;
    sub_183D6B0((__int64)a1, *(__int64 **)v140, (int *)&v188);
    v18 = a1[68];
  }
  else
  {
    v18 = a1[68];
    if ( ((*(_BYTE *)(v18 + 8) + 70) & 0x7Fu) <= 3 )
    {
      a2 = &v188;
      sub_1A48440(a1, &v188, a1[68], 0);
      v18 = a1[68];
    }
  }
  v125 = *(_QWORD *)(a7 + 8);
  if ( ((*(_BYTE *)(sub_B8EAA0(v18) + 8) + 70) & 0x7Fu) <= 3 )
  {
    v50 = sub_AB7570((_QWORD *)a1[31], v125);
    v51 = v189;
    v135 = v50;
    v23 = (unsigned __int64)&v189[(unsigned int)v190];
    if ( v189 == (_QWORD *)v23 )
      goto LABEL_15;
    while ( 1 )
    {
      v25 = *v51 & 0xFFFFFFFFFFFFFFF8LL;
      v54 = *(_BYTE *)(v25 + 28) & 0x7F;
      if ( v54 == 81 )
        break;
      if ( v54 != 28 )
      {
        if ( v54 != 63 )
          goto LABEL_34;
        v52 = *(_QWORD *)(v25 + 72);
        LOBYTE(v53) = 1;
LABEL_33:
        if ( (_BYTE)v137 != (_BYTE)v53 )
          goto LABEL_34;
        goto LABEL_38;
      }
      v52 = *(_QWORD *)(v25 + 64);
      if ( (_BYTE)v137 )
        goto LABEL_34;
LABEL_38:
      v134 = v51;
      v132 = *v51 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v126 = v23;
      v55 = sub_AB7570((_QWORD *)a1[31], v52);
      v23 = *(_QWORD *)v126;
      v25 = v132;
      v51 = v134;
      if ( v135 == v55 )
      {
        v56 = a1 + 1;
        sub_168B9F0((__int64)v199, v56, v16, 0x151Du, 0);
        ptr[0] = *(void **)a7;
        sub_1587DB0((__int64)v199, (__int64 *)ptr);
        sub_15F7200(v199);
        sub_168B9F0((__int64)v199, v56, *(_DWORD *)(v132 + 24), 0x1937u, 0);
        LODWORD(ptr[0]) = 1;
        sub_1587D10((__int64)v199, (int *)ptr);
        v34 = nullptr;
        sub_15F7200(v199);
        goto LABEL_23;
      }
LABEL_34:
      if ( (_QWORD *)v23 == ++v51 )
        goto LABEL_15;
    }
    v52 = *(_QWORD *)(v25 + 64);
    v53 = (*(__int64 *)(v25 + 48) >> 2) & 1;
    goto LABEL_33;
  }
  if ( !sub_E917A0(v125, (__int64)a2, v19, v20, v21, v22) )
    goto LABEL_15;
  if ( (_BYTE)v137 )
    goto LABEL_15;
  v26 = &v189[(unsigned int)v190];
  if ( v189 == v26 )
    goto LABEL_15;
  v27 = *v189 & 0xFFFFFFFFFFFFFFF8LL;
  v28 = *(_BYTE *)(v27 + 28) & 0x7F;
  v23 = (v28 + 73) & 0x7F;
  if ( (unsigned __int8)v23 > 0x1Au )
  {
LABEL_13:
    v32 = a1 + 1;
    if ( v28 == 28 || v28 == 33 )
    {
      v33 = 4902;
LABEL_50:
      sub_168B9F0((__int64)v199, v32, v16, v33, 0);
      ptr[0] = (void *)v194.m128i_i64[0];
      sub_15894B0((__int64)v199, (__int64 *)ptr);
      sub_15F7200(v199);
      v59 = *(_DWORD *)(v27 + 24);
      v34 = nullptr;
      sub_168B9F0((__int64)v199, v32, v59, 0x71u, 0);
      sub_15F7200(v199);
      goto LABEL_23;
    }
LABEL_49:
    v33 = 4904;
    goto LABEL_50;
  }
  v29 = 67117049;
  if ( !_bittest64(&v29, v23) )
  {
LABEL_48:
    v32 = a1 + 1;
    goto LABEL_49;
  }
  v30 = v189 + 1;
  v31 = 67117049;
  while ( v26 != v30 )
  {
    v27 = *v30 & 0xFFFFFFFFFFFFFFF8LL;
    v28 = *(_BYTE *)(v27 + 28) & 0x7F;
    v23 = (v28 + 73) & 0x7F;
    if ( (unsigned __int8)v23 > 0x1Au )
      goto LABEL_13;
    ++v30;
    if ( !_bittest64(&v31, v23) )
      goto LABEL_48;
  }
LABEL_15:
  if ( v15 && (v147[0] & 7) == 3 )
  {
    sub_168B9F0((__int64)v199, a1 + 1, v138, 0x1526u, 0);
    v34 = nullptr;
    sub_15F7200(v199);
    goto LABEL_23;
  }
  v34 = (__m128i *)sub_16A2930((__int64)a1, a7, 0, v23, v24, v25);
  *(_QWORD *)v145 = sub_15AB9E0(a7, (_QWORD *)a1[31], v35, v36, v37, v38);
  *(_QWORD *)v146 = v39;
  if ( !v34 )
  {
    if ( (unsigned __int8)sub_1855850(
                            a1,
                            v138,
                            (unsigned __int8)v137,
                            a7,
                            (__int64)&a8,
                            v16,
                            (__m128i)0LL,
                            *(double *)v14.m128i_i64,
                            0,
                            0) )
      goto LABEL_23;
    if ( (_DWORD)v188 != 2 )
      goto LABEL_20;
    goto LABEL_42;
  }
  if ( !a10 )
  {
    *(_QWORD *)v158 = &v138;
    *(_QWORD *)v159 = v145;
    *(_QWORD *)v160 = v147;
    *(_QWORD *)v161 = &v137;
    *(_QWORD *)v162 = &v139;
    *(_QWORD *)v163 = v140;
    *(_QWORD *)v157 = a1;
    *(_QWORD *)v164 = a11;
    if ( (unsigned __int8)sub_169F990((__int64)a1, a7, (unsigned __int64)v34) )
    {
      v34 = sub_1837B20((__int64)v157, 1u, (__m128)0LL, v14);
      goto LABEL_23;
    }
    v60 = 0;
    v61 = _mm_loadu_si128(&a8);
    *(_QWORD *)v199 = 0;
    v127 = v199;
    v200 = (__int64 *)v202;
    v201 = 0x800000000LL;
    v202[4] = 0;
    v206 = a9;
    v203 = 0;
    v204 = a1;
    v205 = v61;
    v207 = 0;
    v208 = 0;
    v209 = 0x101010000LL;
    sub_1A395A0(v199);
    if ( !(_BYTE)v136 )
      BYTE2(v209) = 0;
    v65 = a1[68];
    if ( ((*(_BYTE *)(v65 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v83 = *(_QWORD *)(v65 - 16);
      if ( v83 )
        v84 = v83 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v84 = sub_A7AA70(a1[31], v65 - 64, v65, v62, v63, v64);
      v203 = v84;
    }
    sub_1A48440(a1, v199, v34, 0);
    if ( (unsigned __int8)sub_1855850(
                            a1,
                            v138,
                            (unsigned __int8)v137,
                            a7,
                            (__int64)&a8,
                            v16,
                            (__m128i)0LL,
                            *(double *)v14.m128i_i64,
                            (__int64)v199,
                            0) )
      goto LABEL_96;
    if ( (_DWORD)v201 || !v15 )
    {
      if ( (_DWORD)v201 )
        goto LABEL_88;
    }
    else
    {
      ptr[0] = sub_B9AA40((_QWORD *)a1[31], a1[68], v138, *(__int64 *)v147);
      sub_1743080((__int64)&v200, (__int64)ptr[0]);
      v199[0] = 2;
      if ( (_DWORD)v201 )
      {
        v66 = 2;
        goto LABEL_62;
      }
    }
    if ( (a8.m128i_i8[0] & 7) != 3 )
    {
      v69 = a1[68];
      if ( (a8.m128i_i8[0] & 7) == 0 )
      {
        v70 = a8.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(a1[29] + 1) & 0x20) != 0 )
        {
          if ( v70 )
          {
            v71 = *(_DWORD **)(v70 + 16);
            if ( *v71 == 4 && v71[4] == 1937007975 )
            {
              if ( sub_B8EBA0(v69) && (v34->m128i_i8[8] & 0x7F) == 0 )
              {
                if ( (unsigned __int8)sub_142E840(a1[30], (unsigned __int64)byte_133A2C5) )
                {
                  if ( v138 )
                  {
                    v82 = sub_1021680(a1[34], v138);
                    if ( v82 )
                    {
                      if ( v82 != 3 )
                      {
LABEL_96:
                        v34 = nullptr;
                        goto LABEL_70;
                      }
                    }
                  }
                }
              }
              v69 = a1[68];
            }
          }
        }
      }
      v72 = *(_BYTE *)(v69 + 8);
      v73 = v69 - 64;
      v60 = 0;
      *(_QWORD *)v151 = 0x101010101LL;
      *(_QWORD *)v150 = &off_2BC6AF0;
      LOBYTE(v153) = v137;
      if ( (v72 & 0x7Fu) - 59 >= 3 )
        v73 = 0;
      v74 = *(_QWORD *)(a7 + 8);
      BYTE1(v153) = v136;
      *(_OWORD *)v152 = 0;
      *(_QWORD *)v155 = v73;
      *(_QWORD *)v154 = v74;
      v133 = v165;
      sub_1A6BD60(
        (unsigned int)v165,
        (_DWORD)a1,
        (unsigned int)v199 + 120,
        v208,
        v140[0],
        a7,
        (__int64)v150,
        1,
        0,
        0,
        0,
        1);
      v75 = a1 + 1;
      if ( *(_QWORD *)v165 )
      {
        sub_168B9B0((__int64)ptr, (__int64)v75, 4276);
        sub_AE9DF0((unsigned __int8 **)ptr, a8.m128i_i64[0], 9u);
        sub_AE9DF0((unsigned __int8 **)ptr, (__int64)v34, 0xCu);
        sub_AE9DF0((unsigned __int8 **)ptr, 0, 2u);
        v76 = *(void **)a7;
        LOBYTE(v144) = 1;
        *(_QWORD *)v143 = v76;
        sub_AEC610((__int64 *)ptr, (__int64 *)v143);
        sub_1A60AF0(
          (int)a1,
          (int)v165,
          (int)ptr,
          1,
          v77,
          v78,
          (int)v199,
          (int)v145,
          (int)v165,
          (int)v134,
          v135,
          v136,
          v138,
          v140[0],
          v141,
          v142,
          v143[0],
          v144,
          v145[0],
          v146[0],
          v147[0],
          v147[2],
          v148[0],
          v149,
          v150[0],
          v151[0],
          v152[0],
          v152[2],
          v153,
          v154[0],
          v155[0],
          v156,
          v157[0],
          v158[0],
          v159[0],
          v160[0],
          v161[0],
          v162[0],
          v163[0],
          v164[0],
          v165[0],
          v166,
          v167,
          (int)v168,
          v169,
          v170[0],
          v170[2],
          v170[4],
          v172,
          v173,
          v174,
          v175,
          (int)ptr[0],
          (int)ptr[1],
          v177,
          v178,
          v179,
          v180,
          v181,
          v182,
          v183,
          v184,
          v185,
          v186,
          v187);
        if ( ptr[0] && ptr[1] )
          sub_1580C40((unsigned __int64)ptr[1], (unsigned __int64)ptr[0]);
        v79 = sub_183AA90((__int64)v133);
        v80 = v79;
        if ( v79 )
        {
          if ( (*(_BYTE *)(v79 + 28) & 0x7Fu) - 59 <= 2 && sub_B97450(v79) )
          {
            v102 = sub_B72690(v80 + 64);
            if ( v102 )
              v102 -= 64LL;
            if ( v171 )
            {
              v60 = 0;
              v177 = 0;
              *(_OWORD *)ptr = 0;
              v117 = sub_183A570(v129);
              sub_E90890((__int64)ptr, (_QWORD *)a1[31], v166, v117);
              *(_QWORD *)v145 = sub_E911A0((__int64 *)ptr, (_QWORD *)a1[31], v118, v119, v120, v121);
              *(_QWORD *)v146 = v122;
              if ( HIDWORD(v177) )
                free(ptr[1]);
            }
            v105 = a1[68];
            *(_QWORD *)v130 = a1[31];
            if ( v105 )
              v105 -= 64;
            v106 = sub_A7A9D0(a1[31], v105, a1[31], v101, v103, v104);
            v107 = sub_B87BD0(
                     *(_QWORD *)v130 + 17536LL,
                     *(_QWORD *)&byte_8[v106 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[v106 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v106) & 7);
            *(_QWORD *)v148 = 0;
            *(_QWORD *)v147 = v107;
            v108 = sub_1A3D890(a1, v102);
            if ( v108 )
            {
              while ( 1 )
              {
                v109 = v108 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v108 & 4) == 0 )
                {
                  v110 = (void *)(v109 | (*(_BYTE *)(v109 + 29) >> 5) & 3);
                  goto LABEL_132;
                }
                if ( !v109 )
                  break;
                ptr[0] = (void *)(*(_QWORD *)v109 | (*(_BYTE *)(*(_QWORD *)v109 + 29LL) >> 5) & 3);
                sub_1743080((__int64)(v127 + 2), (__int64)ptr[0]);
                v199[0] = 2;
                v108 = *(_QWORD *)(v109 + 8);
                if ( !v108 )
                  goto LABEL_130;
              }
              v110 = nullptr;
LABEL_132:
              ptr[0] = v110;
              sub_1743080((__int64)(v127 + 2), (__int64)v110);
              v199[0] = 2;
            }
LABEL_130:
            sub_1A43500(v127);
          }
          else
          {
            v81 = *(_BYTE *)(v80 + 29);
            *(_QWORD *)v147 = *(_QWORD *)(v80 + 40);
            ptr[0] = (void *)(v80 | (v81 >> 5) & 3);
            sub_1743080((__int64)(v127 + 2), (__int64)ptr[0]);
            v199[0] = 2;
          }
          sub_17A1D90(v133);
          goto LABEL_88;
        }
        v34 = sub_1837B20((__int64)v157, 1u, (__m128)0LL, v14);
      }
      else
      {
        sub_168B9F0((__int64)ptr, v75, v16, 0x10B2u, 0);
        v142 = a8.m128i_i64[0];
        v99 = sub_15894B0((__int64)ptr, &v142);
        v100 = v99;
        if ( *(_BYTE *)(v99 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v99 + 32), (__int64)v34, 0xCu);
        }
        else if ( *(_BYTE *)(v99 + 132) )
        {
          v131 = sub_168B9E0((_QWORD *)v99);
          v115 = *(_QWORD *)(v100 + 16);
          if ( v115 )
            v115 = (*(__int64 (__fastcall **)(_QWORD, double))(*(_QWORD *)v115 + 32LL))(*(_QWORD *)(v100 + 16), 0.0);
          *(_QWORD *)v143 = v115;
          v116 = sub_1587BC0(v131, (__int64 *)v143, v111, v112, v113, v114);
          sub_AE9DF0((unsigned __int8 **)(*v116 + 32LL * *(unsigned int *)(v100 + 128) + 8), (__int64)v34, 0xCu);
        }
        *(_QWORD *)v143 = *(_QWORD *)a7;
        sub_1587DB0(v100, (__int64 *)v143);
        sub_15F7200(ptr);
        v34 = sub_1837B20((__int64)v157, 1u, (__m128)0LL, v14);
      }
      sub_17A1D90(v133);
      goto LABEL_70;
    }
LABEL_88:
    v66 = v199[0];
    if ( v199[0] == 5 )
      goto LABEL_69;
LABEL_62:
    if ( (_BYTE)v137 )
    {
      if ( !sub_183EF90((__int64)v127) )
      {
        if ( v66 != 2 || (*(_BYTE *)(sub_16C47B0(*v200 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) != 0x39 )
        {
          v94 = a1 + 1;
          sub_168B9F0((__int64)ptr, v94, v16, 0x152Au, 0);
          sub_15F7200(ptr);
          v95 = v200;
          v96 = &v200[(unsigned int)v201];
          if ( v96 != v200 )
          {
            do
            {
              v97 = *v95++;
              v98 = sub_16C47B0(v97 & 0xFFFFFFFFFFFFFFF8LL);
              sub_168B9F0((__int64)ptr, v94, *(_DWORD *)(v98 + 24), 0x193Au, 0);
              sub_15F7200(ptr);
            }
            while ( v96 != v95 );
          }
          goto LABEL_69;
        }
        goto LABEL_104;
      }
    }
    else if ( (_BYTE)v136 && sub_183EF90((__int64)v127) )
    {
      v85 = a1 + 1;
      sub_168B9F0((__int64)ptr, v85, v16, 0x1520u, 0);
      sub_15F7200(ptr);
      v86 = sub_16C47B0(*v200 & 0xFFFFFFFFFFFFFFF8LL);
      sub_168B9F0((__int64)ptr, v85, *(_DWORD *)(v86 + 24), 0x193Au, 0);
LABEL_68:
      sub_15F7200(ptr);
LABEL_69:
      v34 = sub_1837B20((__int64)v157, 1u, v60, v14);
LABEL_70:
      sub_169D230((__int64)v127);
      goto LABEL_23;
    }
    if ( v66 == 2 && (*(_BYTE *)(sub_16C47B0(*v200 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x18 )
    {
      v67 = a1 + 1;
      sub_168B9F0((__int64)ptr, v67, v16, 0x1513u, 0);
      *(_QWORD *)v165 = *(_QWORD *)a7;
      sub_1587DB0((__int64)ptr, (__int64 *)v165);
      sub_15F7200(ptr);
      sub_168B9F0((__int64)ptr, v67, *(_DWORD *)a7, 0x17D8u, 0);
      v68 = j__strlen("namespace ");
      sub_9EC740((__int64)v165, *(_DWORD *)a7, "namespace ", v68, 0);
      sub_1589170((__int64)ptr, v165);
      if ( v168 != v170 )
        operator delete(v168);
      goto LABEL_68;
    }
LABEL_104:
    v34 = sub_1837B20((__int64)v157, 0, v60, v14);
    if ( (v147[0] & 7) != 3
      || (*(_WORD *)((char *)&v209 + 3) = 0, !(unsigned __int8)sub_185AC30(
                                                                 (__int64)a1,
                                                                 (__int64)v34,
                                                                 v87,
                                                                 v88,
                                                                 v89,
                                                                 v90)) )
    {
      v91 = &v200[(unsigned int)v201];
      for ( i = v200; v91 != i; ++i )
      {
        while ( 1 )
        {
          ptr[0] = nullptr;
          if ( !(unsigned __int8)sub_1853A70(
                                   (__int64)a1,
                                   v34,
                                   *i & 0xFFFFFFFFFFFFFFF8LL,
                                   (__int64)&v188,
                                   (unsigned __int64 *)ptr) )
            break;
          if ( v91 == ++i )
            goto LABEL_70;
        }
        v93 = *i;
        sub_1846B70((__int64)a1, *(__int64 *)v140, (__int64)v34, v93 & 0xFFFFFFFFFFFFFFF8LL, (__int64)ptr[0]);
      }
    }
    goto LABEL_70;
  }
  if ( (_DWORD)v188 == 2 )
  {
LABEL_42:
    v57 = sub_16C47B0(*v189 & 0xFFFFFFFFFFFFFFF8LL);
    v58 = *(_BYTE *)(v57 + 28) & 0x7F;
    if ( ((v58 + 61) & 0x7Fu) <= 1 || v58 == 47 )
      sub_1CC2540(a1, v16, v57, 0);
  }
LABEL_20:
  v40 = a1[68];
  v41 = (_QWORD *)a1[31];
  if ( (_BYTE)v137 )
  {
    v34 = (__m128i *)sub_B9A8C0(v41, v40, v138, v128, *(__int64 *)v145, *(__int64 *)v146, v16, a8.m128i_i64[0], a10);
  }
  else
  {
    v42 = sub_B9A790(v41, v40, v138, *(__int64 *)v145, *(__int64 *)v146, a8.m128i_i64, a10);
    v44 = v123;
    v45 = v124;
    v34 = (__m128i *)v42;
  }
  v46 = 32 * (v139 & 3u);
  v34[1].m128i_i8[13] = (32 * (v139 & 3)) | v34[1].m128i_i8[13] & 0x9F;
  sub_B94AD0((__m128i *)a1[68], (__int64)v34, v46, v43, v44, v45);
  LOWORD(v199[0]) = 1;
  sub_1836B60(a1, *(__int64 *)v140, v34, a11, v199, (__m128)0LL, v14);
LABEL_23:
  sub_169D230((__int64)&v188);
  return v34;
}
