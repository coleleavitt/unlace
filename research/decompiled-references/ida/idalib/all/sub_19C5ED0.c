void __fastcall sub_19C5ED0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned int v6; // r13d
  bool v7; // zf
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rax
  bool v18; // cf
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  char v24; // cl
  __int64 *v25; // r12
  char v26; // al
  __int64 v27; // r11
  __int64 v28; // rsi
  __int64 v29; // rsi
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r12
  void *v32; // rsi
  _BYTE *v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // al
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // r14
  __int64 v41; // r12
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // r13
  unsigned __int8 *v60; // r12
  _BYTE *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r12
  void *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // r14
  unsigned __int64 v72; // r12
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r14
  __int64 v82; // rax
  _QWORD *v83; // rax
  char v84; // dl
  __int64 v85; // r15
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r13
  __int64 v92; // rax
  _QWORD *v93; // rax
  unsigned __int8 *v94; // r13
  _BYTE *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // eax
  int v99; // eax
  size_t v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r13
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r14
  __int64 v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // r15
  __int64 v120; // rax
  _QWORD *v121; // rax
  unsigned __int64 v122; // rdx
  int v123; // eax
  unsigned __int64 v124; // rax
  __int64 v125; // rdx
  int v126; // eax
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r14
  __int64 v130; // rdx
  __int64 v131; // r14
  void *v132; // rdi
  __int64 v133; // rax
  __int64 v134; // r15
  __int64 v135; // rdx
  __int64 v136; // r15
  void *v137; // rdi
  __int64 v138; // rdx
  int v139; // eax
  __int64 v140; // rax
  __int64 v141; // r14
  __int64 v142; // r15
  __int64 v143; // r14
  void *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // r12
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // r15
  __int64 v150; // r14
  void *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // r11
  __int64 v158; // r12
  __int64 v159; // rax
  _QWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // r12
  __int64 v166; // rax
  _QWORD *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // r13
  __int64 v173; // rax
  _QWORD *v174; // rax
  void *v175; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v176; // [rsp+10h] [rbp-1C8h]
  __int64 *v177; // [rsp+18h] [rbp-1C0h]
  __int64 v178; // [rsp+20h] [rbp-1B8h]
  __int64 v179; // [rsp+28h] [rbp-1B0h]
  void *v180; // [rsp+38h] [rbp-1A0h] BYREF
  void *v181; // [rsp+40h] [rbp-198h] BYREF
  __int64 v182; // [rsp+48h] [rbp-190h]
  _BYTE v183[16]; // [rsp+50h] [rbp-188h] BYREF
  void *src; // [rsp+60h] [rbp-178h] BYREF
  size_t n; // [rsp+68h] [rbp-170h]
  _QWORD v186[2]; // [rsp+70h] [rbp-168h] BYREF
  __int64 v187; // [rsp+80h] [rbp-158h] BYREF
  __int128 v188; // [rsp+88h] [rbp-150h]
  char v189; // [rsp+98h] [rbp-140h]
  _BYTE v190[72]; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v191; // [rsp+E8h] [rbp-F0h]
  int v192; // [rsp+F0h] [rbp-E8h]
  char v193; // [rsp+F8h] [rbp-E0h]
  __int64 v194; // [rsp+100h] [rbp-D8h]
  void *v195; // [rsp+110h] [rbp-C8h] BYREF
  __int128 v196; // [rsp+118h] [rbp-C0h] BYREF
  void *dest; // [rsp+128h] [rbp-B0h]
  __m128 v198; // [rsp+130h] [rbp-A8h] BYREF
  char v199; // [rsp+148h] [rbp-90h]
  __int64 v200; // [rsp+178h] [rbp-60h]
  int v201; // [rsp+180h] [rbp-58h]
  char v202; // [rsp+188h] [rbp-50h]
  __int64 v203; // [rsp+190h] [rbp-48h]

  v5 = a3;
  v6 = *(_DWORD *)(a4 + 8);
  v7 = *((_QWORD *)a2 + 1) == 0;
  v177 = (__int64 *)a4;
  LODWORD(v180) = v6;
  HIDWORD(v180) = v6;
  if ( !v7 )
    LODWORD(v180) = *a2;
  v8 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( ((v8 + 52) & 0x7Fu) <= 1 || (unsigned int)v8 - 53 <= 1 )
    v5 = sub_B72ED0(a3);
  v9 = sub_15F1540(a1, 0);
  if ( (*(_BYTE *)(v9 + 8) & 0x7Fu) - 35 > 3 )
  {
    v13 = 0;
    v12 = 0;
    v15 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v5 + 16) & 4) == 0 )
      goto LABEL_13;
