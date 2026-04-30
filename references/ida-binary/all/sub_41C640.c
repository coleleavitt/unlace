__int64 __fastcall sub_41C640(
        __int64 a1,
        __m128i *p_src,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v11; // bp
  __int64 vault_server; // rax
  size_t v14; // r12
  __int64 *v15; // r13
  __int16 v16; // ax
  size_t v17; // r12
  size_t v18; // r12
  size_t v19; // r12
  __int16 v20; // ax
  size_t v21; // r12
  size_t v22; // r12
  int v23; // eax
  size_t v24; // r12
  double v25; // xmm0_8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  const char *v32; // rsi
  const char *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  size_t v36; // r8
  unsigned __int64 v37; // r12
  __int64 v38; // r13
  size_t v39; // r9
  __int64 v40; // rsi
  __int64 v41; // r12
  const char *v42; // rcx
  __int64 v43; // r13
  __int64 v44; // rdi
  unsigned __int64 v45; // r12
  size_t v46; // r8
  char v47; // r12
  unsigned int v48; // ebx
  int v50; // eax
  char *v51; // rdi
  void *v52; // rax
  void *v53; // rax
  void *v54; // rax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  char *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rbp
  char *v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdi
  size_t v74; // rbp
  const void *v75; // r9
  void *v76; // rdi
  __int64 v77; // rdi
  size_t v78; // r13
  size_t v79; // r8
  size_t v80; // r13
  size_t v81; // r8
  size_t v82; // r13
  size_t v83; // r8
  size_t v84; // r13
  size_t v85; // r8
  size_t v86; // r13
  size_t v87; // r8
  size_t v88; // r13
  size_t v89; // r8
  size_t v90; // r13
  size_t v91; // r8
  __m128i *v92; // r8
  void *v93; // rdi
  __int64 v94; // rcx
  char v95; // r8
  void *v96; // r9
  void *v97; // rdi
  void *v98; // r9
  void *v99; // rdi
  void *v100; // r9
  void *v101; // rdi
  void *v102; // r9
  void *v103; // rdi
  void *v104; // r9
  void *v105; // rdi
  void *v106; // r9
  void *v107; // rdi
  void *v108; // r9
  void *v109; // rdi
  char v110; // [rsp+0h] [rbp-2D8h]
  char v112; // [rsp+4h] [rbp-2D4h]
  void *v113; // [rsp+8h] [rbp-2D0h]
  _BYTE *v114; // [rsp+8h] [rbp-2D0h]
  const void *v115; // [rsp+8h] [rbp-2D0h]
  void *v116; // [rsp+8h] [rbp-2D0h]
  void *v117; // [rsp+8h] [rbp-2D0h]
  void *v118; // [rsp+8h] [rbp-2D0h]
  void *v119; // [rsp+8h] [rbp-2D0h]
  void *v120; // [rsp+8h] [rbp-2D0h]
  void *v121; // [rsp+8h] [rbp-2D0h]
  void *v122; // [rsp+8h] [rbp-2D0h]
  void *v123; // [rsp+8h] [rbp-2D0h]
  __m128i *v124; // [rsp+8h] [rbp-2D0h]
  const void *v125; // [rsp+10h] [rbp-2C8h]
  size_t v126; // [rsp+10h] [rbp-2C8h]
  void *v127; // [rsp+10h] [rbp-2C8h]
  void *v128; // [rsp+10h] [rbp-2C8h]
  void *v129; // [rsp+10h] [rbp-2C8h]
  void *v130; // [rsp+10h] [rbp-2C8h]
  void *v131; // [rsp+10h] [rbp-2C8h]
  void *v132; // [rsp+10h] [rbp-2C8h]
  void *v133; // [rsp+10h] [rbp-2C8h]
  size_t v134; // [rsp+18h] [rbp-2C0h]
  __int64 v135; // [rsp+28h] [rbp-2B0h] BYREF
  __int64 v136; // [rsp+30h] [rbp-2A8h] BYREF
  __int128 v137; // [rsp+38h] [rbp-2A0h]
  void *v138; // [rsp+50h] [rbp-288h] BYREF
  __int128 v139; // [rsp+58h] [rbp-280h]
  __int64 v140; // [rsp+70h] [rbp-268h] BYREF
  __int128 v141; // [rsp+78h] [rbp-260h]
  void *src; // [rsp+90h] [rbp-248h] BYREF
  __int128 v143; // [rsp+98h] [rbp-240h]
  char *v144; // [rsp+A8h] [rbp-230h] BYREF
  __int128 v145; // [rsp+B0h] [rbp-228h]
  __int64 v146; // [rsp+C0h] [rbp-218h]
  __int128 v147; // [rsp+C8h] [rbp-210h]
  void *dest; // [rsp+D8h] [rbp-200h] BYREF
  __int128 v149; // [rsp+E0h] [rbp-1F8h]
  __int64 v150; // [rsp+F0h] [rbp-1E8h]
  __int64 (__fastcall **v151)(); // [rsp+100h] [rbp-1D8h] BYREF
  void *v152; // [rsp+108h] [rbp-1D0h] BYREF
  size_t v153[2]; // [rsp+110h] [rbp-1C8h]
  __int16 v154; // [rsp+120h] [rbp-1B8h]
  void *v155; // [rsp+128h] [rbp-1B0h] BYREF
  size_t v156[2]; // [rsp+130h] [rbp-1A8h]
  void *v157; // [rsp+140h] [rbp-198h] BYREF
  size_t v158[2]; // [rsp+148h] [rbp-190h]
  void *v159; // [rsp+158h] [rbp-180h] BYREF
  size_t v160[2]; // [rsp+160h] [rbp-178h]
  __int16 v161; // [rsp+170h] [rbp-168h]
  void *v162; // [rsp+178h] [rbp-160h] BYREF
  size_t v163[2]; // [rsp+180h] [rbp-158h]
  void *v164; // [rsp+190h] [rbp-148h] BYREF
  size_t v165[2]; // [rsp+198h] [rbp-140h]
  int v166; // [rsp+1A8h] [rbp-130h]
  void *v167; // [rsp+1B0h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+1B8h] [rbp-120h]
  __int64 (__fastcall **v169)(); // [rsp+1D0h] [rbp-108h] BYREF
  void *v170; // [rsp+1D8h] [rbp-100h] BYREF
  __int128 v171; // [rsp+1E0h] [rbp-F8h]
  __int16 v172; // [rsp+1F0h] [rbp-E8h]
  void *v173; // [rsp+1F8h] [rbp-E0h] BYREF
  __int128 v174; // [rsp+200h] [rbp-D8h]
  void *v175; // [rsp+210h] [rbp-C8h]
  __int128 v176; // [rsp+218h] [rbp-C0h]
  void *v177; // [rsp+228h] [rbp-B0h]
  __int128 v178; // [rsp+230h] [rbp-A8h]
  __int16 v179; // [rsp+240h] [rbp-98h]
  void *v180; // [rsp+248h] [rbp-90h]
  __int128 v181; // [rsp+250h] [rbp-88h]
  void *v182; // [rsp+260h] [rbp-78h]
  __int128 v183; // [rsp+268h] [rbp-70h]
  int v184; // [rsp+278h] [rbp-60h]
  void *v185; // [rsp+280h] [rbp-58h]
  __int128 v186; // [rsp+288h] [rbp-50h]
  unsigned __int64 v187; // [rsp+298h] [rbp-40h]

  v11 = (char)p_src;
  v187 = __readfsqword(0x28u);
  v135 = 0;
  vault_server = get_vault_server();
  v14 = *(_QWORD *)(a1 + 80);
  v152 = nullptr;
  v15 = (__int64 *)vault_server;
  *(_OWORD *)v153 = 0;
  if ( v14 )
  {
    v53 = (void *)qalloc_or_throw(v14);
    p_src = *(__m128i **)(a1 + 72);
    v153[1] = v14;
    v152 = v53;
    memcpy(v53, p_src, v14);
    v153[0] = v14;
  }
  v16 = *(_WORD *)(a1 + 96);
  v17 = *(_QWORD *)(a1 + 112);
  v155 = nullptr;
  *(_OWORD *)v156 = 0;
  v154 = v16;
  if ( v17 )
  {
    v52 = (void *)qalloc_or_throw(v17);
    p_src = *(__m128i **)(a1 + 104);
    v155 = v52;
    v156[1] = v17;
    memcpy(v52, p_src, v17);
    v156[0] = v17;
  }
  v18 = *(_QWORD *)(a1 + 136);
  v157 = nullptr;
  *(_OWORD *)v158 = 0;
  if ( v18 )
  {
    v57 = (void *)qalloc_or_throw(v18);
    p_src = *(__m128i **)(a1 + 128);
    v157 = v57;
    v158[1] = v18;
    memcpy(v57, p_src, v18);
    v158[0] = v18;
  }
  v19 = *(_QWORD *)(a1 + 160);
  v159 = nullptr;
  v151 = &login_credentials_t___vtable;
  *(_OWORD *)v160 = 0;
  if ( v19 )
  {
    v56 = (void *)qalloc_or_throw(v19);
    p_src = *(__m128i **)(a1 + 152);
    v159 = v56;
    v160[1] = v19;
    memcpy(v56, p_src, v19);
    v160[0] = v19;
  }
  v20 = *(_WORD *)(a1 + 176);
  v21 = *(_QWORD *)(a1 + 192);
  v162 = nullptr;
  *(_OWORD *)v163 = 0;
  v161 = v20;
  if ( v21 )
  {
    v55 = (void *)qalloc_or_throw(v21);
    p_src = *(__m128i **)(a1 + 184);
    v162 = v55;
    v163[1] = v21;
    memcpy(v55, p_src, v21);
    v163[0] = v21;
  }
  v22 = *(_QWORD *)(a1 + 216);
  v164 = nullptr;
  *(_OWORD *)v165 = 0;
  if ( v22 )
  {
    v54 = (void *)qalloc_or_throw(v22);
    p_src = *(__m128i **)(a1 + 208);
    v164 = v54;
    v165[1] = v22;
    memcpy(v54, p_src, v22);
    v165[0] = v22;
  }
  v23 = *(_DWORD *)(a1 + 232);
  v24 = *(_QWORD *)(a1 + 248);
  v151 = &vault_credentials_t___vtable;
  v166 = v23;
  v167 = nullptr;
  *(_OWORD *)n = 0;
  if ( v24 )
  {
    v58 = (void *)qalloc_or_throw(v24);
    p_src = *(__m128i **)(a1 + 240);
    v167 = v58;
    n[1] = v24;
    memcpy(v58, p_src, v24);
    n[0] = v24;
  }
  v136 = 0;
  v138 = nullptr;
  v170 = nullptr;
  v137 = 0;
  v139 = 0;
  v171 = 0;
  if ( v153[0] )
  {
    p_src = (__m128i *)v152;
    v170 = (void *)qalloc_or_throw(v153[0]);
    *((_QWORD *)&v171 + 1) = v153[0];
    memcpy(v170, v152, v153[0]);
    *(_QWORD *)&v171 = v153[0];
  }
  v173 = nullptr;
  v174 = 0;
  v172 = v154;
  if ( v156[0] )
  {
    p_src = (__m128i *)v155;
    v173 = (void *)qalloc_or_throw(v156[0]);
    *((_QWORD *)&v174 + 1) = v156[0];
    memcpy(v173, v155, v156[0]);
    *(_QWORD *)&v174 = v156[0];
  }
  v175 = nullptr;
  v176 = 0;
  if ( v158[0] )
  {
    p_src = (__m128i *)v157;
    v175 = (void *)qalloc_or_throw(v158[0]);
    *((_QWORD *)&v176 + 1) = v158[0];
    memcpy(v175, v157, v158[0]);
    *(_QWORD *)&v176 = v158[0];
  }
  v169 = &login_credentials_t___vtable;
  v177 = nullptr;
  v178 = 0;
  if ( v160[0] )
  {
    p_src = (__m128i *)v159;
    v177 = (void *)qalloc_or_throw(v160[0]);
    *((_QWORD *)&v178 + 1) = v160[0];
    memcpy(v177, v159, v160[0]);
    *(_QWORD *)&v178 = v160[0];
  }
  v180 = nullptr;
  v181 = 0;
  v179 = v161;
  if ( v163[0] )
  {
    p_src = (__m128i *)v162;
    v180 = (void *)qalloc_or_throw(v163[0]);
    *((_QWORD *)&v181 + 1) = v163[0];
    memcpy(v180, v162, v163[0]);
    *(_QWORD *)&v181 = v163[0];
  }
  v182 = nullptr;
  v183 = 0;
  if ( v165[0] )
  {
    p_src = (__m128i *)v164;
    v182 = (void *)qalloc_or_throw(v165[0]);
    *((_QWORD *)&v183 + 1) = v165[0];
    memcpy(v182, v164, v165[0]);
    *(_QWORD *)&v183 = v165[0];
  }
  v25 = 0.0;
  v169 = &vault_credentials_t___vtable;
  v185 = nullptr;
  v184 = v166;
  v186 = 0;
  if ( n[0] )
  {
    p_src = (__m128i *)v167;
    v185 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v186 + 1) = n[0];
    memcpy(v185, v167, n[0]);
    *(_QWORD *)&v186 = n[0];
  }
  if ( !v11 )
  {
    if ( a3 )
    {
      vcred_init(&v169);
      goto LABEL_111;
    }
LABEL_118:
    v48 = 0;
    goto LABEL_76;
  }
  if ( v156[0] > 1 )
  {
    v74 = v158[0];
    if ( v158[0] > 1 )
    {
      v92 = (__m128i *)v157;
      v93 = v138;
      if ( *((_QWORD *)&v139 + 1) < v158[0] )
      {
        v124 = (__m128i *)v157;
        v138 = (void *)qvector_reserve(&v138, v138, v158[0], 1);
        v92 = v124;
        v93 = v138;
      }
      p_src = v92;
      *(_QWORD *)&v139 = v74;
      memmove(v93, v92, v74 - 1);
      *((char *)v138 + v74 - 1) = 0;
    }
    else
    {
      p_src = (__m128i *)&v138;
      if ( !(unsigned __int8)vcred_do_load_password(&v151, &v138, &v136) )
        goto LABEL_146;
    }
    if ( (unsigned __int64)v139 > 1 && v153[0] > 1 )
    {
      v94 = *(_QWORD *)(a1 + 32);
      v95 = a3;
      if ( *(_QWORD *)(v94 + 8) <= 1u )
      {
        qgethostname(*(_QWORD *)(a1 + 32));
        v94 = *(_QWORD *)(a1 + 32);
        v95 = a3;
      }
      p_src = (__m128i *)v15;
      v135 = sub_4165D0((__int64)&v136, v15, &v151, v94, v95);
      if ( v135 )
        goto LABEL_31;
      goto LABEL_117;
    }
LABEL_146:
    if ( v135 )
      goto LABEL_31;
  }
