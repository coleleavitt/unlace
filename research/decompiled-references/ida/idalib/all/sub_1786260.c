__int64 __fastcall sub_1786260(__int64 *a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __m128i *v5; // r13
  __int64 *v6; // r14
  unsigned int v7; // ebx
  __int64 *v8; // r12
  __int16 v9; // ax
  _BYTE *v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rax
  char v24; // r12
  __int64 v25; // rdx
  unsigned int v26; // ecx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  unsigned int *v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rdx
  unsigned __int32 v36; // r14d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rax
  _WORD *v47; // rbx
  __int64 v48; // rax
  int v49; // r14d
  unsigned int v50; // ebp
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned __int8 v53; // cl
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r9
  unsigned int v61; // r8d
  __int64 v62; // rdi
  int v63; // r11d
  __int64 v64; // rcx
  __int64 *v65; // rax
  __int64 v66; // r15
  __int64 v67; // rsi
  __int64 *v68; // rbx
  __int64 v69; // r13
  void **v70; // r12
  unsigned __int64 v71; // r14
  __m128i si128; // xmm1
  __int64 v73; // rax
  __int64 v74; // rdx
  char *v75; // rdx
  const __m128i *v76; // rcx
  __m128i *v77; // rax
  __int64 v78; // rax
  __int64 v80; // rsi
  int i; // esi
  int v82; // edi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  void **v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  unsigned int v94; // ebp
  __int64 v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  _QWORD *v100; // r15
  __int64 v101; // rbp
  size_t v102; // rax
  __int64 v103; // rax
  _OWORD *v104; // rsi
  _QWORD *v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  unsigned __int8 v109; // dl
  __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  __int64 *v113; // rdx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // r15
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rbp
  __int64 v121; // r8
  __int64 v122; // r9
  unsigned __int64 *v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rbp
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  _QWORD *v131; // rax
  void **v132; // [rsp+0h] [rbp-21D8h]
  __int64 v133; // [rsp+0h] [rbp-21D8h]
  unsigned __int64 v134; // [rsp+0h] [rbp-21D8h]
  unsigned __int64 v135; // [rsp+0h] [rbp-21D8h]
  __int64 v136; // [rsp+8h] [rbp-21D0h]
  __int64 *v137; // [rsp+18h] [rbp-21C0h]
  __int64 v138; // [rsp+18h] [rbp-21C0h]
  __int64 v139; // [rsp+20h] [rbp-21B8h]
  unsigned int v140; // [rsp+20h] [rbp-21B8h]
  _BYTE *v141; // [rsp+28h] [rbp-21B0h]
  __int64 v142; // [rsp+30h] [rbp-21A8h]
  __m128i *v143; // [rsp+30h] [rbp-21A8h]
  unsigned __int64 v144; // [rsp+30h] [rbp-21A8h]
  __int64 *v145; // [rsp+38h] [rbp-21A0h]
  __int64 *v146; // [rsp+40h] [rbp-2198h]
  unsigned int v147; // [rsp+4Ch] [rbp-218Ch]
  unsigned int v148; // [rsp+54h] [rbp-2184h] BYREF
  __int64 v149; // [rsp+58h] [rbp-2180h] BYREF
  unsigned __int64 v150; // [rsp+60h] [rbp-2178h] BYREF
  __int64 v151; // [rsp+68h] [rbp-2170h] BYREF
  void **v152; // [rsp+70h] [rbp-2168h] BYREF
  __int64 *v153; // [rsp+78h] [rbp-2160h]
  unsigned int *v154; // [rsp+80h] [rbp-2158h]
  unsigned __int64 *v155; // [rsp+90h] [rbp-2148h] BYREF
  __int64 *v156; // [rsp+98h] [rbp-2140h]
  unsigned __int64 *v157; // [rsp+A0h] [rbp-2138h]
  void *v158[2]; // [rsp+B0h] [rbp-2128h] BYREF
  _QWORD v159[2]; // [rsp+C0h] [rbp-2118h] BYREF
  unsigned __int8 *v160[11]; // [rsp+D0h] [rbp-2108h] BYREF
  char v161; // [rsp+128h] [rbp-20B0h]
  unsigned int v162; // [rsp+130h] [rbp-20A8h]
  char v163; // [rsp+134h] [rbp-20A4h]
  __m128i v164; // [rsp+140h] [rbp-2098h] BYREF
  __int64 v165; // [rsp+150h] [rbp-2088h]
  _QWORD v166[2]; // [rsp+158h] [rbp-2080h] BYREF
  __int16 v167; // [rsp+168h] [rbp-2070h]
  __int128 v168; // [rsp+198h] [rbp-2040h]
  __int64 v169; // [rsp+1A8h] [rbp-2030h]
  __int64 *v170; // [rsp+1B0h] [rbp-2028h]
  __int64 v171; // [rsp+1B8h] [rbp-2020h]
  unsigned int v172; // [rsp+1C0h] [rbp-2018h]
  __int64 v173; // [rsp+1C8h] [rbp-2010h] BYREF
  __int128 v174; // [rsp+1D0h] [rbp-2008h]
  __int64 v175; // [rsp+1E0h] [rbp-1FF8h]
  void *ptr[2]; // [rsp+1F0h] [rbp-1FE8h] BYREF
  _BYTE v177[256]; // [rsp+200h] [rbp-1FD8h] BYREF
  unsigned int v178; // [rsp+300h] [rbp-1ED8h]
  unsigned int v179; // [rsp+304h] [rbp-1ED4h]

  v5 = (__m128i *)a1[68];
  if ( !v5 || (v6 = &v5[-5].m128i_i64[1], v5 == (__m128i *)&qword_48) )
    BUG();
  v7 = a2;
  v8 = a1;
  if ( (v5[-3].m128i_i8[4] & 0x7Fu) - 35 > 3 )
  {
    v10 = (_BYTE *)(v5[-2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)v10 + 17LL) & 4) == 0 )
      goto LABEL_53;
