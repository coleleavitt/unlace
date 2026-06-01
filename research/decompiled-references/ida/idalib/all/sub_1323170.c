__int64 __fastcall sub_1323170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // eax
  bool v5; // zf
  char v6; // al
  char v7; // al
  char v8; // al
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  char v11; // al
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  const char **v19; // rax
  char *v20; // rbp
  size_t v21; // rax
  signed __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbp
  const char **v26; // rax
  char *v27; // rbx
  size_t v28; // rax
  signed __int64 v29; // r12
  char v30; // si
  char v31; // al
  int v32; // edx
  char v33; // cl
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rbx
  const char **v37; // rax
  char *v38; // rbp
  size_t v39; // rax
  signed __int64 v40; // r12
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rbx
  const char **v44; // rax
  char *v45; // rbp
  size_t v46; // rax
  signed __int64 v47; // r12
  int v48; // eax
  void **v49; // rbx
  void **v50; // r12
  void **v51; // rbp
  __m128i si128; // xmm5
  size_t v53; // rbp
  _QWORD **v54; // rdx
  __int64 v55; // rax
  const char *v56; // rdi
  size_t v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int128 *v60; // r13
  __int64 v61; // rdx
  _BYTE *v62; // rsi
  __m128i *v63; // r13
  __m128i *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // rdi
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // r12
  __m128i *v69; // rax
  __m128i *v70; // rax
  __int64 v71; // rdx
  const __m128i *v72; // rax
  unsigned __int64 v73; // rdi
  __m128i *v74; // rdx
  __int8 v75; // cl
  const __m128i *v76; // rcx
  void **v77; // r12
  __m128i *v78; // rdi
  __m128 v79; // xmm0
  _QWORD *v80; // rbx
  __int64 v81; // r12
  __int64 v82; // r14
  const char *v83; // rdi
  size_t v84; // rax
  signed __int64 *v85; // r13
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rdx
  size_t v88; // rcx
  unsigned __int64 v89; // rax
  signed __int64 *v90; // r15
  size_t v91; // rdx
  _BYTE *v92; // rax
  __int64 *v93; // rax
  const void *v94; // rbp
  size_t v95; // rbx
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 *v100; // r15
  __int64 *v101; // rax
  __int64 v102; // rbx
  __m128i *v103; // rdi
  __int64 v104; // rax
  size_t v105; // rax
  int v106; // ecx
  _QWORD *v107; // rbx
  unsigned __int32 v108; // r12d
  _QWORD *v109; // rbp
  _QWORD *v110; // rsi
  const char *v111; // rbp
  unsigned int v112; // r12d
  __int64 v113; // r13
  __int64 v114; // rdx
  const void *v115; // r14
  size_t v116; // rax
  size_t v117; // r15
  __int64 v118; // rax
  unsigned int v119; // ecx
  __int64 v120; // r12
  unsigned int v121; // eax
  __int64 v122; // rdx
  size_t v123; // r12
  const void ***v124; // rbp
  const void **v125; // r11
  const void **v126; // rbp
  __int64 v127; // r13
  const void **v128; // r15
  size_t v129; // rbx
  size_t v130; // rdx
  int v131; // eax
  const void *v132; // rbp
  size_t v133; // rdx
  int v134; // eax
  __m128i *v135; // rax
  __int64 v136; // r8
  __m128i *v137; // rdx
  __m128i *v138; // rcx
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 v141; // rdi
  __int64 v142; // r11
  __m128i *v143; // r12
  __m128i *v144; // rbp
  const void *v145; // rbx
  size_t v146; // r14
  __m128i *i; // r13
  size_t v148; // r15
  size_t v149; // rdx
  int v150; // eax
  __m128i v151; // xmm2
  _BYTE *v153; // rsi
  __int64 v154; // rdx
  _BYTE *v155; // rsi
  __int64 v156; // rdx
  __int64 v157; // rax
  __m128i *p_src; // [rsp+8h] [rbp-690h]
  __m128i *v159; // [rsp+10h] [rbp-688h]
  size_t v160; // [rsp+10h] [rbp-688h]
  unsigned int v161; // [rsp+10h] [rbp-688h]
  bool v162; // [rsp+18h] [rbp-680h]
  __int64 v163; // [rsp+18h] [rbp-680h]
  void *s2; // [rsp+20h] [rbp-678h]
  void *s2a; // [rsp+20h] [rbp-678h]
  void *ptr; // [rsp+28h] [rbp-670h] BYREF
  __int64 *v167; // [rsp+30h] [rbp-668h]
  size_t *v168; // [rsp+38h] [rbp-660h]
  __int64 **v169; // [rsp+40h] [rbp-658h]
  _QWORD *v170; // [rsp+48h] [rbp-650h]
  __int64 v171; // [rsp+50h] [rbp-648h]
  void *obj; // [rsp+58h] [rbp-640h]
  size_t v173; // [rsp+60h] [rbp-638h]
  signed __int64 *v174; // [rsp+68h] [rbp-630h]
  signed __int64 *v175; // [rsp+70h] [rbp-628h]
  signed __int64 *v176; // [rsp+78h] [rbp-620h]
  void **v177; // [rsp+80h] [rbp-618h]
  _QWORD *v178; // [rsp+88h] [rbp-610h]
  __int64 v179; // [rsp+90h] [rbp-608h]
  const char **v180; // [rsp+98h] [rbp-600h]
  __int64 v181; // [rsp+A0h] [rbp-5F8h]
  __m128i *v182; // [rsp+A8h] [rbp-5F0h]
  __int64 v183; // [rsp+B0h] [rbp-5E8h]
  __int32 v184; // [rsp+B8h] [rbp-5E0h]
  int v185; // [rsp+BCh] [rbp-5DCh]
  __int64 *v186; // [rsp+C8h] [rbp-5D0h] BYREF
  const char *v187; // [rsp+D0h] [rbp-5C8h] BYREF
  size_t v188; // [rsp+D8h] [rbp-5C0h]
  size_t v189[2]; // [rsp+E0h] [rbp-5B8h] BYREF
  unsigned int v190[4]; // [rsp+F0h] [rbp-5A8h] BYREF
  void *v191; // [rsp+100h] [rbp-598h] BYREF
  __int64 v192; // [rsp+108h] [rbp-590h]
  __m128i v193; // [rsp+110h] [rbp-588h] BYREF
  void *v194[2]; // [rsp+130h] [rbp-568h] BYREF
  _QWORD v195[8]; // [rsp+140h] [rbp-558h] BYREF
  __m128i src; // [rsp+180h] [rbp-518h] BYREF
  __int128 v197; // [rsp+190h] [rbp-508h] BYREF
  void *dest; // [rsp+1A0h] [rbp-4F8h]
  char v199; // [rsp+1A8h] [rbp-4F0h]
  int v200; // [rsp+1ACh] [rbp-4ECh]
  __int64 v201; // [rsp+1B0h] [rbp-4E8h]
  char v202; // [rsp+660h] [rbp-38h] BYREF

  v3 = a1;
  v4 = *(_DWORD *)(a3 + 212);
  v171 = a2;
  v179 = a3;
  v185 = v4;
  *(_BYTE *)(a1 + 189) &= ~0x80u;
  v5 = sub_13021E0(a2, 0xD1Eu) == 0;
  v6 = *(_BYTE *)(a1 + 189);
  if ( !v5 )
  {
    v6 |= 0x80u;
    *(_BYTE *)(a1 + 189) = v6;
  }
  *(_BYTE *)(a1 + 189) = v6 & 0xFB;
  v5 = sub_13021E0(v171, 0x72u) == 0;
  v7 = *(_BYTE *)(a1 + 189);
  if ( !v5 )
  {
    v7 |= 4u;
    *(_BYTE *)(a1 + 189) = v7;
  }
  *(_BYTE *)(a1 + 189) = v7 & 0xF7;
  v5 = sub_13021E0(v171, 0x67u) == 0;
  v8 = *(_BYTE *)(a1 + 189);
  if ( !v5 )
  {
    v8 |= 8u;
    *(_BYTE *)(a1 + 189) = v8;
  }
  *(_BYTE *)(a1 + 189) = v8 & 0xEF;
  if ( sub_13021E0(v171, 0x71u) )
    *(_BYTE *)(a1 + 189) |= 0x10u;
  v9 = *(_BYTE **)(a1 + 88);
  v10 = *(_QWORD *)(a1 + 96);
  v177 = v194;
  v194[0] = v195;
  v191 = &v193;
  v194[1] = nullptr;
  LOBYTE(v195[0]) = 0;
  sub_12FAA20(&v191, v9, (__int64)&v9[v10]);
  p_src = &src;
  src.m128i_i64[0] = (__int64)&v197;
  sub_12FAA20(&src, (_BYTE *)v194[0], (__int64)v194[0] + (unsigned __int64)v194[1]);
  sub_A0AAD0(a1 + 88, &src);
  if ( (__int128 *)src.m128i_i64[0] != &v197 )
    operator delete((void *)src.m128i_i64[0]);
  if ( v191 != &v193 )
    operator delete(v191);
  if ( v194[0] != v177 + 2 )
    operator delete(v194[0]);
  sub_1302A80(&src, 0x53u, v171);
  if ( (_BYTE)dest )
  {
    v191 = &v193;
    sub_12FAA20(&v191, src.m128i_i64[0], src.m128i_i64[0] + src.m128i_i64[1]);
    v155 = *(_BYTE **)(a1 + 88);
    v156 = (__int64)&v155[*(_QWORD *)(a1 + 96)];
    v189[0] = (size_t)v190;
    sub_12FAA20(v189, v155, v156);
    v194[0] = v177 + 2;
    sub_12FAA20(v177, v191, (__int64)v191 + v192);
    sub_A0AAD0(a1 + 88, v177);
    if ( v194[0] != v177 + 2 )
      operator delete(v194[0]);
    if ( (unsigned int *)v189[0] != v190 )
      operator delete((void *)v189[0]);
    if ( v191 != &v193 )
      operator delete(v191);
    if ( (_BYTE)dest && (__int128 *)src.m128i_i64[0] != &v197 )
      operator delete((void *)src.m128i_i64[0]);
  }
  *(_BYTE *)(a1 + 189) &= ~0x20u;
  v5 = sub_13021E0(v171, 0xD0Eu) == 0;
  v11 = *(_BYTE *)(a1 + 189);
  if ( !v5 )
  {
    v11 |= 0x20u;
    *(_BYTE *)(a1 + 189) = v11;
  }
  *(_BYTE *)(a1 + 189) = v11 & 0xBF;
  if ( sub_13021E0(v171, 0x79u) )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  v12 = *(_BYTE **)(a1 + 120);
  v13 = *(_QWORD *)(a1 + 128);
  LOBYTE(v195[0]) = 0;
  v194[1] = nullptr;
  v194[0] = v177 + 2;
  v191 = &v193;
  sub_12FAA20(&v191, v12, (__int64)&v12[v13]);
  src.m128i_i64[0] = (__int64)&v197;
  sub_12FAA20(&src, (_BYTE *)v194[0], (__int64)v194[0] + (unsigned __int64)v194[1]);
  sub_A0AAD0(a1 + 120, &src);
  if ( (__int128 *)src.m128i_i64[0] != &v197 )
    operator delete((void *)src.m128i_i64[0]);
  if ( v191 != &v193 )
    operator delete(v191);
  if ( v194[0] != v177 + 2 )
    operator delete(v194[0]);
  sub_1302A80(&src, 0x69u, v171);
  if ( (_BYTE)dest )
  {
    v191 = &v193;
    sub_12FAA20(&v191, src.m128i_i64[0], src.m128i_i64[0] + src.m128i_i64[1]);
    v153 = *(_BYTE **)(a1 + 120);
    v154 = *(_QWORD *)(a1 + 128);
    v189[0] = (size_t)v190;
    sub_12FAA20(v189, v153, (__int64)&v153[v154]);
    v194[0] = v177 + 2;
    sub_12FAA20(v177, v191, (__int64)v191 + v192);
    sub_A0AAD0(a1 + 120, v177);
    if ( v194[0] != v177 + 2 )
      operator delete(v194[0]);
    if ( (unsigned int *)v189[0] != v190 )
      operator delete((void *)v189[0]);
    if ( v191 != &v193 )
      operator delete(v191);
    if ( (_BYTE)dest && (__int128 *)src.m128i_i64[0] != &v197 )
      operator delete((void *)src.m128i_i64[0]);
  }
  *(_DWORD *)(a1 + 192) = 5;
  v14 = sub_1302610(0x6Bu, v171, v179);
  if ( BYTE4(v14) )
    *(_DWORD *)(a1 + 192) = v14;
  *(_BYTE *)(a1 + 190) &= ~2u;
  if ( sub_13021E0(v171, 0x66u) )
    *(_BYTE *)(a1 + 190) |= 2u;
  *(_DWORD *)(a1 + 184) = 4;
  v15 = sub_1302610(0x6Fu, v171, v179);
  if ( BYTE4(v15) )
    *(_DWORD *)(a1 + 184) = v15;
  *(_BYTE *)(a1 + 190) &= ~1u;
  if ( sub_13021E0(v171, 0x78u) )
    *(_BYTE *)(a1 + 190) |= 1u;
  *(_BYTE *)(a1 + 188) &= ~1u;
  if ( sub_13021E0(v171, 0x63u) )
    *(_BYTE *)(a1 + 188) |= 1u;
  *(_BYTE *)(a1 + 188) &= ~2u;
  if ( sub_13021E0(v171, 0x57u) )
    *(_BYTE *)(a1 + 188) |= 2u;
  *(_BYTE *)(a1 + 188) &= ~4u;
  if ( sub_13021E0(v171, 0x55u) )
    *(_BYTE *)(a1 + 188) |= 4u;
  *(_BYTE *)(a1 + 188) &= ~8u;
  if ( sub_13021E0(v171, 0x56u) )
    *(_BYTE *)(a1 + 188) |= 8u;
  *(_BYTE *)(a1 + 189) &= ~1u;
  if ( sub_13021E0(v171, 0x5Fu) )
    *(_BYTE *)(a1 + 189) |= 1u;
  *(_BYTE *)(a1 + 188) &= ~0x80u;
  if ( sub_13021E0(v171, 0x6Eu) )
    *(_BYTE *)(a1 + 188) |= 0x80u;
  *(_BYTE *)(a1 + 188) &= ~0x10u;
  if ( sub_13021E0(v171, 0x5Au) )
    *(_BYTE *)(a1 + 188) |= 0x10u;
  *(_BYTE *)(a1 + 188) &= ~0x20u;
  if ( sub_13021E0(v171, 0x58u) )
    *(_BYTE *)(a1 + 188) |= 0x20u;
  *(_BYTE *)(a1 + 188) &= ~0x40u;
  if ( sub_13021E0(v171, 0x59u) )
    *(_BYTE *)(a1 + 188) |= 0x40u;
  *(_BYTE *)(a1 + 189) |= 2u;
  v16 = sub_1302940(0x5Eu, 0x28u, v171, v179);
  if ( BYTE4(v16) )
    *(_BYTE *)(a1 + 189) = *(_BYTE *)(a1 + 189) & 0xFD | (2 * (v16 & 1));
  *(_BYTE *)(a1 + 190) &= ~4u;
  if ( sub_13021E0(v171, 0x7Au) )
    *(_BYTE *)(a1 + 190) |= 4u;
  v17 = sub_10DCD30(v171, 0x62u);
  v18 = v17;
  if ( v17 )
  {
    v19 = *(const char ***)(v17 + 48);
    v20 = (char *)*v19;
    if ( *v19 )
    {
      v21 = j__strlen(*v19);
      v22 = v21;
      if ( v21 == 5 )
      {
        if ( *(_DWORD *)v20 == 1735287154 )
        {
          v23 = 0;
          if ( v20[4] == 101 )
            goto LABEL_63;
        }
      }
      else if ( v21 == 2 && *(_WORD *)v20 == 13178 )
      {
        sub_FC70B0((__int64)&src, v179, 0, 308);
        sub_AEA040((__int64)&src);
        v23 = 1;
LABEL_63:
        *(_DWORD *)(a1 + 72) = v23;
        goto LABEL_64;
      }
    }
    else
    {
      v22 = 0;
    }
    sub_FC70B0((__int64)&src, v179, 0, 400);
    sub_21B5FF0(v177, v18, v171);
    sub_AEC220((unsigned __int8 **)&src, (_BYTE *)v194[0], (signed __int64)v194[1]);
    sub_AEC220((unsigned __int8 **)&src, v20, v22);
    if ( v194[0] != v177 + 2 )
      operator delete(v194[0]);
    sub_AEA040((__int64)&src);
  }
