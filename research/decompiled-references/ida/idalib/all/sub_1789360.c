__int64 __fastcall sub_1789360(__m128i *a1)
{
  unsigned int v1; // r13d
  __m128i *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  void **p_ptr; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  bool v18; // bp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int32 v24; // ebp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rbp
  __int64 *v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // r12
  unsigned int v34; // r15d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int8 **v42; // rax
  unsigned __int64 v43; // rdx
  bool v44; // bp
  __int64 v45; // r15
  __int64 *v46; // rax
  __int64 *v47; // r14
  char v48; // dl
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r13
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // r9
  __int64 v66; // r10
  __int64 v67; // r13
  __int64 v68; // rax
  _QWORD *v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // r14
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r13
  unsigned __int64 v79; // rsi
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  unsigned int v82; // r15d
  size_t v83; // rax
  __int64 v84; // rax
  void **v85; // r8
  _QWORD *m128i_i64; // rcx
  unsigned __int64 v87; // rsi
  unsigned __int8 v88; // al
  int v89; // edx
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // r15
  __int64 v94; // rax
  unsigned __int8 **v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // r15
  unsigned int v102; // r14d
  __int64 v103; // rax
  int v104; // ebp
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  unsigned int v108; // eax
  char v109; // cl
  int v110; // ecx
  int v111; // r8d
  int v112; // r9d
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // r14
  __int64 v120; // rax
  __int64 v121; // r15
  __int64 v122; // rbp
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  _QWORD *v128; // rdi
  __int64 v129; // rsi
  unsigned __int64 v130; // rsi
  __int64 *v131; // rax
  __int64 v132; // rax
  __int64 v133; // r14
  __int64 v134; // rbp
  _QWORD *v135; // rax
  __int64 v136; // rbp
  bool v137; // bl
  unsigned __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // r15
  void *v144; // rax
  _QWORD *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rbx
  __int64 v149; // r8
  __int64 v150; // r9
  void *v151; // rax
  _QWORD *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rbp
  __int64 v156; // r8
  __int64 v157; // r9
  void *v158; // rax
  _QWORD *v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // r13
  void *v165; // rax
  _QWORD *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // r14
  void *v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // [rsp-8h] [rbp-250h]
  __int64 v175; // [rsp+0h] [rbp-248h]
  __int64 v176; // [rsp+0h] [rbp-248h]
  void **v177; // [rsp+8h] [rbp-240h]
  unsigned __int64 v178; // [rsp+10h] [rbp-238h] BYREF
  __int64 v179; // [rsp+18h] [rbp-230h]
  unsigned __int8 **v180; // [rsp+20h] [rbp-228h]
  __m128i *v181; // [rsp+28h] [rbp-220h]
  void **v182; // [rsp+30h] [rbp-218h]
  _BYTE *v183; // [rsp+38h] [rbp-210h]
  bool v184; // [rsp+4Fh] [rbp-1F9h] BYREF
  unsigned __int64 v185; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v186; // [rsp+58h] [rbp-1F0h] BYREF
  __int64 v187; // [rsp+60h] [rbp-1E8h] BYREF
  __int64 v188; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v189; // [rsp+70h] [rbp-1D8h] BYREF
  int v190; // [rsp+78h] [rbp-1D0h]
  _BOOL4 v191; // [rsp+7Ch] [rbp-1CCh]
  void *v192; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v193; // [rsp+88h] [rbp-1C0h]
  _BYTE v194[16]; // [rsp+90h] [rbp-1B8h] BYREF
  unsigned __int8 *v195[6]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v196; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v197; // [rsp+D8h] [rbp-170h]
  _QWORD v198[16]; // [rsp+E0h] [rbp-168h] BYREF
  void *ptr; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v200; // [rsp+168h] [rbp-E0h]
  __int64 v201; // [rsp+170h] [rbp-D8h]
  __int64 v202; // [rsp+178h] [rbp-D0h] BYREF
  __int128 v203; // [rsp+1B8h] [rbp-90h]
  __int64 v204; // [rsp+1C8h] [rbp-80h]
  __int64 *v205; // [rsp+1D0h] [rbp-78h]
  __int64 v206; // [rsp+1D8h] [rbp-70h]
  unsigned int v207; // [rsp+1E0h] [rbp-68h]
  char v208; // [rsp+1E4h] [rbp-64h]
  __int64 v209; // [rsp+1E8h] [rbp-60h] BYREF
  __int128 v210; // [rsp+1F0h] [rbp-58h]
  __int64 v211; // [rsp+200h] [rbp-48h]

  v1 = 0;
  v2 = a1;
  v3 = a1[8].m128i_i64[0];
  v4 = a1[8].m128i_u32[3];
  v5 = a1[7].m128i_i64[0];
  v185 = *(_QWORD *)(*(_QWORD *)(v3 + 184) + 48LL);
  v6 = sub_1E63CF0(v5, v4, v185, 1, 3968);
  if ( (_BYTE)v6 )
    return v1;
  v1 = v6;
  v8 = v2[5].m128i_u64[1];
  v9 = v2[7].m128i_i64[0];
  p_ptr = &ptr;
  v186 = 0;
  v178 = v8;
  v177 = &v192;
  v192 = v194;
  v193 = 0x100000000LL;
  v11 = *(_QWORD *)(v9 + 248);
  v200 = (__int64)&v202;
  v201 = 0x800000000LL;
  v203 = 0;
  v12 = (v11 + 17608) | 6;
  v179 = v12;
  LODWORD(v11) = v2[8].m128i_i32[3];
  v205 = (__int64 *)v9;
  v206 = v12;
  v207 = v11;
  ptr = nullptr;
  v204 = 0;
  sub_B85890(&v209, v12);
  v211 = 0x101010000LL;
  v210 = 0;
  sub_1A395A0(&ptr);
  v17 = *(_QWORD *)(v185 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v134 = v2[7].m128i_i64[0];
    v135 = sub_F63270(v17, v12, v13, v14, v15, v16);
    v12 = (__int64)&ptr;
    if ( v135 )
      v135 += 8;
    sub_1A48440(v134, &ptr, v135, 0);
  }
  v18 = 0;
  if ( (_DWORD)v201 )
    v18 = (_DWORD)ptr != 5;
  sub_169D230((__int64)&ptr);
  v21 = v2[7].m128i_i64[0];
  v184 = v18;
  v189 = 0;
  v22 = *(_QWORD *)(v21 + 232);
  v190 = 0;
  LOBYTE(v22) = *(_BYTE *)(v22 + 15);
  v195[1] = (unsigned __int8 *)v2;
  v191 = (v22 & 0x10) != 0;
  v195[0] = (unsigned __int8 *)&v184;
  v195[2] = (unsigned __int8 *)&v189;
  v195[3] = (unsigned __int8 *)&v185;
  v195[4] = (unsigned __int8 *)&v192;
  v195[5] = (unsigned __int8 *)&v186;
  if ( v18 )
  {
    v23 = v2[7].m128i_i64[1];
    v24 = v2[8].m128i_u32[3];
    if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B98200((_QWORD *)v2[7].m128i_i64[1], v12) )
    {
      v25 = *(_QWORD *)(sub_B8C1B0(v23 + 72) + 16);
      v26 = (v25 & 4) != 0 ? *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF8LL) : v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v26
        || v26 == 64
        || (v27 = *(_QWORD *)(v26 + 64)) == 0
        || (*(_BYTE *)(v27 + 10) & 0x20) == 0
        || (unsigned int)sub_B77890(v23) != 42 )
      {
        v28 = sub_19B4F60(v21, v24);
        if ( v28 == 1 )
          goto LABEL_69;
        v29 = sub_19249E0(v21, v24, 5, v28 & 0xFFFFFFFFFFFFFFFELL, 0);
        if ( v29 == 1 )
          goto LABEL_69;
        v12 = v29 & 0xFFFFFFFFFFFFFFFELL;
        sub_14B7B40((__int64)&v192, v29 & 0xFFFFFFFFFFFFFFFELL);
      }
    }
    v30 = *(__int64 **)(v23 + 120);
    v31 = &v30[(unsigned int)sub_B76070(v23, v12, v19, v20)];
    if ( v30 != v31 )
    {
      v182 = &ptr;
      v181 = v2;
      v32 = v31;
      v183 = v194;
      do
      {
        v33 = *v30;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v30 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          v34 = *(_DWORD *)(v33 + 24);
          v35 = sub_B74600(*v30);
          v37 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v37 + 16) - 43 <= 1
            || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
            && (v180 = (unsigned __int8 **)v35,
                v49 = sub_F63050(v37, v12, v35, v36),
                v35 = (__int64)v180,
                (v37 = v49) != 0) )
          {
            while ( 1 )
            {
              v35 = *(_QWORD *)(v37 + 32);
              if ( (*(_BYTE *)(v37 + 18) & 0x10) == 0 )
                break;
              while ( 1 )
              {
                v38 = v35 & 0xFFFFFFFFFFFFFFF0LL;
                v37 = *(_QWORD *)v38;
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v38 + 16LL) - 43 <= 1 )
                  break;
                v39 = sub_F63050(v37, v12, v38, v36);
                v35 = *(_QWORD *)(v39 + 32);
                if ( (*(_BYTE *)(v39 + 18) & 0x10) == 0 )
                  goto LABEL_26;
              }
            }
          }