LABEL_117:
  if ( !a3 )
    goto LABEL_118;
LABEL_111:
  *(_QWORD *)(a1 + 248) = 0;
  while ( 1 )
  {
    v51 = *(char **)(a1 + 32);
    if ( *((_QWORD *)v51 + 1) <= 1u )
    {
      qgethostname(v51);
      v51 = *(char **)(a1 + 32);
    }
    v144 = v51;
    src = &hvui_common_t::perform_login;
    p_src = (__m128i *)&src;
    *(_QWORD *)&v143 = v15;
    *((_QWORD *)&v143 + 1) = &v135;
    LOBYTE(v145) = 1;
    v50 = vcred_ask_user(&v169, &src, &v136, 0);
    if ( v50 == 1 )
      break;
    if ( !v50 )
      goto LABEL_118;
  }
  v78 = v171;
  if ( (_QWORD)v171 && (v79 = v171 - 1, (_QWORD)v171 != 1) )
  {
    v104 = v170;
    v105 = v152;
    if ( v153[1] < (unsigned __int64)v171 )
    {
      v131 = v170;
      v121 = (void *)(v171 - 1);
      v152 = (void *)qvector_reserve(&v152, v152, v171, 1);
      v104 = v131;
      v105 = v152;
      v79 = (size_t)v121;
    }
    v153[0] = v78;
    memmove(v105, v104, v79);
    *((char *)v152 + v78 - 1) = 0;
  }
  else
  {
    v153[0] = 0;
  }
  v80 = v174;
  v154 = v172;
  if ( (_QWORD)v174 && (v81 = v174 - 1, (_QWORD)v174 != 1) )
  {
    v100 = v173;
    v101 = v155;
    if ( v156[1] < (unsigned __int64)v174 )
    {
      v130 = v173;
      v120 = (void *)(v174 - 1);
      v155 = (void *)qvector_reserve(&v155, v155, v174, 1);
      v100 = v130;
      v101 = v155;
      v81 = (size_t)v120;
    }
    v156[0] = v80;
    memmove(v101, v100, v81);
    *((char *)v155 + v80 - 1) = 0;
  }
  else
  {
    v156[0] = 0;
  }
  v82 = v176;
  if ( (_QWORD)v176 && (v83 = v176 - 1, (_QWORD)v176 != 1) )
  {
    v106 = v175;
    v107 = v157;
    if ( v158[1] < (unsigned __int64)v176 )
    {
      v133 = v175;
      v123 = (void *)(v176 - 1);
      v157 = (void *)qvector_reserve(&v157, v157, v176, 1);
      v106 = v133;
      v107 = v157;
      v83 = (size_t)v123;
    }
    v158[0] = v82;
    memmove(v107, v106, v83);
    *((char *)v157 + v82 - 1) = 0;
  }
  else
  {
    v158[0] = 0;
  }
  v84 = v178;
  if ( (_QWORD)v178 && (v85 = v178 - 1, (_QWORD)v178 != 1) )
  {
    v102 = v177;
    v103 = v159;
    if ( v160[1] < (unsigned __int64)v178 )
    {
      v129 = v177;
      v119 = (void *)(v178 - 1);
      v159 = (void *)qvector_reserve(&v159, v159, v178, 1);
      v102 = v129;
      v103 = v159;
      v85 = (size_t)v119;
    }
    v160[0] = v84;
    memmove(v103, v102, v85);
    *((char *)v159 + v84 - 1) = 0;
  }
  else
  {
    v160[0] = 0;
  }
  v86 = v181;
  v161 = v179;
  if ( (_QWORD)v181 && (v87 = v181 - 1, (_QWORD)v181 != 1) )
  {
    v98 = v180;
    v99 = v162;
    if ( v163[1] < (unsigned __int64)v181 )
    {
      v128 = v180;
      v118 = (void *)(v181 - 1);
      v162 = (void *)qvector_reserve(&v162, v162, v181, 1);
      v98 = v128;
      v99 = v162;
      v87 = (size_t)v118;
    }
    v163[0] = v86;
    memmove(v99, v98, v87);
    *((char *)v162 + v86 - 1) = 0;
  }
  else
  {
    v163[0] = 0;
  }
  v88 = v183;
  if ( (_QWORD)v183 && (v89 = v183 - 1, (_QWORD)v183 != 1) )
  {
    v96 = v182;
    v97 = v164;
    if ( v165[1] < (unsigned __int64)v183 )
    {
      v132 = v182;
      v122 = (void *)(v183 - 1);
      v164 = (void *)qvector_reserve(&v164, v164, v183, 1);
      v96 = v132;
      v97 = v164;
      v89 = (size_t)v122;
    }
    v165[0] = v88;
    memmove(v97, v96, v89);
    *((char *)v164 + v88 - 1) = 0;
  }
  else
  {
    v165[0] = 0;
  }
  v90 = v186;
  v166 = v184;
  if ( (_QWORD)v186 && (v91 = v186 - 1, (_QWORD)v186 != 1) )
  {
    v108 = v185;
    v109 = v167;
    if ( n[1] < (unsigned __int64)v186 )
    {
      v127 = v185;
      v117 = (void *)(v186 - 1);
      v167 = (void *)qvector_reserve(&v167, v167, v186, 1);
      v108 = v127;
      v109 = v167;
      v91 = (size_t)v117;
    }
    n[0] = v90;
    memmove(v109, v108, v91);
    *((char *)v167 + v90 - 1) = 0;
  }
  else
  {
    n[0] = 0;
  }