LABEL_64:
  v24 = sub_10DCD30(v171, 0x75u);
  v25 = v24;
  if ( !v24 )
    goto LABEL_79;
  v26 = *(const char ***)(v24 + 48);
  v27 = (char *)*v26;
  if ( !*v26 )
  {
    v34 = 0;
    v29 = 0;
LABEL_273:
    v32 = 0;
LABEL_274:
    v33 = v29 != 4;
    goto LABEL_275;
  }
  v28 = j__strlen(*v26);
  v29 = v28;
  if ( v28 == 4 )
  {
    v34 = *(_DWORD *)v27 == 1819112552;
    goto LABEL_273;
  }
  if ( v28 == 16 )
  {
    if ( *(_QWORD *)v27 ^ 0x6E69732D6C6D7468LL | *((_QWORD *)v27 + 1) ^ 0x656C69662D656C67LL )
    {
      v33 = 1;
      v157 = *(_QWORD *)v27 ^ 0x756D2D7473696C70LL | *((_QWORD *)v27 + 1) ^ 0x656C69662D69746CLL;
      v32 = v157 == 0 ? 3 : 1;
      v34 = v157 == 0;
      goto LABEL_275;
    }
    v30 = 1;
    v31 = 1;
    v32 = 1;
    goto LABEL_70;
  }
  if ( v28 != 5 )
  {
    if ( v28 == 10 )
    {
      if ( *(_QWORD *)v27 != 0x74682D7473696C70LL || (v32 = 4, v34 = 1, *((_WORD *)v27 + 4) != 27757) )
      {
        if ( *(_QWORD *)v27 == 0x74682D6669726173LL )
        {
          v32 = 6;
          if ( *((_WORD *)v27 + 4) == 27757 )
            goto LABEL_281;
        }
        goto LABEL_76;
      }
      goto LABEL_277;
    }
    v34 = 0;
    goto LABEL_273;
  }
  if ( *(_DWORD *)v27 == 1936288880 )
  {
    v34 = 1;
    v32 = 2;
    if ( v27[4] == 116 )
      goto LABEL_274;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
LABEL_70:
  v33 = v29 != 4;
  v34 = v30 | v31;
  if ( !v34 )
  {
    if ( *(_DWORD *)v27 == 1769103731 && v27[4] == 102 )
    {
      v32 = 5;
      v34 = 1;
      goto LABEL_277;
    }
    goto LABEL_276;
  }
  v34 = v30;
LABEL_275:
  v33 |= v34;
LABEL_276:
  if ( !v33 )
  {
    if ( *(_DWORD *)v27 == 1954047348 )
    {
      v32 = 7;
      goto LABEL_281;
    }
LABEL_75:
    if ( !v34 )
      goto LABEL_76;
LABEL_281:
    *(_DWORD *)(a1 + 76) = v32;
    goto LABEL_79;
  }
LABEL_277:
  if ( v29 != 12 )
    goto LABEL_75;
  if ( v34 )
    goto LABEL_281;
  if ( *(_QWORD *)v27 == 0x6E696D2D74786574LL )
  {
    v32 = 8;
    if ( *((_DWORD *)v27 + 2) == 1818324329 )
      goto LABEL_281;
  }
LABEL_76:
  sub_FC70B0((__int64)&src, v179, 0, 400);
  sub_21B5FF0(v177, v25, v171);
  sub_AEC220((unsigned __int8 **)&src, (_BYTE *)v194[0], (signed __int64)v194[1]);
  sub_AEC220((unsigned __int8 **)&src, v27, v29);
  if ( v194[0] != v177 + 2 )
    operator delete(v194[0]);
  sub_AEA040((__int64)&src);
LABEL_79:
  v35 = sub_10DCD30(v171, 0x77u);
  v36 = v35;
  if ( !v35 )
    goto LABEL_90;
  v37 = *(const char ***)(v35 + 48);
  v38 = (char *)*v37;
  if ( *v37 )
  {
    v39 = j__strlen(*v37);
    v40 = v39;
    switch ( v39 )
    {
      case 9uLL:
        if ( *(_QWORD *)v38 == 0x6E656D6574617473LL )
        {
          v41 = 0;
          if ( v38[8] == 116 )
            goto LABEL_311;
        }
        break;
      case 5uLL:
        if ( *(_DWORD *)v38 == 1668246626 )
        {
          v41 = 1;
          if ( v38[4] == 107 )
          {
LABEL_311:
            *(_DWORD *)(a1 + 80) = v41;
            goto LABEL_90;
          }
        }
        break;
      case 4uLL:
        v41 = 2;
        if ( *(_DWORD *)v38 == 1701736302 )
          goto LABEL_311;
        break;
    }
  }
  else
  {
    v40 = 0;
  }
  sub_FC70B0((__int64)&src, v179, 0, 400);
  sub_21B5FF0(v177, v36, v171);
  sub_AEC220((unsigned __int8 **)&src, (_BYTE *)v194[0], (signed __int64)v194[1]);
  sub_AEC220((unsigned __int8 **)&src, v38, v40);
  if ( v194[0] != v177 + 2 )
    operator delete(v194[0]);
  sub_AEA040((__int64)&src);
LABEL_90:
  v42 = sub_10DCD30(v171, 0x6Du);
  v43 = v42;
  if ( v42 )
  {
    v44 = *(const char ***)(v42 + 48);
    v45 = (char *)*v44;
    if ( *v44 )
    {
      v46 = j__strlen(*v44);
      v47 = v46;
      if ( v46 == 3 )
      {
        if ( *(_WORD *)v45 == 27745 )
        {
          v48 = 0;
          if ( v45[2] == 108 )
            goto LABEL_314;
        }
      }
      else if ( v46 == 12 && *(_QWORD *)v45 == 0x646E756465726F6ELL )
      {
        v48 = 1;
        if ( *((_DWORD *)v45 + 2) == 2036559457 )
        {
LABEL_314:
          *(_DWORD *)(a1 + 196) = v48;
          goto LABEL_101;
        }
      }
    }
    else
    {
      v47 = 0;
    }
    sub_FC70B0((__int64)&src, v179, 0, 400);
    sub_21B5FF0(v177, v43, v171);
    sub_AEC220((unsigned __int8 **)&src, (_BYTE *)v194[0], (signed __int64)v194[1]);
    sub_AEC220((unsigned __int8 **)&src, v45, v47);
    if ( v194[0] != v177 + 2 )
      operator delete(v194[0]);
    sub_AEA040((__int64)&src);
  }
LABEL_101:
  v49 = *(void ***)a1;
  v50 = *(void ***)(a1 + 8);
  if ( *(void ***)a1 != v50 )
  {
    v51 = *(void ***)a1;
    do
    {
      while ( *v51 != v51 + 2 )
      {
        operator delete(*v51);
        v51 += 5;
        if ( v50 == v51 )
          goto LABEL_105;
      }
      v51 += 5;
    }
    while ( v50 != v51 );
LABEL_105:
    *(_QWORD *)(a1 + 8) = v49;
  }
  sub_10DF020((__int64)v177, v171, 0x5Cu, 0x65u);
  si128 = _mm_load_si128((const __m128i *)v194);
  *(_QWORD *)v190 = v195[0];
  *(__m128i *)v189 = si128;
  v170 = (_QWORD *)v195[1];
LABEL_107:
  v53 = v189[0];
  if ( v170 != (_QWORD *)v189[0] )
  {
    v169 = (__int64 **)&v187;
    while ( 1 )
    {
      v54 = *(_QWORD ***)v53;
      v55 = *(_QWORD *)(*(_QWORD *)v53 + 16LL);
      if ( !v55 )
        v55 = *(_QWORD *)v53;
      *(_BYTE *)(v55 + 44) |= 1u;
      v162 = *((_DWORD *)*v54 + 10) == 92;
      v56 = (const char *)*v54[6];
      v57 = 0;
      v187 = v56;
      if ( v56 )
        v57 = strlen(v56);
      v188 = v57;
      src.m128i_i64[0] = (__int64)&v197;
      src.m128i_i64[1] = 0x1000000000LL;
      sub_22471D0(v169, &src, ",", 1, 0xFFFFFFFFLL, 1);
      v58 = src.m128i_i64[0];
      v59 = 16LL * src.m128i_u32[2];
      v60 = (__int128 *)(src.m128i_i64[0] + v59);
      if ( src.m128i_i64[0] != src.m128i_i64[0] + v59 )
        break;
LABEL_140:
      if ( v60 != &v197 )
        free(v60);
      v80 = (_QWORD *)(v53 + 8);
      v53 = v189[1];
      for ( v189[0] = (size_t)v80; v80 != (_QWORD *)v53; v189[0] = (size_t)v80 )
      {
        v81 = *v80;
        if ( *v80 )
        {
          if ( v190[0]
            && ((unsigned __int8)sub_21B9810(*v80, v190[0]) || v190[1] && (unsigned __int8)sub_21B9810(v81, v190[1])) )
          {
            goto LABEL_107;
          }
        }
        ++v80;
      }
      if ( v170 == (_QWORD *)v53 )
        goto LABEL_150;
    }
    s2 = (void *)(src.m128i_i64[0] + v59);
    while ( 1 )
    {
      while ( 1 )
      {
        v61 = *(_QWORD *)(v58 + 8);
        v62 = *(_BYTE **)v58;
        v191 = &v193;
        sub_12FAAE0(&v191, v62, (__int64)&v62[v61]);
        v63 = *(__m128i **)(v3 + 8);
        if ( v63 == *(__m128i **)(v3 + 16) )
          break;
        v63->m128i_i64[0] = (__int64)v63[1].m128i_i64;
        if ( v191 == &v193 )
        {
          v63[1] = _mm_load_si128(&v193);
        }
        else
        {
          v63->m128i_i64[0] = (__int64)v191;
          v63[1].m128i_i64[0] = v193.m128i_i64[0];
        }
        v63->m128i_i64[1] = v192;
        v63[2].m128i_i8[0] = v162;
        *(_QWORD *)(v3 + 8) += 40LL;
LABEL_117:
        v58 += 16;
        if ( s2 == (void *)v58 )
          goto LABEL_139;
      }
      v64 = *(__m128i **)v3;
      v65 = (__int64)v63->m128i_i64 - *(_QWORD *)v3;
      v66 = v65 >> 3;
      if ( !(0xCCCCCCCCCCCCCCCDLL * (v65 >> 3)) )
        break;
      v67 = 0x999999999999999ALL * v66;
      v68 = 0x1FFFFFFFFFFFFFFELL;
      if ( 0xCCCCCCCCCCCCCCCDLL * v66 > 0x999999999999999ALL * v66 || v67 > 0x666666666666666LL )
        goto LABEL_123;
      if ( v67 )
      {
        v68 = 2 * v66;
        goto LABEL_123;
      }
      ptr = &qword_28;
      v167 = nullptr;
      v159 = nullptr;
LABEL_124:
      v70 = (__m128i *)((char *)v159 + v65);
      *(__int64 *)((char *)v159->m128i_i64 + v65) = (__int64)v159[1].m128i_i64 + v65;
      if ( v191 == &v193 )
      {
        v70[1] = _mm_load_si128(&v193);
      }
      else
      {
        v70->m128i_i64[0] = (__int64)v191;
        v70[1].m128i_i64[0] = v193.m128i_i64[0];
      }
      v71 = v192;
      v192 = 0;
      v193.m128i_i8[0] = 0;
      v70->m128i_i64[1] = v71;
      v191 = &v193;
      v70[2].m128i_i8[0] = v162;
      if ( v63 != v64 )
      {
        v72 = v64 + 1;
        v73 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&v63[-3].m128i_u64[1] - (char *)v64) >> 3))
            & 0x1FFFFFFFFFFFFFFFLL;
        v74 = v159;
        do
        {
          v74->m128i_i64[0] = (__int64)v74[1].m128i_i64;
          v76 = (const __m128i *)v72[-1].m128i_i64[0];
          if ( v76 == v72 )
          {
            v74[1] = _mm_loadu_si128(v72);
          }
          else
          {
            v74->m128i_i64[0] = (__int64)v76;
            v74[1].m128i_i64[0] = v72->m128i_i64[0];
          }
          v74 = (__m128i *)((char *)v74 + 40);
          v74[-2].m128i_i64[0] = v72[-1].m128i_i64[1];
          v75 = v72[1].m128i_i8[0];
          v72[-1].m128i_i64[0] = (__int64)v72;
          v72 = (const __m128i *)((char *)v72 + 40);
          v72[-3].m128i_i64[0] = 0;
          v72[-3].m128i_i8[8] = 0;
          v74[-1].m128i_i8[8] = v75;
        }
        while ( v74 != (__m128i *)&v159[2].m128i_u64[5 * v73 + 1] );
        v77 = (void **)v64;
        ptr = (char *)&v159[5] + 40 * v73;
        do
        {
          while ( *v77 != v77 + 2 )
          {
            operator delete(*v77);
            v77 += 5;
            if ( v63 == (__m128i *)v77 )
              goto LABEL_135;
          }
          v77 += 5;
        }
        while ( v63 != (__m128i *)v77 );
      }
