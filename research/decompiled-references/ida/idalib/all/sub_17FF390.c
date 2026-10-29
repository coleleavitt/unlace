void *__fastcall sub_17FF390(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  unsigned int *v33; // r14
  unsigned __int64 v34; // rax
  unsigned int v35; // r15d
  __int64 v36; // rax
  unsigned __int64 *v37; // r14
  unsigned __int64 *v38; // rbx
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // rax
  _QWORD *v41; // r15
  _QWORD *v42; // rbp
  _QWORD *v43; // rdi
  void *v44; // rdi
  void **v45; // rbp
  void **v46; // r15
  __int64 v47; // rax
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  int *v54; // rdx
  int *v55; // r8
  int *v56; // r15
  __int64 v57; // rax
  unsigned int v58; // r9d
  void *v59; // rax
  __m128i v60; // xmm1
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r14
  void *v71; // rax
  _QWORD *v72; // rax
  char *v73; // rsi
  void *v74; // rax
  unsigned __int64 *v75; // r13
  unsigned __int64 *v76; // r14
  void *v77; // rax
  void *v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rdi
  size_t v81; // rdx
  int *v82; // r15
  __int64 v83; // rdx
  __int64 v84; // rax
  int v85; // r13d
  char *v86; // rdi
  __int64 v87; // r14
  char *v88; // rcx
  __int64 v89; // rdx
  int v90; // [rsp+0h] [rbp-1288h]
  __int64 v91; // [rsp+8h] [rbp-1280h]
  int v92; // [rsp+10h] [rbp-1278h]
  int v93; // [rsp+14h] [rbp-1274h]
  unsigned __int64 *v94; // [rsp+18h] [rbp-1270h]
  void *v95; // [rsp+18h] [rbp-1270h]
  int *v96; // [rsp+18h] [rbp-1270h]
  unsigned int v97; // [rsp+18h] [rbp-1270h]
  int v98[2]; // [rsp+20h] [rbp-1268h]
  int v99[2]; // [rsp+28h] [rbp-1260h]
  unsigned __int64 v100; // [rsp+30h] [rbp-1258h]
  int *v101; // [rsp+38h] [rbp-1250h]
  int v102; // [rsp+40h] [rbp-1248h]
  int v103; // [rsp+48h] [rbp-1240h]
  unsigned int v104; // [rsp+48h] [rbp-1240h]
  int *v105; // [rsp+48h] [rbp-1240h]
  int v106; // [rsp+50h] [rbp-1238h]
  int v107; // [rsp+58h] [rbp-1230h]
  char v108[4]; // [rsp+5Ch] [rbp-122Ch] BYREF
  int v109[2]; // [rsp+60h] [rbp-1228h] BYREF
  int v110[8]; // [rsp+68h] [rbp-1220h] BYREF
  int v111[2]; // [rsp+88h] [rbp-1200h]
  int v112; // [rsp+90h] [rbp-11F8h]
  int v113; // [rsp+98h] [rbp-11F0h]
  int v114[2]; // [rsp+A0h] [rbp-11E8h] BYREF
  int v115[2]; // [rsp+A8h] [rbp-11E0h]
  void *ptr; // [rsp+B0h] [rbp-11D8h] BYREF
  int v117[2]; // [rsp+B8h] [rbp-11D0h]
  int v118[7]; // [rsp+C0h] [rbp-11C8h] BYREF
  __int16 v119; // [rsp+DCh] [rbp-11ACh]
  void *v120[2]; // [rsp+E0h] [rbp-11A8h]
  int v121[2]; // [rsp+F0h] [rbp-1198h]
  int v122; // [rsp+F8h] [rbp-1190h]
  int v123[6]; // [rsp+100h] [rbp-1188h] BYREF
  void *v124; // [rsp+118h] [rbp-1170h]
  int v125; // [rsp+120h] [rbp-1168h]
  int v126; // [rsp+128h] [rbp-1160h] BYREF
  char v127; // [rsp+130h] [rbp-1158h]
  int v128; // [rsp+138h] [rbp-1150h]
  int v129; // [rsp+140h] [rbp-1148h]
  int v130; // [rsp+148h] [rbp-1140h]
  void *v131; // [rsp+150h] [rbp-1138h]
  int v132; // [rsp+158h] [rbp-1130h]
  char v133; // [rsp+160h] [rbp-1128h]
  int v134; // [rsp+168h] [rbp-1120h]
  int v135; // [rsp+170h] [rbp-1118h]
  int v136; // [rsp+178h] [rbp-1110h]
  int v137; // [rsp+180h] [rbp-1108h]
  int v138; // [rsp+188h] [rbp-1100h]
  __int64 v139; // [rsp+190h] [rbp-10F8h] BYREF
  int v140; // [rsp+198h] [rbp-10F0h]
  __int64 v141; // [rsp+1A0h] [rbp-10E8h] BYREF
  __int64 v142; // [rsp+1A8h] [rbp-10E0h]
  __int64 v143; // [rsp+1B0h] [rbp-10D8h]
  void *v144; // [rsp+1B8h] [rbp-10D0h]
  __int64 v145; // [rsp+1C0h] [rbp-10C8h]
  int v146; // [rsp+1C8h] [rbp-10C0h] BYREF
  char v147; // [rsp+1D0h] [rbp-10B8h]
  __int64 *v148; // [rsp+1D8h] [rbp-10B0h] BYREF
  void *v149; // [rsp+1E0h] [rbp-10A8h]
  __int64 v150; // [rsp+1E8h] [rbp-10A0h]
  _QWORD v151[4]; // [rsp+1F0h] [rbp-1098h] BYREF
  void *v152; // [rsp+210h] [rbp-1078h]
  __int64 v153; // [rsp+218h] [rbp-1070h]
  __int64 v154; // [rsp+220h] [rbp-1068h]
  __int64 v155; // [rsp+228h] [rbp-1060h]
  __int64 v156; // [rsp+230h] [rbp-1058h]
  __int64 v157; // [rsp+238h] [rbp-1050h]
  __int64 v158; // [rsp+240h] [rbp-1048h]
  __int64 v159; // [rsp+248h] [rbp-1040h]
  __int64 v160; // [rsp+250h] [rbp-1038h]
  __int64 v161; // [rsp+258h] [rbp-1030h]
  __int64 v162; // [rsp+260h] [rbp-1028h]
  __int64 v163; // [rsp+268h] [rbp-1020h]
  __int64 v164; // [rsp+270h] [rbp-1018h]
  __int64 v165; // [rsp+278h] [rbp-1010h]
  __int64 v166; // [rsp+280h] [rbp-1008h]
  __int64 v167; // [rsp+288h] [rbp-1000h]
  __int64 v168; // [rsp+290h] [rbp-FF8h]
  __int64 v169; // [rsp+298h] [rbp-FF0h]
  __int64 v170; // [rsp+2A0h] [rbp-FE8h]
  __int16 v171; // [rsp+2A8h] [rbp-FE0h]
  __int64 v172; // [rsp+2B0h] [rbp-FD8h]
  __int64 v173[2]; // [rsp+2C0h] [rbp-FC8h] BYREF
  __int128 v174; // [rsp+2D0h] [rbp-FB8h]
  int v175[2]; // [rsp+7E0h] [rbp-AA8h] BYREF
  unsigned __int64 v176; // [rsp+7E8h] [rbp-AA0h]
  void *src[2]; // [rsp+7F0h] [rbp-A98h]
  unsigned __int8 *v178; // [rsp+800h] [rbp-A88h] BYREF
  __int64 v179; // [rsp+808h] [rbp-A80h]
  _BYTE v180[12]; // [rsp+810h] [rbp-A78h] BYREF
  __int16 v181; // [rsp+81Ch] [rbp-A6Ch]
  void *v182; // [rsp+820h] [rbp-A68h]
  void *v183; // [rsp+828h] [rbp-A60h]
  __int64 v184; // [rsp+830h] [rbp-A58h]
  __int64 v185; // [rsp+838h] [rbp-A50h]
  int v186; // [rsp+840h] [rbp-A48h]
  __int64 v187; // [rsp+848h] [rbp-A40h]
  __int64 v188; // [rsp+850h] [rbp-A38h]
  int v189; // [rsp+858h] [rbp-A30h]
  int *v190; // [rsp+860h] [rbp-A28h] BYREF
  __int64 v191; // [rsp+868h] [rbp-A20h]
  __int64 v192; // [rsp+870h] [rbp-A18h] BYREF
  __int16 v193; // [rsp+AB0h] [rbp-7D8h]
  __int64 v194; // [rsp+AB8h] [rbp-7D0h]
  __int64 *v195; // [rsp+AC0h] [rbp-7C8h]
  __int64 v196; // [rsp+AC8h] [rbp-7C0h]
  __int64 v197; // [rsp+AD0h] [rbp-7B8h] BYREF
  _QWORD v198[3]; // [rsp+AE0h] [rbp-7A8h] BYREF
  _QWORD v199[242]; // [rsp+AF8h] [rbp-790h] BYREF

  v8 = a4;
  v93 = a2;
  v91 = a3;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( (v9 & 0x400000) != 0 || !*(_QWORD *)v8 )
      break;
    v8 = *(_QWORD *)v8;
  }
  v10 = v8;
  if ( (v9 & 0x80u) != 0 )
    goto LABEL_10;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v10 + 360);
    if ( !v11 )
      goto LABEL_10;
    v12 = *(_BYTE *)(v11 + 8) & 0x7F;
    if ( v12 <= 0x12u )
      break;
    if ( ((v12 + 94) & 0x7Fu) <= 5 )
      goto LABEL_13;
    do