LABEL_47:
    v15 = *(_QWORD *)v15;
    goto LABEL_13;
  }
  v12 = 0;
  v13 = v9 - 72;
  if ( v9 != 72 )
  {
    v14 = *(_QWORD *)(sub_B8C1B0(v9) + 16);
    v12 = (v14 & 4) != 0 ? *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL) : v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12 )
      v12 -= 64;
  }
  v15 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v5 + 16) & 4) != 0 )
    goto LABEL_47;
LABEL_13:
  v16 = *(_BYTE *)(v15 + 8);
  v17 = v15 - 64;
  v18 = (v16 & 0x7Fu) - 59 < 3;
  v19 = 0;
  if ( v18 )
    v19 = v17;
  v178 = v19;
  if ( !v13 )
  {
    v25 = (__int64 *)(a1 + 8);
    v36 = *(_BYTE *)(v5 + 28) & 0x7F;
    v23 = (unsigned int)v36 - 49;
    if ( (unsigned int)v23 <= 2 )
    {
      v183[0] = 0;
      v181 = v183;
      v182 = 0;
      goto LABEL_68;
    }
    LOBYTE(v176) = 0;
LABEL_55:
    v182 = 0;
    LOBYTE(v175) = v36 == 32;
    v21 = 0;
    v7 = v36 != 32;
    v181 = v183;
    v26 = v176;
    v183[0] = 0;
    if ( v7 )
      goto LABEL_25;
LABEL_56:
    if ( !(_BYTE)v176 )
    {
      if ( (_BYTE)v21 )
      {
        sub_168B9F0((__int64)&v195, v25, v6, 0xFCDu, 0);
        v39 = sub_15884C0((__int64)&v195, (__int64 *)&v180);
        v40 = *v177;
        if ( *(_BYTE *)(v39 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v39 + 32), *v177, 9u);
        }
        else if ( *(_BYTE *)(v39 + 132) )
        {
          v119 = sub_168B9E0((_QWORD *)v39);
          v120 = *(_QWORD *)(v39 + 16);
          if ( v120 )
            v120 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v120 + 32LL))(*(_QWORD *)(v39 + 16));
          v187 = v120;
          v121 = sub_1587BC0(v119, &v187, v115, v116, v117, v118);
          sub_AE9DF0((unsigned __int8 **)(*v121 + 32LL * *(unsigned int *)(v39 + 128) + 8), v40, 9u);
        }
        LODWORD(src) = 1;
        v41 = sub_1587D10(v39, (int *)&src);
        v187 = *(_QWORD *)v41;
        v188 = *(_OWORD *)(v41 + 8);
        v42 = *(_BYTE *)(v41 + 24);
        v193 = 0;
        v7 = *(_BYTE *)(v41 + 120) == 0;
        v189 = v42;
        if ( !v7 )
        {
          sub_FC70F0((__int64)v190, v41 + 32);
          v191 = *(_QWORD *)(v41 + 104);
          v99 = *(_DWORD *)(v41 + 112);
          v193 = 1;
          v192 = v99;
        }
        v194 = *(_QWORD *)(v41 + 128);
        sub_15F7200(&v195);
        if ( !v182 )
          goto LABEL_63;
        *(_QWORD *)((char *)&v196 + 4) = 0;
        BYTE12(v196) = 0;
        dest = &v198.m128_u16[4];
        v198.m128_u64[0] = 0;
        v198.m128_i8[8] = 0;
        v199 = 0;
        LODWORD(v195) = v6;
        HIDWORD(v195) = v6;
        LOBYTE(v196) = 0;
        src = v186;
        sub_19C4470(&src, v181, (__int64)v181 + v182);
        v32 = src;
        v33 = dest;
        if ( src != v186 )
        {
          v34 = v186[0];
          if ( dest != &v198.m128_u16[4] )
          {
LABEL_41:
            v175 = (void *)v34;
            v35 = v198.m128_u64[1];
            dest = v32;
            v198 = _mm_loadh_ps((const double *)&v175);
            if ( v33 )
            {
              src = v33;
              v186[0] = v35;
LABEL_43:
              n = 0;
              *v33 = 0;
              if ( src != v186 )
                operator delete(src);
              v199 = 0;
              sub_1589170((__int64)&v187, &v195);
              if ( dest != &v198.m128_u16[4] )
                operator delete(dest);
              goto LABEL_63;
            }
LABEL_121:
            v33 = v186;
            src = v186;
            goto LABEL_43;
          }
LABEL_120:
          v175 = (void *)v34;
          dest = v32;
          v198 = _mm_loadh_ps((const double *)&v175);
          goto LABEL_121;
        }