LABEL_26:
          v40 = sub_190BDA0(v21, v33, v35, 1, v34, 0, v175, v177);
          if ( v40 == 1 )
            goto LABEL_69;
          v41 = (unsigned int)v193;
          v12 = HIDWORD(v193);
          v42 = (unsigned __int8 **)(v40 & 0xFFFFFFFFFFFFFFFELL);
          v43 = (unsigned int)v193 + 1LL;
          if ( v43 > HIDWORD(v193) )
          {
            v12 = (__int64)v183;
            v180 = v42;
            sub_2237220(v177, v183, v43, 8);
            v41 = (unsigned int)v193;
            v42 = v180;
          }
          *((_QWORD *)v192 + v41) = v42;
          LODWORD(v193) = v193 + 1;
        }
        ++v30;
      }
      while ( v32 != v30 );
      v2 = v181;
      p_ptr = v182;
    }
  }
  v180 = v195;
  sub_1782560(v195, 2, 0, 0);
  v44 = v184;
  v45 = v186;
  if ( !v184 )
    goto LABEL_72;
  if ( !(_DWORD)v193 )
  {
    v46 = (__int64 *)v2[7].m128i_i64[0];
    v47 = v46;
    v48 = *(_BYTE *)(v46[29] + 15) & 0x10;
    goto LABEL_35;
  }
  if ( v186 )
  {
    v47 = (__int64 *)v2[7].m128i_i64[0];
    v46 = v47;
    if ( (*(_BYTE *)(v47[29] + 15) & 0x10) == 0 )
      goto LABEL_114;
    if ( v191 )
      goto LABEL_37;
  }
  sub_1782560(v180, 1, 1, 0);
  v44 = v184;
  if ( !v184 )
  {
    v45 = v186;
LABEL_72:
    if ( v45 )
    {
LABEL_73:
      v46 = (__int64 *)v2[7].m128i_i64[0];
LABEL_74:
      v47 = v46;
      goto LABEL_75;
    }
    if ( !v178 )
      goto LABEL_69;
LABEL_111:
    v46 = (__int64 *)v2[7].m128i_i64[0];
    goto LABEL_112;
  }
  v46 = (__int64 *)v2[7].m128i_i64[0];
  v45 = v186;
  v47 = v46;
  v48 = *(_BYTE *)(v46[29] + 15) & 0x10;
