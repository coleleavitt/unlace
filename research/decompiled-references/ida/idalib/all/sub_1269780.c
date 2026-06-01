void __fastcall sub_1269780(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __m128i *v6; // r12
  __int64 v7; // rbx
  void (__fastcall *v8)(size_t *, __int64, __int64); // rax
  __m128i *v9; // rbp
  __int64 v10; // rdx
  __m128i si128; // xmm0
  __m128i v12; // xmm1
  void (__fastcall *v13)(size_t *, size_t *, __int64); // rcx
  __int64 v14; // rax
  void (__fastcall *v15)(size_t *, __int64, __int64); // rax
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  void (__fastcall *v19)(size_t *, size_t *, __int64); // rcx
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  __m128i v33; // xmm0
  _BYTE *v34; // rsi
  signed __int64 v35; // rcx
  __int64 v36; // rbx
  signed __int64 v37; // r13
  _BYTE *v38; // rax
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // r13
  __int64 v43; // r15
  void *v44; // rdi
  void *v45; // rdi
  void **v46; // rdi
  __int64 v47; // rdx
  void **v48; // rax
  void *v49; // rdi
  void *v50; // rdi
  void *v51; // rdi
  int v52; // r11d
  __int64 v53; // r15
  unsigned __int64 v54; // r13
  signed __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rcx
  __m128i v58; // xmm0
  _QWORD *v59; // r9
  _BYTE *v60; // rsi
  size_t v61; // r8
  __int64 v62; // r12
  _QWORD *v63; // rbx
  char *v64; // rbp
  size_t v65; // r13
  _BYTE *v66; // rax
  void **v67; // r15
  void **v68; // r13
  __int32 v69; // r13d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __m128i *v74; // rsi
  __m128i *v75; // rsi
  size_t v76; // rax
  __int64 v77; // rax
  size_t v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rcx
  __m128i *v82; // rax
  __m128i *v83; // rdx
  __int64 v84; // rax
  void *v85; // rdi
  __int32 v86; // eax
  bool v87; // r15
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __m128i *v90; // r15
  __m128i *v91; // rax
  __m128i *v92; // rsi
  __int32 v93; // eax
  __int64 v94; // r15
  char v95; // al
  char *v96; // rsi
  __int64 v97; // rdx
  __m128i *v98; // rsi
  __m128i *v99; // rsi
  __int32 v100; // eax
  size_t v101; // rax
  __m128i v102; // xmm0
  void ***v103; // rdi
  size_t v104; // rax
  void ***v105; // rdi
  __m128i v106; // xmm0
  size_t v107; // rax
  void ***v108; // rdi
  __m128i v109; // xmm0
  __int64 v110; // r13
  void *v111; // rdi
  __int32 v112; // eax
  __int64 v113; // rax
  _BYTE *v114; // rsi
  __int64 v115; // rdx
  __m128i *v116; // r15
  __m128i *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // r12
  void *v120; // rax
  void **v121; // r8
  void **v122; // rdx
  void *v123; // rdi
  __m128i *v124; // rax
  size_t v125; // rax
  __m128i v126; // xmm0
  void ***v127; // rdi
  size_t v128; // rdi
  size_t v129; // r8
  _BYTE *v130; // rcx
  unsigned __int64 v131; // r9
  unsigned __int64 v132; // rax
  _BYTE *m128i_i8; // rdi
  __int64 v134; // rax
  _BYTE *v135; // rdi
  size_t v136; // rdx
  const void *v137; // rsi
  unsigned __int64 v138; // r8
  __int64 v139; // rdi
  unsigned int v140; // r15d
  size_t v141; // rdx
  __int32 v142; // eax
  __m128i v143; // [rsp+8h] [rbp-2C0h] BYREF
  size_t *v144; // [rsp+18h] [rbp-2B0h]
  void *v145; // [rsp+20h] [rbp-2A8h]
  void ***v146; // [rsp+28h] [rbp-2A0h]
  void **v147; // [rsp+30h] [rbp-298h]
  void **p_dest; // [rsp+38h] [rbp-290h]
  void *v149; // [rsp+40h] [rbp-288h]
  __int64 v150; // [rsp+48h] [rbp-280h]
  void **v151; // [rsp+50h] [rbp-278h]
  __int64 (__fastcall **v152)(); // [rsp+58h] [rbp-270h]
  int v153; // [rsp+6Ch] [rbp-25Ch] BYREF
  void *dest; // [rsp+70h] [rbp-258h] BYREF
  __m128 v155; // [rsp+78h] [rbp-250h]
  void *v156[2]; // [rsp+90h] [rbp-238h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-228h] BYREF
  void *v158[4]; // [rsp+B0h] [rbp-218h] BYREF
  void *v159[4]; // [rsp+D0h] [rbp-1F8h] BYREF
  void *v160[2]; // [rsp+F0h] [rbp-1D8h] BYREF
  _BYTE v161[16]; // [rsp+100h] [rbp-1C8h] BYREF
  _QWORD v162[4]; // [rsp+110h] [rbp-1B8h] BYREF
  __int16 v163; // [rsp+130h] [rbp-198h]
  _QWORD v164[4]; // [rsp+140h] [rbp-188h] BYREF
  __int16 v165; // [rsp+160h] [rbp-168h]
  _QWORD v166[4]; // [rsp+170h] [rbp-158h] BYREF
  __int16 v167; // [rsp+190h] [rbp-138h]
  void *v168; // [rsp+1A0h] [rbp-128h] BYREF
  __int64 v169; // [rsp+1A8h] [rbp-120h]
  __int16 v170; // [rsp+1C0h] [rbp-108h]
  size_t n[2]; // [rsp+1D0h] [rbp-F8h] BYREF
  __m128i v172; // [rsp+1E0h] [rbp-E8h] BYREF
  void *v173; // [rsp+1F0h] [rbp-D8h] BYREF
  __int64 v174; // [rsp+1F8h] [rbp-D0h]
  void **v175; // [rsp+200h] [rbp-C8h] BYREF
  void *v176[2]; // [rsp+210h] [rbp-B8h] BYREF
  __int64 v177; // [rsp+220h] [rbp-A8h] BYREF
  void *v178[2]; // [rsp+230h] [rbp-98h]
  char *v179; // [rsp+240h] [rbp-88h]
  void *v180[2]; // [rsp+248h] [rbp-80h] BYREF
  __int64 v181; // [rsp+258h] [rbp-70h] BYREF
  void *v182[2]; // [rsp+268h] [rbp-60h] BYREF
  __int64 v183; // [rsp+278h] [rbp-50h] BYREF
  char v184; // [rsp+288h] [rbp-40h]

  v6 = (__m128i *)a3;
  v7 = a1;
  v150 = (__int64)a4;
  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_OWORD *)(a1 + 4984) = 0;
  *(_QWORD *)a1 = off_2C3CFE0;
  *(_QWORD *)(a1 + 5000) = 0;
  v146 = (void ***)(a1 + 4984);
  sub_122CEF0(a1 + 2384, (__int64)v6, a4);
  sub_117F8A0((__int64 *)(v7 + 1840), (__int64 *)(v7 + 3104));
  sub_1180210(v7 + 1864, v7 + 3128);
  sub_1180630(v7 + 1936, v7 + 3200);
  v8 = *(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 3392);
  v172.m128i_i64[0] = 0;
  if ( v8 )
  {
    v9 = (__m128i *)n;
    v8(n, a1 + 3376, 2);
    v10 = *(_QWORD *)(a1 + 3400);
    v8 = *(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 3392);
  }
  else
  {
    v10 = v172.m128i_i64[1];
    v9 = (__m128i *)n;
  }
  si128 = _mm_load_si128((const __m128i *)n);
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 2112));
  v13 = *(void (__fastcall **)(size_t *, size_t *, __int64))(a1 + 2128);
  *(_QWORD *)(a1 + 2128) = v8;
  v14 = *(_QWORD *)(a1 + 2136);
  *(__m128i *)n = v12;
  *(__m128i *)(a1 + 2112) = si128;
  v172.m128i_i64[0] = (__int64)v13;
  v172.m128i_i64[1] = v14;
  *(_QWORD *)(a1 + 2136) = v10;
  if ( v13 )
    v13(n, n, 3);
  v15 = *(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 3424);
  v16 = v172.m128i_i64[1];
  v172.m128i_i64[0] = 0;
  if ( v15 )
  {
    v15(n, a1 + 3408, 2);
    v16 = *(_QWORD *)(a1 + 3432);
    v15 = *(void (__fastcall **)(size_t *, __int64, __int64))(a1 + 3424);
  }
  v17 = _mm_load_si128((const __m128i *)n);
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 2144));
  v19 = *(void (__fastcall **)(size_t *, size_t *, __int64))(a1 + 2160);
  *(_QWORD *)(a1 + 2160) = v15;
  v20 = *(_QWORD *)(a1 + 2168);
  *(__m128i *)n = v18;
  *(__m128i *)(a1 + 2144) = v17;
  v172.m128i_i64[0] = (__int64)v19;
  v172.m128i_i64[1] = v20;
  *(_QWORD *)(a1 + 2168) = v16;
  if ( v19 )
    v19(n, n, 3);
  v21 = *(_BYTE **)(a1 + 2520);
  v22 = *(_QWORD *)(a1 + 2528);
  n[0] = (size_t)&v172;
  sub_1264810(n, v21, (__int64)&v21[v22]);
  v23 = *(_BYTE **)(a1 + 2552);
  v24 = *(_QWORD *)(a1 + 2560);
  v173 = &v175;
  sub_1264810(&v173, v23, (__int64)&v23[v24]);
  v25 = *(_BYTE **)(a1 + 2584);
  v26 = *(_QWORD *)(a1 + 2592);
  v176[0] = &v177;
  sub_1264810(v176, v25, (__int64)&v25[v26]);
  v27 = *(_QWORD *)(a1 + 2624);
  v28 = *(_QWORD *)(a1 + 2616);
  *(_OWORD *)v178 = 0;
  v143.m128i_i64[0] = v27;
  v179 = nullptr;
  v29 = v27 - v28;
  v30 = (v27 - v28) >> 5;
  if ( v30 )
  {
    if ( v30 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_285;
    v31 = (_QWORD *)operator new(v29);
    v28 = *(_QWORD *)(a1 + 2616);
    v32 = v31;
    v143.m128i_i64[0] = *(_QWORD *)(a1 + 2624);
  }
  else
  {
    v32 = nullptr;
  }
  v143.m128i_i64[1] = (__int64)v32;
  v33 = _mm_loadl_epi64((const __m128i *)&v143.m128i_u64[1]);
  v179 = (char *)v32 + v29;
  *(__m128i *)v178 = _mm_unpacklo_epi64(v33, v33);
  if ( v28 != v143.m128i_i64[0] )
  {
    *v32 = v32 + 2;
    v34 = *(_BYTE **)v28;
    v35 = *(_QWORD *)(v28 + 8);
    if ( !(v35 + *(_QWORD *)v28) || v34 )
    {
      v144 = (size_t *)a1;
      v36 = v28 + 32;
      v37 = v35;
      while ( (unsigned __int64)v37 <= 0xF )
      {
        v38 = (_BYTE *)*v32;
        if ( v37 == 1 )
        {
          *v38 = *v34;
          v38 = (_BYTE *)*v32;
          goto LABEL_19;
        }
        if ( v37 )
          goto LABEL_25;
LABEL_19:
        v32[1] = v37;
        v32 += 4;
        v38[v37] = 0;
        if ( v143.m128i_i64[0] == v36 )
        {
          v7 = (__int64)v144;
          goto LABEL_29;
        }
        v36 += 32;
        *v32 = v32 + 2;
        v34 = *(_BYTE **)(v36 - 32);
        v37 = *(_QWORD *)(v36 - 24);
        if ( &v34[v37] && !v34 )
          goto LABEL_22;
      }
      if ( v37 < 0 )
LABEL_283:
        std::__throw_length_error("basic_string::_M_create");
      v143.m128i_i64[1] = (__int64)v34;
      v38 = (_BYTE *)operator new(v37 + 1);
      v32[2] = v37;
      v34 = (_BYTE *)v143.m128i_i64[1];
      *v32 = v38;
LABEL_25:
      memcpy(v38, v34, v37);
      v38 = (_BYTE *)*v32;
      goto LABEL_19;
    }
LABEL_22:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_29:
  v39 = *(_BYTE **)(v7 + 2640);
  v40 = *(_QWORD *)(v7 + 2648);
  v178[1] = v32;
  v180[0] = &v181;
  sub_1264810(v180, v39, (__int64)&v39[v40]);
  v41 = *(_BYTE *)(v7 + 2704) == 0;
  v184 = 0;
  if ( !v41 )
  {
    v114 = *(_BYTE **)(v7 + 2672);
    v115 = *(_QWORD *)(v7 + 2680);
    v182[0] = &v183;
    sub_1264810(v182, v114, (__int64)&v114[v115]);
    v184 = 1;
  }
  v42 = *(_QWORD *)(v7 + 2176);
  v43 = v42 + 192LL * *(unsigned int *)(v7 + 2184);
  while ( v42 != v43 )
  {
    while ( 1 )
    {
      v43 -= 192;
      if ( *(_BYTE *)(v43 + 184) )
      {
        v44 = *(void **)(v43 + 152);
        if ( v44 != (void *)(v43 + 168) )
          operator delete(v44);
      }
      v45 = *(void **)(v43 + 120);
      if ( v45 != (void *)(v43 + 136) )
        operator delete(v45);
      v46 = *(void ***)(v43 + 96);
      v47 = *(_QWORD *)(v43 + 104);
      v48 = v46;
      if ( (void **)v47 != v46 )
      {
        do
        {
          while ( 1 )
          {
            v49 = *v48;
            if ( *v48 == v48 + 2 )
              break;
            v143.m128i_i64[1] = (__int64)v48;
            v143.m128i_i64[0] = v47;
            operator delete(v49);
            v47 = v143.m128i_i64[0];
            v48 = (void **)(v143.m128i_i64[1] + 32);
            if ( v143.m128i_i64[1] + 32 == v143.m128i_i64[0] )
              goto LABEL_41;
          }
          v48 += 4;
        }
        while ( (void **)v47 != v48 );
LABEL_41:
        v46 = *(void ***)(v43 + 96);
      }
      if ( v46 )
        operator delete(v46);
      v50 = *(void **)(v43 + 64);
      if ( v50 != (void *)(v43 + 80) )
        operator delete(v50);
      v51 = *(void **)(v43 + 32);
      if ( v51 != (void *)(v43 + 48) )
        operator delete(v51);
      if ( *(_QWORD *)v43 == v43 + 16 )
        break;
      operator delete(*(void **)v43);
      if ( v42 == v43 )
        goto LABEL_50;
    }
  }
LABEL_50:
  v52 = *(_DWORD *)(v7 + 2188);
  *(_DWORD *)(v7 + 2184) = 0;
  if ( v52 )
  {
    v53 = *(_QWORD *)(v7 + 2176);
  }
  else
  {
    v143.m128i_i64[0] = v7 + 2176;
    v110 = sub_2237400(v7 + 2176, v7 + 2192, 1, 192, &v168);
    sub_11821E0((__int64 *)(v7 + 2176), v110);
    v111 = *(void **)(v7 + 2176);
    v112 = (int)v168;
    if ( (void *)(v7 + 2192) != v111 )
    {
      v143.m128i_i64[0] = (__int64)v168;
      free(v111);
      v112 = v143.m128i_i32[0];
    }
    *(_DWORD *)(v7 + 2188) = v112;
    v113 = *(unsigned int *)(v7 + 2184);
    *(_QWORD *)(v7 + 2176) = v110;
    v53 = v110 + 192 * v113;
  }
  *(_QWORD *)v53 = v53 + 16;
  sub_1264810((_QWORD *)v53, (_BYTE *)n[0], n[0] + n[1]);
  *(_QWORD *)(v53 + 32) = v53 + 48;
  sub_1264810((_QWORD *)(v53 + 32), v173, (__int64)v173 + v174);
  *(_QWORD *)(v53 + 64) = v53 + 80;
  sub_1264810((_QWORD *)(v53 + 64), (_BYTE *)v176[0], (__int64)v176[0] + (unsigned __int64)v176[1]);
  v54 = (char *)v178[1] - (char *)v178[0];
  v55 = (char *)v178[1] - (char *)v178[0];
  *(_OWORD *)(v53 + 96) = 0;
  v56 = v55 >> 5;
  *(_QWORD *)(v53 + 112) = 0;
  if ( v56 )
  {
    if ( v56 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v57 = (_QWORD *)operator new(v54);
      goto LABEL_55;
    }
LABEL_285:
    std::__throw_bad_alloc();
  }
  v57 = nullptr;
LABEL_55:
  v143.m128i_i64[0] = (__int64)v57;
  v58 = _mm_loadl_epi64(&v143);
  *(_QWORD *)(v53 + 112) = (char *)v57 + v54;
  *(__m128i *)(v53 + 96) = _mm_unpacklo_epi64(v58, v58);
  v59 = v178[0];
  v143.m128i_i64[0] = (__int64)v178[1];
  if ( v178[1] == v178[0] )
    goto LABEL_70;
  *v57 = v57 + 2;
  v60 = (_BYTE *)*v59;
  v61 = v59[1];
  if ( v61 + *v59 && !v60 )
    goto LABEL_22;
  v143.m128i_i64[1] = (__int64)v6;
  v62 = v7;
  v63 = v57;
  v144 = n;
  v64 = (char *)(v59 + 4);
  v65 = v61;
LABEL_59:
  if ( v65 > 0xF )
    goto LABEL_66;
  while ( 1 )
  {
    v66 = (_BYTE *)*v63;
    if ( v65 == 1 )
    {
      *v66 = *v60;
      v66 = (_BYTE *)*v63;
      goto LABEL_62;
    }
    if ( v65 )
      goto LABEL_68;
LABEL_62:
    v63[1] = v65;
    v63 += 4;
    v66[v65] = 0;
    if ( (char *)v143.m128i_i64[0] == v64 )
      break;
    v64 += 32;
    *v63 = v63 + 2;
    v60 = *((_BYTE **)v64 - 4);
    v65 = *((_QWORD *)v64 - 3);
    if ( !&v60[v65] )
      goto LABEL_59;
    if ( !v60 )
      goto LABEL_22;
    if ( v65 > 0xF )
    {
LABEL_66:
      v145 = v60;
      if ( (v65 & 0x8000000000000000LL) != 0LL )
        goto LABEL_283;
      v66 = (_BYTE *)operator new(v65 + 1);
      v63[2] = v65;
      v60 = v145;
      *v63 = v66;
LABEL_68:
      memcpy(v66, v60, v65);
      v66 = (_BYTE *)*v63;
      goto LABEL_62;
    }
  }
  v57 = v63;
  v9 = (__m128i *)v144;
  v7 = v62;
  v6 = (__m128i *)v143.m128i_i64[1];
LABEL_70:
  *(_QWORD *)(v53 + 104) = v57;
  *(_QWORD *)(v53 + 120) = v53 + 136;
  sub_1264810((_QWORD *)(v53 + 120), (_BYTE *)v180[0], (__int64)v180[0] + (unsigned __int64)v180[1]);
  *(_BYTE *)(v53 + 184) = 0;
  if ( v184 )
  {
    *(_QWORD *)(v53 + 152) = v53 + 168;
    sub_1264810((_QWORD *)(v53 + 152), (_BYTE *)v182[0], (__int64)v182[0] + (unsigned __int64)v182[1]);
    *(_BYTE *)(v53 + 184) = 1;
    ++*(_DWORD *)(v7 + 2184);
    if ( v184 && v182[0] != &v9[10].m128i_u64[1] )
      operator delete(v182[0]);
  }
  else
  {
    ++*(_DWORD *)(v7 + 2184);
  }
  if ( v180[0] != &v9[8].m128i_u64[1] )
    operator delete(v180[0]);
  v67 = (void **)v178[1];
  v68 = (void **)v178[0];
  if ( v178[1] != v178[0] )
  {
    do
    {
      while ( *v68 != v68 + 2 )
      {
        operator delete(*v68);
        v68 += 4;
        if ( v68 == v67 )
          goto LABEL_77;
      }
      v68 += 4;
    }
    while ( v67 != v68 );
LABEL_77:
    v68 = (void **)v178[0];
  }
  if ( v68 )
    operator delete(v68);
  if ( v176[0] != &v9[5] )
    operator delete(v176[0]);
  if ( v173 != &v9[3] )
    operator delete(v173);
  if ( (__m128i *)n[0] != &v9[1] )
    operator delete((void *)n[0]);
  v69 = v6[2].m128i_i32[0];
  p_dest = &dest;
  sub_1265750((__m128i *)&dest, v7);
  sub_12202B0(v7, v7 + 1152, v70, v71, v72, v73);
  sub_10D7FD0(&v153, *(_QWORD *)(a2 + 8), (__int64)v6);
  if ( v153 == 1 || v6[3].m128i_i32[0] == 17 )
  {
    n[1] = 2;
    v98 = *(__m128i **)(v7 + 4992);
    n[0] = (size_t)&v9[1];
    strcpy(v172.m128i_i8, "-z");
    if ( v98 == *(__m128i **)(v7 + 5000) )
    {
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      sub_A82970(v146, v98, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
    }
    else
    {
      v98->m128i_i64[0] = (__int64)v98[1].m128i_i64;
      if ( (__m128i *)n[0] == &v9[1] )
      {
        v98[1] = _mm_load_si128(&v172);
      }
      else
      {
        v98->m128i_i64[0] = n[0];
        v98[1].m128i_i64[0] = v172.m128i_i64[0];
      }
      v98->m128i_i64[1] = n[1];
      *(_QWORD *)(v7 + 4992) += 32LL;
    }
    v99 = *(__m128i **)(v7 + 4992);
    n[0] = (size_t)&v9[1];
    v172.m128i_i16[0] = 28526;
    v9[1].m128i_i8[2] = 119;
    n[1] = 3;
    v172.m128i_i8[3] = 0;
    if ( v99 == *(__m128i **)(v7 + 5000) )
    {
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      sub_A82970(v146, v99, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
    }
    else
    {
      v99->m128i_i64[0] = (__int64)v99[1].m128i_i64;
      if ( (__m128i *)n[0] == &v9[1] )
      {
        v99[1] = _mm_load_si128(&v172);
      }
      else
      {
        v99->m128i_i64[0] = n[0];
        v99[1].m128i_i64[0] = v172.m128i_i64[0];
      }
      v99->m128i_i64[1] = n[1];
      *(_QWORD *)(v7 + 4992) += 32LL;
    }
    if ( (unsigned int)(v153 - 20) > 0x24 && v153 != 1 )
      goto LABEL_165;
    goto LABEL_89;
  }
  if ( (unsigned int)(v153 - 20) <= 0x24 )
    goto LABEL_89;
LABEL_165:
  if ( v6[3].m128i_i32[0] != 17 )
    goto LABEL_98;
LABEL_89:
  n[1] = 2;
  v74 = *(__m128i **)(v7 + 4992);
  n[0] = (size_t)&v9[1];
  strcpy(v172.m128i_i8, "-z");
  if ( v74 == *(__m128i **)(v7 + 5000) )
  {
    v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
    sub_A82970(v146, v74, v9);
    if ( n[0] != v143.m128i_i64[0] )
      operator delete((void *)n[0]);
  }
  else
  {
    v74->m128i_i64[0] = (__int64)v74[1].m128i_i64;
    if ( (__m128i *)n[0] == &v9[1] )
    {
      v74[1] = _mm_load_si128(&v172);
    }
    else
    {
      v74->m128i_i64[0] = n[0];
      v74[1].m128i_i64[0] = v172.m128i_i64[0];
    }
    v74->m128i_i64[1] = n[1];
    *(_QWORD *)(v7 + 4992) += 32LL;
  }
  v75 = *(__m128i **)(v7 + 4992);
  v172.m128i_i32[0] = 1919706482;
  n[0] = (size_t)&v9[1];
  v9[1].m128i_i8[4] = 111;
  n[1] = 5;
  v172.m128i_i8[5] = 0;
  if ( v75 != *(__m128i **)(v7 + 5000) )
  {
    v75->m128i_i64[0] = (__int64)v75[1].m128i_i64;
    if ( (__m128i *)n[0] == &v9[1] )
    {
      v75[1] = _mm_load_si128(&v172);
    }
    else
    {
      v75->m128i_i64[0] = n[0];
      v75[1].m128i_i64[0] = v172.m128i_i64[0];
    }
    v75->m128i_i64[1] = n[1];
    *(_QWORD *)(v7 + 4992) += 32LL;
LABEL_97:
    if ( v6[3].m128i_i32[0] != 17 )
      goto LABEL_98;
LABEL_175:
    v100 = v6[2].m128i_i32[0];
    if ( (unsigned int)(v100 - 1) <= 1 )
    {
      n[1] = 2;
      strcpy(v172.m128i_i8, "-z");
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      sub_A82C60((__int64)v146, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      v101 = operator new(0x13u);
      v102 = _mm_load_si128((const __m128i *)&xmmword_23A9D90);
      v172.m128i_i64[0] = 18;
      n[0] = v101;
      strcpy((char *)(v101 + 16), "96");
      n[1] = 18;
      *(__m128i *)v101 = v102;
      goto LABEL_179;
    }
    if ( (unsigned int)(v100 - 3) <= 2 || v100 == 38 )
    {
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      strcpy(v172.m128i_i8, "-z");
      n[1] = 2;
      sub_A82C60((__int64)v146, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      v124 = (__m128i *)operator new(0x14u);
      v172.m128i_i64[0] = 19;
      n[0] = (size_t)v124;
      *v124 = _mm_load_si128((const __m128i *)&xmmword_23A9DA0);
      v124[1].m128i_i16[0] = 14387;
      v124[1].m128i_i8[2] = 52;
      n[1] = 19;
      v124[1].m128i_i8[3] = 0;
LABEL_179:
      sub_A82C60((__int64)v146, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
    }
    v143.m128i_i64[0] = sub_22B7A20(v6);
    if ( (unsigned __int8)sub_22B7EA0(v6) && v143.m128i_i32[0] <= 0x14u || v143.m128i_i32[0] <= 0x1Cu )
    {
      v103 = v146;
      n[0] = (size_t)&v9[1];
      v172.m128i_i64[0] = 0x736F722D6F6E2D2DLL;
      v9[1].m128i_i32[2] = 1701668709;
      v9[1].m128i_i16[6] = 29806;
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      n[1] = 14;
      v172.m128i_i8[14] = 0;
      sub_A82C60((__int64)v103, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
    }
    v143.m128i_i64[0] = sub_22B7A20(v6);
    if ( (!(unsigned __int8)sub_22B7EA0(v6) || v143.m128i_i32[0] > 0x14u) && v143.m128i_i32[0] > 0x1Bu )
    {
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      v104 = operator new(0x18u);
      v105 = v146;
      v106 = _mm_load_si128((const __m128i *)&xmmword_23A9DB0);
      *(_DWORD *)(v104 + 16) = 1949135468;
      *(_WORD *)(v104 + 20) = 26465;
      *(_BYTE *)(v104 + 22) = 115;
      *(_BYTE *)(v104 + 23) = 0;
      *(__m128i *)v104 = v106;
      n[0] = v104;
      v172.m128i_i64[0] = 23;
      n[1] = 23;
      sub_A82C60((__int64)v105, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
      n[0] = (size_t)&v9[1];
      v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
      v107 = operator new(0x17u);
      v108 = v146;
      v109 = _mm_load_si128((const __m128i *)&xmmword_23A9DC0);
      strcpy((char *)(v107 + 16), "s=relr");
      *(__m128i *)v107 = v109;
      n[0] = v107;
      v172.m128i_i64[0] = 22;
      n[1] = 22;
      sub_A82C60((__int64)v108, v9);
      if ( n[0] != v143.m128i_i64[0] )
        operator delete((void *)n[0]);
    }
    goto LABEL_98;
  }
  v143.m128i_i64[0] = (__int64)v9[1].m128i_i64;
  sub_A82970(v146, v75, v9);
  if ( n[0] == v143.m128i_i64[0] )
    goto LABEL_97;
  operator delete((void *)n[0]);
  if ( v6[3].m128i_i32[0] == 17 )
    goto LABEL_175;
LABEL_98:
  v76 = *(_QWORD *)(v7 + 2496);
  n[0] = *(_QWORD *)(v7 + 2488);
  n[1] = v76;
  v77 = sub_2246AB0(v9, "opt/rh/", 7, 0);
  v143.m128i_i64[0] = (__int64)&v168;
  if ( v77 != -1 )
  {
    v78 = *(_QWORD *)(v7 + 2488);
    n[1] = *(_QWORD *)(v7 + 2496);
    n[0] = v78;
    v172.m128i_i64[0] = (__int64)"/../bin";
    LOWORD(v173) = 773;
    sub_2253560(&v168, v9);
    v79 = *(unsigned int *)(v7 + 1160);
    v80 = v79 + 1;
    if ( v79 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 1164) )
    {
      v138 = *(_QWORD *)(v7 + 1152);
      v139 = v7 + 1152;
      if ( v138 > v143.m128i_i64[0]
        || (v143.m128i_i64[1] = *(_QWORD *)(v7 + 1152), v143.m128i_i64[0] >= v138 + 32 * v79) )
      {
        sub_A8C1F0(v139, v80);
        v79 = *(unsigned int *)(v7 + 1160);
        v82 = (__m128i *)v143.m128i_i64[0];
        v81 = *(_QWORD *)(v7 + 1152);
      }
      else
      {
        sub_A8C1F0(v139, v80);
        v81 = *(_QWORD *)(v7 + 1152);
        v79 = *(unsigned int *)(v7 + 1160);
        v82 = (__m128i *)(v81 + v143.m128i_i64[0] - v143.m128i_i64[1]);
      }
    }
    else
    {
      v81 = *(_QWORD *)(v7 + 1152);
      v82 = (__m128i *)v143.m128i_i64[0];
    }
    v83 = (__m128i *)(v81 + 32 * v79);
    v83->m128i_i64[0] = (__int64)v83[1].m128i_i64;
    if ( (__m128i *)v82->m128i_i64[0] == &v82[1] )
    {
      v83[1] = _mm_loadu_si128(v82 + 1);
    }
    else
    {
      v83->m128i_i64[0] = v82->m128i_i64[0];
      v83[1].m128i_i64[0] = v82[1].m128i_i64[0];
    }
    v83->m128i_i64[1] = v82->m128i_i64[1];
    v82->m128i_i64[0] = (__int64)v82[1].m128i_i64;
    v82->m128i_i64[1] = 0;
    v82[1].m128i_i8[0] = 0;
    v84 = v143.m128i_i64[0];
    v85 = v168;
    ++*(_DWORD *)(v7 + 1160);
    if ( v85 != (void *)(v84 + 16) )
      operator delete(v85);
  }
  if ( v69 == 1 || v69 == 35 )
  {
    v116 = v9 + 1;
    n[1] = 2;
    v117 = *(__m128i **)(v7 + 4992);
    n[0] = (size_t)&v9[1];
    strcpy(v172.m128i_i8, "-X");
    if ( v117 == *(__m128i **)(v7 + 5000) )
    {
      sub_A82970(v146, v117, v9);
      if ( (__m128i *)n[0] != v116 )
        operator delete((void *)n[0]);
    }
    else
    {
      v117->m128i_i64[0] = (__int64)v117[1].m128i_i64;
      if ( (__m128i *)n[0] == v116 )
      {
        v117[1] = _mm_load_si128(&v172);
      }
      else
      {
        v117->m128i_i64[0] = n[0];
        v117[1].m128i_i64[0] = v172.m128i_i64[0];
      }
      v117->m128i_i64[1] = n[1];
      *(_QWORD *)(v7 + 4992) += 32LL;
    }
  }
  LODWORD(v151) = v6[3].m128i_i32[0];
  v86 = v6[2].m128i_i32[0];
  if ( v86 == 16 )
  {
    LOBYTE(v149) = 0;
    v87 = 0;
LABEL_194:
    if ( !v155.m128_u64[0] )
      goto LABEL_112;
    goto LABEL_195;
  }
  LOBYTE(v149) = 1;
  v87 = v69 != 12 && (unsigned int)(v86 - 17) > 2;
  if ( v86 == 27 )
  {
LABEL_198:
    if ( (unsigned int)(v86 - 17) > 2 )
      goto LABEL_112;
    goto LABEL_194;
  }
  if ( v86 != 10 )
  {
    LOBYTE(v149) = v86 == 28;
    goto LABEL_198;
  }
  v88 = *(unsigned int *)(v7 + 2184);
  v89 = v155.m128_u64[0];
  if ( !(_DWORD)v88 )
    goto LABEL_111;
  v144 = (size_t *)(*(_QWORD *)(v7 + 2176) + 192 * v88 - 192);
  n[0] = (size_t)&v9[1];
  v143.m128i_i64[1] = (__int64)v9[1].m128i_i64;
  sub_1264810(v9, dest, (__int64)dest + v155.m128_u64[0]);
  v128 = n[0];
  v129 = v144[5];
  v130 = (_BYTE *)v144[4];
  v131 = v129 + n[1];
  if ( n[0] == v143.m128i_i64[1] )
    v132 = 15;
  else
    v132 = v172.m128i_i64[0];
  if ( v131 > v132 )
  {
    v143.m128i_i64[1] = v129 + n[1];
    sub_998B30((__int64)v9, n[1], 0, v130, v129);
    v128 = n[0];
    v131 = v143.m128i_u64[1];
  }
  else if ( v129 )
  {
    v135 = (_BYTE *)(n[1] + n[0]);
    if ( v129 == 1 )
    {
      *v135 = *v130;
      v128 = n[0];
    }
    else
    {
      v136 = v144[5];
      v137 = (const void *)v144[4];
      v143.m128i_i64[1] = v129 + n[1];
      memcpy(v135, v137, v136);
      v128 = n[0];
      v131 = v143.m128i_u64[1];
    }
  }
  n[1] = v131;
  *(_BYTE *)(v128 + v131) = 0;
  m128i_i8 = dest;
  if ( (__m128i *)n[0] == &v9[1] )
  {
    v141 = n[1];
    if ( n[1] )
    {
      if ( n[1] == 1 )
        *(_BYTE *)dest = v172.m128i_i8[0];
      else
        memcpy(dest, (const void *)n[0], n[1]);
      v141 = n[1];
      m128i_i8 = dest;
    }
    v155.m128_u64[0] = v141;
    m128i_i8[v141] = 0;
    m128i_i8 = (_BYTE *)n[0];
    goto LABEL_253;
  }
  if ( dest == p_dest + 2 )
  {
    v143.m128i_i64[1] = v172.m128i_i64[0];
    dest = (void *)n[0];
    v155 = _mm_loadh_ps((const double *)&v143.m128i_i64[1]);
    goto LABEL_263;
  }
  v143.m128i_i64[1] = v172.m128i_i64[0];
  v134 = v155.m128_i64[1];
  dest = (void *)n[0];
  v155 = _mm_loadh_ps((const double *)&v143.m128i_i64[1]);
  if ( !m128i_i8 )
  {
LABEL_263:
    m128i_i8 = v9[1].m128i_i8;
    n[0] = (size_t)&v9[1];
    goto LABEL_253;
  }
  n[0] = (size_t)m128i_i8;
  v172.m128i_i64[0] = v134;
LABEL_253:
  n[1] = 0;
  *m128i_i8 = 0;
  if ( (__m128i *)n[0] != &v9[1] )
    operator delete((void *)n[0]);
  v89 = v155.m128_u64[0];
LABEL_111:
  LOBYTE(v149) = 0;
  if ( v89 )
  {
LABEL_195:
    sub_C05100((__int64)v9, "--sysroot=", (__int64)p_dest);
    sub_A82C60((__int64)v146, v9);
    if ( (__m128i *)n[0] != &v9[1] )
      operator delete((void *)n[0]);
  }
LABEL_112:
  if ( !v87 )
    goto LABEL_119;
  if ( (unsigned int)(v153 - 23) > 2 && v153 != 20 )
  {
    if ( (_DWORD)v151 != 17
      || ((v140 = sub_22B7A20(v6), !(unsigned __int8)sub_22B7EA0(v6)) || v140 > 0x14) && v140 > 0x16 )
    {
      n[0] = (size_t)&v9[1];
      v125 = operator new(0x11u);
      v126 = _mm_load_si128((const __m128i *)&xmmword_23A9DE0);
      v127 = v146;
      *(_BYTE *)(v125 + 16) = 0;
      *(__m128i *)v125 = v126;
      n[0] = v125;
      v172.m128i_i64[0] = 16;
      n[1] = 16;
      sub_A82C60((__int64)v127, v9);
      v123 = (void *)n[0];
      if ( (__m128i *)n[0] == &v9[1] )
        goto LABEL_119;
LABEL_225:
      operator delete(v123);
      goto LABEL_119;
    }
  }
  v90 = v9 + 1;
  n[0] = (size_t)&v9[1];
  v91 = (__m128i *)operator new(0x12u);
  v172.m128i_i64[0] = 17;
  n[0] = (size_t)v91;
  v92 = *(__m128i **)(v7 + 4992);
  *v91 = _mm_load_si128((const __m128i *)&xmmword_23A9DD0);
  v91[1].m128i_i8[0] = 104;
  n[1] = 17;
  v91[1].m128i_i8[1] = 0;
  if ( v92 == *(__m128i **)(v7 + 5000) )
  {
    sub_A82970(v146, v92, v9);
    v123 = (void *)n[0];
    if ( (__m128i *)n[0] == v90 )
      goto LABEL_119;
    goto LABEL_225;
  }
  v92->m128i_i64[0] = (__int64)v92[1].m128i_i64;
  if ( (__m128i *)n[0] == v90 )
  {
    v92[1] = _mm_load_si128(&v172);
  }
  else
  {
    v92->m128i_i64[0] = n[0];
    v92[1].m128i_i64[0] = v172.m128i_i64[0];
  }
  v92->m128i_i64[1] = n[1];
  *(_QWORD *)(v7 + 4992) += 32LL;
LABEL_119:
  v93 = v6[2].m128i_i32[0];
  v94 = v7 + 624;
  if ( (unsigned int)(v93 - 16) <= 3 )
  {
    if ( !(unsigned __int8)sub_11543B0(v150, "n32") )
    {
LABEL_121:
      v95 = sub_22B7EC0(v6);
      v96 = "lib";
      v97 = v95 == 0 ? 5LL : 3LL;
      if ( !v95 )
        v96 = (char *)"lib64";
      goto LABEL_123;
    }
LABEL_170:
    v97 = 5;
    v96 = "lib32";
    goto LABEL_123;
  }
  if ( ((v93 - 29) & 0xFFFFFFF7) == 0 || (unsigned int)(v93 - 21) <= 1 )
    goto LABEL_170;
  if ( v93 != 38 )
  {
    if ( v93 != 27 )
      goto LABEL_121;
    goto LABEL_170;
  }
  v142 = v6[3].m128i_i32[0];
  if ( v142 != 12 && v142 != 25 )
    goto LABEL_121;
  v97 = 6;
  v96 = "libx32";
LABEL_123:
  v146 = (void ***)v156;
  v156[0] = &v157;
  sub_12648D0(v156, v96, (__int64)&v96[v97]);
  v147 = v158;
  sub_1265D80((__int64)v158, v7, a2, (__int64)v6, dest, v155.m128_i64[0]);
  if ( (unsigned int)(v69 - 16) <= 1 )
  {
    n[0] = (size_t)&v9[1];
    v121 = v147;
    v172.m128i_i32[0] = 1868720492;
    v122 = p_dest;
    v9[1].m128i_i16[2] = 12851;
    n[1] = 6;
    v172.m128i_i8[6] = 0;
    sub_1218F10(v7, a2, (__int64)v122, (__int64)v9, (__int64)v121, v7 + 624);
    if ( (__m128i *)n[0] != &v9[1] )
      operator delete((void *)n[0]);
    v170 = 257;
    v167 = 257;
    v164[0] = "/libo32";
    v165 = 259;
    LOWORD(v173) = 257;
    v144 = v164;
    v145 = v166;
    sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v164, (__int64)v166, v143.m128i_i64[0], (__int64)v9);
    v163 = 260;
    v143.m128i_i64[1] = (__int64)v162;
    v162[0] = v160;
    sub_11C52D0(a2, (__int64)v162, v7 + 624);
    if ( v160[0] != v161 )
      operator delete(v160[0]);
    v167 = 257;
    v164[0] = "/usr/libo32";
    LOWORD(v173) = 257;
    v170 = 257;
    v165 = 259;
    sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
    v162[0] = v160;
    v163 = 260;
    sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
    if ( v160[0] != v161 )
      operator delete(v160[0]);
  }
  else
  {
    v145 = v166;
    v144 = v164;
    v143.m128i_i64[1] = (__int64)v162;
  }
  sub_1218F10(v7, a2, (__int64)p_dest, (__int64)v146, (__int64)v147, v7 + 624);
  v170 = 257;
  v166[0] = v147;
  v164[0] = "/lib";
  LOWORD(v173) = 257;
  v167 = 260;
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v162[0] = v160;
  v163 = 260;
  sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  LOWORD(v173) = 257;
  v170 = 257;
  v167 = 260;
  v166[0] = v146;
  v164[0] = "/lib/..";
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v162[0] = v160;
  v163 = 260;
  sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  if ( (_DWORD)v151 == 17 )
  {
    v170 = 257;
    v151 = (void **)sub_22B7A20(v6);
    v160[0] = v161;
    v172 = 0;
    v160[1] = nullptr;
    n[0] = (size_t)&off_2BEBE68;
    v152 = &off_2BEBE68;
    v161[0] = 0;
    LODWORD(n[1]) = 0;
    LOBYTE(v174) = 0;
    HIDWORD(v174) = 1;
    v173 = nullptr;
    v175 = v160;
    sub_227B8B0(v9, 0, 0, 0);
    sub_227B910(v9, (unsigned int)v151);
    n[0] = (size_t)v152;
    sub_227B7A0(v9);
    v167 = 260;
    v166[0] = v147;
    v164[0] = "/usr/lib";
    LOWORD(v173) = 260;
    n[0] = (size_t)v160;
    v165 = 259;
    v151 = v159;
    sub_1130220(v159, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, (__int64)v9, v143.m128i_i64[0]);
    v162[0] = v151;
    v163 = 260;
    sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
    if ( v159[0] != v151 + 2 )
      operator delete(v159[0]);
    if ( v160[0] != v161 )
      operator delete(v160[0]);
  }
  v170 = 257;
  v166[0] = v147;
  v164[0] = "/usr/lib";
  LOWORD(v173) = 257;
  v167 = 260;
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v162[0] = v160;
  v163 = 260;
  sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  v170 = 257;
  v167 = 260;
  LOWORD(v173) = 257;
  v166[0] = v146;
  v164[0] = "/usr";
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v162[0] = v160;
  v163 = 260;
  sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  if ( (_BYTE)v149 )
  {
    v168 = sub_115A2B0(v150, v6);
    v119 = v118;
    v149 = v168;
    v165 = 259;
    v166[0] = v146;
    LOWORD(v173) = 257;
    v170 = 261;
    v169 = v118;
    v167 = 260;
    v164[0] = "/";
    sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
    v162[0] = v160;
    v163 = 260;
    sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
    v120 = v149;
    if ( v160[0] != v161 )
    {
      operator delete(v160[0]);
      v120 = v149;
    }
    v168 = v120;
    v170 = 261;
    LOWORD(v173) = 257;
    v166[0] = v146;
    v164[0] = "/usr";
    v169 = v119;
    v167 = 260;
    v165 = 259;
    sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
    v162[0] = v160;
    v163 = 260;
    sub_11C52D0(a2, v143.m128i_i64[1], v7 + 624);
    if ( v160[0] != v161 )
      operator delete(v160[0]);
  }
  sub_1219730(v7, a2, (__int64)p_dest, (__int64)v146, v7 + 624);
  v167 = 257;
  v164[0] = "/lib";
  LOWORD(v173) = 257;
  v170 = 257;
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v162[0] = v160;
  v163 = 260;
  sub_11C52D0(a2, v143.m128i_i64[1], v94);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  LOWORD(v173) = 257;
  v170 = 257;
  v167 = 257;
  v164[0] = "/usr/lib";
  v165 = 259;
  sub_1130220(v160, dest, v155.m128_i64[0], (__int64)v144, (__int64)v145, v143.m128i_i64[0], (__int64)v9);
  v163 = 260;
  v162[0] = v160;
  sub_11C52D0(a2, v143.m128i_i64[1], v94);
  if ( v160[0] != v161 )
    operator delete(v160[0]);
  if ( v158[0] != v147 + 2 )
    operator delete(v158[0]);
  if ( v156[0] != v146 + 2 )
    operator delete(v156[0]);
  if ( dest != p_dest + 2 )
    operator delete(dest);
}