LABEL_7:
    v11 = *(_QWORD *)(a1[31] + 19072);
    v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_8;
  }
  LOBYTE(v9) = sub_B98200(&v5[-5].m128i_i64[1], a2);
  if ( (_BYTE)v9 )
    v9 = (*(unsigned __int8 *)(*(_QWORD *)(sub_B98760((__int64)&v5[-5].m128i_i64[1], a2) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) >> 2)
       & 1;
  v10 = *(_BYTE **)(v5[-2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10[17] & 4) != 0 || (_BYTE)v9 )
    goto LABEL_7;
LABEL_53:
  v148 = a2;
  v65 = (__int64 *)(v5[-2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL);
  v66 = *v65;
  if ( *(_BYTE *)(*v65 + 16) != 26 )
    v66 = sub_F63050(*v65, a2, v10, a5);
  v140 = v5[-3].m128i_u32[0];
  v138 = sub_1785FD0(a1, v148, v140);
  if ( !v138 )
    return 0;
  ptr[0] = v177;
  v178 = v148;
  v179 = v148;
  ptr[1] = (void *)0x800000000LL;
  v67 = *(_QWORD *)(v66 + 24);
  v152 = ptr;
  v154 = &v148;
  v153 = a1;
  sub_1782C90((__int64 **)&v152, v67);
  if ( (v5[-3].m128i_i8[4] & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B98200(&v5[-5].m128i_i64[1], v67) )
  {
    v164.m128i_i64[0] = sub_B987D0(&v5[-5].m128i_i64[1], v67);
    v91 = sub_C1BEF0((__int64)&v164, v67, v89, v90);
    v92 = a1[31];
    if ( ((*(_BYTE *)(v66 + 18) >> 3) & 3) == 2 )
      v93 = sub_A72DD0(v92, v91);
    else
      v93 = sub_A73030(v92, v91, 1u);
    sub_1782C90((__int64 **)&v152, v93);
  }
  v133 = v66 + 48 + 8LL * *(unsigned __int16 *)(v66 + 22);
  if ( v66 + 48 != v133 )
  {
    v143 = v5;
    v145 = &v5[-5].m128i_i64[1];
    v146 = v8;
    v147 = v7;
    v68 = (__int64 *)(v66 + 48);
    do
    {
      v69 = *v68;
      v70 = v152;
      v71 = (unsigned __int64)sub_A81910((_QWORD *)v153[31], *v68, *v154);
      sub_F1D250((__int64)v158, v69, 0, 0);
      si128 = _mm_load_si128((const __m128i *)v158);
      v165 = v159[0];
      v164 = si128;
      v166[0] = v71 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v73 = *((unsigned int *)v70 + 2);
      v74 = v73 + 1;
      if ( v73 + 1 > (unsigned __int64)*((unsigned int *)v70 + 3) )
      {
        v88 = v70 + 2;
        if ( *v70 > &v164 || (v141 = *v70, &v164 >= (__m128i *)((char *)*v70 + 32 * v73)) )
        {
          sub_2237220(v70, v88, v74, 32);
          v75 = (char *)*v70;
          v73 = *((unsigned int *)v70 + 2);
          v76 = &v164;
        }
        else
        {
          sub_2237220(v70, v88, v74, 32);
          v75 = (char *)*v70;
          v73 = *((unsigned int *)v70 + 2);
          v76 = (const __m128i *)((char *)*v70 + (char *)&v164 - v141);
        }
      }
      else
      {
        v75 = (char *)*v70;
        v76 = &v164;
      }
      ++v68;
      v77 = (__m128i *)&v75[32 * v73];
      *v77 = _mm_loadu_si128(v76);
      v77[1] = _mm_loadu_si128(v76 + 1);
      ++*((_DWORD *)v70 + 2);
    }
    while ( (__int64 *)v133 != v68 );
    v5 = v143;
    v6 = v145;
    v8 = v146;
    v7 = v147;
  }
  sub_F22AA0((unsigned __int64 *)&v164, v138);
  v78 = sub_1CDD580(v8, v164.m128i_i64[0], v148, ptr);
  v149 = v78;
  if ( (v78 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (v95 = v148, (unsigned __int8)sub_1E63CF0(v8, v148, v78, 1, 3532)) )
  {
    v12 = 0;
    v11 = 0;
    goto LABEL_66;
  }
  v100 = sub_F63270(*(_QWORD *)(v149 & 0xFFFFFFFFFFFFFFF0LL), v95, v96, v97, v98, v99);
  v101 = v8[30] + 552;
  v102 = j__strlen("promise_type");
  v103 = sub_6F3470(v101, "promise_type", v102);
  v165 = 0x800000000LL;
  v168 = 0;
  v164.m128i_i64[1] = (__int64)v166;
  v171 = v103;
  v172 = v148;
  v164.m128i_i64[0] = 0;
  v169 = 0;
  v170 = v8;
  sub_B85890(&v173, v103);
  a3 = 0.0;
  v174 = 0;
  v175 = 0x101010000LL;
  sub_1A395A0(&v164);
  v104 = &v164;
  v105 = v100 + 8;
  if ( !v100 )
    v105 = nullptr;
  sub_1A48440(v8, &v164, v105, 0);
  if ( v164.m128i_i32[0] != 2 )
    goto LABEL_133;
  v108 = *(_QWORD *)v164.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL;
  v109 = *(_BYTE *)(v108 + 28) & 0x7F;
  v110 = (v109 + 52) & 0x7F;
  if ( (unsigned __int8)v110 <= 1u || (unsigned int)v109 - 53 <= 1 )
    v108 = sub_B72ED0(*(_QWORD *)v164.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)(v108 + 28) & 0x7Fu) - 58 <= 9 )
  {
    v111 = *(_QWORD *)(v108 + 48);
    if ( v111 )
    {
      v112 = v111 & 0xFFFFFFFFFFFFFFF0LL;
      v113 = (__int64 *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v104 = (_OWORD *)v108;
      v112 = sub_A7AA70(v8[31], v108, 0, v110, v106, v107);
      v113 = (__int64 *)(v112 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v150 = v112;
    v156 = &v149;
    v155 = (unsigned __int64 *)v8;
    v157 = &v150;
    if ( sub_F63270(*v113, (__int64)v104, (__int64)v113, v110, v106, v107) )
    {
      v114 = sub_17824F0(&v155);
      if ( (unsigned __int8)sub_1E63CF0(v8, v140, v114, 1, 3529) )
      {
        v115 = 0;
        v11 = 0;
      }
      else
      {
        v11 = v150;
        v115 = v150 & 0xFFFFFFFFFFFFFFF0LL;
      }
      goto LABEL_121;
    }
    sub_168B9F0((__int64)v158, v8 + 1, v140, 0xF6Cu, 0);
    v117 = sub_17824F0(&v155);
    if ( v161 )
    {
      sub_AE9DF0(v160, v117, 8u);
    }
    else if ( v163 )
    {
      v127 = sub_168B9E0(v158);
      v130 = v159[0];
      if ( v159[0] )
        v130 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v159[0] + 32LL))(v159[0]);
      v151 = v130;
      v131 = sub_1587BC0(v127, &v151, v125, v126, v128, v129);
      sub_AE9DF0((unsigned __int8 **)(*v131 + 32LL * v162 + 8), v117, 8u);
    }
  }
  else
  {
LABEL_133:
    sub_168B9F0((__int64)v158, v8 + 1, v140, 0xF6Du, 0);
    if ( v161 )
    {
      sub_AE9DF0(v160, (__int64)v100, 0xAu);
    }
    else if ( v163 )
    {
      v120 = sub_168B9E0(v158);
      v123 = (unsigned __int64 *)v159[0];
      if ( v159[0] )
        v123 = (unsigned __int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v159[0] + 32LL))(v159[0]);
      v155 = v123;
      v124 = sub_1587BC0(v120, (__int64 *)&v155, v118, v119, v121, v122);
      sub_AE9DF0((unsigned __int8 **)(*v124 + 32LL * v162 + 8), (__int64)v100, 0xAu);
    }
  }
  v11 = 0;
  sub_15F7200(v158);
  v115 = 0;
LABEL_121:
  v135 = v115;
  sub_169D230((__int64)&v164);
  v12 = v135;
LABEL_66:
  if ( ptr[0] != v177 )
  {
    v134 = v12;
    free(ptr[0]);
    v12 = v134;
  }
LABEL_8:
  if ( !v12 )
    return 0;
  v13 = sub_A81910((_QWORD *)v8[31], v11, v7);
  v14 = sub_6F3470(v8[30] + 552, "__promise", 9u);
  v139 = sub_B731A0(v8[31], (__int64)v5, v5[-3].m128i_i32[0], v5[-3].m128i_i32[0], v14, v11, (__int64)v13, 0);
  v15 = v139;
  *(_BYTE *)(v139 + 29) |= 2u;
  sub_17CB060(v8, v139);
  if ( *(char *)(v139 + 28) < 0 )
    return 0;
  v18 = *((unsigned int *)v8 + 10);
  v19 = 0;
  if ( (_DWORD)v18 )
  {
    v16 = v8[4];
    v19 = *(_QWORD *)(v16 + 8 * v18 - 8);
  }
  v158[0] = v159;
  v158[1] = (void *)0x400000000LL;
  if ( (v5[-3].m128i_i8[4] & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B98200(v6, v139) )
  {
    v83 = *(_QWORD *)(sub_B8C1B0((__int64)v5) + 16);
    v84 = (v83 & 4) != 0 ? *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF8LL) : v83 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v84
      || v84 == 64
      || (v85 = *(_QWORD *)(v84 + 64)) == 0
      || (*(_BYTE *)(v85 + 10) & 0x20) == 0
      || (unsigned int)sub_B77890((__int64)v6) != 42 )
    {
      v86 = sub_19B4F60(v8, v7);
      if ( v86 == 1 || (v87 = sub_19249E0(v8, v7, 5, v86 & 0xFFFFFFFFFFFFFFFELL, 0), v87 == 1) )
      {
LABEL_89:
        v139 = 0;
        goto LABEL_90;
      }
      v15 = v87 & 0xFFFFFFFFFFFFFFFELL;
      sub_14B7B40((__int64)v158, v87 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  v20 = v5[3].m128i_i64[0];
  v22 = v20 + 8LL * (unsigned int)sub_B76070((__int64)v6, v15, v16, v17);
  if ( v22 == v20 )
    goto LABEL_35;
  v137 = v8;
  v136 = v19 + 200;
  v132 = ptr;
  do
  {
    v23 = *(_QWORD *)v20;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_33;
    v24 = *(_BYTE *)(v19 + 192) & 1;
    if ( !v24 )
    {
      v60 = *(_QWORD *)(v19 + 200);
      v61 = *(_DWORD *)(v19 + 208);
      v25 = v60;
      v62 = v61;
      if ( !v61 )
        goto LABEL_72;
      v63 = v61 - 1;
      v26 = (v61 - 1) & (((unsigned int)v23 >> 4) ^ ((unsigned int)v23 >> 9));
      v27 = (_QWORD *)(v60 + 16LL * v26);
      if ( v23 == *v27 )
        goto LABEL_46;
      if ( *v27 != -4096 )
      {
LABEL_75:
        for ( i = 1; ; i = v82 )
        {
          v82 = i + 1;
          v26 = v63 & (i + v26);
          v27 = (_QWORD *)(v25 + 16LL * v26);
          if ( v23 == *v27 )
            break;
          if ( *v27 == -4096 )
          {
            if ( !v24 )
            {
              v60 = *(_QWORD *)(v19 + 200);
              v61 = *(_DWORD *)(v19 + 208);
              goto LABEL_71;
            }
            goto LABEL_128;
          }
        }
        if ( v24 )
        {
          v25 = v136;
          goto LABEL_19;
        }
        v25 = *(_QWORD *)(v19 + 200);
        v62 = *(unsigned int *)(v19 + 208);
LABEL_46:
        v28 = 16 * v62;
        goto LABEL_20;
      }
LABEL_71:
      v25 = v60;
LABEL_72:
      v80 = 16LL * v61;
LABEL_73:
      sub_17841B0((__m128 *)v132, (_QWORD *)(v25 + v80), (_QWORD *)(v25 + v80), v19 + 192, 1);
      v29 = (unsigned int *)ptr[0];
      goto LABEL_21;
    }
    v25 = v136;
    v26 = ((unsigned __int8)((unsigned int)v23 >> 4) ^ (unsigned __int8)((unsigned int)v23 >> 9)) & 3;
    v27 = (_QWORD *)(v136
                   + 16LL
                   * (((unsigned __int8)((unsigned int)v23 >> 4) ^ (unsigned __int8)((unsigned int)v23 >> 9)) & 3));
    if ( v23 != *v27 )
    {
      v63 = 3;
      if ( *v27 != -4096 )
        goto LABEL_75;
LABEL_128:
      v25 = v136;
      v80 = 64;
      goto LABEL_73;
    }
LABEL_19:
    v28 = 64;
LABEL_20:
    sub_17841B0((__m128 *)v132, v27, (_QWORD *)(v28 + v25), v19 + 192, 1);
    v29 = (unsigned int *)ptr[0];
LABEL_21:
    if ( (*(_BYTE *)(v19 + 192) & 1) != 0 )
    {
      v30 = v136;
      v31 = 64;
    }
    else
    {
      v30 = *(_QWORD *)(v19 + 200);
      v31 = 16LL * *(unsigned int *)(v19 + 208);
    }
    v32 = (_QWORD *)(v30 + v31);
    sub_17841B0((__m128 *)v132, v32, v32, v19 + 192, 1);
    if ( v29 == ptr[0] )
      v33 = 16LL * *(unsigned int *)(v19 + 272);
    else
      v33 = 16LL * v29[2];
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 264) + v33 + 8) + 8LL);
    v35 = *(_QWORD *)(v34 + 48);
    v36 = v5[-3].m128i_u32[0];
    v37 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 43;
    if ( (unsigned int)v38 <= 1
      || (v64 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v64 <= 1)
      && (v142 = *(_QWORD *)(v34 + 48),
          v37 = sub_F63050(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL), v32, v35, v64),
          v35 = v142,
          v37) )
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)(v37 + 32);
        if ( (*(_BYTE *)(v37 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v37 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
          v39 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 43;
          if ( (unsigned int)v39 <= 1 )
            break;
          v40 = sub_F63050(v37, v32, v39, v38);
          v35 = *(_QWORD *)(v40 + 32);
          if ( (*(_BYTE *)(v40 + 18) & 0x10) == 0 )
            goto LABEL_29;
        }
      }
    }