LABEL_31:
  sub_41A580((__int64)&src, (__int64)&v170, 0);
  v32 = &s1;
  if ( (_QWORD)v143 )
    v32 = (const char *)src;
  sub_169700(
    (int)"Connected to Hex-Rays Vault at %s\n",
    (__int64)v32,
    v26,
    v27,
    v28,
    v29,
    (__m128)0LL,
    a5,
    a6,
    a7,
    v30,
    v31,
    a10,
    a11,
    v110);
  if ( src )
  {
    *(_QWORD *)&v143 = 0;
    v25 = qfree(src, v32);
  }
  sub_416E90(a1, v135);
  v113 = (void *)(*(_QWORD *)(a1 + 32) + 40LL);
  if ( (unsigned __int64)v171 <= 1 )
  {
    sub_416510((__int64)v113, 12, 0, &s1, v25);
    if ( (unsigned __int64)v186 > 1 )
      goto LABEL_50;
LABEL_51:
    v43 = v174;
    src = nullptr;
    v144 = nullptr;
    v146 = 0;
    dest = nullptr;
    v150 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    if ( (unsigned __int64)v174 > 1 )
    {
      v115 = v173;
      v144 = (char *)qvector_reserve(&v144, 0, v174, 1);
      *(_QWORD *)&v145 = v43;
      memmove(v144, v115, v43 - 1);
      v144[v43 - 1] = 0;
    }
    v44 = *(_QWORD *)(a1 + 32);
    v45 = *(_QWORD *)(v44 + 8);
    if ( v45 <= 1 )
    {
      qgethostname(v44);
      v44 = *(_QWORD *)(a1 + 32);
      if ( (void **)v44 == &dest )
        goto LABEL_55;
      v45 = *(_QWORD *)(v44 + 8);
      if ( !v45 || (v46 = v45 - 1, v45 == 1) )
      {
        *(_QWORD *)&v149 = 0;
        goto LABEL_55;
      }
    }
    else
    {
      v46 = v45 - 1;
      if ( (void **)v44 == &dest )
      {
LABEL_55:
        v140 = 0;
        v141 = 0;
        if ( (unsigned __int8)sub_416A40((__int64 *)&src, (__int64)&v173, (__int64)&dest) )
        {
          p_src = (__m128i *)&s1;
          if ( (_QWORD)v143 )
            p_src = (__m128i *)src;
          if ( !(unsigned __int8)sub_416F40(a1, p_src, &v151, 1) )
          {
            p_src = (__m128i *)v140;
            if ( *((_QWORD *)&v141 + 1) <= 0xA6u )
            {
              v140 = qvector_reserve(&v140, v140, 167, 1);
              p_src = (__m128i *)v140;
            }
            *(_QWORD *)&v141 = 167;
            *p_src = _mm_load_si128((const __m128i *)&xmmword_5DD990);
            p_src[1] = _mm_load_si128((const __m128i *)&xmmword_5DD9A0);
            p_src[2] = _mm_load_si128((const __m128i *)&xmmword_5DD9B0);
            p_src[3] = _mm_load_si128((const __m128i *)&xmmword_5DD9C0);
            p_src[4] = _mm_load_si128((const __m128i *)&xmmword_5DD9D0);
            p_src[5] = _mm_load_si128((const __m128i *)&xmmword_5DD9E0);
            p_src[6] = _mm_load_si128((const __m128i *)&xmmword_5DD9F0);
            p_src[7] = _mm_load_si128((const __m128i *)&xmmword_5DDA00);
            p_src[8] = _mm_load_si128((const __m128i *)&xmmword_5DDA10);
            p_src[9] = _mm_load_si128((const __m128i *)&xmmword_5DDA20);
            *(__int64 *)((char *)&p_src[9].m128i_i64[1] + 6) = 0x3A796C6C61636F6CLL;
            *(_BYTE *)(v140 + 166) = 0;
          }
        }
        else
        {
          p_src = (__m128i *)v140;
          if ( *((_QWORD *)&v141 + 1) <= 0x17u )
          {
            v140 = qvector_reserve(&v140, v140, 24, 1);
            p_src = (__m128i *)v140;
          }
          *(_QWORD *)&v141 = 24;
          *p_src = _mm_load_si128((const __m128i *)&xmmword_5DDA30);
          *(__int64 *)((char *)&p_src->m128i_i64[1] + 7) = 0x6174616420657469LL;
          *(_BYTE *)(v140 + 23) = 0;
        }
        if ( (unsigned __int64)v141 > 1
          && v112
          && (v77 = *(_QWORD *)(a1 + 32),
              p_src = (__m128i *)*(unsigned __int8 *)(v77 + 160),
              (unsigned __int8)sub_422C80(v77 + 24, p_src, &v140, &src)) )
        {
          vcred_reg_set_store_info(1);
          p_src = (__m128i *)&s1;
          if ( (_QWORD)v143 )
            p_src = (__m128i *)src;
          v47 = sub_416F40(a1, p_src, &v151, 0);
        }
        else
        {
          v47 = 0;
        }
        if ( v140 )
        {
          *(_QWORD *)&v141 = 0;
          qfree(v140, p_src->m128i_i8);
        }
        if ( dest )
        {
          *(_QWORD *)&v149 = 0;
          qfree(dest, p_src->m128i_i8);
        }
        if ( v146 )
        {
          *(_QWORD *)&v147 = 0;
          qfree(v146, p_src->m128i_i8);
        }
        if ( v144 )
        {
          *(_QWORD *)&v145 = 0;
          qfree(v144, p_src->m128i_i8);
        }
        if ( src )
        {
          *(_QWORD *)&v143 = 0;
          qfree(src, p_src->m128i_i8);
        }
        if ( !v47 )
          sub_418750(a1);
        goto LABEL_74;
      }
    }
    v75 = *(const void **)v44;
    v76 = dest;
    if ( *((_QWORD *)&v149 + 1) < v45 )
    {
      v125 = v75;
      v116 = (void *)v46;
      dest = (void *)qvector_reserve(&dest, dest, v45, 1);
      v75 = v125;
      v76 = dest;
      v46 = (size_t)v116;
    }
    v114 = (_BYTE *)v46;
    *(_QWORD *)&v149 = v45;
    memmove(v76, v75, v46);
    v114[(_QWORD)dest] = 0;
    goto LABEL_55;
  }
  v33 = (const char *)&v170;
  v140 = 0;
  v141 = 0;
  sub_41A580((__int64)&src, (__int64)&v170, 0);
  v37 = v143;
  if ( (_QWORD)v143 )
  {
    v36 = v143 - 1;
    if ( (_QWORD)v143 != 1 )
    {
      v38 = v141;
      v39 = v143 - 1;
      if ( (_QWORD)v141 )
      {
        v38 = v141 - 1;
        v39 = v36 + v141 - 1;
        v37 = v143 + v141 - 1;
      }
      v40 = v140;
      if ( *((_QWORD *)&v141 + 1) < v37 )
      {
        v134 = v143 - 1;
        v126 = v39;
        v140 = qvector_reserve(&v140, v140, v37, 1);
        v36 = v134;
        v40 = v140;
        v39 = v126;
      }
      *(_QWORD *)&v141 = v37;
      *(_BYTE *)(v40 + v39) = 0;
      v33 = (const char *)src;
      memcpy((void *)(v38 + v140), src, v36);
    }
  }
  if ( src )
  {
    *(_QWORD *)&v143 = 0;
    qfree(src, v33, v34, v35, v36);
  }
  v41 = v140;
  v42 = &s1;
  if ( (_QWORD)v141 )
    v42 = (const char *)v140;
  sub_416510((__int64)v113, 12, 0, v42, v36);
  if ( v41 )
    qfree(v41, &byte_9[3]);
  if ( (unsigned __int64)v186 <= 1 )
    goto LABEL_51;