LABEL_35:
  if ( !v48 )
  {
    if ( !v45 )
    {
      v44 = 0;
      if ( !v178 )
        goto LABEL_128;
LABEL_112:
      v47 = v46;
LABEL_79:
      v82 = v2[8].m128i_u32[3];
      v182 = (void **)sub_183D350(v47);
      v181 = (__m128i *)(v47[30] + 552);
      v83 = j__strlen("nothrow");
      v84 = sub_6F3470((__int64)v181, "nothrow", v83);
      v200 = (__int64)(p_ptr + 3);
      v201 = 0x800000000LL;
      v203 = 0;
      v206 = v84;
      ptr = nullptr;
      v204 = 0;
      v205 = v47;
      v207 = v82;
      sub_B85890(p_ptr + 17, v84);
      v211 = 0x101010000LL;
      v210 = 0;
      sub_1A395A0(p_ptr);
      v85 = v182;
      if ( v182 )
        v85 = v182 + 6;
      if ( !(unsigned __int8)sub_1A48440(v47, p_ptr, v85, 0) )
      {
        v1 = 0;
        sub_168B9F0((__int64)&v196, v47 + 1, v82, 0xF67u, 0);
        sub_15F7200(&v196);
        sub_169D230((__int64)p_ptr);
        goto LABEL_69;
      }
      m128i_i64 = (_QWORD *)v200;
      if ( (_DWORD)ptr != 2 )
        goto LABEL_157;
      v87 = *(_QWORD *)v200 & 0xFFFFFFFFFFFFFFF8LL;
      v88 = *(_BYTE *)(v87 + 28) & 0x7F;
      v89 = v88;
      if ( ((v88 + 52) & 0x7Fu) <= 1 || (unsigned int)v88 - 53 <= 1 )
      {
        v90 = *(_QWORD *)v200 & 0xFFFFFFFFFFFFFFF8LL;
        v181 = (__m128i *)v200;
        v91 = sub_B72ED0(v90);
        m128i_i64 = v181->m128i_i64;
        v87 = v91;
        v89 = *(_BYTE *)(v91 + 28) & 0x7F;
      }
      if ( (unsigned int)(v89 - 40) > 6 )
      {
LABEL_157:
        *(_WORD *)((char *)&v211 + 3) = 0;
        sub_168B9F0((__int64)&v196, v47 + 1, *(_DWORD *)((*m128i_i64 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x1026u, 0);
        sub_15F7200(&v196);
        sub_169D230((__int64)p_ptr);
        goto LABEL_69;
      }
      v92 = sub_190BDA0(v47, v87, *(_QWORD *)(v87 + 48), 1, v82, 0, v175, v177);
      if ( v92 == 1 )
      {
        sub_169D230((__int64)p_ptr);
        goto LABEL_69;
      }
      v93 = v92 & 0xFFFFFFFFFFFFFFFELL;
      sub_169D230((__int64)p_ptr);
      if ( !v93 )
        goto LABEL_69;
      v94 = 0;
      LODWORD(v193) = 0;
      if ( !HIDWORD(v193) )
      {
        sub_2237220(v177, v177 + 2, 1, 8);
        v94 = 8LL * (unsigned int)v193;
      }
      v95 = v180;
      *(_QWORD *)((char *)v192 + v94) = v93;
      LODWORD(v193) = v193 + 1;
      v186 = 0;
      sub_1782560(v95, 0, 0, 0);
      if ( !v44 )
        goto LABEL_92;
      v45 = v186;
      v47 = (__int64 *)v2[7].m128i_i64[0];
LABEL_116:
      sub_168B9F0((__int64)p_ptr, v47 + 1, *(_DWORD *)(v45 + 24), 0x1BE0u, 0);
      v133 = v2[7].m128i_i64[1];
      if ( (_BYTE)v206 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v2[7].m128i_i64[1], 0xAu);
      }
      else if ( v208 )
      {
        v143 = sub_168B9E0(p_ptr);
        v144 = (void *)v201;
        if ( v201 )
          v144 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v201 + 32LL))(v201);
        v196 = v144;
        v145 = sub_1587BC0(v143, (__int64 *)&v196, v139, v140, v141, v142);
        sub_AE9DF0((unsigned __int8 **)(*v145 + 32LL * v207 + 8), v133, 0xAu);
      }
      sub_15F7200(p_ptr);
LABEL_92:
      if ( v186 )
      {
        v47 = (__int64 *)v2[7].m128i_i64[0];
        goto LABEL_94;
      }
      if ( !v184 )
      {
        if ( v178 )
        {
          sub_168B9F0((__int64)p_ptr, (__int64 *)(v2[7].m128i_i64[0] + 8), v2[8].m128i_u32[3], 0xDCEu, 0);
          v188 = v2[7].m128i_i64[1];
          v136 = sub_16CEDA0((__int64)p_ptr, &v188);
          v137 = (*(_BYTE *)(*(_QWORD *)(v2[7].m128i_i64[0] + 232) + 15LL) & 0x10) != 0;
          if ( *(_BYTE *)(v136 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v136 + 32), v137, 3u);
          }
          else if ( *(_BYTE *)(v136 + 132) )
          {
            v164 = sub_168B9E0((_QWORD *)v136);
            v165 = *(void **)(v136 + 16);
            if ( v165 )
              v165 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v165 + 32LL))(*(_QWORD *)(v136 + 16));
            v196 = v165;
            v166 = sub_1587BC0(v164, (__int64 *)&v196, v160, v161, v162, v163);
            sub_AE9DF0((unsigned __int8 **)(*v166 + 32LL * *(unsigned int *)(v136 + 128) + 8), v137, 3u);
          }
          v1 = 0;
          sub_15F7200(p_ptr);
        }
        goto LABEL_69;
      }