LABEL_29:
    v41 = sub_190BDA0(v137, v34, v35, 1, v36, 0, v132, v136);
    if ( v41 == 1 )
      goto LABEL_89;
    v42 = LODWORD(v158[1]);
    v43 = v41 & 0xFFFFFFFFFFFFFFFELL;
    v44 = LODWORD(v158[1]) + 1LL;
    if ( v44 > HIDWORD(v158[1]) )
    {
      v144 = v43;
      sub_2237220(v158, v159, v44, 8);
      v42 = LODWORD(v158[1]);
      v43 = v144;
    }
    *((_QWORD *)v158[0] + v42) = v43;
    ++LODWORD(v158[1]);
LABEL_33:
    v20 += 8;
  }
  while ( v22 != v20 );
  v8 = v137;
LABEL_35:
  if ( LODWORD(v158[1]) )
  {
    v45 = v5[-3].m128i_u32[0];
    v46 = sub_C08D70((_QWORD *)v8[31], v45, (_QWORD *)v158[0], LODWORD(v158[1]), v45, v21);
    v164.m128i_i32[0] = 0;
    v164.m128i_i64[1] = 0;
    v47 = (_WORD *)v46;
    v48 = *(_QWORD *)(v139 + 48);
    v166[1] = v139;
    LODWORD(v166[0]) = 0;
    v165 = v48;
    v167 = 0;
    v49 = *(_DWORD *)(v139 + 24);
    if ( v47 )
    {
      if ( (*v47 & 0x1FF) == 0x35 )
      {
        v94 = sub_EEC140((unsigned __int64)v47);
        v51 = sub_EEB7E0((unsigned __int64)v47, v45, a3);
        v52 = v94;
        v53 = 1;
      }
      else
      {
        v50 = sub_EEC140((unsigned __int64)v47);
        v51 = sub_EEB7E0((unsigned __int64)v47, v45, a3);
        v52 = v50;
        v53 = 0;
      }
    }
    else
    {
      v52 = *(_DWORD *)(v139 + 24);
      v51 = v52;
      v53 = 3;
    }
    v156 = (__int64 *)__PAIR64__(v52, v51);
    LOWORD(v155) = v53;
    HIDWORD(v155) = v49;
    sub_1A19220((unsigned int)ptr, (_DWORD)v8, (unsigned int)&v164, (unsigned int)&v155, v158[0], v158[1], 0, 0);
    if ( LODWORD(ptr[0]) )
    {
      v54 = sub_1A1D600((unsigned int)ptr, (_DWORD)v8, (unsigned int)&v164, (unsigned int)&v155, v158[0], v158[1], 0);
      if ( v54 == 1 )
      {
        sub_B88650(v139, 1);
      }
      else
      {
        v55 = v54 & 0xFFFFFFFFFFFFFFFELL;
        if ( v55 )
        {
          v116 = sub_19A3EF0(v8, v55);
          sub_B73850(v139, v116);
          *(_BYTE *)(v139 + 96) = *(_BYTE *)(v139 + 96) & 0x9F | 0x20;
          sub_17C8350(v8, v139);
        }
      }
    }
    else
    {
      sub_17D5BF0(v8, v139);
    }
    sub_1A0BB10(ptr);
  }
  else
  {
    sub_17D5BF0(v8, v139);
  }
  sub_B94AD0(v5, v139, v56, v57, v58, v59);
LABEL_90:
  if ( v158[0] != v159 )
    free(v158[0]);
  return v139;
}