LABEL_50:
  p_src = (__m128i *)v185;
  if ( !(unsigned __int8)sub_416F40(a1, v185, &v151, 0) )
    goto LABEL_51;
LABEL_74:
  if ( !(unsigned __int8)sub_41B100(a1) )
  {
    src = nullptr;
    v143 = 0;
    sub_431330(&src);
    p_src = (__m128i *)&src;
    sub_41C1B0(a1, (__int64)&src);
    v59 = (char *)src;
    if ( src )
    {
      v60 = v143;
      if ( (_QWORD)v143 )
      {
        v61 = 0;
        v62 = 0;
        do
        {
          v63 = &v59[v61];
          v64 = *(_QWORD *)&v59[v61 + 216];
          if ( v64 )
          {
            *((_QWORD *)v63 + 28) = 0;
            qfree(v64, (const char *)&src);
          }
          v65 = *((_QWORD *)v63 + 24);
          if ( v65 )
          {
            *((_QWORD *)v63 + 25) = 0;
            qfree(v65, (const char *)&src);
          }
          v66 = *((_QWORD *)v63 + 21);
          if ( v66 )
          {
            *((_QWORD *)v63 + 22) = 0;
            qfree(v66, (const char *)&src);
          }
          v67 = *((_QWORD *)v63 + 18);
          if ( v67 )
          {
            *((_QWORD *)v63 + 19) = 0;
            qfree(v67, (const char *)&src);
          }
          v68 = *((_QWORD *)v63 + 15);
          if ( v68 )
          {
            *((_QWORD *)v63 + 16) = 0;
            qfree(v68, (const char *)&src);
          }
          v69 = *((_QWORD *)v63 + 12);
          if ( v69 )
          {
            *((_QWORD *)v63 + 13) = 0;
            qfree(v69, (const char *)&src);
          }
          v70 = *((_QWORD *)v63 + 9);
          if ( v70 )
          {
            *((_QWORD *)v63 + 10) = 0;
            qfree(v70, (const char *)&src);
          }
          v71 = *((_QWORD *)v63 + 6);
          if ( v71 )
          {
            *((_QWORD *)v63 + 7) = 0;
            qfree(v71, (const char *)&src);
          }
          v72 = *((_QWORD *)v63 + 3);
          if ( v72 )
          {
            *((_QWORD *)v63 + 4) = 0;
            qfree(v72, (const char *)&src);
          }
          v73 = *(_QWORD *)v63;
          if ( *(_QWORD *)v63 )
          {
            *((_QWORD *)v63 + 1) = 0;
            qfree(v73, (const char *)&src);
          }
          ++v62;
          v59 = (char *)src;
          v61 += 240;
        }
        while ( v60 != v62 );
      }
      *(_QWORD *)&v143 = 0;
      qfree(v59, (const char *)&src);
    }
  }
  v48 = 1;