LABEL_122:
        v100 = n;
        if ( n )
        {
          if ( n == 1 )
            *v33 = v186[0];
          else
            memcpy(v33, v32, n);
          v100 = n;
          v33 = dest;
        }
        v198.m128_u64[0] = v100;
        v33[v100] = 0;
        v33 = src;
        goto LABEL_43;
      }
LABEL_68:
      if ( !v12 || !v178 )
        goto LABEL_82;
      v28 = *a2;
      v26 = 0;
      v27 = 1;
      v21 = 0;
      LOBYTE(v175) = 1;
      if ( !(_DWORD)v28 )
        goto LABEL_71;
      goto LABEL_28;
    }
LABEL_50:
    sub_168B9F0((__int64)&v195, v25, v6, 0xFCDu, 0);
    v37 = sub_15884C0((__int64)&v195, (__int64 *)&v180);
    v38 = *v177;
    if ( *(_BYTE *)(v37 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v37 + 32), *v177, 9u);
    }
    else
    {
      if ( !*(_BYTE *)(v37 + 132) )
      {
LABEL_52:
        sub_15F7200(&v195);
        goto LABEL_64;
      }
      v112 = sub_168B9E0((_QWORD *)v37);
      v113 = *(_QWORD *)(v37 + 16);
      if ( v113 )
        v113 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v113 + 32LL))(*(_QWORD *)(v37 + 16));
      v187 = v113;
      v114 = sub_1587BC0(v112, &v187, v108, v109, v110, v111);
      sub_AE9DF0((unsigned __int8 **)(*v114 + 32LL * *(unsigned int *)(v37 + 128) + 8), v38, 9u);
    }
    if ( *(_BYTE *)(v37 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v37 + 32), 0, 2u);
    }
    else if ( *(_BYTE *)(v37 + 132) )
    {
      v105 = sub_168B9E0((_QWORD *)v37);
      v106 = *(_QWORD *)(v37 + 16);
      if ( v106 )
        v106 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v106 + 32LL))(*(_QWORD *)(v37 + 16));
      v187 = v106;
      v107 = sub_1587BC0(v105, &v187, v101, v102, v103, v104);
      sub_AE9DF0((unsigned __int8 **)(*v107 + 32LL * *(unsigned int *)(v37 + 128) + 8), 0, 2u);
    }
    goto LABEL_52;
  }
  LOBYTE(v176) = sub_B979F0((_QWORD *)v13);
  v20 = sub_B981D0((_QWORD *)v13, 0);
  v21 = v20;
  if ( !(_BYTE)v20 )
  {
    v25 = (__int64 *)(a1 + 8);
    v36 = *(_BYTE *)(v5 + 28) & 0x7F;
    v23 = (unsigned int)v36 - 49;
    if ( (unsigned int)v23 <= 2 )
    {
      v182 = 0;
      v181 = v183;
      v183[0] = 0;
      if ( !(_BYTE)v176 )
        goto LABEL_68;
      goto LABEL_50;
    }
    goto LABEL_55;
  }
  v22 = *(_BYTE *)(v5 + 28) & 0x7F;
  v23 = (unsigned int)v22 - 49;
  v183[0] = 0;
  v181 = v183;
  v182 = 0;
  if ( (unsigned int)v23 <= 2 )
    LOBYTE(v175) = v21;
  else
    LOBYTE(v175) = v22 == 32;
  v187 = *(_QWORD *)(**(_QWORD **)(v13 + 120) + 40LL);
  if ( v187 )
  {
    LOBYTE(v179) = v21;
    sub_B86A00((__int64)&v195, &v187);
    sub_9EE560(&v181, v195, v196);
    v24 = v179;
    if ( v195 != (char *)&v196 + 8 )
    {
      operator delete(v195);
      v24 = v179;
    }
    if ( v182 == 0x7FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    LOBYTE(v179) = v24;
    sub_9EE560(&v181, ".", 1u);
    v21 = (unsigned __int8)v179;
  }
  v25 = (__int64 *)(a1 + 8);
  v26 = v21;
  if ( (_BYTE)v175 )
    goto LABEL_56;
LABEL_25:
  if ( !v12 || (v27 = 0, !v178) )
  {
LABEL_30:
    if ( (_BYTE)v21 )
    {
      if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x47 )
        v5 = *(_QWORD *)(v5 + 48);
      v29 = (__int64)v25;
      sub_168B9F0((__int64)&v195, v25, v6, 0x102Eu, 0);
      if ( v202 )
      {
        v72 = v198.m128_u64[0];
        v85 = (__int64)v180;
        if ( v198.m128_u64[0] )
        {
          v73 = *(unsigned int *)(v198.m128_u64[0] + 424);
          v86 = *(unsigned int *)(v198.m128_u64[0] + 428);
          v75 = v73 + 1;
        }
        else
        {
          v122 = v198.m128_u64[1];
          v123 = *(_DWORD *)(v198.m128_u64[1] + 14976);
          if ( v123 )
          {
            v128 = (unsigned int)(v123 - 1);
            *(_DWORD *)(v198.m128_u64[1] + 14976) = v128;
            v72 = *(_QWORD *)(v122 + 8 * v128 + 14848);
            v129 = *(unsigned int *)(v72 + 536);
            v130 = *(_QWORD *)(v72 + 528);
            *(_BYTE *)v72 = 0;
            *(_DWORD *)(v72 + 424) = 0;
            v131 = v130 + (v129 << 6);
            while ( v130 != v131 )
            {
              while ( 1 )
              {
                v131 -= 64;
                v132 = *(void **)(v131 + 24);
                if ( v132 == (void *)(v131 + 40) )
                  break;
                v175 = (void *)v130;
                operator delete(v132);
                v130 = (__int64)v175;
                if ( v175 == (void *)v131 )
                  goto LABEL_147;
              }
            }
LABEL_147:
            v73 = *(unsigned int *)(v72 + 424);
            v86 = *(unsigned int *)(v72 + 428);
            *(_DWORD *)(v72 + 536) = 0;
            v75 = v73 + 1;
          }
          else
          {
            v124 = operator new(0x3A0u);
            v86 = 8;
            v75 = 1;
            v72 = v124;
            *(_BYTE *)v124 = 0;
            *(_QWORD *)(v124 + 96) = v124 + 112;
            *(_QWORD *)(v124 + 128) = v124 + 144;
            *(_QWORD *)(v124 + 160) = v124 + 176;
            *(_QWORD *)(v124 + 192) = v124 + 208;
            *(_QWORD *)(v124 + 224) = v124 + 240;
            *(_QWORD *)(v124 + 256) = v124 + 272;
            *(_QWORD *)(v124 + 288) = v124 + 304;
            *(_QWORD *)(v124 + 320) = v124 + 336;
            *(_QWORD *)(v124 + 352) = v124 + 368;
            *(_QWORD *)(v124 + 384) = v124 + 400;
            *(_QWORD *)(v124 + 416) = v124 + 432;
            *(_QWORD *)(v124 + 104) = 0;
            *(_BYTE *)(v124 + 112) = 0;
            *(_QWORD *)(v124 + 136) = 0;
            *(_BYTE *)(v124 + 144) = 0;
            *(_QWORD *)(v124 + 168) = 0;
            *(_BYTE *)(v124 + 176) = 0;
            *(_QWORD *)(v124 + 200) = 0;
            *(_BYTE *)(v124 + 208) = 0;
            *(_QWORD *)(v124 + 232) = 0;
            *(_BYTE *)(v124 + 240) = 0;
            *(_QWORD *)(v124 + 264) = 0;
            *(_BYTE *)(v124 + 272) = 0;
            *(_QWORD *)(v124 + 296) = 0;
            *(_BYTE *)(v124 + 304) = 0;
            *(_QWORD *)(v124 + 328) = 0;
            *(_BYTE *)(v124 + 336) = 0;
            *(_QWORD *)(v124 + 360) = 0;
            *(_BYTE *)(v124 + 368) = 0;
            *(_QWORD *)(v124 + 392) = 0;
            *(_BYTE *)(v124 + 400) = 0;
            *(_QWORD *)(v124 + 424) = 0x800000000LL;
            *(_QWORD *)(v124 + 528) = v124 + 544;
            *(_QWORD *)(v124 + 536) = 0x600000000LL;
            v73 = 0;
          }
          v198.m128_u64[0] = v72;
        }
        v187 = v85;
        LOBYTE(v188) = 1;
        if ( v86 >= v75 )
          goto LABEL_95;
      }
      else
      {
        if ( !BYTE4(v203) )
          goto LABEL_35;
        v68 = sub_168B9E0(&v195);
        v69 = *((void **)&v196 + 1);
        if ( *((_QWORD *)&v196 + 1) )
          v69 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
        src = v69;
        v70 = sub_1587BC0(v68, (__int64 *)&src, v64, v65, v66, v67);
        v29 = (__int64)v180;
        v71 = *v70 + 32LL * (unsigned int)v203;
        v72 = *(_QWORD *)(v71 + 8);
        if ( v72 )
        {
          v73 = *(unsigned int *)(v72 + 424);
          v74 = *(unsigned int *)(v72 + 428);
          v75 = v73 + 1;
        }
        else
        {
          v125 = *(_QWORD *)(v71 + 16);
          v126 = *(_DWORD *)(v125 + 14976);
          if ( v126 )
          {
            v133 = (unsigned int)(v126 - 1);
            *(_DWORD *)(v125 + 14976) = v133;
            v72 = *(_QWORD *)(v125 + 8 * v133 + 14848);
            v134 = *(unsigned int *)(v72 + 536);
            v135 = *(_QWORD *)(v72 + 528);
            *(_BYTE *)v72 = 0;
            *(_DWORD *)(v72 + 424) = 0;
            v136 = v135 + (v134 << 6);
            while ( v135 != v136 )
            {
              while ( 1 )
              {
                v136 -= 64;
                v137 = *(void **)(v136 + 24);
                if ( v137 == (void *)(v136 + 40) )
                  break;
                v176 = v29;
                v175 = (void *)v135;
                operator delete(v137);
                v135 = (__int64)v175;
                if ( v175 == (void *)v136 )
                  goto LABEL_153;
              }
            }
LABEL_153:
            v73 = *(unsigned int *)(v72 + 424);
            v74 = *(unsigned int *)(v72 + 428);
            *(_DWORD *)(v72 + 536) = 0;
            v75 = v73 + 1;
          }
          else
          {
            v175 = v180;
            v127 = operator new(0x3A0u);
            v74 = 8;
            v75 = 1;
            v72 = v127;
            *(_BYTE *)v127 = 0;
            *(_QWORD *)(v127 + 96) = v127 + 112;
            *(_QWORD *)(v127 + 128) = v127 + 144;
            *(_QWORD *)(v127 + 160) = v127 + 176;
            *(_QWORD *)(v127 + 192) = v127 + 208;
            *(_QWORD *)(v127 + 224) = v127 + 240;
            *(_QWORD *)(v127 + 256) = v127 + 272;
            *(_QWORD *)(v127 + 288) = v127 + 304;
            *(_QWORD *)(v127 + 320) = v127 + 336;
            *(_QWORD *)(v127 + 352) = v127 + 368;
            *(_QWORD *)(v127 + 384) = v127 + 400;
            *(_QWORD *)(v127 + 416) = v127 + 432;
            *(_QWORD *)(v127 + 104) = 0;
            *(_BYTE *)(v127 + 112) = 0;
            *(_QWORD *)(v127 + 136) = 0;
            *(_BYTE *)(v127 + 144) = 0;
            *(_QWORD *)(v127 + 168) = 0;
            *(_BYTE *)(v127 + 176) = 0;
            *(_QWORD *)(v127 + 200) = 0;
            *(_BYTE *)(v127 + 208) = 0;
            *(_QWORD *)(v127 + 232) = 0;
            *(_BYTE *)(v127 + 240) = 0;
            *(_QWORD *)(v127 + 264) = 0;
            *(_BYTE *)(v127 + 272) = 0;
            *(_QWORD *)(v127 + 296) = 0;
            *(_BYTE *)(v127 + 304) = 0;
            *(_QWORD *)(v127 + 328) = 0;
            *(_BYTE *)(v127 + 336) = 0;
            *(_QWORD *)(v127 + 360) = 0;
            *(_BYTE *)(v127 + 368) = 0;
            *(_QWORD *)(v127 + 392) = 0;
            *(_BYTE *)(v127 + 400) = 0;
            *(_QWORD *)(v127 + 424) = 0x800000000LL;
            v29 = (__int64)v175;
            *(_QWORD *)(v127 + 528) = v127 + 544;
            *(_QWORD *)(v127 + 536) = 0x600000000LL;
            v73 = 0;
          }
          *(_QWORD *)(v71 + 8) = v72;
        }
        v187 = v29;
        LOBYTE(v188) = 1;
        if ( v75 <= v74 )
        {
LABEL_95:
          v76 = *(_QWORD *)(v72 + 416) + 12 * v73;
          *(_QWORD *)v76 = v187;
          *(_DWORD *)(v76 + 8) = v188;
          ++*(_DWORD *)(v72 + 424);
LABEL_35:
          v30 = sub_B981D0((_QWORD *)v5, v29);
          v31 = v30;
          if ( v202 )
          {
            sub_AE9DF0((unsigned __int8 **)&v198, v30, 2u);
            v84 = v202;
          }
          else
          {
            if ( !BYTE4(v203) )
            {
              v193 = 0;
              v187 = (__int64)v195;
              v188 = v196;
              v189 = (char)dest;
              goto LABEL_38;
            }
            v81 = sub_168B9E0(&v195);
            v82 = *((_QWORD *)&v196 + 1);
            if ( *((_QWORD *)&v196 + 1) )
              v82 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
            v187 = v82;
            v83 = sub_1587BC0(v81, &v187, v77, v78, v79, v80);
            sub_AE9DF0((unsigned __int8 **)(*v83 + 32LL * (unsigned int)v203 + 8), v31, 2u);
            v84 = v202;
          }
          v193 = 0;
          v187 = (__int64)v195;
          v188 = v196;
          v189 = (char)dest;
          if ( v84 )
          {
            sub_FC70F0((__int64)v190, (__int64)&v198);
            v193 = 1;
            v191 = v200;
            v192 = v201;
          }
LABEL_38:
          v194 = v203;
          sub_15F7200(&v195);
          if ( !v182 )
          {
LABEL_63:
            sub_15F7200(&v187);
            goto LABEL_64;
          }
          *(_QWORD *)((char *)&v196 + 4) = 0;
          BYTE12(v196) = 0;
          dest = &v198.m128_u16[4];
          v198.m128_u64[0] = 0;
          v198.m128_i8[8] = 0;
          v199 = 0;
          LODWORD(v195) = v6;
          HIDWORD(v195) = v6;
          LOBYTE(v196) = 0;
          src = v186;
          sub_19C4470(&src, v181, (__int64)v181 + v182);
          v32 = src;
          v33 = dest;
          if ( src != v186 )
          {
            v34 = v186[0];
            if ( dest != &v198.m128_u16[4] )
              goto LABEL_41;
            goto LABEL_120;
          }
          goto LABEL_122;
        }
      }
      v29 = v72 + 432;
      sub_2237220(v72 + 416, v72 + 432, v75, 12);
      v73 = *(unsigned int *)(v72 + 424);
      goto LABEL_95;
    }
    goto LABEL_76;
  }
  v28 = *a2;
  if ( !(_DWORD)v28 )
    goto LABEL_71;