LABEL_135:
      if ( v64 )
        operator delete(v64);
      v78 = (__m128i *)v191;
      v79 = _mm_loadh_ps((const double *)&ptr);
      *(_QWORD *)(v3 + 16) = v167;
      *(__m128 *)v3 = v79;
      if ( v78 == &v193 )
        goto LABEL_117;
      operator delete(v78);
      v58 += 16;
      if ( s2 == (void *)v58 )
      {
LABEL_139:
        v60 = (__int128 *)src.m128i_i64[0];
        v53 = v189[0];
        goto LABEL_140;
      }
    }
    v68 = 5;
LABEL_123:
    v168 = (size_t *)((char *)v63 - *(_QWORD *)v3);
    v69 = (__m128i *)operator new(v68 * 8);
    v65 = (__int64)v168;
    v159 = v69;
    v167 = &v69->m128i_i64[v68];
    ptr = &v69[2].m128i_u64[1];
    goto LABEL_124;
  }
LABEL_150:
  sub_10DC500((__int64)&v191, v171, 0x60u);
  v170 = v191;
  v178 = (_QWORD *)v192;
  v184 = v193.m128i_i32[0];
  v181 = v193.m128i_i64[1];
  v168 = v189;
LABEL_151:
  if ( (_QWORD *)v181 == v170 )
    goto LABEL_192;
  v82 = v3;
  v180 = &v187;
  v169 = &v186;
  do
  {
    v167 = (__int64 *)*v170;
    v83 = *(const char **)v167[6];
    v84 = 0;
    v187 = v83;
    if ( v83 )
      v84 = strlen(v83);
    v188 = v84;
    v194[0] = v177 + 2;
    v194[1] = (void *)0x400000000LL;
    sub_22471D0(v180, v177, ",", 1, 0xFFFFFFFFLL, 1);
    ptr = (char *)v194[0] + 16 * LODWORD(v194[1]);
    if ( v194[0] == ptr )
      goto LABEL_181;
    v85 = (signed __int64 *)v194[0];
    v163 = v82 + 48;
    v182 = &src;
LABEL_176:
    v189[0] = 0;
    v189[1] = 0;
    v89 = sub_2246AB0(v85, "=", 1, 0);
    if ( v89 == -1 )
    {
      v105 = v85[1];
      v189[0] = *v85;
      v189[1] = v105;
LABEL_178:
      v106 = 306;
      goto LABEL_179;
    }
    v86 = v85[1];
    v87 = v89 + 1;
    if ( v89 + 1 > v86 )
    {
      if ( v89 > v86 )
        v89 = v85[1];
      v189[0] = *v85;
      v189[1] = v89;
      goto LABEL_178;
    }
    v88 = *v85;
    if ( v89 > v86 )
      v89 = v85[1];
    v90 = (signed __int64 *)(v88 + v87);
    v160 = *v85;
    v189[1] = v89;
    v5 = v86 == v87;
    v189[0] = v88;
    v91 = v86 - v87;
    if ( v5 )
      goto LABEL_178;
    v92 = memchr(v90, 61, v91);
    if ( !v92 || v92 - (_BYTE *)v90 == -1 )
    {
      if ( sub_2246AB0(v168, ":", 1, 0) != -1 )
        goto LABEL_164;
      v123 = v189[1];
      s2a = (void *)v189[0];
      if ( (_BYTE)qword_2CD89B0 || !__cxa_guard_acquire(&qword_2CD89B0) )
      {
        v124 = (const void ***)qword_2CD89C0;
        goto LABEL_218;
      }
      qmemcpy(p_src, &off_2C867C0, 0x4E0u);
      qword_2CD89C0[0] = 0;
      qword_2CD89C0[1] = 0;
      qword_2CD89C0[2] = 0;
      v135 = (__m128i *)operator new(0x4E0u);
      v137 = v182;
      qword_2CD89C0[0] = v135;
      v138 = v135;
      obj = &v135[78];
      qword_2CD89C0[2] = v135 + 78;
      p_src = v182;
      do
      {
        v139 = v137->m128i_i64[1];
        v140 = v137->m128i_i64[0];
        ++v137;
        ++v138;
        v138[-1].m128i_i64[1] = v139;
        v138[-1].m128i_i64[0] = v140;
      }
      while ( v137 != (__m128i *)&v202 );
      v173 = (size_t)v135;
      qword_2CD89C0[1] = obj;
      sub_12FB790(v135, (const void **)obj, 12, (__int64)obj, v136);
      v141 = v173;
      v173 += 256LL;
      sub_12FA510(v141, v173);
      v142 = v173;
      v174 = (signed __int64 *)v86;
      v173 = v123;
      v143 = (__m128i *)obj;
      v175 = v90;
      obj = qword_2CD89C0;
      v144 = (__m128i *)v142;
      v176 = v85;
      v183 = v82;
LABEL_251:
      v145 = (const void *)v144->m128i_i64[0];
      v146 = v144->m128i_u64[1];
      for ( i = v144; ; i[1] = v151 )
      {
        v148 = i[-1].m128i_u64[1];
        v149 = v148;
        if ( v146 <= v148 )
          v149 = v146;
        if ( v149 && (v150 = memcmp(v145, (const void *)i[-1].m128i_i64[0], v149)) != 0 )
        {
          if ( v150 >= 0 )
            goto LABEL_250;
        }
        else if ( v146 == v148 || v146 >= v148 )
        {
LABEL_250:
          ++v144;
          i->m128i_i64[0] = (__int64)v145;
          i->m128i_i64[1] = v146;
          if ( v143 != v144 )
            goto LABEL_251;
          v124 = (const void ***)obj;
          v123 = v173;
          v86 = (unsigned __int64)v174;
          v90 = v175;
          v85 = v176;
          v82 = v183;
          __cxa_atexit((void (*)(void *))sub_12F9CA0, obj, &off_2B25620);
          __cxa_guard_release(&qword_2CD89B0);
LABEL_218:
          v125 = *v124;
          obj = v124[1];
          if ( (_BYTE *)obj - (_BYTE *)v125 <= 0 )
            goto LABEL_230;
          v175 = v85;
          v126 = v125;
          v127 = ((_BYTE *)obj - (_BYTE *)v125) >> 4;
          v173 = v86;
          v174 = v90;
          v176 = (signed __int64 *)v82;
          while ( 2 )
          {
            while ( 2 )
            {
              v128 = &v126[2 * (v127 >> 1)];
              v129 = (size_t)v128[1];
              v130 = v129;
              if ( v123 <= v129 )
                v130 = v123;
              if ( !v130 || (v131 = memcmp(*v128, s2a, v130)) == 0 )
              {
                if ( v123 == v129 || v123 <= v129 )
                {
                  v127 >>= 1;
                  goto LABEL_228;
                }
                goto LABEL_220;
              }
              if ( v131 < 0 )
              {
LABEL_220:
                v126 = v128 + 2;
                v127 = v127 - (v127 >> 1) - 1;
                if ( v127 <= 0 )
                  goto LABEL_229;
                continue;
              }
              break;
            }
            v127 >>= 1;
LABEL_228:
            if ( v127 > 0 )
              continue;
            break;
          }
LABEL_229:
          v86 = v173;
          v90 = v174;
          v125 = v126;
          v85 = v175;
          v82 = (__int64)v176;
LABEL_230:
          if ( v125 == obj )
            goto LABEL_237;
          v132 = v125[1];
          v133 = (size_t)v132;
          if ( v123 <= (unsigned __int64)v132 )
            v133 = v123;
          if ( v133 )
          {
            v134 = memcmp(s2a, *v125, v133);
            if ( v134 )
            {
              if ( v134 >= 0 )
                goto LABEL_164;
LABEL_237:
              if ( (*(_BYTE *)(v82 + 189) & 2) != 0 )
              {
                sub_FC70B0((__int64)p_src, v179, 0, 307);
                sub_AEC220((unsigned __int8 **)p_src, (_BYTE *)v189[0], v189[1]);
                sub_AEA040((__int64)p_src);
              }
              goto LABEL_175;
            }
          }
          if ( (const void *)v123 != v132 && v123 < (unsigned __int64)v132 )
            goto LABEL_237;
LABEL_164:
          v93 = (__int64 *)v167[2];
          if ( !v93 )
            v93 = v167;
          *((_BYTE *)v93 + 44) |= 1u;
          src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
          sub_12FAAE0(p_src, v90, v86 + v160);
          v94 = (const void *)v189[0];
          v95 = v189[1];
          v96 = sub_2244B30(v189[0], v189[1]);
          v97 = (unsigned int)sub_2244CB0(v163, v94, v95, v96);
          v100 = (__int64 *)(*(_QWORD *)(v82 + 48) + 8 * v97);
          if ( *v100 )
          {
            if ( *v100 != -8 )
            {
              sub_11727E0(v169, v100, 0);
              v101 = v186;
              goto LABEL_169;
            }
            --*(_DWORD *)(v82 + 64);
          }
          v161 = v97;
          v118 = sub_22300B0(v95 + 41, 8, v97, v97, v98, v99);
          v119 = v161;
          v120 = v118;
          if ( v95 )
          {
            memcpy((void *)(v118 + 40), v94, v95);
            v119 = v161;
          }
          *(_BYTE *)(v120 + v95 + 40) = 0;
          *(_QWORD *)v120 = v95;
          *(_QWORD *)(v120 + 8) = v120 + 24;
          *(_QWORD *)(v120 + 16) = 0;
          *(_BYTE *)(v120 + 24) = 0;
          *v100 = v120;
          ++*(_DWORD *)(v82 + 60);
          v121 = sub_22450D0(v163, v119);
          sub_11727E0(v169, (__int64 *)(*(_QWORD *)(v82 + 48) + 8LL * v121), 0);
          v101 = v186;
LABEL_169:
          v102 = *v101;
          v103 = *(__m128i **)(*v101 + 8);
          if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
          {
            if ( v103 == (__m128i *)(v102 + 24) )
            {
              *(__m128i *)(v102 + 8) = src;
              *(_QWORD *)(v102 + 24) = v197;
            }
            else
            {
              *(_QWORD *)(v102 + 8) = src.m128i_i64[0];
              v104 = *(_QWORD *)(v102 + 24);
              *(_QWORD *)(v102 + 16) = src.m128i_i64[1];
              *(_QWORD *)(v102 + 24) = v197;
              if ( v103 )
              {
                src.m128i_i64[0] = (__int64)v103;
                *(_QWORD *)&v197 = v104;
                goto LABEL_173;
              }
            }
            v103 = p_src + 1;
            src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
            goto LABEL_173;
          }
          v122 = src.m128i_i64[1];
          if ( src.m128i_i64[1] )
          {
            if ( src.m128i_i64[1] == 1 )
              v103->m128i_i8[0] = v197;
            else
              memcpy(v103, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
            v122 = src.m128i_i64[1];
            v103 = *(__m128i **)(v102 + 8);
          }
          *(_QWORD *)(v102 + 16) = v122;
          v103->m128i_i8[v122] = 0;
          v103 = (__m128i *)src.m128i_i64[0];
LABEL_173:
          src.m128i_i64[1] = 0;
          v103->m128i_i8[0] = 0;
          if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
            operator delete((void *)src.m128i_i64[0]);
LABEL_175:
          v85 += 2;
          if ( ptr == v85 )
            goto LABEL_180;
          goto LABEL_176;
        }
        v151 = _mm_loadu_si128(--i);
      }
    }
    v106 = 305;
LABEL_179:
    sub_FC70B0((__int64)p_src, v179, 0, v106);
    sub_AEC220((unsigned __int8 **)p_src, (_BYTE *)*v85, v85[1]);
    sub_AEA040((__int64)p_src);
LABEL_180:
    ptr = v194[0];
LABEL_181:
    if ( ptr != v177 + 2 )
      free(ptr);
    v107 = v170 + 1;
    if ( v170 + 1 == v178 )
    {
LABEL_189:
      v170 = v178;
      v110 = v178;
    }
    else
    {
      v108 = v184;
      if ( v184 )
      {
        v109 = v178;
        while ( !*v107 || !(unsigned __int8)sub_21B9810(*v107, v108) )
        {
          if ( ++v107 == v109 )
            goto LABEL_189;
        }
        v3 = v82;
        v170 = v107;
        goto LABEL_151;
      }
      v170 = &v107[((unsigned __int64)((char *)(v178 - 2) - (char *)v170) >> 3) + 1];
      v110 = v170;
    }
  }
  while ( (_QWORD *)v181 != v110 );
  v3 = v82;
LABEL_192:
  if ( (*(_BYTE *)(v3 + 189) & 2) != 0 )
    sub_1321CF0(v3, v179);
  else
    sub_1321CF0(v3, 0);
  v111 = " ";
  v112 = 0;
  src.m128i_i32[2] = 0;
  src.m128i_i64[0] = (__int64)&off_2BEBE68;
  v201 = v3 + 152;
  v199 = 0;
  v200 = 1;
  dest = nullptr;
  v197 = 0;
  sub_227B8B0(p_src, 0, 0, 0);
  v113 = v171;
  if ( *(_DWORD *)(v171 + 344) )
  {
    while ( 2 )
    {
      v114 = *(_QWORD *)(v113 + 176);
      v115 = *(const void **)(v114 + 8LL * v112);
      if ( v115 )
      {
        v116 = strlen(*(const char **)(v114 + 8LL * v112));
        v117 = v116;
        if ( v116 > *((_QWORD *)&v197 + 1) - (_QWORD)dest )
        {
          sub_227BF10(p_src, v115, v116);
          goto LABEL_198;
        }
        if ( !v116 )
          goto LABEL_198;
        ++v112;
        memcpy(dest, v115, v116);
        dest = (char *)dest + v117;
        if ( v112 >= *(_DWORD *)(v113 + 344) )
          break;
      }
      else
      {
LABEL_198:
        if ( ++v112 >= *(_DWORD *)(v113 + 344) )
          break;
      }
      if ( v112 )
      {
        if ( *((void **)&v197 + 1) == dest )
        {
          sub_227BF10(p_src, " ", 1);
        }
        else
        {
          *(_BYTE *)dest = 32;
          dest = (char *)dest + 1;
        }
      }
      continue;
    }
  }
  LOBYTE(v111) = *(_DWORD *)(v179 + 212) == v185;
  src.m128i_i64[0] = (__int64)&off_2BEBE68;
  sub_227B7A0(p_src);
  return (unsigned int)v111;
}