LABEL_76:
  v169 = &vault_credentials_t___vtable;
  if ( v185 )
  {
    *(_QWORD *)&v186 = 0;
    qfree(v185, p_src->m128i_i8);
  }
  v169 = &login_credentials_t___vtable;
  if ( v182 )
  {
    *(_QWORD *)&v183 = 0;
    qfree(v182, p_src->m128i_i8);
  }
  if ( v180 )
  {
    *(_QWORD *)&v181 = 0;
    qfree(v180, p_src->m128i_i8);
  }
  if ( v177 )
  {
    *(_QWORD *)&v178 = 0;
    qfree(v177, p_src->m128i_i8);
  }
  if ( v175 )
  {
    *(_QWORD *)&v176 = 0;
    qfree(v175, p_src->m128i_i8);
  }
  if ( v173 )
  {
    *(_QWORD *)&v174 = 0;
    qfree(v173, p_src->m128i_i8);
  }
  if ( v170 )
  {
    *(_QWORD *)&v171 = 0;
    qfree(v170, p_src->m128i_i8);
  }
  if ( v138 )
  {
    *(_QWORD *)&v139 = 0;
    qfree(v138, p_src->m128i_i8);
  }
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    qfree(v136, p_src->m128i_i8);
  }
  v151 = &vault_credentials_t___vtable;
  if ( v167 )
  {
    n[0] = 0;
    qfree(v167, p_src->m128i_i8);
  }
  v151 = &login_credentials_t___vtable;
  if ( v164 )
  {
    v165[0] = 0;
    qfree(v164, p_src->m128i_i8);
  }
  if ( v162 )
  {
    v163[0] = 0;
    qfree(v162, p_src->m128i_i8);
  }
  if ( v159 )
  {
    v160[0] = 0;
    qfree(v159, p_src->m128i_i8);
  }
  if ( v157 )
  {
    v158[0] = 0;
    qfree(v157, p_src->m128i_i8);
  }
  if ( v155 )
  {
    v156[0] = 0;
    qfree(v155, p_src->m128i_i8);
  }
  if ( v152 )
  {
    v153[0] = 0;
    qfree(v152, p_src->m128i_i8);
  }
  return v48;
}