LABEL_28:
  v23 = a2[1];
  if ( (_DWORD)v23 )
    goto LABEL_29;
LABEL_71:
  if ( !*((_QWORD *)a2 + 1) && !v26 )
  {
    v179 = v27;
    v176 = sub_B91570(v178 + 64, v28, v23, v21, v10, v11);
    if ( v176 == sub_B91570(v12 + 64, v28, v43, v44, v45, v46)
      || !(unsigned __int8)sub_B91990(v178 + 64, v12 + 64, v47, v48, v49, v50) )
    {
      if ( !(_BYTE)v175 )
      {
LABEL_76:
        sub_168B9F0((__int64)&v195, v25, v6, 0x102Eu, 0);
        v51 = sub_15884C0((__int64)&v195, (__int64 *)&v180);
        v52 = v51;
        if ( *(_BYTE *)(v51 + 120) )
        {
          v94 = *(unsigned __int8 **)(v51 + 32);
          if ( !v94 )
          {
            v97 = *(_QWORD *)(v51 + 40);
            v98 = *(_DWORD *)(v97 + 14976);
            if ( v98 )
            {
              v140 = (unsigned int)(v98 - 1);
              *(_DWORD *)(v97 + 14976) = v140;
              v94 = *(unsigned __int8 **)(v97 + 8 * v140 + 14848);
              v141 = *((unsigned int *)v94 + 134);
              *v94 = 0;
              v142 = *((_QWORD *)v94 + 66);
              *((_DWORD *)v94 + 106) = 0;
              v143 = v142 + (v141 << 6);
              while ( v142 != v143 )
              {
                while ( 1 )
                {
                  v143 -= 64;
                  v144 = *(void **)(v143 + 24);
                  if ( v144 == (void *)(v143 + 40) )
                    break;
                  operator delete(v144);
                  if ( v142 == v143 )
                    goto LABEL_161;
                }
              }
LABEL_161:
              *((_DWORD *)v94 + 134) = 0;
            }
            else
            {
              v94 = (unsigned __int8 *)operator new(0x3A0u);
              *v94 = 0;
              *((_QWORD *)v94 + 12) = v94 + 112;
              *((_QWORD *)v94 + 16) = v94 + 144;
              *((_QWORD *)v94 + 20) = v94 + 176;
              *((_QWORD *)v94 + 24) = v94 + 208;
              *((_QWORD *)v94 + 28) = v94 + 240;
              *((_QWORD *)v94 + 32) = v94 + 272;
              *((_QWORD *)v94 + 36) = v94 + 304;
              *((_QWORD *)v94 + 40) = v94 + 336;
              *((_QWORD *)v94 + 44) = v94 + 368;
              *((_QWORD *)v94 + 48) = v94 + 400;
              *((_QWORD *)v94 + 52) = v94 + 432;
              *((_QWORD *)v94 + 13) = 0;
              v94[112] = 0;
              *((_QWORD *)v94 + 17) = 0;
              v94[144] = 0;
              *((_QWORD *)v94 + 21) = 0;
              v94[176] = 0;
              *((_QWORD *)v94 + 25) = 0;
              v94[208] = 0;
              *((_QWORD *)v94 + 29) = 0;
              v94[240] = 0;
              *((_QWORD *)v94 + 33) = 0;
              v94[272] = 0;
              *((_QWORD *)v94 + 37) = 0;
              v94[304] = 0;
              *((_QWORD *)v94 + 41) = 0;
              v94[336] = 0;
              *((_QWORD *)v94 + 45) = 0;
              v94[368] = 0;
              *((_QWORD *)v94 + 49) = 0;
              v94[400] = 0;
              *((_QWORD *)v94 + 53) = 0x800000000LL;
              *((_QWORD *)v94 + 66) = v94 + 544;
              *((_QWORD *)v94 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v52 + 32) = v94;
          }
          v94[*v94 + 1] = 2;
          v95 = *(_BYTE **)(v52 + 32);
          v96 = (unsigned __int8)*v95;
          *v95 = v96 + 1;
          *(_QWORD *)&v95[8 * v96 + 16] = 0;
        }
        else if ( *(_BYTE *)(v51 + 132) )
        {
          v57 = sub_168B9E0((_QWORD *)v51);
          v58 = *(_QWORD *)(v52 + 16);
          if ( v58 )
            v58 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v58 + 32LL))(*(_QWORD *)(v52 + 16));
          v187 = v58;
          v59 = *sub_1587BC0(v57, &v187, v53, v54, v55, v56) + 32LL * *(unsigned int *)(v52 + 128);
          v60 = *(unsigned __int8 **)(v59 + 8);
          if ( !v60 )
          {
            v138 = *(_QWORD *)(v59 + 16);
            v139 = *(_DWORD *)(v138 + 14976);
            if ( v139 )
            {
              v147 = (unsigned int)(v139 - 1);
              *(_DWORD *)(v138 + 14976) = v147;
              v60 = *(unsigned __int8 **)(v138 + 8 * v147 + 14848);
              v148 = *((unsigned int *)v60 + 134);
              v149 = *((_QWORD *)v60 + 66);
              *v60 = 0;
              *((_DWORD *)v60 + 106) = 0;
              v150 = v149 + (v148 << 6);
              while ( v149 != v150 )
              {
                while ( 1 )
                {
                  v150 -= 64;
                  v151 = *(void **)(v150 + 24);
                  if ( v151 == (void *)(v150 + 40) )
                    break;
                  operator delete(v151);
                  if ( v149 == v150 )
                    goto LABEL_171;
                }
              }
LABEL_171:
              *((_DWORD *)v60 + 134) = 0;
            }
            else
            {
              v60 = (unsigned __int8 *)operator new(0x3A0u);
              *v60 = 0;
              *((_QWORD *)v60 + 12) = v60 + 112;
              *((_QWORD *)v60 + 16) = v60 + 144;
              *((_QWORD *)v60 + 20) = v60 + 176;
              *((_QWORD *)v60 + 24) = v60 + 208;
              *((_QWORD *)v60 + 28) = v60 + 240;
              *((_QWORD *)v60 + 32) = v60 + 272;
              *((_QWORD *)v60 + 36) = v60 + 304;
              *((_QWORD *)v60 + 40) = v60 + 336;
              *((_QWORD *)v60 + 44) = v60 + 368;
              *((_QWORD *)v60 + 48) = v60 + 400;
              *((_QWORD *)v60 + 52) = v60 + 432;
              *((_QWORD *)v60 + 13) = 0;
              v60[112] = 0;
              *((_QWORD *)v60 + 17) = 0;
              v60[144] = 0;
              *((_QWORD *)v60 + 21) = 0;
              v60[176] = 0;
              *((_QWORD *)v60 + 25) = 0;
              v60[208] = 0;
              *((_QWORD *)v60 + 29) = 0;
              v60[240] = 0;
              *((_QWORD *)v60 + 33) = 0;
              v60[272] = 0;
              *((_QWORD *)v60 + 37) = 0;
              v60[304] = 0;
              *((_QWORD *)v60 + 41) = 0;
              v60[336] = 0;
              *((_QWORD *)v60 + 45) = 0;
              v60[368] = 0;
              *((_QWORD *)v60 + 49) = 0;
              v60[400] = 0;
              *((_QWORD *)v60 + 53) = 0x800000000LL;
              *((_QWORD *)v60 + 66) = v60 + 544;
              *((_QWORD *)v60 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v59 + 8) = v60;
          }
          v60[*v60 + 1] = 2;
          v61 = *(_BYTE **)(v59 + 8);
          v62 = (unsigned __int8)*v61;
          *v61 = v62 + 1;
          *(_QWORD *)&v61[8 * v62 + 16] = 0;
        }
        goto LABEL_52;
      }
      goto LABEL_82;
    }
    v175 = (void *)v179;
    sub_168B9F0((__int64)&v195, v25, v6, 0x10A2u, 0);
    if ( v202 )
    {
      sub_AE9DF0((unsigned __int8 **)&v198, (__int64)v175, 2u);
    }
    else
    {
      if ( !BYTE4(v203) )
      {
LABEL_164:
        src = (void *)*v177;
        v145 = sub_15894B0((__int64)&v195, (__int64 *)&src);
        v146 = v145;
        if ( *(_BYTE *)(v145 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v145 + 32), v12, 0xAu);
        }
        else if ( *(_BYTE *)(v145 + 132) )
        {
          v172 = sub_168B9E0((_QWORD *)v145);
          v173 = *(_QWORD *)(v146 + 16);
          if ( v173 )
            v173 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v173 + 32LL))(*(_QWORD *)(v146 + 16));
          v187 = v173;
          v174 = sub_1587BC0(v172, &v187, v168, v169, v170, v171);
          sub_AE9DF0((unsigned __int8 **)(*v174 + 32LL * *(unsigned int *)(v146 + 128) + 8), v12, 0xAu);
        }
        sub_15884C0(v146, (__int64 *)&v180);
        goto LABEL_52;
      }
      v152 = sub_168B9E0(&v195);
      v157 = (__int64)v175;
      v158 = v152;
      v159 = *((_QWORD *)&v196 + 1);
      if ( *((_QWORD *)&v196 + 1) )
      {
        v159 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
        v157 = (__int64)v175;
      }
      v175 = (void *)v157;
      v187 = v159;
      v160 = sub_1587BC0(v158, &v187, v153, v154, v155, v156);
      sub_AE9DF0((unsigned __int8 **)(*v160 + 32LL * (unsigned int)v203 + 8), (__int64)v175, 2u);
    }
    if ( v202 )
    {
      sub_AE9DF0((unsigned __int8 **)&v198, v178, 0xAu);
    }
    else if ( BYTE4(v203) )
    {
      v165 = sub_168B9E0(&v195);
      v166 = *((_QWORD *)&v196 + 1);
      if ( *((_QWORD *)&v196 + 1) )
        v166 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
      v187 = v166;
      v167 = sub_1587BC0(v165, &v187, v161, v162, v163, v164);
      sub_AE9DF0((unsigned __int8 **)(*v167 + 32LL * (unsigned int)v203 + 8), v178, 0xAu);
    }
    goto LABEL_164;
  }
LABEL_29:
  if ( !(_BYTE)v175 )
    goto LABEL_30;
LABEL_82:
  sub_168B9F0((__int64)&v195, v25, v6, 0xFD0u, 0);
  v63 = *v177;
  if ( v202 )
  {
    sub_AE9DF0((unsigned __int8 **)&v198, *v177, 9u);
  }
  else if ( BYTE4(v203) )
  {
    v91 = sub_168B9E0(&v195);
    v92 = *((_QWORD *)&v196 + 1);
    if ( *((_QWORD *)&v196 + 1) )
      v92 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v196 + 1) + 32LL))(*((_QWORD *)&v196 + 1));
    v187 = v92;
    v93 = sub_1587BC0(v91, &v187, v87, v88, v89, v90);
    sub_AE9DF0((unsigned __int8 **)(*v93 + 32LL * (unsigned int)v203 + 8), v63, 9u);
  }
  sub_15884C0((__int64)&v195, (__int64 *)&v180);
  sub_15F7200(&v195);
LABEL_64:
  if ( v181 != v183 )
    operator delete(v181);
}