LABEL_129:
      sub_168B9F0((__int64)p_ptr, (__int64 *)(v2[7].m128i_i64[0] + 8), v2[8].m128i_u32[3], 0xDCFu, 0);
      if ( (_BYTE)v206 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v185, 8u);
      }
      else if ( v208 )
      {
        v171 = sub_168B9E0(p_ptr);
        v172 = (void *)v201;
        if ( v201 )
          v172 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v201 + 32LL))(v201);
        v196 = v172;
        v173 = sub_1587BC0(v171, (__int64 *)&v196, v167, v168, v169, v170);
        sub_AE9DF0((unsigned __int8 **)(*v173 + 32LL * v207 + 8), v185, 8u);
      }
      v196 = (void *)v2[7].m128i_i64[1];
      sub_16CEDA0((__int64)p_ptr, (__int64 *)&v196);
      sub_15F7200(p_ptr);
      sub_17842F0(v2[7].m128i_i64[0], v2[8].m128i_u32[3], 0x16E2u, v179, v185);
      goto LABEL_69;
    }
LABEL_114:
    v44 = 0;
    goto LABEL_74;
  }
  if ( !v45 )
    goto LABEL_38;
LABEL_37:
  if ( !v191 )
  {
LABEL_38:
    v44 = v45 != 0;
    sub_1782560(v180, 1, 0, 1);
    if ( v186 )
    {
      v47 = (__int64 *)v2[7].m128i_i64[0];
      v45 = v186;
      goto LABEL_75;
    }
    if ( (_DWORD)v193 )
    {
      sub_1782560(v180, 1, 1, 1);
      if ( v186 )
      {
        v45 = v186;
        goto LABEL_73;
      }
    }
    if ( !v178 )
    {
      if ( v45 )
      {
        v47 = (__int64 *)v2[7].m128i_i64[0];
        v45 = 0;
        goto LABEL_116;
      }
LABEL_128:
      if ( !v184 )
        goto LABEL_69;
      goto LABEL_129;
    }
    goto LABEL_111;
  }
  v44 = 0;
