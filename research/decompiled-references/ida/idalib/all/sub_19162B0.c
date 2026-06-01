__int64 __fastcall sub_19162B0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  char v11; // r12
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int *v14; // rbx
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  _QWORD *v20; // rdi
  _QWORD *v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r13
  __int64 *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r13
  __int64 v43; // rax
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // rdx
  unsigned __int64 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // r15
  __int64 v59; // rsi
  __int64 *v60; // rdi
  unsigned __int8 v61; // al
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r10
  __int64 v67; // r13
  unsigned __int8 v68; // al
  unsigned __int64 v69; // rsi
  char v70; // al
  _QWORD *v71; // rsi
  void **v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rsi
  char v75; // al
  __int64 v76; // rcx
  __int64 v77; // r10
  unsigned int v78; // eax
  __int64 v79; // r8
  __int64 v80; // r15
  __int64 v81; // rax
  unsigned __int64 v82; // r15
  unsigned __int64 v83; // rdx
  unsigned __int64 *v84; // rax
  void ***v85; // r15
  void ***v86; // rdi
  void **v87; // r13
  unsigned int v88; // edx
  __int64 *v89; // rsi
  unsigned int v90; // ecx
  __int64 v92; // rax
  unsigned int v93; // eax
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // r10
  unsigned __int64 *v97; // rdx
  unsigned int v98; // ecx
  __int64 v99; // r8
  __int64 v100; // r15
  __int64 v101; // rcx
  unsigned __int64 v102; // r15
  unsigned __int64 v103; // rdx
  unsigned __int64 *v104; // rdx
  unsigned __int64 v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // r15
  unsigned int v108; // edx
  _QWORD *v109; // rdx
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  __int64 v112; // r8
  _QWORD *v113; // rdx
  __int64 v114; // rdx
  unsigned int v115; // eax
  __int64 v116; // rax
  __int64 *v117; // rbp
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // r13
  __int64 v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // r13
  _BYTE *v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r13
  __int64 v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // rcx
  int v139; // eax
  __int64 v140; // r14
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  unsigned int *v144; // r12
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rbp
  __int64 v148; // rbx
  void *v149; // rdi
  unsigned int *v150; // [rsp+0h] [rbp-408h]
  __int64 v151; // [rsp+0h] [rbp-408h]
  __int64 v154; // [rsp+28h] [rbp-3E0h]
  char v156; // [rsp+37h] [rbp-3D1h]
  __int64 v157; // [rsp+48h] [rbp-3C0h]
  __int64 v158; // [rsp+48h] [rbp-3C0h]
  __int64 v159; // [rsp+48h] [rbp-3C0h]
  _QWORD *v160; // [rsp+58h] [rbp-3B0h]
  __int64 v161; // [rsp+58h] [rbp-3B0h]
  _QWORD *v162; // [rsp+60h] [rbp-3A8h]
  _QWORD *v163; // [rsp+60h] [rbp-3A8h]
  __int64 v164; // [rsp+68h] [rbp-3A0h]
  __int64 v165; // [rsp+78h] [rbp-390h] BYREF
  __int64 v166; // [rsp+80h] [rbp-388h] BYREF
  __int64 v167; // [rsp+88h] [rbp-380h] BYREF
  unsigned __int64 v168; // [rsp+90h] [rbp-378h] BYREF
  unsigned __int64 v169; // [rsp+98h] [rbp-370h] BYREF
  void *v170; // [rsp+A0h] [rbp-368h] BYREF
  __int64 v171; // [rsp+A8h] [rbp-360h]
  _BYTE v172[32]; // [rsp+B0h] [rbp-358h] BYREF
  void *v173; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v174; // [rsp+D8h] [rbp-330h]
  _BYTE v175[64]; // [rsp+E0h] [rbp-328h] BYREF
  __int64 v176[18]; // [rsp+120h] [rbp-2E8h] BYREF
  __int64 v177[22]; // [rsp+1B0h] [rbp-258h] BYREF
  __int64 (__fastcall **v178)(); // [rsp+260h] [rbp-1A8h] BYREF
  void *v179; // [rsp+268h] [rbp-1A0h] BYREF
  void **v180; // [rsp+270h] [rbp-198h]
  __int64 v181; // [rsp+278h] [rbp-190h]
  unsigned __int8 *v182; // [rsp+280h] [rbp-188h] BYREF
  __int64 v183; // [rsp+288h] [rbp-180h] BYREF
  unsigned int v184; // [rsp+290h] [rbp-178h]
  char v185; // [rsp+2D8h] [rbp-130h]
  unsigned int v186; // [rsp+2E0h] [rbp-128h]
  char v187; // [rsp+2E4h] [rbp-124h]
  void *v188[2]; // [rsp+308h] [rbp-100h] BYREF
  int v189; // [rsp+318h] [rbp-F0h]
  char v190; // [rsp+31Ch] [rbp-ECh]
  __int64 v191; // [rsp+320h] [rbp-E8h] BYREF
  __int64 v192; // [rsp+340h] [rbp-C8h]
  void *ptr; // [rsp+348h] [rbp-C0h]
  __int64 v194; // [rsp+350h] [rbp-B8h]
  _DWORD v195[26]; // [rsp+358h] [rbp-B0h] BYREF
  __int64 v196; // [rsp+3C0h] [rbp-48h]
  __int16 v197; // [rsp+3C8h] [rbp-40h]
  char v198; // [rsp+3CAh] [rbp-3Eh]

  v165 = *(_QWORD *)a3;
  v11 = *(_BYTE *)(*(_QWORD *)(v165 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v168 = sub_F6C500(v165, (unsigned int *)(a3 + 8), *(double *)a7.m128_u64);
  if ( (v11 & 4) == 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v165 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 48 )
    {
      v39 = 1;
      sub_168B9F0((__int64)&v178, (__int64 *)(a1 + 8), a2, 0x1144u, 0);
      v92 = sub_1605D30((__int64)&v178, &v165);
      sub_15884C0(v92, (__int64 *)&v168);
      sub_15F7200(&v178);
      return v39;
    }
    LODWORD(v179) = 4419;
    v178 = off_2BC64B0;
    v180 = (void **)&v168;
    if ( (unsigned __int8)sub_1E63C20(a1, a2, v165, 1, &v178) )
      return 1;
  }
  v13 = 3 * a5;
  v14 = a4;
  v15 = v175;
  v16 = v172;
  v173 = v175;
  v166 = v165;
  v174 = 0x400000000LL;
  v170 = v172;
  v171 = 0x400000000LL;
  v150 = &a4[2 * v13];
  if ( a4 == v150 )
  {
    v35 = 0;
    v34 = 0;
    v33 = v175;
LABEL_18:
    v36 = (__int64)v16;
    v37 = v35;
    v38 = sub_A63CE0(*(_QWORD **)(a1 + 248));
    v39 = sub_C0A240(*(_QWORD **)(a1 + 248), v38, a2, a3, (__int64)v33, v34, v36, v37, a6);
    goto LABEL_72;
  }
  v17 = (__int64)&v178;
  v156 = 0;
  while ( 1 )
  {
    v18 = v166;
    v19 = *(_BYTE *)(*(_QWORD *)(v166 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4;
    if ( !*((_BYTE *)v14 + 8) )
      break;
    v20 = *(_QWORD **)(a1 + 248);
    if ( v19 )
    {
      v166 = v20[2384];
    }
    else
    {
      v94 = sub_A72040(v20, v166);
      if ( !v94 )
      {
        v88 = v14[1];
        v89 = (__int64 *)(a1 + 8);
        v90 = 4416;
        goto LABEL_71;
      }
      v166 = *(_QWORD *)(v94 + 32);
    }
    v21 = *((_QWORD **)v14 + 2);
    v22 = sub_19146F0(a1, v21, v18, v17, (__int64)v15, v12, a7, a8);
    if ( v22 == 1 )
      goto LABEL_109;
    v25 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( ((*(_DWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL) >> 14) & 0xC) == 0
      && !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v21, v23, v24, (__int64)v15) )
    {
      v39 = 1;
      v93 = sub_EEB7E0(v25, (__int64)v21, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v178, (__int64 *)(a1 + 8), v93, 0x14C1u, 0);
      v177[0] = sub_EEC8C0(v25, a1 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v178, v177);
      sub_15F7200(&v178);
      goto LABEL_72;
    }
    v26 = (unsigned int)v174;
    v27 = *(_QWORD *)v14;
    v28 = (unsigned int)v174 + 1LL;
    v29 = (unsigned int)(4 * v171);
    if ( v28 > HIDWORD(v174) )
    {
      v154 = *(_QWORD *)v14;
      sub_2237220(&v173, v175, v28, 16);
      v26 = (unsigned int)v174;
      v27 = v154;
    }
    v30 = (__int64 *)((char *)v173 + 16 * v26);
    *v30 = v27;
    v30[1] = v29;
    v31 = (unsigned int)v171;
    v17 = HIDWORD(v171);
    LODWORD(v174) = v174 + 1;
    v32 = (unsigned int)v171 + 1LL;
    if ( v32 > HIDWORD(v171) )
    {
      sub_2237220(&v170, v172, v32, 8);
      v31 = (unsigned int)v171;
    }
    *((_QWORD *)v170 + v31) = v25;
    LODWORD(v171) = v171 + 1;
LABEL_16:
    v14 += 6;
    if ( v150 == v14 )
    {
      v33 = v173;
      v34 = (unsigned int)v174;
      v16 = v170;
      v35 = (unsigned int)v171;
      goto LABEL_18;
    }
  }
  if ( v19 )
  {
    v40 = *v14;
    v17 = HIDWORD(v174);
    if ( !*v14 )
      v40 = v14[1];
    v41 = *((_QWORD *)v14 + 2) | 2LL;
    v42 = v40;
    v43 = (unsigned int)v174;
    v44 = ((unsigned __int64)v14[1] << 32) | v42;
    v45 = (unsigned int)v174 + 1LL;
    if ( v45 > HIDWORD(v174) )
    {
      sub_2237220(&v173, v175, v45, 16);
      v43 = (unsigned int)v174;
    }
    v46 = (unsigned __int64 *)((char *)v173 + 16 * v43);
    *v46 = v44;
    v46[1] = v41;
    v47 = *(_QWORD *)(a1 + 248);
    LODWORD(v174) = v174 + 1;
    v166 = *(_QWORD *)(v47 + 19072);
    goto LABEL_16;
  }
  v48 = *v14;
  if ( (unsigned __int8)sub_1E63CF0(a1, v48, v166, 1, 4419) )
  {
LABEL_109:
    v39 = 1;
    goto LABEL_72;
  }
  v53 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v166 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v53 + 16) != 48 )
  {
    v88 = v14[1];
    v89 = (__int64 *)(a1 + 8);
    v90 = 4420;
LABEL_71:
    v39 = 1;
    sub_168B9F0((__int64)&v178, v89, v88, v90, 0);
    sub_1605D30((__int64)&v178, &v166);
    sub_15F7200(&v178);
    goto LABEL_72;
  }
  v58 = sub_F60F10(*v53, v48, v49, v50, v51, v52);
  if ( (*((_BYTE *)v58 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v59 = v58[13];
    v60 = (__int64 *)(v59 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    {
      sub_7052B0(v60, v59, v54, v55, v56, v57);
      v61 = (*(_BYTE *)(v58[16] + 1LL) & 0x10) != 0;
    }
    else
    {
      sub_7052B0(v60, v59, v54, v55, v56, v57);
      v61 = *(_BYTE *)(v58[16] + 1LL) & 1;
    }
    if ( !((unsigned __int8)v156 | v61) )
    {
      v62 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
      if ( v62 == 3 || v62 <= 1 )
      {
        v156 = 0;
      }
      else
      {
        sub_168B9F0(
          (__int64)&v178,
          (__int64 *)(a1 + 8),
          a2,
          ((*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0) + 5633,
          0);
        v115 = v14[1];
        LODWORD(v177[0]) = *a4;
        HIDWORD(v177[0]) = v115;
        v116 = sub_1587DB0((__int64)&v178, v177);
        sub_1605D30(v116, &v166);
        sub_15F7200(&v178);
        v156 = 1;
      }
    }
  }
  sub_18BBF60((__int64)v177, a1, *((_QWORD *)v14 + 2), *v14, 3);
  sub_1A48440(a1, v177, v58 + 8, 0);
  if ( LODWORD(v177[0]) != 2 )
  {
    if ( LODWORD(v177[0]) != 5 )
    {
LABEL_104:
      sub_168B9F0((__int64)&v178, (__int64 *)(a1 + 8), a2, 0x10B2u, 0);
      if ( v185 )
      {
        sub_AE9DF0(&v182, *((_QWORD *)v14 + 2), 5u);
      }
      else
      {
        if ( !v187 )
          goto LABEL_106;
        v124 = sub_168B9E0(&v178);
        v125 = (__int64)v180;
        if ( v180 )
          v125 = (*((__int64 (__fastcall **)(void **))*v180 + 4))(v180);
        v176[0] = v125;
        v126 = sub_1587BC0(v124, v176, v120, v121, v122, v123);
        v127 = *v126 + 32LL * v186;
        v128 = v127;
        v151 = *((_QWORD *)v14 + 2);
        if ( !*(_QWORD *)(v127 + 8) )
        {
          v138 = *(_QWORD *)(v127 + 16);
          v139 = *(_DWORD *)(v138 + 14976);
          if ( v139 )
          {
            v143 = (unsigned int)(v139 - 1);
            v144 = v14;
            *(_DWORD *)(v138 + 14976) = v143;
            v140 = *(_QWORD *)(v138 + 8 * v143 + 14848);
            v145 = *(unsigned int *)(v140 + 536);
            *(_BYTE *)v140 = 0;
            v146 = *(_QWORD *)(v140 + 528);
            *(_DWORD *)(v140 + 424) = 0;
            v147 = v146;
            v148 = v146 + (v145 << 6);
            while ( v147 != v148 )
            {
              v148 -= 64;
              v149 = *(void **)(v148 + 24);
              if ( v149 != (void *)(v148 + 40) )
                operator delete(v149);
            }
            v14 = v144;
            *(_DWORD *)(v140 + 536) = 0;
          }
          else
          {
            v140 = operator new(0x3A0u);
            *(_BYTE *)v140 = 0;
            v141 = v140 + 96;
            do
            {
              v142 = v141 + 16;
              *(_QWORD *)(v141 + 8) = 0;
              v141 += 32;
              *(_QWORD *)(v141 - 32) = v142;
              *(_BYTE *)(v141 - 16) = 0;
            }
            while ( v141 != v140 + 416 );
            *(_QWORD *)(v140 + 416) = v140 + 432;
            *(_QWORD *)(v140 + 424) = 0x800000000LL;
            *(_QWORD *)(v140 + 528) = v140 + 544;
            *(_QWORD *)(v140 + 536) = 0x600000000LL;
          }
          *(_QWORD *)(v128 + 8) = v140;
        }
        *(_BYTE *)(*(_QWORD *)(v128 + 8) + **(unsigned __int8 **)(v128 + 8) + 1LL) = 5;
        v129 = *(_BYTE **)(v128 + 8);
        v130 = (unsigned __int8)*v129;
        *v129 = v130 + 1;
        *(_QWORD *)&v129[8 * v130 + 16] = v151;
      }
      if ( v185 )
      {
        sub_AE9DF0(&v182, (__int64)v58, 0xAu);
      }
      else if ( v187 )
      {
        v135 = sub_168B9E0(&v178);
        v136 = (__int64)v180;
        if ( v180 )
          v136 = (*((__int64 (__fastcall **)(void **))*v180 + 4))(v180);
        v176[0] = v136;
        v137 = sub_1587BC0(v135, v176, v131, v132, v133, v134);
        sub_AE9DF0((unsigned __int8 **)(*v137 + 32LL * v186 + 8), (__int64)v58, 0xAu);
      }
LABEL_106:
      v176[0] = *(_QWORD *)v14;
      sub_1587DB0((__int64)&v178, v176);
      sub_15F7200(&v178);
    }
    v39 = 1;
    goto LABEL_108;
  }
  v63 = sub_16C47B0(*(_QWORD *)v177[1] & 0xFFFFFFFFFFFFFFF8LL);
  v66 = 0;
  v67 = v63;
  v68 = *(_BYTE *)(v63 + 28) & 0x7F;
  if ( (unsigned int)v68 - 49 > 2 )
  {
    if ( v68 != 32 )
      goto LABEL_104;
    v114 = *(unsigned int *)(v67 + 64);
    if ( !*(_QWORD *)(*(_QWORD *)(v67 + 56) + 8 * v114 - 8) )
      goto LABEL_104;
    v66 = v67;
    v67 = *(_QWORD *)(*(_QWORD *)(v67 + 56) + 8 * v114 - 8);
  }
  if ( (*(_BYTE *)(v67 + 68) & 1) != 0 )
  {
    v117 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)&v178, v117, v14[1], 0x1141u, 0);
    v169 = *(_QWORD *)(v67 + 40);
    v118 = sub_15894B0((__int64)&v178, (__int64 *)&v169);
    v176[0] = __PAIR64__(a6, a2);
    v39 = 1;
    sub_1587DB0(v118, v176);
    sub_15F7200(&v178);
    sub_168B9F0((__int64)&v178, v117, *(_DWORD *)(v67 + 24), 0x16B0u, 0);
    sub_15F7200(&v178);
    goto LABEL_108;
  }
  v69 = *(_QWORD *)(v67 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v67 + 16) & 4) != 0 )
    v69 = *(_QWORD *)v69;
  v70 = *(_BYTE *)(v69 + 8);
  v71 = (_QWORD *)(v69 - 64);
  if ( (v70 & 0x7Fu) - 58 >= 4 )
    v71 = nullptr;
  if ( v66 )
  {
    v71 = (_QWORD *)(*(_QWORD *)(v66 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v66 + 16) & 4) != 0 )
      v71 = (_QWORD *)*v71;
    if ( v71 )
      v71 -= 8;
  }
  v178 = nullptr;
  v72 = (void **)&v183;
  v180 = &v179;
  v179 = &v179;
  v181 = 0;
  v182 = (_BYTE *)(&dword_0 + 1);
  do
  {
    *v72 = nullptr;
    v72 += 2;
  }
  while ( v188 != v72 );
  v190 = 1;
  v188[0] = &v191;
  ptr = v195;
  v188[1] = &byte_4;
  v194 = 0x400000000LL;
  v189 = 0;
  v192 = 0;
  v195[24] = 0;
  v196 = 0;
  v197 = 257;
  v198 = 1;
  v73 = v71[6] & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v71[6] )
  {
    v159 = v66;
    v105 = sub_A7AA70(*(_QWORD *)(a1 + 248), (__int64)v71, 0, v73, v64, v65);
    v66 = v159;
    v73 = v105;
  }
  v74 = *v14;
  v157 = v66;
  v75 = sub_183BEE0(a1, v74, v166, v73, (__int64)&v178, v65);
  v77 = v157;
  if ( !v75 )
    goto LABEL_51;
  if ( !v192 )
  {
    v106 = *((_QWORD **)v179 + 2);
    v107 = &v106[3 * *((unsigned int *)v179 + 6)];
    if ( v106 != v107 )
    {
      v108 = v174;
      do
      {
        while ( 1 )
        {
          v110 = v108;
          v74 = HIDWORD(v174);
          v111 = v108 + 1LL;
          v112 = *v106 | 3LL;
          if ( v111 > HIDWORD(v174) )
            break;
          v106 += 3;
          v109 = (char *)v173 + 16 * v110;
          *v109 = 0;
          v109[1] = v112;
          v76 = (unsigned int)v174;
          v108 = v174 + 1;
          LODWORD(v174) = v174 + 1;
          if ( v107 == v106 )
            goto LABEL_51;
        }
        v74 = (__int64)v175;
        v164 = v77;
        v163 = v106;
        v161 = *v106 | 3LL;
        sub_2237220(&v173, v175, v111, 16);
        v77 = v164;
        v113 = (char *)v173 + 16 * (unsigned int)v174;
        *v113 = 0;
        v113[1] = v161;
        v108 = v174 + 1;
        LODWORD(v174) = v174 + 1;
        v106 = v163 + 3;
      }
      while ( v107 != v163 + 3 );
    }
LABEL_51:
    if ( v77 )
    {
      v95 = *(_QWORD **)(v77 + 56);
      v83 = *(unsigned int *)(v77 + 64);
      v96 = &v95[v83];
      if ( v95 != v96 )
      {
        LODWORD(v83) = v174;
        do
        {
          while ( 1 )
          {
            v98 = *v14;
            if ( !*v14 )
              v98 = v14[1];
            v99 = *v95 | 1LL;
            v100 = v98;
            v101 = (unsigned int)v83;
            v102 = ((unsigned __int64)v14[1] << 32) | v100;
            v103 = (unsigned int)v83 + 1LL;
            if ( v103 > HIDWORD(v174) )
              break;
            v76 = 16 * v101;
            ++v95;
            v97 = (unsigned __int64 *)((char *)v173 + v76);
            *v97 = v102;
            v97[1] = v99;
            v74 = (unsigned int)v174;
            v83 = (unsigned int)(v174 + 1);
            LODWORD(v174) = v174 + 1;
            if ( v96 == v95 )
              goto LABEL_57;
          }
          v162 = v95;
          v160 = v96;
          v74 = (__int64)v175;
          v158 = *v95 | 1LL;
          sub_2237220(&v173, v175, v103, 16);
          v96 = v160;
          v104 = (unsigned __int64 *)((char *)v173 + 16 * (unsigned int)v174);
          *v104 = v102;
          v104[1] = v158;
          v83 = (unsigned int)(v174 + 1);
          LODWORD(v174) = v174 + 1;
          v95 = v162 + 1;
        }
        while ( v160 != v162 + 1 );
      }
    }
    else
    {
      v78 = *v14;
      v76 = HIDWORD(v174);
      if ( !*v14 )
        v78 = v14[1];
      v79 = v67 | 1;
      v80 = v78;
      v81 = (unsigned int)v174;
      v82 = ((unsigned __int64)v14[1] << 32) | v80;
      v83 = (unsigned int)v174 + 1LL;
      if ( v83 > HIDWORD(v174) )
      {
        v74 = (__int64)v175;
        sub_2237220(&v173, v175, v83, 16);
        v81 = (unsigned int)v174;
        v79 = v67 | 1;
      }
      v84 = (unsigned __int64 *)((char *)v173 + 16 * v81);
      *v84 = v82;
      v84[1] = v79;
      LODWORD(v174) = v174 + 1;
    }
LABEL_57:
    v176[0] = *(_QWORD *)(v67 + 48);
    v166 = sub_C1BEF0((__int64)v176, v74, v83, v76);
    if ( ptr != v195 )
      free(ptr);
    if ( !v190 )
      free(v188[0]);
    if ( ((unsigned __int8)v182 & 1) == 0 )
      operator delete(v183, 16LL * v184, 8);
    v85 = (void ***)v179;
    if ( v179 != &v179 )
    {
      while ( 1 )
      {
        v86 = (void ***)v85[2];
        v87 = *v85;
        if ( v86 == v85 + 4 )
        {
          operator delete(v85);
          if ( v87 == &v179 )
            break;
        }
        else
        {
          free(v86);
          operator delete(v85);
          if ( v87 == &v179 )
            break;
        }
        v85 = (void ***)v87;
      }
    }
    sub_169D230((__int64)v177);
    goto LABEL_16;
  }
  sub_168B9F0((__int64)v176, (__int64 *)(a1 + 8), v14[1], 0x1142u, 0);
  v167 = *(_QWORD *)(v67 + 40);
  v119 = sub_15894B0((__int64)v176, &v167);
  v169 = __PAIR64__(a6, a2);
  v39 = 1;
  sub_1587DB0(v119, (__int64 *)&v169);
  sub_15F7200(v176);
  sub_F7C4A0((__int64)&v178);
LABEL_108:
  sub_169D230((__int64)v177);
LABEL_72:
  if ( v170 != v172 )
    free(v170);
  if ( v173 != v175 )
    free(v173);
  return v39;
}
