__int64 __fastcall sub_55B040(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r14
  char v12; // r12
  char v13; // r15
  __int64 license_manager; // rax
  __int64 v15; // rax
  _BOOL4 v16; // eax
  __int64 v17; // rax
  const char *v18; // r12
  __int64 v19; // rbx
  __m128i *v20; // rax
  size_t v21; // r13
  __int64 v22; // rbx
  __int64 v23; // r12
  const char *v24; // r15
  const char *v25; // rsi
  const char *v26; // rax
  __m128i v27; // xmm0
  const char *v28; // r15
  __int64 v29; // rbx
  __m128i v30; // xmm0
  const char *v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rax
  __m128i si128; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rax
  const char *v38; // r15
  __int64 v39; // rbx
  size_t v40; // rax
  size_t v41; // r12
  _QWORD *v42; // rax
  __int64 v43; // r11
  __int32 v44; // edx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbx
  void *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  const char *v54; // rsi
  __int64 v55; // rax
  void *v56; // rdi
  __m128 v57; // xmm0
  const char *v58; // rsi
  int v59; // eax
  const char *v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdi
  double v65; // xmm4_8
  double v66; // xmm5_8
  char v67; // al
  time_t v68; // r15
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r9
  __m128 v72; // xmm4
  __m128 v73; // xmm5
  __m128 v74; // xmm0
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __m128 v79; // xmm4
  __m128 v80; // xmm5
  unsigned __int8 *v81; // rax
  __int64 v82; // r12
  int *v83; // rdx
  __int64 v84; // rax
  char *v85; // r15
  size_t v86; // rax
  __int64 v87; // r13
  size_t v88; // rbx
  const char *v89; // rsi
  unsigned __int64 v90; // rbx
  size_t v91; // r15
  char *v92; // r8
  __int64 v93; // r10
  char *v94; // rsi
  const char *v95; // rsi
  unsigned __int64 v96; // rbx
  size_t v97; // r13
  __int64 v98; // r15
  __int64 v99; // r10
  char *v100; // rsi
  const char *v101; // rsi
  unsigned __int64 v102; // rbx
  size_t v103; // r12
  __int64 v104; // r13
  __int64 v105; // r15
  char *v106; // rsi
  const char *v107; // r8
  const char *v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __m128 v114; // xmm4
  __m128 v115; // xmm5
  const char *v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rbx
  __int64 v119; // r14
  __int64 v120; // rdx
  __int64 *v121; // rax
  __int64 v122; // rdi
  __int64 v124; // rdx
  __int64 v125; // rsi
  const char *v126; // rcx
  __int64 v127; // rdi
  const char *v128; // rdx
  const char *v129; // rsi
  __int64 v130; // rdx
  __int64 v131; // rcx
  __m128 v132; // xmm4
  __m128 v133; // xmm5
  __int64 v134; // rdi
  __int64 v135; // r15
  __int64 v136; // rbx
  __int64 v137; // r15
  __int64 v138; // rdx
  __int64 *v139; // rax
  __int64 v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __m128 v145; // xmm4
  __m128 v146; // xmm5
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  char v151; // [rsp+0h] [rbp-2E0h]
  char v152; // [rsp+0h] [rbp-2E0h]
  char v153; // [rsp+0h] [rbp-2E0h]
  char *s; // [rsp+18h] [rbp-2C8h]
  __int64 v155; // [rsp+20h] [rbp-2C0h]
  __int64 v156; // [rsp+28h] [rbp-2B8h]
  __int64 v157; // [rsp+28h] [rbp-2B8h]
  __int64 v158; // [rsp+30h] [rbp-2B0h]
  __m128i v159; // [rsp+40h] [rbp-2A0h] BYREF
  char v160; // [rsp+5Fh] [rbp-281h] BYREF
  __int64 v161; // [rsp+60h] [rbp-280h] BYREF
  time_t v162; // [rsp+68h] [rbp-278h] BYREF
  __int64 v163; // [rsp+70h] [rbp-270h] BYREF
  __int128 v164; // [rsp+78h] [rbp-268h]
  __int64 v165; // [rsp+90h] [rbp-250h] BYREF
  __int128 v166; // [rsp+98h] [rbp-248h]
  const char *v167; // [rsp+B0h] [rbp-230h] BYREF
  __int128 v168; // [rsp+B8h] [rbp-228h]
  char *v169; // [rsp+D0h] [rbp-210h] BYREF
  __int128 v170; // [rsp+D8h] [rbp-208h]
  void *v171; // [rsp+F0h] [rbp-1F0h] BYREF
  size_t n[3]; // [rsp+F8h] [rbp-1E8h]
  void *src; // [rsp+110h] [rbp-1D0h] BYREF
  __m128i v174; // [rsp+118h] [rbp-1C8h] BYREF
  _QWORD v175[8]; // [rsp+130h] [rbp-1B0h] BYREF
  __int128 v176; // [rsp+170h] [rbp-170h]
  __int64 v177; // [rsp+180h] [rbp-160h]
  __int128 v178; // [rsp+188h] [rbp-158h]
  __int64 v179; // [rsp+198h] [rbp-148h]
  __int64 v180; // [rsp+1A0h] [rbp-140h]
  __int64 v181; // [rsp+1A8h] [rbp-138h]
  __int128 v182; // [rsp+1B0h] [rbp-130h]
  void *v183; // [rsp+1C0h] [rbp-120h]
  __int128 v184; // [rsp+1C8h] [rbp-118h]
  int v185; // [rsp+1D8h] [rbp-108h]
  __int64 v186; // [rsp+1E0h] [rbp-100h] BYREF
  __int128 v187; // [rsp+1E8h] [rbp-F8h]
  int v188; // [rsp+1F8h] [rbp-E8h]
  __int64 v189; // [rsp+200h] [rbp-E0h]
  __int128 v190; // [rsp+208h] [rbp-D8h]
  __int64 v191; // [rsp+218h] [rbp-C8h]
  __int128 v192; // [rsp+220h] [rbp-C0h]
  const char *v193; // [rsp+230h] [rbp-B0h] BYREF
  __m128i v194; // [rsp+238h] [rbp-A8h]
  __int64 v195; // [rsp+248h] [rbp-98h] BYREF
  time_t v196; // [rsp+250h] [rbp-90h]
  int *v197; // [rsp+258h] [rbp-88h]
  char v198; // [rsp+260h] [rbp-80h]
  const char *v199; // [rsp+268h] [rbp-78h]
  char v200; // [rsp+270h] [rbp-70h]
  _OWORD v201[2]; // [rsp+280h] [rbp-60h] BYREF
  __int16 v202; // [rsp+2A0h] [rbp-40h]
  unsigned __int64 v203; // [rsp+2A8h] [rbp-38h]

  v203 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = sub_552140(v9);
  if ( v10 == -1 )
    return 0;
  v11 = *(_QWORD *)(v9 + 192) + 152 * v10;
  if ( !v11 )
    return 0;
  v161 = 0;
  v12 = *(_BYTE *)(v9 + 240);
  v13 = 0;
  license_manager = get_license_manager(a2);
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)license_manager + 88LL))(
          license_manager,
          0,
          &v161);
  if ( v15 )
  {
    v16 = *(_DWORD *)v15 != *(_DWORD *)v11 || *(_WORD *)(v15 + 4) != *(_WORD *)(v11 + 4);
    v159.m128i_i8[0] = !v16;
    v13 = !v16 & v12;
  }
  v17 = *(_QWORD *)(v9 + 184);
  v18 = nullptr;
  v155 = v17;
  if ( *(_BYTE *)(v17 + 1009) )
    v18 = (const char *)(v17 + 1016);
  v19 = v161;
  v171 = nullptr;
  *(_OWORD *)n = 0;
  v20 = (__m128i *)qvector_reserve(&v171, 0, 25, 1);
  v171 = v20;
  n[0] = 25;
  *v20 = _mm_load_si128((const __m128i *)&xmmword_5DDF60);
  v20[1].m128i_i64[0] = 0x65736E6563696C20LL;
  *((_BYTE *)v171 + 24) = 0;
  v21 = n[0];
  v175[1] = 0xFFFFFFFF00000001LL;
  v175[2] = 0xFFFFFFFFLL;
  v175[3] = 0xFFFFFFFFLL;
  v175[4] = 0xFFFFFFFF00000000LL;
  v175[5] = 0xFFFFFFFF00000000LL;
  v175[6] = 0;
  v175[7] = 0;
  v177 = 0;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v175[0] = &forms::abstract_form_desc_t___vtable;
  v183 = nullptr;
  v176 = 0;
  v178 = 0;
  v182 = 0;
  v184 = 0;
  if ( n[0] )
  {
    v183 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v184 + 1) = v21;
    memcpy(v183, v171, v21);
    *(_QWORD *)&v184 = v21;
  }
  v185 = -1;
  v175[0] = &forms::dialog_desc_t___vtable;
  v186 = 0;
  v188 = -1;
  v189 = 0;
  v191 = 0;
  v187 = 0;
  v190 = 0;
  v192 = 0;
  sub_559B30((__int64)&v186, 2, -1);
  sub_559B30((__int64)&v186, 4, -1);
  v198 = v13;
  v175[0] = &liblicui::menu_license_manager_borrow;
  v193 = nullptr;
  v197 = (int *)v11;
  v199 = v18;
  v200 = 0;
  v194 = 0;
  if ( !v19 )
    ((void (*)(void))sub_55C580)();
  v22 = qstrftime(v201, 32, "%F", 0.0);
  src = nullptr;
  v174 = 0;
  if ( v22 )
  {
    v24 = (const char *)v201;
    v22 = strlen((const char *)v201);
    v23 = v22 + 1;
  }
  else
  {
    v23 = 1;
    v24 = (const char *)&unk_5C2F25;
  }
  v25 = v24;
  src = (void *)qvector_reserve(&src, 0, v23, 1);
  v174.m128i_i64[0] = v23;
  memmove(src, v24, v22);
  *((_BYTE *)src + v22) = 0;
  v26 = (const char *)src;
  v27 = _mm_loadu_si128(&v174);
  src = nullptr;
  v28 = v26;
  v174 = 0;
  v29 = v27.m128i_i64[0];
  if ( v193 )
  {
    v159 = v27;
    v194.m128i_i64[0] = 0;
    qfree(v193, v25);
    v30 = _mm_load_si128(&v159);
    v193 = v28;
    v194 = v30;
    if ( src )
    {
      v174.m128i_i64[0] = 0;
      qfree(src, v25);
      v29 = v194.m128i_i64[0];
    }
  }
  else
  {
    v193 = v26;
    v194 = v27;
  }
  v31 = &s1;
  if ( v29 )
    v31 = v193;
  v195 = parse_borrow_date(0, v31);
  v32 = operator new(0x28u);
  *(_QWORD *)(v32 + 8) = 0;
  *(_DWORD *)(v32 + 32) = 2;
  *(_OWORD *)(v32 + 16) = 0;
  *(_QWORD *)v32 = &forms::vlayout_t___vtable;
  v179 = v32;
  v33 = operator new(0x88u);
  *(_QWORD *)(v33 + 48) = 0;
  *(_QWORD *)(v33 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v33 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v33 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v33 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v33 + 56) = 0;
  *(_QWORD *)(v33 + 80) = 0;
  *(_QWORD *)v33 = &forms::label_t___vtable;
  *(_QWORD *)(v33 + 104) = 0;
  *(_OWORD *)(v33 + 64) = 0;
  *(_OWORD *)(v33 + 88) = 0;
  *(_OWORD *)(v33 + 112) = 0;
  v34 = qvector_reserve(v33 + 104, 0, 170, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDF70);
  *(_QWORD *)(v33 + 104) = v34;
  *(_QWORD *)(v33 + 112) = 170;
  *(__m128i *)v34 = si128;
  *(__m128i *)(v34 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DDF80);
  *(__m128i *)(v34 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DDF90);
  *(__m128i *)(v34 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DDFA0);
  *(__m128i *)(v34 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DDFB0);
  *(__m128i *)(v34 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DDFC0);
  *(__m128i *)(v34 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DDFD0);
  *(__m128i *)(v34 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DDFE0);
  *(__m128i *)(v34 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DDFF0);
  *(__m128i *)(v34 + 144) = _mm_load_si128((const __m128i *)&xmmword_5DE000);
  *(__m128i *)(v34 + 153) = _mm_load_si128((const __m128i *)&xmmword_5DE010);
  *(_BYTE *)(*(_QWORD *)(v33 + 104) + 169LL) = 0;
  v36 = *(_QWORD *)(v32 + 8);
  v158 = v32 + 8;
  v37 = *(_QWORD *)(v32 + 16);
  *(_BYTE *)(v33 + 128) = 0;
  *(_DWORD *)(v33 + 32) = 1;
  if ( *(_QWORD *)(v32 + 24) < (unsigned __int64)(v37 + 1) )
  {
    v150 = qvector_reserve(v158, v36, v37 + 1, 8);
    *(_QWORD *)(v32 + 8) = v150;
    v36 = v150;
    v37 = *(_QWORD *)(v32 + 16);
  }
  *(_QWORD *)(v36 + 8 * v37) = v33;
  v38 = "Borrow Until (YYYY-MM-DD) / Leave empty to return the license";
  ++*(_QWORD *)(v32 + 16);
  if ( !v198 )
    v38 = "Borrow Until (YYYY-MM-DD)";
  v39 = operator new(0x88u);
  *(_QWORD *)(v39 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v39 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v39 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v39 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v39 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v39 + 48) = 0;
  *(_QWORD *)(v39 + 56) = 0;
  *(_QWORD *)(v39 + 80) = 0;
  *(_QWORD *)v39 = &forms::label_t___vtable;
  *(_QWORD *)(v39 + 104) = 0;
  *(_OWORD *)(v39 + 64) = 0;
  *(_OWORD *)(v39 + 88) = 0;
  *(_OWORD *)(v39 + 112) = 0;
  v40 = strlen(v38);
  v41 = v40 + 1;
  v159.m128i_i64[0] = v40;
  v42 = (_QWORD *)qvector_reserve(v39 + 104, 0, v40 + 1, 1);
  *(_QWORD *)(v39 + 104) = v42;
  *(_QWORD *)(v39 + 112) = v41;
  *v42 = *(_QWORD *)v38;
  v43 = v159.m128i_i64[0];
  v44 = v159.m128i_i32[0];
  *(_QWORD *)((char *)v42 + v159.m128i_u32[0] - 8) = *(_QWORD *)&v38[v159.m128i_u32[0] - 8];
  qmemcpy(
    (void *)((unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(v38 - ((const char *)v42 - ((unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * ((v44 + (unsigned int)v42 - (((_DWORD)v42 + 8) & 0xFFFFFFF8)) >> 3));
  *(_BYTE *)(*(_QWORD *)(v39 + 104) + v43) = 0;
  v45 = *(_QWORD *)(v32 + 16);
  *(_BYTE *)(v39 + 128) = 0;
  v46 = *(_QWORD *)(v32 + 8);
  *(_DWORD *)(v39 + 32) = 1;
  if ( *(_QWORD *)(v32 + 24) < (unsigned __int64)(v45 + 1) )
  {
    v148 = qvector_reserve(v158, v46, v45 + 1, 8);
    *(_QWORD *)(v32 + 8) = v148;
    v46 = v148;
    v45 = *(_QWORD *)(v32 + 16);
  }
  *(_QWORD *)(v46 + 8 * v45) = v39;
  ++*(_QWORD *)(v32 + 16);
  v47 = operator new(0x90u);
  *(_QWORD *)(v47 + 8) = 3;
  *(_QWORD *)(v47 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v47 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v47 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v47 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v47 = &forms::text_line_t___vtable;
  *(_QWORD *)(v47 + 48) = 0;
  *(_QWORD *)(v47 + 56) = 0;
  *(_QWORD *)(v47 + 80) = 0;
  *(_QWORD *)(v47 + 104) = 0;
  *(_QWORD *)(v47 + 128) = 0;
  *(_QWORD *)(v47 + 136) = &v193;
  *(_OWORD *)(v47 + 64) = 0;
  *(_OWORD *)(v47 + 88) = 0;
  *(_OWORD *)(v47 + 112) = 0;
  v48 = (void *)qvector_reserve(v47 + 104, 0, 13, 1);
  *(_QWORD *)(v47 + 104) = v48;
  *(_QWORD *)(v47 + 112) = 13;
  qmemcpy(v48, "borrow_until", 12);
  *(_BYTE *)(*(_QWORD *)(v47 + 104) + 12LL) = 0;
  v49 = *(_QWORD *)(v32 + 16);
  v50 = *(_QWORD *)(v32 + 8);
  if ( *(_QWORD *)(v32 + 24) < (unsigned __int64)(v49 + 1) )
  {
    v147 = qvector_reserve(v158, v50, v49 + 1, 8);
    *(_QWORD *)(v32 + 8) = v147;
    v50 = v147;
    v49 = *(_QWORD *)(v32 + 16);
  }
  *(_QWORD *)(v50 + 8 * v49) = v47;
  ++*(_QWORD *)(v32 + 16);
  v51 = operator new(0x70u);
  v54 = *(const char **)(v32 + 8);
  *(_QWORD *)(v51 + 8) = 0x10000000FLL;
  *(_QWORD *)(v51 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v51 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v51 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v51 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v51 = &forms::calendar_t___vtable;
  *(_QWORD *)(v51 + 104) = &v195;
  v55 = *(_QWORD *)(v32 + 16);
  *(_QWORD *)(v51 + 48) = 0;
  *(_QWORD *)(v51 + 56) = 0;
  *(_QWORD *)(v51 + 80) = 0;
  *(_OWORD *)(v51 + 64) = 0;
  *(_OWORD *)(v51 + 88) = 0;
  if ( *(_QWORD *)(v32 + 24) < (unsigned __int64)(v55 + 1) )
  {
    v149 = qvector_reserve(v158, v54, v55 + 1, 8);
    *(_QWORD *)(v32 + 8) = v149;
    v54 = (const char *)v149;
    v55 = *(_QWORD *)(v32 + 16);
  }
  *(_QWORD *)&v54[8 * v55] = v51;
  v56 = v171;
  ++*(_QWORD *)(v32 + 16);
  if ( v56 )
  {
    n[0] = 0;
    qfree(v56, v54);
  }
  v57 = 0;
  v163 = 0;
  v164 = 0;
  while ( 1 )
  {
    v58 = nullptr;
    *(double *)v57.m128_u64 = callui(203, 0, (unsigned int)v175, (unsigned int)&v163, v52, v53);
    if ( v59 != 1 )
      break;
    v165 = 0;
    v166 = 0;
    if ( v194.m128i_i64[0] > 1uLL )
      goto LABEL_35;
    if ( v198 )
    {
      v196 = 0;
LABEL_37:
      v167 = nullptr;
      a5 = 0;
      v168 = 0;
      v62 = get_license_manager(*(double *)v57.m128_u64);
      v63 = *(_QWORD *)v62;
      v160 = 0;
      v64 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD))(v63 + 88))(v62, &v160, 0);
      v67 = 0;
      if ( v64 && (*(_DWORD *)v64 != *v197 || *(_WORD *)(v64 + 4) != *((_WORD *)v197 + 2)) )
        v67 = v160;
      v68 = v196;
      if ( !v196 || v67 )
      {
        if ( (unsigned __int8)sub_55AD50(
                                (int *)v64,
                                nullptr,
                                *(double *)v57.m128_u64,
                                (__m128)0LL,
                                (__m128)0LL,
                                (__m128)0LL,
                                v65,
                                v66,
                                a8,
                                a9) )
        {
          if ( !v68 )
            goto LABEL_97;
          goto LABEL_42;
        }
      }
      else
      {
LABEL_42:
        if ( v199 )
          sub_559430(v199, v197);
        v162 = v196;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, time_t *, const char **))(*(_QWORD *)v62 + 72LL))(
               v62,
               0,
               *(_QWORD *)v197,
               &v162,
               &v167) )
        {
          v202 = 101;
          v201[0] = _mm_load_si128((const __m128i *)&xmmword_5DE020);
          v74 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DE030);
          v201[1] = v74;
          sub_16B9E0(
            (int)v201,
            0,
            v69,
            v70,
            101,
            v71,
            v74,
            (__m128)0LL,
            (__m128)0LL,
            (__m128)0LL,
            v72,
            v73,
            a8,
            a9,
            v151);
          sub_169700(
            (int)"%s:\n",
            (__int64)v201,
            v75,
            v76,
            v77,
            v78,
            v74,
            (__m128)0LL,
            (__m128)0LL,
            (__m128)0LL,
            v79,
            v80,
            a8,
            a9,
            v152);
          v81 = (unsigned __int8 *)v197;
          v169 = nullptr;
          v170 = 0;
          if ( *((_QWORD *)v197 + 8) )
          {
            v169 = (char *)qvector_reserve(&v169, 0, 3, 1);
            v82 = 0;
            *(_QWORD *)&v170 = 3;
            strcpy(v169, " (");
            v159.m128i_i64[0] = 0;
            v83 = v197;
            if ( *((_QWORD *)v197 + 8) )
            {
              while ( 1 )
              {
                v84 = *(int *)(*((_QWORD *)v83 + 7) + v82 + 8);
                v174 = 0;
                src = nullptr;
                if ( (int)v84 >= 29 )
                  v84 = 0;
                v85 = off_8BA320[v84];
                if ( v85 )
                {
                  v86 = strlen(off_8BA320[v84]);
                  v87 = v86 + 1;
                  v88 = v86;
                  v89 = v85;
                  src = (void *)qvector_reserve(&src, 0, v86 + 1, 1);
                  v174.m128i_i64[0] = v87;
                  memmove(src, v85, v88);
                  *((_BYTE *)src + v88) = 0;
                  v90 = v174.m128i_i64[0];
                  if ( v174.m128i_i64[0] )
                  {
                    v91 = v174.m128i_i64[0] - 1;
                    if ( v174.m128i_i64[0] != 1 )
                    {
                      v92 = (char *)v170;
                      v93 = v174.m128i_i64[0] - 1;
                      if ( (_QWORD)v170 )
                      {
                        v92 = (char *)(v170 - 1);
                        v93 = v91 + v170 - 1;
                        v90 = v174.m128i_i64[0] + v170 - 1;
                      }
                      v94 = v169;
                      if ( *((_QWORD *)&v170 + 1) < v90 )
                      {
                        s = v92;
                        v156 = v93;
                        v169 = (char *)qvector_reserve(&v169, v169, v90, 1);
                        v92 = s;
                        v94 = v169;
                        v93 = v156;
                      }
                      *(_QWORD *)&v170 = v90;
                      v94[v93] = 0;
                      v89 = (const char *)src;
                      memcpy(&v169[(_QWORD)v92], src, v91);
                    }
                  }
                  if ( src )
                  {
                    v174.m128i_i64[0] = 0;
                    qfree(src, v89);
                  }
                  v83 = v197;
                }
                if ( ++v159.m128i_i64[0] >= *((_QWORD *)v83 + 8) )
                  break;
                v95 = nullptr;
                v174 = 0;
                src = nullptr;
                src = (void *)qvector_reserve(&src, 0, 3, 1);
                v174.m128i_i64[0] = 3;
                strcpy((char *)src, ", ");
                v96 = v174.m128i_i64[0];
                if ( v174.m128i_i64[0] )
                {
                  v97 = v174.m128i_i64[0] - 1;
                  if ( v174.m128i_i64[0] != 1 )
                  {
                    v98 = v170;
                    v99 = v174.m128i_i64[0] - 1;
                    if ( (_QWORD)v170 )
                    {
                      v98 = v170 - 1;
                      v99 = v97 + v170 - 1;
                      v96 = v174.m128i_i64[0] + v170 - 1;
                    }
                    v100 = v169;
                    if ( *((_QWORD *)&v170 + 1) < v96 )
                    {
                      v157 = v99;
                      v169 = (char *)qvector_reserve(&v169, v169, v96, 1);
                      v99 = v157;
                      v100 = v169;
                    }
                    *(_QWORD *)&v170 = v96;
                    v100[v99] = 0;
                    v95 = (const char *)src;
                    memcpy(&v169[v98], src, v97);
                  }
                }
                if ( src )
                {
                  v174.m128i_i64[0] = 0;
                  qfree(src, v95);
                }
                v83 = v197;
                v82 += 40;
              }
            }
            v101 = nullptr;
            v174 = 0;
            src = nullptr;
            src = (void *)qvector_reserve(&src, 0, 2, 1);
            v174.m128i_i64[0] = 2;
            *(_BYTE *)src = 41;
            *((_BYTE *)src + 1) = 0;
            v102 = v174.m128i_i64[0];
            if ( v174.m128i_i64[0] )
            {
              v103 = v174.m128i_i64[0] - 1;
              if ( v174.m128i_i64[0] != 1 )
              {
                v104 = v174.m128i_i64[0] - 1;
                v105 = v170;
                if ( (_QWORD)v170 )
                {
                  v104 = v103 + v170 - 1;
                  v105 = v170 - 1;
                  v102 = v174.m128i_i64[0] + v170 - 1;
                }
                v106 = v169;
                if ( *((_QWORD *)&v170 + 1) < v102 )
                {
                  v169 = (char *)qvector_reserve(&v169, v169, v102, 1);
                  v106 = v169;
                }
                *(_QWORD *)&v170 = v102;
                v106[v104] = 0;
                v101 = (const char *)src;
                memcpy(&v169[v105], src, v103);
              }
            }
            if ( src )
            {
              v174.m128i_i64[0] = 0;
              qfree(src, v101);
            }
            v81 = (unsigned __int8 *)v197;
          }
          v171 = nullptr;
          v57 = 0;
          src = nullptr;
          *(_OWORD *)n = 0;
          v174 = 0;
          sub_169A50(
            (__int64 *)&src,
            (__int64)"%02X-%02X%02X-%02X%02X-%02X",
            *v81,
            v81[1],
            v81[2],
            v81[3],
            v81[4],
            v81[5]);
          v107 = &s1;
          if ( v174.m128i_i64[0] )
            v107 = (const char *)src;
          v108 = &s1;
          if ( (_QWORD)v170 )
            v108 = v169;
          v109 = v197[3];
          if ( (int)v109 >= 7 )
            v109 = 0;
          sub_169A50((__int64 *)&v171, (__int64)"%s%s (%s)", off_8A5020[v109], v108, v107);
          if ( src )
          {
            v174.m128i_i64[0] = 0;
            *(double *)v57.m128_u64 = qfree(src, "%s%s (%s)");
          }
          v116 = &s1;
          if ( n[0] )
            v116 = (const char *)v171;
          sub_169700(
            (int)"%s\n",
            (__int64)v116,
            v110,
            v111,
            v112,
            v113,
            v57,
            (__m128)0LL,
            (__m128)0LL,
            (__m128)0LL,
            v114,
            v115,
            a8,
            a9,
            v153);
          if ( v171 )
          {
            n[0] = 0;
            *(double *)v57.m128_u64 = qfree(v171, v116);
          }
          if ( v169 )
          {
            *(_QWORD *)&v170 = 0;
            *(double *)v57.m128_u64 = qfree(v169, v116, *(double *)v57.m128_u64);
          }
LABEL_97:
          v58 = (const char *)(v155 + 624);
          sub_55A340(
            v155,
            v155 + 624,
            *(_QWORD *)v11,
            8,
            *(double *)v57.m128_u64,
            (__m128)0LL,
            (__m128)0LL,
            (__m128)0LL,
            *(double *)v72.m128_u64,
            *(double *)v73.m128_u64,
            a8,
            a9);
          if ( v167 )
          {
            *(_QWORD *)&v168 = 0;
            *(double *)v57.m128_u64 = qfree(v167, v58);
          }
          v117 = v165;
          if ( v165 )
          {
            if ( (_QWORD)v166 )
            {
              v118 = 0;
              v119 = v166;
              v120 = v165;
              do
              {
                v121 = (__int64 *)(v120 + 24 * v118);
                v122 = *v121;
                if ( *v121 )
                {
                  v121[1] = 0;
                  *(double *)v57.m128_u64 = qfree(v122, v58, *(double *)v57.m128_u64);
                  v120 = v165;
                }
                ++v118;
              }
              while ( v119 != v118 );
              v117 = v120;
            }
            *(_QWORD *)&v166 = 0;
            *(double *)v57.m128_u64 = qfree(v117, v58, *(double *)v57.m128_u64);
          }
          break;
        }
      }
      sub_55A340(
        v155,
        v155 + 624,
        *(_QWORD *)v11,
        8,
        *(double *)v57.m128_u64,
        (__m128)0LL,
        (__m128)0LL,
        (__m128)0LL,
        *(double *)v72.m128_u64,
        *(double *)v73.m128_u64,
        a8,
        a9);
      v129 = &s1;
      if ( (_QWORD)v168 )
        v129 = v167;
      sub_169630(
        (int)"AUTOHIDE NONE\nFailed to borrow the license: %s",
        (__int64)v129,
        v141,
        v142,
        v143,
        v144,
        v57,
        (__m128)0LL,
        (__m128)0LL,
        (__m128)0LL,
        v145,
        v146,
        a8,
        a9,
        v151);
      if ( v167 )
      {
        *(_QWORD *)&v168 = 0;
        qfree(v167, v129);
      }
LABEL_126:
      v134 = v165;
      goto LABEL_127;
    }
    v60 = &s1;
    if ( v194.m128i_i64[0] )
LABEL_35:
      v60 = v193;
    v196 = parse_borrow_date(0, v60);
    v61 = sub_55C580(*(double *)v57.m128_u64);
    v196 = v61 + v196 - time(nullptr);
    if ( v61 <= v196 )
      goto LABEL_37;
    v124 = v166;
    v125 = v165;
    if ( *((_QWORD *)&v166 + 1) < (unsigned __int64)(v166 + 1) )
    {
      v165 = qvector_reserve(&v165, v165, v166 + 1, 24);
      v124 = v166;
      v125 = v165;
    }
    v57 = 0;
    v126 = (const char *)&unk_5C2F25;
    v127 = v125 + 24 * v124;
    *(_QWORD *)v127 = 0;
    *(_OWORD *)(v127 + 8) = 0;
    *(_QWORD *)&v166 = v166 + 1;
    if ( v196 > 0 )
      v126 = " (in the past)";
    v128 = &s1;
    if ( v194.m128i_i64[0] )
      v128 = v193;
    v129 = "Wrong borrow end time '%s'%s";
    sub_169A50((__int64 *)v127, (__int64)"Wrong borrow end time '%s'%s", v128, v126);
    v134 = v165;
    v159.m128i_i64[0] = v165 + 24 * v166;
    if ( v159.m128i_i64[0] != v165 )
    {
      v135 = v165;
      do
      {
        v129 = &s1;
        if ( *(_QWORD *)(v135 + 8) )
          v129 = *(const char **)v135;
        sub_169630(
          (int)"AUTOHIDE NONE\n%s\n",
          (__int64)v129,
          v130,
          v131,
          v52,
          v53,
          (__m128)0LL,
          (__m128)0LL,
          (__m128)0LL,
          a5,
          v132,
          v133,
          a8,
          a9,
          v151);
        v135 += 24;
      }
      while ( v159.m128i_i64[0] != v135 );
      goto LABEL_126;
    }
LABEL_127:
    if ( v134 )
    {
      if ( (_QWORD)v166 )
      {
        v136 = 0;
        v137 = v166;
        v138 = v134;
        do
        {
          v139 = (__int64 *)(v138 + 24 * v136);
          v140 = *v139;
          if ( *v139 )
          {
            v139[1] = 0;
            qfree(v140, v129);
            v138 = v165;
          }
          ++v136;
        }
        while ( v137 != v136 );
        v134 = v138;
      }
      *(_QWORD *)&v166 = 0;
      qfree(v134, v129);
    }
  }
  if ( v163 )
  {
    *(_QWORD *)&v164 = 0;
    *(double *)v57.m128_u64 = qfree(v163, v58, *(double *)v57.m128_u64);
  }
  v175[0] = &liblicui::menu_license_manager_borrow;
  if ( v193 )
  {
    v194.m128i_i64[0] = 0;
    qfree(v193, v58, *(double *)v57.m128_u64);
  }
  forms::dialog_desc_t__::vfunc_0(v175, v58);
  return 1;
}