LABEL_75:
  v81 = *(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v45 + 16) & 4) != 0 )
    v81 = *(_QWORD *)v81;
  if ( (*(_BYTE *)(v81 + 8) & 0x7Fu) - 59 > 2 && v178 )
    goto LABEL_79;
  if ( v44 )
    goto LABEL_116;
LABEL_94:
  v96 = v2[8].m128i_u32[3];
  sub_17842F0((__int64)v47, v96, 0x1A3Au, v179, v185);
  if ( v178 )
  {
    v99 = *(_QWORD *)(v186 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v100 = *(_QWORD *)v99;
    if ( *(_BYTE *)(*(_QWORD *)v99 + 16LL) != 26 )
      v100 = sub_F63050(v100, v96, v97, v98);
    if ( (unsigned int)sub_F63060(v100) )
    {
      sub_168B9F0((__int64)p_ptr, (__int64 *)(v2[7].m128i_i64[0] + 8), *(_DWORD *)(v186 + 24), 0xDC8u, 0);
      if ( (_BYTE)v206 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v186, 0xAu);
      }
      else if ( v208 )
      {
        v155 = sub_168B9E0(p_ptr);
        v158 = (void *)v201;
        if ( v201 )
          v158 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v201 + 32LL))(v201);
        v196 = v158;
        v159 = sub_1587BC0(v155, (__int64 *)&v196, v153, v154, v156, v157);
        sub_AE9DF0((unsigned __int8 **)(*v159 + 32LL * v207 + 8), v186, 0xAu);
      }
      sub_15F7200(p_ptr);
      sub_168B9F0((__int64)p_ptr, (__int64 *)(v2[7].m128i_i64[0] + 8), v2[8].m128i_u32[3], 0x16DFu, 0);
      if ( (_BYTE)v206 )
      {
        sub_AE9DF0((unsigned __int8 **)p_ptr + 4, v186, 0xAu);
      }
      else if ( v208 )
      {
        v148 = sub_168B9E0(p_ptr);
        v151 = (void *)v201;
        if ( v201 )
          v151 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v201 + 32LL))(v201);
        v196 = v151;
        v152 = sub_1587BC0(v148, (__int64 *)&v196, v146, v147, v149, v150);
        sub_AE9DF0((unsigned __int8 **)(*v152 + 32LL * v207 + 8), v186, 0xAu);
      }
      sub_15F7200(p_ptr);
      goto LABEL_69;
    }
  }
  v101 = v2[7].m128i_i64[0];
  v187 = 0;
  v102 = v2[8].m128i_u32[3];
  v103 = *(_QWORD *)(v101 + 248);
  v178 = v185;
  v104 = (v103 + 17624) | 6;
  sub_17842F0(v101, v102, 0x1A3Au, (v103 + 17624) | 6, v185);
  v108 = (unsigned int)sub_F63270(
                         *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL),
                         v102,
                         v105,
                         v106,
                         v107,
                         v178 & 0xFFFFFFFFFFFFFFF0LL);
  v109 = *(_BYTE *)(*(_QWORD *)(v101 + 232) + 15LL);
  ptr = nullptr;
  LODWORD(v200) = 0;
  LODWORD(v201) = 1;
  HIDWORD(v200) = (v109 & 0x10) != 0;
  if ( !(unsigned __int8)sub_19BAC90(v101, v102, v108, v104, (unsigned int)&v187, 1, 0, 0) )
  {
    v113 = v187;
    if ( v187 || (v187 = sub_19ADC50(v101, v102, v104, v110, v111, v112, ptr, v200, v201), (v113 = v187) != 0) )
    {
      sub_1910D40(v101, v102, v113, 1);
      v114 = sub_190C6E0(v2[7].m128i_i64[0], v2[8].m128i_u32[3], 372, 0, 0);
      v115 = v2[7].m128i_i64[0];
      v116 = v2[8].m128i_u32[3];
      v188 = v114;
      v117 = sub_190C6E0(v115, v116, 378, 0, 0);
      v118 = v2[7].m128i_i64[0];
      v119 = v117;
      if ( (*(_BYTE *)(*(_QWORD *)(v118 + 232) + 15LL) & 0x10) != 0 )
      {
        v120 = sub_190C6E0(v118, v2[8].m128i_u32[3], 366, 0, 0);
        v121 = v2[7].m128i_i64[0];
        v122 = v120;
        v123 = sub_183D310(v121);
        v128 = *(_QWORD **)(v121 + 248);
        v129 = *(_QWORD *)(v123 + 48);
        if ( v129 )
        {
          v130 = v129 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v138 = sub_A7AA70((__int64)v128, v123, v124, v125, v126, v127);
          v128 = *(_QWORD **)(v121 + 248);
          v130 = v138;
        }
        v131 = sub_A81910(v128, v130, 0);
        if ( !v131 )
          goto LABEL_69;
        v132 = sub_16B28E0(
                 v2[7].m128i_u64[0],
                 v2[8].m128i_u32[3],
                 0x91u,
                 v131,
                 v122,
                 ((unsigned __int64)v2[8].m128i_u32[3] << 32) | v2[8].m128i_u32[3],
                 0.0,
                 ((unsigned __int64)v2[8].m128i_u32[3] << 32) | v2[8].m128i_u32[3],
                 v174,
                 v175);
        v118 = v2[7].m128i_i64[0];
        v178 = v132 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v178 = 0;
      }
      v50 = v186;
      if ( sub_190BDA0(v118, v186, *(_QWORD *)(v186 + 48), 1, v2[8].m128i_u32[3], 0, v175, v177) != 1 )
      {
        v198[0] = v119;
        v196 = v198;
        v197 = 0x200000001LL;
        if ( (*(_BYTE *)(*(_QWORD *)(v2[7].m128i_i64[0] + 232) + 15LL) & 0x10) != 0 && v191 )
        {
          v50 = v178;
          sub_14B7B40((__int64)&v196, v178);
        }
        v53 = sub_B76070(v186, v50, v51, v52);
        if ( v53 > (unsigned int)v197 )
          sub_1783EF0((__int64)&v196, (__int64)v177);
        v54 = sub_192A5E0(v2[7].m128i_i64[0], v2[8].m128i_i32[3], 0, 0, 0);
        v57 = 0;
        v58 = v2[7].m128i_i64[0];
        v59 = v54 & 0xFFFFFFFFFFFFFFFELL;
        v60 = v59;
        if ( v59 )
        {
          v179 = v59;
          v60 = v59;
          v57 = (unsigned int)sub_C00A40(v59, v59, 0, v55, v56);
        }
        if ( sub_19B4A30(v58, v60, v57, 0, 0, 0) == 1
          || (v61 = *(_QWORD *)(v187 + 48),
              v179 = sub_190BDA0(v2[7].m128i_i64[0], v187, v61, 1, v2[8].m128i_u32[3], 0, v176, v177),
              v179 == 1) )
        {
          v1 = 0;
LABEL_67:
          if ( v196 != v198 )
            free(v196);
          goto LABEL_69;
        }
        v62 = v2[8].m128i_u32[3];
        v63 = sub_190C6E0(v2[7].m128i_i64[0], v62, 373, &v188, 1);
        v65 = 1;
        v66 = v179;
        v201 = v63;
        ptr = p_ptr + 2;
        v200 = 0x200000001LL;
        v67 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v67 + 16) != 26 )
        {
          v68 = sub_F63050(v67, v62, p_ptr + 2, v64);
          v65 = (unsigned int)v200;
          v66 = v179;
          v67 = v68;
        }
        if ( *(unsigned __int16 *)(v67 + 22) <= v65 )
        {
          v70 = v2[7].m128i_i64[0];
        }
        else
        {
          v69 = (_QWORD *)(v67 + 8 * v65 + 48);
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[*v69 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v119 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
          {
            v179 = v66;
            sub_14B7B40((__int64)p_ptr, v119);
            v70 = v2[7].m128i_i64[0];
            v66 = v179;
            if ( (*(_BYTE *)(*(_QWORD *)(v70 + 232) + 15LL) & 0x10) != 0
              && *(unsigned __int16 *)(v67 + 22) > (unsigned __int64)(unsigned int)v200 )
            {
              v69 = (_QWORD *)(v67 + 8LL * (unsigned int)v200 + 48);
LABEL_59:
              v179 = *(_QWORD *)(v178 + 8);
              if ( *(_QWORD *)(*(_QWORD *)&byte_8[*v69 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v179 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v179 = v66;
                sub_14B7B40((__int64)p_ptr, v178);
                v70 = v2[7].m128i_i64[0];
              }
            }
          }
          else
          {
            v70 = v2[7].m128i_i64[0];
            if ( (*(_BYTE *)(*(_QWORD *)(v70 + 232) + 15LL) & 0x10) != 0 )
              goto LABEL_59;
          }
        }
        v71 = *(_QWORD *)(v70 + 608);
        v72 = sub_192A5E0(v70, v2[8].m128i_i32[3], 0, 0, 0);
        v75 = 0;
        v76 = v2[7].m128i_i64[0];
        v77 = v72 & 0xFFFFFFFFFFFFFFFELL;
        v78 = v77;
        if ( v77 )
          v75 = (unsigned int)sub_C00A40(v77, v71, 0, v73, v74);
        v79 = v78;
        v1 = 0;
        v80 = sub_19B4A30(v76, v79, v75, 0, 0, 0);
        if ( v80 != 1 )
        {
          v1 = 1;
          v178 = v80;
          v2[3] = _mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v178), (__m128i)xmmword_23AA750);
        }
        if ( ptr != p_ptr + 2 )
          free(ptr);
        goto LABEL_67;
      }
    }
  }
LABEL_69:
  if ( v192 != v177 + 2 )
    free(v192);
  return v1;
}