LABEL_10:
      v10 = *(_QWORD *)v10;
    while ( (*(_DWORD *)(v10 + 8) & 0x80u) != 0 );
  }
  a2 = 1LL << v12;
  if ( ((1LL << v12) & 0x40182) == 0 && v12 )
    goto LABEL_10;
LABEL_13:
  v13 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v11;
  v14 = *(_DWORD *)(a1 + 40);
  v15 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_QWORD *)v98 = v13;
  v16 = *(_QWORD *)(a1 + 512);
  v17 = *(_DWORD *)(a1 + 2632);
  v18 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)v99 = v16;
  v19 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = v14;
  v20 = *(_DWORD *)(a1 + 3688);
  *(_QWORD *)v111 = v15;
  *(_DWORD *)(a1 + 2632) = v20;
  v100 = __PAIR64__(v17, v19);
  v21 = sub_A7A420(v18, a2, v15, v19, a5, a6);
  v26 = sub_B94670(v21 + 40, v91, v22, v23, v24, v25);
  v29 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v26 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    *(_QWORD *)v109 = 0;
    goto LABEL_19;
  }
  if ( (v26 & 4) != 0 )
    v29 = (_QWORD *)*v29;
  *(_QWORD *)v109 = v29;
  if ( v29
    && ((sub_17B7670(a1, (__int64)v29, v8, 0, v27, v28), (*(_BYTE *)(*(_QWORD *)v109 + 28LL) & 0x7Fu) - 34 > 5)
     || (v30 = *(_QWORD *)(a1 + 248),
         v31 = *(_QWORD *)(v30 + 18720),
         LOWORD(v175[0]) = 0,
         v32 = sub_A71610(v30, v31, (unsigned __int16 *)v175),
         !sub_AAC110(v30, *(_QWORD *)(*(_QWORD *)v109 + 48LL), v32, 0))) )
  {
    sub_168B9F0((__int64)v175, (__int64 *)(a1 + 8), v93, 0x1658u, 0);
    v47 = sub_17BA610((__int64)v175, (__int64 *)v109);
    LOBYTE(v173[0]) = (**(_BYTE **)(a1 + 232) & 1) == 0;
    sub_1588420(v47, (unsigned __int8 *)v173);
    sub_15F7200(v175);
    sub_168B9F0((__int64)v175, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v109 + 24LL), 0x70u, 0);
    sub_15F7200(v175);
    v95 = *(void **)v109;
  }
  else
  {
LABEL_19:
    v33 = *(unsigned int **)(v91 + 16);
    v34 = j__strlen("__builtin_");
    if ( v34 > *v33 || v34 && memcmp(v33 + 4, "__builtin_", v34) )
      v35 = (**(_BYTE **)(a1 + 232) & 1) == 0 ? 7027 : 5576;
    else
      v35 = 6633;
    v101 = v114;
    memset(&v118[2], 0, 20);
    *(_QWORD *)v114 = 0;
    *(_QWORD *)v115 = 0;
    ptr = v118;
    *(_QWORD *)v117 = 0x100000000LL;
    v119 = 0;
    *(_OWORD *)v120 = 0;
    *(_QWORD *)v121 = 0;
    if ( a4
      && !*(_QWORD *)v109
      && (unsigned __int8)sub_FD3E40(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), v35, v93, *(_QWORD *)(a1 + 264)) > 3u )
    {
      v173[1] = 0x101010101LL;
      v174 = 0;
      v139 = v91;
      v173[0] = (__int64)off_2BC69F8;
      v140 = v93;
      sub_B85890(&v141, v91);
      sub_1A6BD60((unsigned int)v175, a1, (unsigned int)&v139, 0, a4, 0, (__int64)v173, 0, 0, 0, 0, 1);
      v73 = (char *)src[0];
      *(_QWORD *)v114 = *(_QWORD *)v175;
      *(_QWORD *)v115 = v176;
      if ( src[0] == &v178 )
      {
        v83 = LODWORD(src[1]);
        v84 = (unsigned int)v117[0];
        v85 = (int)src[1];
        if ( LODWORD(src[1]) <= (unsigned __int64)(unsigned int)v117[0] )
        {
          if ( LODWORD(src[1]) )
            memmove(ptr, src[0], 8LL * LODWORD(src[1]));
        }
        else
        {
          if ( LODWORD(src[1]) > (unsigned __int64)(unsigned int)v117[1] )
          {
            v117[0] = 0;
            sub_2237220(&ptr, v118, LODWORD(src[1]), 8);
            v88 = (char *)src[0];
            v83 = LODWORD(src[1]);
            v84 = 0;
            v86 = (char *)ptr;
            v73 = (char *)src[0];
          }
          else
          {
            v86 = (char *)ptr;
            v87 = 8LL * (unsigned int)v117[0];
            v88 = (char *)src[0];
            if ( v117[0] )
            {
              memmove(ptr, src[0], 8LL * (unsigned int)v117[0]);
              v88 = (char *)src[0];
              v84 = v87;
              v83 = LODWORD(src[1]);
              v73 = (char *)src[0] + v87;
              v86 = (char *)ptr + v87;
            }
          }
          v89 = 8 * v83;
          if ( v73 != &v88[v89] )
            memcpy(v86, v73, v89 - v84);
        }
        v117[0] = v85;
        LODWORD(src[1]) = 0;
      }
      else
      {
        if ( ptr != v118 )
        {
          free(ptr);
          v73 = (char *)src[0];
        }
        v74 = src[1];
        ptr = v73;
        src[1] = nullptr;
        *(_QWORD *)v117 = v74;
        src[0] = &v178;
      }
      v75 = (unsigned __int64 *)v120[1];
      *(_QWORD *)&v118[2] = v179;
      v76 = (unsigned __int64 *)v120[0];
      v94 = (unsigned __int64 *)v120[0];
      v118[4] = *(_DWORD *)v180;
      *(_QWORD *)&v118[5] = *(_QWORD *)&v180[4];
      v119 = v181;
      v77 = v182;
      v182 = nullptr;
      v120[0] = v77;
      v78 = v183;
      v183 = nullptr;
      v120[1] = v78;
      v79 = v184;
      v184 = 0;
      *(_QWORD *)v121 = v79;
      if ( v94 != v75 )
      {
        do
        {
          if ( *v76 )
          {
            v80 = v76[1];
            if ( v80 )
              sub_1580C40(v80, *v76);
          }
          v76 += 3;
        }
        while ( v75 != v76 );
      }
      if ( v94 )
        operator delete(v94);
      sub_17A1D90(v175);
    }
    sub_168B9F0((__int64)v175, (__int64 *)(a1 + 8), v93, v35, 0);
    if ( (_BYTE)v189 )
    {
      sub_AE9DF0(&v178, v91, 5u);
    }
    else if ( BYTE4(v190) )
    {
      v70 = sub_168B9E0(v175);
      v71 = src[0];
      if ( src[0] )
        v71 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)src[0] + 32LL))(src[0]);
      v173[0] = (__int64)v71;
      v72 = sub_1587BC0(v70, v173, v66, v67, v68, v69);
      sub_AE9DF0((unsigned __int8 **)(*v72 + 32LL * (unsigned int)v190 + 8), v91, 5u);
    }
    sub_15F7200(v175);
    if ( !*(_QWORD *)v114
      || v117[0] && *(_QWORD *)ptr && (v36 = sub_16C47B0(*(_QWORD *)ptr)) != 0 && (*(_BYTE *)(v36 + 29) & 2) != 0
      || (sub_168B9B0((__int64)v175, a1 + 8, 6007),
          sub_1A60AF0(
            a1,
            (int)v114,
            (int)v175,
            0,
            v49,
            v50,
            v90,
            v91,
            v92,
            (int)v94,
            v98[0],
            v99[0],
            v100,
            (int)v114,
            v102,
            v103,
            v106,
            v107,
            v109[0],
            v110[0],
            v110[2],
            v110[4],
            v110[6],
            v111[0],
            v112,
            v113,
            v114[0],
            v115[0],
            (int)ptr,
            v117[0],
            v118[0],
            v118[2],
            v118[4],
            v118[6],
            (int)v120[0],
            (int)v120[1],
            v121[0],
            v122,
            v123[0],
            v123[2],
            v123[4],
            (int)v124,
            v125,
            v126,
            v127,
            v128,
            v129,
            v130,
            v131,
            v132,
            v133,
            v134,
            v135,
            v136,
            v137,
            v138,
            v139,
            v140,
            v141,
            v142,
            v143,
            (int)v144,
            v145,
            v146,
            v147),
          !*(_QWORD *)v175)
      || !v176 )
    {
      v95 = *(void **)v109;
      if ( !*(_QWORD *)v109 )
      {
LABEL_63:
        sub_15DCD40((__int64)v173);
        v148 = v173;
        v139 &= 0xFFFFFFC000000000LL;
        v144 = &v146;
        v149 = v151;
        v141 = 0;
        v142 = 0;
        v143 = 0;
        v145 = 0x200000000LL;
        v150 = 0x200000000LL;
        v151[2] = 0;
        v151[3] = 0;
        v152 = nullptr;
        v153 = 0;
        v154 = 0;
        v155 = 0;
        v156 = 0;
        v157 = 0;
        v158 = 0;
        v159 = 0;
        v160 = 0;
        v161 = 0;
        v162 = 0;
        v163 = 0;
        v164 = 0;
        v165 = 0;
        v166 = 0;
        v167 = 0;
        v168 = 0;
        v169 = 0;
        v170 = 0;
        v171 &= 0xF000u;
        v51 = *(_QWORD *)(a1 + 248);
        v172 = 0;
        sub_15AE040((__int64)&v139, 7, v93, (__int64)v110, (__int64)v108, v51 + 17464);
        if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
        {
          qword_2CD8AE0[0] = 0;
          qword_2CD8AE0[1] = &qword_2CD8AE0[3];
          qword_2CD8AE0[2] = 0x200000000LL;
          __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
          __cxa_guard_release(&qword_2CD8AC8);
        }
        v199[2] = qword_2CD8AE0;
        *(_QWORD *)v175 = &v139;
        v185 = v156;
        v190 = (int *)&v192;
        v191 = 0x400000000LL;
        v176 = 0;
        *(_OWORD *)src = 0;
        v178 = nullptr;
        v179 = 0;
        memset(v180, 0, sizeof(v180));
        v182 = nullptr;
        LOBYTE(v193) = ((((unsigned int)v139 >> 12) & 0x7F) == 69) | v193 & 0xFE;
        v195 = &v197;
        v198[0] = v148;
        v198[1] = v199;
        v184 = 0;
        v186 = 8;
        v187 = 0;
        v188 = 0;
        v189 = 0;
        v194 = 0;
        v196 = 0x200000000LL;
        v198[2] = 0x200000000LL;
        memset(&v199[3], 0, 40);
        v193 &= 0xFC01u;
        v199[232] = 0;
        sub_15ABA00(
          (__int64)v123,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          nullptr,
          nullptr,
          0,
          0,
          0,
          nullptr,
          0,
          v93,
          v93,
          (__int64)v175,
          0,
          0,
          0,
          0);
        v52 = (unsigned int)v191;
        v53 = (unsigned int)v191 + 1LL;
        if ( v53 > HIDWORD(v191) )
        {
          v82 = v190;
          if ( v190 > v123 || v123 >= &v190[36 * (unsigned int)v191] )
          {
            sub_1497B50((__int64)&v190, v53);
            v54 = v190;
            v52 = (unsigned int)v191;
            v55 = v123;
          }
          else
          {
            sub_1497B50((__int64)&v190, v53);
            v54 = v190;
            v52 = (unsigned int)v191;
            v55 = (int *)((char *)v190 + (char *)v123 - (char *)v82);
          }
        }
        else
        {
          v54 = v190;
          v55 = v123;
        }
        v56 = &v54[36 * v52];
        *v56 = *v55;
        v56[1] = v55[1];
        v56[2] = v55[2];
        v57 = *((_QWORD *)v55 + 2);
        *((_QWORD *)v56 + 4) = 0x200000000LL;
        *((_QWORD *)v56 + 2) = v57;
        v58 = v55[8];
        v59 = v56 + 10;
        *((_QWORD *)v56 + 3) = v56 + 10;
        if ( v58 && v56 + 6 != v55 + 6 )
        {
          v81 = 8LL * v58;
          if ( v58 <= 2uLL
            || (v105 = v55,
                v97 = v58,
                sub_2237220(v56 + 6, v56 + 10, v58, 8),
                v55 = v105,
                v59 = *((void **)v56 + 3),
                v58 = v97,
                (v81 = 8LL * (unsigned int)v105[8]) != 0) )
          {
            v104 = v58;
            v96 = v55;
            memcpy(v59, *((const void **)v55 + 3), v81);
            v58 = v104;
            v55 = v96;
          }
          v56[8] = v58;
        }
        v60 = _mm_loadu_si128((const __m128i *)(v55 + 14));
        *(__m128i *)(v56 + 14) = v60;
        *(__m128i *)(v56 + 18) = _mm_loadu_si128((const __m128i *)(v55 + 18));
        *(__m128i *)(v56 + 22) = _mm_loadu_si128((const __m128i *)(v55 + 22));
        *(__m128i *)(v56 + 26) = _mm_loadu_si128((const __m128i *)(v55 + 26));
        *(__m128i *)(v56 + 30) = _mm_loadu_si128((const __m128i *)(v55 + 30));
        *((_QWORD *)v56 + 17) = *((_QWORD *)v55 + 17);
        LODWORD(v191) = v191 + 1;
        sub_147F500(
          (__int64 *)&v190[36 * (unsigned int)v191 - 30],
          *(char **)&v190[36 * (unsigned int)v191 - 30],
          (char *)v144,
          (char *)v144 + 8 * (unsigned int)v145);
        sub_15D8C50((__int64)v198, (__int64)&v148);
        LODWORD(v150) = 0;
        if ( v124 != &v126 )
          free(v124);
        *(_DWORD *)&v180[8] = 0;
        v182 = (void *)v91;
        HIDWORD(v184) = v93;
        LODWORD(v184) = v93;
        v64 = sub_17FF1A0((_QWORD *)a1, v8, (__int64)v175, 0.0, *(double *)v60.m128i_i64, v61, v62, v63);
        v95 = (void *)v64;
        *(_BYTE *)(v64 + 29) |= 2u;
        if ( *(char *)(v64 + 28) >= 0 )
          sub_17A9DF0(a1, v64);
        sub_147A7A0((char *)v175);
        if ( HIDWORD(v153) )
          free(v152);
        sub_15DCED0((__int64)v148, (__int64)&v148);
        if ( v149 != v151 )
          free(v149);
        if ( v144 != &v146 )
          free(v144);
        sub_15D7C30((__int64)v173);
      }
    }
    else
    {
      sub_1580C40(v176, *(unsigned __int64 *)v175);
      v95 = *(void **)v109;
      if ( !*(_QWORD *)v109 )
        goto LABEL_63;
    }
    v37 = (unsigned __int64 *)v120[1];
    v38 = (unsigned __int64 *)v120[0];
    if ( v120[1] != v120[0] )
    {
      do
      {
        v39 = *v38;
        if ( *v38 )
        {
          v40 = v38[1];
          if ( v40 )
          {
            if ( v39 < v40 || v39 > v40 + 14848 )
            {
              v41 = *(_QWORD **)(v39 + 528);
              v42 = &v41[8 * (unsigned __int64)*(unsigned int *)(v39 + 536)];
              if ( v41 != v42 )
              {
                do
                {
                  while ( 1 )
                  {
                    v42 -= 8;
                    v43 = (_QWORD *)v42[3];
                    if ( v43 == v42 + 5 )
                      break;
                    operator delete(v43);
                    if ( v41 == v42 )
                      goto LABEL_38;
                  }
                }
                while ( v41 != v42 );
LABEL_38:
                v42 = *(_QWORD **)(v39 + 528);
              }
              if ( v42 != (_QWORD *)(v39 + 544) )
                free(v42);
              v44 = *(void **)(v39 + 416);
              v45 = (void **)(v39 + 416);
              if ( v44 != (void *)(v39 + 432) )
                free(v44);
              v46 = (void **)(v39 + 96);
              do
              {
                while ( 1 )
                {
                  v45 -= 4;
                  if ( *v45 == v45 + 2 )
                    break;
                  operator delete(*v45);
                  if ( v46 == v45 )
                    goto LABEL_46;
                }
              }
              while ( v46 != v45 );
LABEL_46:
              operator delete((void *)v39, 0x3A0u);
            }
            else
            {
              v65 = *(unsigned int *)(v40 + 14976);
              *(_DWORD *)(v40 + 14976) = v65 + 1;
              *(_QWORD *)(v40 + 8 * v65 + 14848) = v39;
            }
          }
        }
        v38 += 3;
      }
      while ( v37 != v38 );
      v38 = (unsigned __int64 *)v120[0];
    }
    if ( v38 )
      operator delete(v38);
    if ( ptr != v101 + 8 )
      free(ptr);
  }
  if ( *(_QWORD *)v98 )
  {
    *(_QWORD *)(a1 + 544) = *(_QWORD *)v98;
    *(_QWORD *)(a1 + 512) = *(_QWORD *)v99;
    *(_QWORD *)(a1 + 9944) = *(_QWORD *)v111;
    *(_DWORD *)(a1 + 80) = v100;
    *(_DWORD *)(a1 + 2632) = HIDWORD(v100);
  }
  return v95;
}
