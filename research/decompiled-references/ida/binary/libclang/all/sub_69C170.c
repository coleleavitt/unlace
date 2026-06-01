__int64 __fastcall sub_69C170(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        _QWORD *src,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14,
        unsigned int a15)
{
  _DWORD *v15; // rax
  _DWORD *v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __m128i si128; // xmm0
  size_t v24; // rdi
  void *v25; // rbp
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rcx
  char *v33; // r13
  size_t v34; // rbp
  void *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  volatile signed __int32 *v39; // rbp
  volatile signed __int32 *v40; // rbx
  void *v41; // rax
  volatile signed __int32 *v42; // rdx
  signed __int32 v43; // eax
  signed __int32 v44; // eax
  void *v45; // rbx
  size_t v46; // rdi
  void *v47; // rbx
  bool v48; // zf
  __int64 v49; // rbx
  unsigned int v50; // r12d
  __int64 v51; // rax
  __int64 v52; // rax
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rdx
  signed __int32 v55; // eax
  void *v56; // rbx
  __int64 v58; // rdx
  __int64 v59; // rsi
  _QWORD *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // r12
  const char *v64; // rax
  const char *v65; // rbp
  void *v66; // rbx
  _QWORD *v67; // r15
  char *v68; // rax
  size_t v69; // rcx
  __int128 *v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rsi
  size_t v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  void **v76; // rbx
  __int64 v77; // rsi
  void *v78; // rdi
  __int64 v79; // rdx
  volatile signed __int32 *v80; // rbx
  __int64 v81; // rbp
  unsigned int v82; // eax
  char *v83; // rsi
  __int64 v84; // rdx
  __int64 *v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  char *v88; // r12
  char *v89; // rbp
  size_t v90; // rax
  size_t v91; // xmm0_8
  __m128 *v92; // rbp
  unsigned __int16 *v93; // rdi
  unsigned __int64 v94; // rdx
  volatile signed __int32 *v95; // rdx
  signed __int32 v96; // eax
  __m128 v97; // xmm0
  unsigned __int64 v98; // xmm1_8
  volatile signed __int32 *v99; // rbx
  volatile signed __int32 *v100; // rdx
  signed __int32 v101; // eax
  void *v102; // rbx
  void *v103; // rax
  void *v104; // rbx
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // r12
  __int64 v108; // rbx
  __int64 v109; // rbp
  __m128i v110; // xmm0
  char *v111; // rbx
  size_t v112; // rax
  void (__fastcall *v113)(char *, __int128 *, __int64); // rax
  void (__fastcall *v114)(__int128 *, __int128 *, __int64); // rax
  __m128i v115; // xmm0
  __int64 v116; // r14
  __int64 v117; // r12
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned __int8 v120; // dl
  int v121; // r15d
  int v122; // r12d
  unsigned __int64 *v123; // rax
  unsigned __int64 v124; // rsi
  __int64 v125; // rdi
  __m128 v126; // xmm0
  unsigned __int64 v127; // xmm2_8
  void **v128; // rsi
  __int64 v129; // rax
  volatile signed __int32 *v130; // r12
  __int64 v131; // r15
  volatile signed __int32 *v132; // rdx
  signed __int32 v133; // eax
  volatile signed __int32 *v134; // r12
  volatile signed __int32 *v135; // rdx
  signed __int32 v136; // eax
  void *v137; // r12
  __int64 v138; // rax
  _QWORD *v139; // r14
  _QWORD *v140; // rdi
  void (__fastcall *v141)(char *, char *, __int64); // rax
  volatile signed __int32 *v142; // r14
  volatile signed __int32 *v143; // rdx
  signed __int32 v144; // eax
  signed __int32 v145; // eax
  void *v146; // rbx
  _QWORD *v147; // rbx
  _QWORD *v148; // rbp
  __int64 v149; // rdi
  __int64 v150; // rax
  __int128 *v151; // rdi
  __int64 v152; // r9
  __int64 v153; // rbp
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // rsi
  bool v156; // cf
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  char *v159; // rdx
  char *v160; // r9
  char **v161; // r8
  size_t *v162; // rax
  _QWORD *v163; // r10
  size_t v164; // rsi
  size_t v165; // rdi
  char **v166; // rbp
  char *v167; // r12
  char *v168; // rbx
  char *v169; // rcx
  char *v170; // rcx
  char *v171; // rdi
  _DWORD *v172; // rsi
  char *v173; // rcx
  unsigned int v174; // edi
  _QWORD *v175; // rbp
  unsigned __int64 v176; // rcx
  char *v177; // rsi
  char *v178; // r8
  unsigned int v179; // edi
  unsigned int v180; // edi
  unsigned int v181; // esi
  __int64 v182; // rax
  unsigned int v183; // edi
  char *v184; // rbx
  unsigned __int64 v185; // rdx
  __int64 v186; // r13
  unsigned __int64 v187; // rax
  unsigned __int64 v188; // rax
  char *v189; // r15
  char *v190; // r12
  size_t v191; // rdx
  char *v192; // r13
  char *v193; // rdi
  __int64 v194; // rax
  unsigned __int64 v195; // rax
  __int64 v196; // rsi
  char *v197; // r8
  unsigned int v198; // edi
  unsigned int v199; // edi
  unsigned int v200; // esi
  __int64 v201; // rcx
  _BYTE *v202; // r12
  __int64 v203; // rbp
  __int64 v204; // rax
  unsigned __int64 v205; // rbp
  unsigned __int64 v206; // rbp
  char *v207; // rax
  signed __int64 v208; // rdx
  char *v209; // rcx
  __int64 v210; // rax
  __int64 v211; // rdi
  __int64 v212; // rax
  __int128 *v213; // rdi
  unsigned int v214; // esi
  unsigned __int64 v215; // rdi
  char *v216; // r10
  char *v217; // rbp
  unsigned int v218; // esi
  unsigned int v219; // esi
  unsigned int v220; // r10d
  __int64 v221; // rcx
  __int64 v222; // rax
  unsigned __int64 v223; // r15
  __int64 v224; // rax
  size_t v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rax
  char *v228; // r13
  __int64 v229; // rax
  __int64 v230; // rdi
  __int64 v231; // rax
  __int64 v232; // [rsp-40h] [rbp-1D8h]
  __int64 *v233; // [rsp+0h] [rbp-198h]
  unsigned int v234; // [rsp+0h] [rbp-198h]
  __int64 *v235; // [rsp+10h] [rbp-188h]
  void *v236; // [rsp+20h] [rbp-178h]
  __int64 *v237; // [rsp+20h] [rbp-178h]
  unsigned int v239; // [rsp+28h] [rbp-170h]
  bool n; // [rsp+30h] [rbp-168h]
  size_t nc; // [rsp+30h] [rbp-168h]
  size_t na; // [rsp+30h] [rbp-168h]
  _QWORD *nb; // [rsp+30h] [rbp-168h]
  size_t nd; // [rsp+30h] [rbp-168h]
  size_t ne; // [rsp+30h] [rbp-168h]
  __int64 v246; // [rsp+38h] [rbp-160h]
  __int64 v247; // [rsp+38h] [rbp-160h]
  _DWORD *v249; // [rsp+40h] [rbp-158h]
  __int64 v250; // [rsp+48h] [rbp-150h]
  unsigned int v251; // [rsp+5Ch] [rbp-13Ch]
  __int64 v252; // [rsp+60h] [rbp-138h]
  __int64 v253; // [rsp+68h] [rbp-130h]
  int v255; // [rsp+70h] [rbp-128h]
  char *v256; // [rsp+80h] [rbp-118h]
  char *v257; // [rsp+80h] [rbp-118h]
  char **v258; // [rsp+80h] [rbp-118h]
  char *v259; // [rsp+80h] [rbp-118h]
  char *v260; // [rsp+88h] [rbp-110h]
  __int64 v261; // [rsp+88h] [rbp-110h]
  __int64 v262; // [rsp+90h] [rbp-108h]
  char **v263; // [rsp+98h] [rbp-100h]
  __int64 v264; // [rsp+A0h] [rbp-F8h]
  void *v265; // [rsp+B8h] [rbp-E0h] BYREF
  void *v266; // [rsp+C0h] [rbp-D8h] BYREF
  void *v267; // [rsp+C8h] [rbp-D0h] BYREF
  __m128i v268; // [rsp+D0h] [rbp-C8h] BYREF
  void *v269[2]; // [rsp+E0h] [rbp-B8h] BYREF
  size_t v270[2]; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v271; // [rsp+100h] [rbp-98h] BYREF
  __m128i v272; // [rsp+110h] [rbp-88h] BYREF
  _OWORD v273[7]; // [rsp+120h] [rbp-78h] BYREF

  v15 = a3;
  if ( a14 )
    *a14 = 0;
  if ( !a1 || !a3 || !a4 )
    return 3;
  v17 = v273;
  if ( a4 > 0x40 )
    a4 = 64;
  memset(v273, 0, 64);
  if ( a4 >= 8 )
  {
    LODWORD(v58) = 0;
    do
    {
      v59 = (unsigned int)v58;
      v58 = (unsigned int)(v58 + 8);
      *(_QWORD *)((char *)v273 + v59) = *(_QWORD *)((char *)v15 + v59);
    }
    while ( (unsigned int)v58 < (a4 & 0xFFFFFFF8) );
    v17 = (_DWORD *)((char *)v273 + v58);
    a3 = (_DWORD *)((char *)v15 + v58);
  }
  v18 = 0;
  if ( (a4 & 4) != 0 )
  {
    *v17 = *a3;
    v18 = 4;
    if ( (a4 & 2) == 0 )
    {
LABEL_11:
      if ( (a4 & 1) == 0 )
        goto LABEL_12;
      goto LABEL_86;
    }
  }
  else if ( (a4 & 2) == 0 )
  {
    goto LABEL_11;
  }
  *(_WORD *)((char *)v17 + v18) = *(_WORD *)((char *)a3 + v18);
  v18 += 2;
  if ( (a4 & 1) != 0 )
LABEL_86:
    *((_BYTE *)v17 + v18) = *((_BYTE *)a3 + v18);
LABEL_12:
  v253 = *a1;
  if ( (*(_BYTE *)(*a1 + 4) & 1) != 0 )
    sub_60B480();
  v251 = ((a15 & 0x4000) != 0) + 1;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( qword_4AD21C8 )
  {
    v251 = 0;
    v19 = nullptr;
  }
  else
  {
    v19 = (_QWORD *)operator new(0x1C0u);
    memset(v19, 0, 0x1C0u);
    *((_DWORD *)v19 + 7) = 4;
    *v19 = &off_49F5010;
    v19[2] = v19 + 4;
  }
  v20 = operator new(0x108u);
  *(_QWORD *)(v20 + 48) = v20 + 64;
  *(_QWORD *)(v20 + 80) = v20 + 96;
  *(_QWORD *)(v20 + 112) = v20 + 128;
  v21 = *(_QWORD *)v20 & 0xFF80000000000000LL | 0x6F000000000LL;
  *(_OWORD *)(v20 + 144) = 0;
  *(_QWORD *)v20 = v21;
  *(_OWORD *)(v20 + 160) = 0;
  *(_QWORD *)(v20 + 24) = 0x1000000032LL;
  v22 = *(_QWORD *)(v20 + 32);
  *(_OWORD *)(v20 + 176) = 0;
  *(_OWORD *)(v20 + 192) = 0;
  *(_OWORD *)(v20 + 208) = 0;
  *(_QWORD *)(v20 + 32) = (unsigned int)v22 & 0xFFFFFFFE | 0x800000001LL;
  *(_OWORD *)(v20 + 224) = 0;
  *(_OWORD *)(v20 + 240) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E380);
  *(_QWORD *)(v20 + 56) = 0;
  *(_BYTE *)(v20 + 64) = 0;
  *(_QWORD *)(v20 + 88) = 0;
  *(_BYTE *)(v20 + 96) = 0;
  *(_QWORD *)(v20 + 120) = 0;
  *(_BYTE *)(v20 + 128) = 0;
  *(_QWORD *)(v20 + 256) = 0;
  *(_DWORD *)(v20 + 40) = 0;
  *(_BYTE *)(v20 + 44) = 0;
  *(__m128i *)(v20 + 8) = si128;
  sub_25FEFB0(v270);
  sub_1009C90(&v265, v270[0], v20, v19, 1, 0);
  v24 = v270[0];
  if ( v270[0] && !_InterlockedSub((volatile signed __int32 *)(v270[0] + 8), 1u) )
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v24 + 8LL))(v24);
  v25 = v265;
  if ( v265 && (v26 = sub_25A17C0()) != 0 )
  {
    v27 = operator new(0x30u);
    *(_QWORD *)(v27 + 8) = v26;
    *(_BYTE *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 40) = v25;
    *(_OWORD *)(v27 + 24) = 0;
    v252 = v27;
    *(_QWORD *)v27 = &off_47CFE18;
    sub_25A1980(v26, v27);
  }
  else
  {
    v252 = 0;
  }
  v28 = operator new(0x18u);
  *(_QWORD *)(v28 + 16) = 0;
  v29 = v28;
  *(_OWORD *)v28 = 0;
  v235 = (__int64 *)v28;
  v250 = 0;
  v30 = sub_25A17C0();
  if ( v30 )
  {
    v31 = operator new(0x30u);
    *(_QWORD *)(v31 + 8) = v30;
    *(_BYTE *)(v31 + 16) = 0;
    *(_QWORD *)(v31 + 40) = v29;
    *(_OWORD *)(v31 + 24) = 0;
    v250 = v31;
    *(_QWORD *)v31 = &off_47CFE68;
    sub_25A1980(v30, v31);
  }
  v32 = 8LL * a11;
  v33 = (char *)v235[1];
  v34 = v32;
  if ( v32 )
  {
    if ( v235[2] - (__int64)v33 >= (unsigned __int64)v32 )
    {
      if ( v32 <= 8 )
      {
        if ( v32 == 8 )
        {
          *(_QWORD *)v33 = *src;
          v33 = (char *)v235[1];
        }
      }
      else
      {
        memmove(v33, src, 8LL * a11);
        v33 = (char *)v235[1];
      }
      v33 += v34;
      v235[1] = (__int64)v33;
      goto LABEL_30;
    }
    v185 = v32 >> 3;
    v186 = (__int64)&v33[-*v235];
    nb = (_QWORD *)*v235;
    v187 = v186 >> 3;
    if ( 0xFFFFFFFFFFFFFFFLL - (v186 >> 3) < (unsigned __int64)(v32 >> 3) )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v185 < v187 )
      v185 = v186 >> 3;
    v156 = __CFADD__(v185, v187);
    v188 = v185 + v187;
    if ( v156 )
    {
      v223 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      v189 = nullptr;
      v190 = nullptr;
      if ( !v188 )
        goto LABEL_299;
      if ( v188 > 0xFFFFFFFFFFFFFFFLL )
        v188 = 0xFFFFFFFFFFFFFFFLL;
      v223 = 8 * v188;
    }
    v190 = (char *)operator new(v223);
    v189 = &v190[v223];
LABEL_299:
    if ( v186 <= 8 )
    {
      if ( v186 != 8 )
      {
        v228 = &v190[v186];
        if ( v34 == 8 )
          *(_QWORD *)v228 = *src;
        else
          memcpy(v228, src, v34);
        v33 = &v228[v34];
        if ( !nb )
          goto LABEL_303;
        goto LABEL_302;
      }
      v192 = v190 + 8;
      *(_QWORD *)v190 = *nb;
      if ( v34 == 8 )
      {
        v33 = v190 + 16;
        *((_QWORD *)v190 + 1) = *src;
        goto LABEL_302;
      }
    }
    else
    {
      v191 = v186;
      v192 = &v190[v186];
      memmove(v190, nb, v191);
      if ( v34 == 8 )
      {
        v33 = v192 + 8;
        *((_QWORD *)v33 - 1) = *src;
        goto LABEL_302;
      }
    }
    v193 = v192;
    v33 = &v192[v34];
    memcpy(v193, src, v34);
LABEL_302:
    operator delete(nb, v235[2] - (_QWORD)nb);
LABEL_303:
    *v235 = (__int64)v190;
    v235[1] = (__int64)v33;
    v235[2] = (__int64)v189;
  }
LABEL_30:
  if ( !a6 )
    goto LABEL_33;
  if ( (char *)v235[2] != v33 )
  {
    *(_QWORD *)v33 = a6;
    v33 = (char *)(v235[1] + 8);
    v235[1] = (__int64)v33;
    goto LABEL_33;
  }
  v202 = (_BYTE *)*v235;
  v203 = (__int64)&v33[-*v235] >> 3;
  if ( v203 == 0xFFFFFFFFFFFFFFFLL )
LABEL_405:
    std::__throw_length_error("vector::_M_realloc_append");
  v204 = 1;
  if ( v203 )
    v204 = (v33 - v202) >> 3;
  v156 = __CFADD__(v204, v203);
  v205 = v204 + v203;
  if ( v156 )
  {
    v206 = 0x7FFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( v205 > 0xFFFFFFFFFFFFFFFLL )
      v205 = 0xFFFFFFFFFFFFFFFLL;
    v206 = 8 * v205;
  }
  v207 = (char *)operator new(v206);
  v208 = v33 - v202;
  v209 = v207;
  *(_QWORD *)&v207[v208] = a6;
  v33 = &v207[v33 - v202 + 8];
  if ( v208 > 0 )
  {
    v209 = (char *)memcpy(v207, v202, v208);
    goto LABEL_349;
  }
  if ( v202 )
  {
LABEL_349:
    nd = (size_t)v209;
    operator delete(v202, v235[2] - (_QWORD)v202);
    v209 = (char *)nd;
  }
  *v235 = (__int64)v209;
  v235[1] = (__int64)v33;
  v235[2] = (__int64)&v209[v206];
LABEL_33:
  v35 = v265;
  if ( v265 )
  {
    ++*(_DWORD *)v265;
    v33 = (char *)v235[1];
  }
  v270[0] = (size_t)v35;
  LOWORD(v271) = 256;
  v36 = *v235;
  v270[1] = 0;
  v37 = v36;
  *((_QWORD *)&v271 + 1) = 0;
  sub_1081270(v269, v36, (__int64)&v33[-v36] >> 3, v270);
  v268 = (__m128i)(unsigned __int64)v269[0];
  if ( v269[0] )
  {
    v38 = operator new(0x18u);
    v39 = (volatile signed __int32 *)v268.m128i_i64[1];
    v40 = (volatile signed __int32 *)v38;
    v41 = v269[0];
    v269[0] = nullptr;
    *((_QWORD *)v40 + 1) = 0x100000001LL;
    *((_QWORD *)v40 + 2) = v41;
    *(_QWORD *)v40 = off_47D03A8;
    if ( v39 == v40 )
    {
LABEL_45:
      if ( *((_QWORD *)v40 + 1) == 0x100000001LL )
      {
        v212 = *(_QWORD *)v40;
        *((_QWORD *)v40 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *))(v212 + 16))(v40);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 24LL))(v40);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v44 = _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF);
        }
        else
        {
          v44 = *((_DWORD *)v40 + 2);
          *((_DWORD *)v40 + 2) = v44 - 1;
        }
        if ( v44 == 1 )
          sub_6111C0(v40);
      }
      v45 = v269[0];
      if ( v269[0] )
      {
        sub_698F50((_QWORD *)v269[0], v37);
        v37 = 192;
        operator delete(v45, 0xC0u);
      }
      goto LABEL_52;
    }
    if ( &_pthread_key_create )
    {
      _InterlockedAdd(v40 + 2, 1u);
      v39 = (volatile signed __int32 *)v268.m128i_i64[1];
      if ( v268.m128i_i64[1] )
        goto LABEL_39;
    }
    else
    {
      *((_DWORD *)v40 + 2) = 2;
      if ( v39 )
      {
LABEL_39:
        v42 = v39 + 2;
        if ( *((_QWORD *)v39 + 1) == 0x100000001LL )
        {
          v222 = *(_QWORD *)v39;
          *((_QWORD *)v39 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v222 + 16))(
            v39,
            v37,
            v42);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 24LL))(v39);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v43 = _InterlockedExchangeAdd(v42, 0xFFFFFFFF);
          }
          else
          {
            v43 = *((_DWORD *)v39 + 2);
            *((_DWORD *)v39 + 2) = v43 - 1;
          }
          if ( v43 == 1 )
            sub_6111C0(v39);
        }
      }
    }
    v268.m128i_i64[1] = (__int64)v40;
    goto LABEL_45;
  }
LABEL_52:
  v46 = v270[1];
  v269[0] = nullptr;
  if ( v270[1] && !_InterlockedSub((volatile signed __int32 *)(v270[1] + 8), 1u) )
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v46 + 8LL))(v46);
  v47 = (void *)v270[0];
  if ( v270[0] )
  {
    v48 = (*(_DWORD *)v270[0])-- == 1;
    if ( v48 )
    {
      sub_C68450(v47);
      v37 = 15248;
      operator delete(v47, 0x3B90u);
    }
  }
  if ( !v268.m128i_i64[0] )
    goto LABEL_84;
  v49 = sub_25A17C0();
  if ( !v49 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v268.m128i_i64[0] + 144) + 136LL) )
    {
      v262 = 0;
LABEL_92:
      v60 = (_QWORD *)operator new(0x50u);
      *v60 = v60 + 2;
      v60[1] = 0x800000000LL;
      v264 = 0;
      v61 = sub_25A17C0();
      if ( v61 )
      {
        v62 = operator new(0x30u);
        *(_QWORD *)(v62 + 8) = v61;
        *(_BYTE *)(v62 + 16) = 0;
        *(_QWORD *)(v62 + 40) = v60;
        *(_OWORD *)(v62 + 24) = 0;
        v264 = v62;
        *(_QWORD *)v62 = &off_47D0330;
        sub_25A1980(v61, v62);
      }
      v246 = a12 + 24 * a13;
      if ( a12 != v246 )
      {
        v63 = a12;
        while ( 1 )
        {
          v64 = *(const char **)v63;
          v48 = **(_BYTE **)v63 == 0;
          v272.m128i_i16[0] = 257;
          if ( !v48 )
          {
            v270[0] = (size_t)v64;
            v272.m128i_i8[0] = 3;
          }
          sub_25CCFD0(&v267, *(_QWORD *)(v63 + 8), *(_QWORD *)(v63 + 16), v270);
          v65 = *(const char **)v63;
          v66 = v267;
          v67 = *(_QWORD **)(v268.m128i_i64[0] + 56);
          if ( !*(_QWORD *)v63 )
          {
            v270[0] = (size_t)&v271;
LABEL_102:
            v70 = &v271;
            v68 = nullptr;
            goto LABEL_103;
          }
          v68 = (char *)strlen(*(const char **)v63);
          v270[0] = (size_t)&v271;
          v269[0] = v68;
          v69 = (size_t)v68;
          if ( (unsigned __int64)v68 > 0xF )
          {
            nc = (size_t)v68;
            v150 = std::string::_M_create();
            v69 = nc;
            v270[0] = v150;
            v151 = (__int128 *)v150;
            *(void **)&v271 = v269[0];
          }
          else
          {
            if ( v68 == (_BYTE *)&dword_0 + 1 )
            {
              LOBYTE(v271) = *v65;
              v70 = (__int128 *)((char *)&v271 + 1);
              goto LABEL_103;
            }
            if ( !v68 )
              goto LABEL_102;
            v151 = &v271;
          }
          memcpy(v151, v65, v69);
          v68 = (char *)v269[0];
          v70 = (__int128 *)((char *)v269[0] + v270[0]);
LABEL_103:
          v270[1] = (size_t)v68;
          *(_BYTE *)v70 = 0;
          v71 = v67[34];
          if ( v71 == v67[35] )
          {
            v152 = v67[33];
            v153 = v71 - v152;
            v154 = 0xCCCCCCCCCCCCCCCDLL * ((v71 - v152) >> 3);
            if ( v154 == 0x333333333333333LL )
              goto LABEL_405;
            v155 = 1;
            if ( v154 )
              v155 = 0xCCCCCCCCCCCCCCCDLL * ((v71 - v152) >> 3);
            v156 = __CFADD__(v155, v154);
            v157 = v155 - 0x3333333333333333LL * ((v71 - v152) >> 3);
            if ( v156 )
            {
              v259 = (char *)v67[33];
              ne = v67[34];
              v231 = operator new(0x7FFFFFFFFFFFFFF8uLL);
              v159 = (char *)ne;
              v160 = v259;
              v161 = (char **)v231;
              v162 = (size_t *)(v231 + v153);
              v163 = v162 + 2;
              *v162 = (size_t)(v162 + 2);
              v164 = v270[0];
              if ( (__int128 *)v270[0] != &v271 )
              {
                na = 0xFFFFFFFFFFFFFFFLL;
                goto LABEL_256;
              }
              na = 0xFFFFFFFFFFFFFFFLL;
              v165 = v270[1];
            }
            else
            {
              v260 = (char *)v67[33];
              if ( v157 > 0x333333333333333LL )
                v157 = 0x333333333333333LL;
              v256 = (char *)v67[34];
              na = 5 * v157;
              v158 = operator new(40 * v157);
              v159 = v256;
              v160 = v260;
              v161 = (char **)v158;
              v162 = (size_t *)(v158 + v153);
              v163 = v162 + 2;
              *v162 = (size_t)(v162 + 2);
              v164 = v270[0];
              if ( (__int128 *)v270[0] != &v271 )
              {
LABEL_256:
                *v162 = v164;
                v165 = v270[1];
                v162[2] = v271;
                goto LABEL_257;
              }
              v165 = v270[1];
            }
            v214 = v165 + 1;
            if ( (unsigned int)(v165 + 1) >= 8 )
            {
              *v163 = v271;
              *(_QWORD *)((char *)v163 + v214 - 8) = *(size_t *)((char *)&v270[1] + v214);
              v215 = (unsigned __int64)(v163 + 1) & 0xFFFFFFFFFFFFFFF8LL;
              v216 = (char *)v163 - v215;
              v217 = (char *)((char *)&v271 - v216);
              v218 = ((_DWORD)v216 + v214) & 0xFFFFFFF8;
              if ( v218 >= 8 )
              {
                v219 = v218 & 0xFFFFFFF8;
                v220 = 0;
                do
                {
                  v221 = v220;
                  v220 += 8;
                  *(_QWORD *)(v215 + v221) = *(_QWORD *)&v217[v221];
                }
                while ( v220 < v219 );
              }
              v165 = v270[1];
            }
            else if ( (v214 & 4) != 0 )
            {
              *(_DWORD *)v163 = v271;
              *(_DWORD *)((char *)v163 + v214 - 4) = *(_DWORD *)((char *)&v270[1] + v214 + 4);
              v165 = v270[1];
            }
            else if ( (_DWORD)v165 != -1 )
            {
              *(_BYTE *)v163 = v271;
              v165 = v270[1];
              if ( (v214 & 2) != 0 )
              {
                *(_WORD *)((char *)v163 + v214 - 2) = *(_WORD *)((char *)&v270[1] + v214 + 6);
                v165 = v270[1];
              }
            }
LABEL_257:
            v162[1] = v165;
            v270[0] = (size_t)&v271;
            v270[1] = 0;
            LOBYTE(v271) = 0;
            v162[4] = (size_t)v66;
            if ( v159 == v160 )
            {
              v166 = v161;
LABEL_272:
              v175 = v166 + 5;
              if ( v160 )
              {
                v258 = v161;
                operator delete(v160, v67[35] - (_QWORD)v160);
                v161 = v258;
              }
              v67[33] = v161;
              v67[34] = v175;
              v67[35] = &v161[na];
              if ( (__int128 *)v270[0] != &v271 )
                operator delete((void *)v270[0], v271 + 1);
              goto LABEL_108;
            }
            v261 = v63;
            v166 = v161;
            v167 = v160 + 16;
            v257 = v160;
            v168 = v159;
            v263 = v161;
            while ( 2 )
            {
              v172 = v166 + 2;
              *v166 = (char *)(v166 + 2);
              v173 = *((char **)v167 - 2);
              if ( v173 != v167 )
              {
                *v166 = v173;
                v166[2] = *(char **)v167;
                goto LABEL_260;
              }
              v169 = *((char **)v167 - 1);
              v174 = (_DWORD)v169 + 1;
              if ( (unsigned int)((_DWORD)v169 + 1) < 8 )
              {
                if ( (v174 & 4) != 0 )
                {
                  *v172 = *(_DWORD *)v167;
                  *(_DWORD *)((char *)v172 + v174 - 4) = *(_DWORD *)&v167[v174 - 4];
                  v169 = *((char **)v167 - 1);
                  goto LABEL_261;
                }
                if ( (_DWORD)v169 != -1 )
                {
                  *(_BYTE *)v172 = *v167;
                  if ( (v174 & 2) != 0 )
                  {
                    *(_WORD *)((char *)v172 + v174 - 2) = *(_WORD *)&v167[v174 - 2];
                    v169 = *((char **)v167 - 1);
                    goto LABEL_261;
                  }
LABEL_260:
                  v169 = *((char **)v167 - 1);
                }
LABEL_261:
                v166[1] = v169;
                v170 = *((char **)v167 + 2);
                *((_QWORD *)v167 - 2) = v167;
                *((_QWORD *)v167 - 1) = 0;
                *v167 = 0;
                v166[4] = v170;
                v171 = *((char **)v167 - 2);
                if ( v171 != v167 )
                  operator delete(v171, *(_QWORD *)v167 + 1LL);
                v166 += 5;
                if ( v168 == v167 + 24 )
                {
                  v160 = v257;
                  v63 = v261;
                  v161 = v263;
                  goto LABEL_272;
                }
                v167 += 40;
                continue;
              }
              break;
            }
            *(_QWORD *)v172 = *(_QWORD *)v167;
            *(_QWORD *)((char *)v172 + v174 - 8) = *(_QWORD *)&v167[v174 - 8];
            v176 = (unsigned __int64)(v166 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v177 = (char *)v172 - v176;
            v178 = (char *)(v167 - v177);
            v179 = ((_DWORD)v177 + v174) & 0xFFFFFFF8;
            if ( v179 >= 8 )
            {
              v180 = v179 & 0xFFFFFFF8;
              v181 = 0;
              do
              {
                v182 = v181;
                v181 += 8;
                *(_QWORD *)(v176 + v182) = *(_QWORD *)&v178[v182];
              }
              while ( v181 < v180 );
            }
            goto LABEL_260;
          }
          v72 = v71 + 16;
          *(_QWORD *)v71 = v71 + 16;
          if ( (__int128 *)v270[0] == &v271 )
          {
            v73 = v270[1];
            v183 = LODWORD(v270[1]) + 1;
            if ( (unsigned int)(LODWORD(v270[1]) + 1) < 8 )
            {
              if ( (v183 & 4) != 0 )
              {
                *(_DWORD *)(v71 + 16) = v271;
                *(_DWORD *)(v72 + v183 - 4) = *(_DWORD *)((char *)&v270[1] + v183 + 4);
                v73 = v270[1];
              }
              else if ( LODWORD(v270[1]) != -1 )
              {
                *(_BYTE *)(v71 + 16) = v271;
                v73 = v270[1];
                if ( (v183 & 2) != 0 )
                {
                  *(_WORD *)(v72 + v183 - 2) = *(_WORD *)((char *)&v270[1] + v183 + 6);
                  v73 = v270[1];
                }
              }
              goto LABEL_107;
            }
            *(_QWORD *)(v71 + 16) = v271;
            *(_QWORD *)(v72 + v183 - 8) = *(size_t *)((char *)&v270[1] + v183);
            v195 = (v71 + 24) & 0xFFFFFFFFFFFFFFF8LL;
            v196 = v72 - v195;
            v197 = (char *)&v271 - v196;
            v198 = (v196 + v183) & 0xFFFFFFF8;
            if ( v198 >= 8 )
            {
              v199 = v198 & 0xFFFFFFF8;
              v200 = 0;
              do
              {
                v201 = v200;
                v200 += 8;
                *(_QWORD *)(v195 + v201) = *(_QWORD *)&v197[v201];
              }
              while ( v200 < v199 );
            }
          }
          else
          {
            *(_QWORD *)v71 = v270[0];
            *(_QWORD *)(v71 + 16) = v271;
          }
          v73 = v270[1];
LABEL_107:
          *(_QWORD *)(v71 + 8) = v73;
          *(_QWORD *)(v71 + 32) = v66;
          v67[34] += 40LL;
LABEL_108:
          v74 = *((unsigned int *)v60 + 2);
          v75 = *v60;
          v76 = &v267;
          v77 = v74 + 1;
          if ( *((unsigned int *)v60 + 3) < (unsigned __int64)(v74 + 1) )
          {
            if ( (unsigned __int64)&v267 < v75 || (unsigned __int64)&v267 >= v75 + 8 * v74 )
            {
              sub_69C080((__int64)v60, v77);
              v75 = *v60;
              v74 = *((unsigned int *)v60 + 2);
            }
            else
            {
              v184 = (char *)&v267 - v75;
              sub_69C080((__int64)v60, v77);
              v75 = *v60;
              v74 = *((unsigned int *)v60 + 2);
              v76 = (void **)&v184[*v60];
            }
          }
          *(_QWORD *)(v75 + 8 * v74) = *v76;
          *v76 = nullptr;
          v78 = v267;
          ++*((_DWORD *)v60 + 2);
          if ( v78 )
          {
            v63 += 24;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v78 + 8LL))(v78);
            if ( v246 == v63 )
              break;
          }
          else
          {
            v63 += 24;
            if ( v246 == v63 )
              break;
          }
        }
      }
      v79 = v268.m128i_i64[0];
      *(_BYTE *)(*(_QWORD *)v268.m128i_i64[0] + 106LL) &= ~2u;
      if ( (a5 & 8) != 0 )
        *(_BYTE *)(*(_QWORD *)(v79 + 32) + 4LL) |= 1u;
      v80 = *(volatile signed __int32 **)(v253 + 48);
      v81 = *(_QWORD *)(v253 + 40);
      if ( v80 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v80 + 2, 1u);
        else
          ++*((_DWORD *)v80 + 2);
      }
      v82 = sub_25E2710("raw", 3);
      v83 = "raw";
      v84 = (unsigned int)sub_25E2870(v81 + 24, "raw", 3, v82);
      v85 = (__int64 *)(*(_QWORD *)(v81 + 24) + 8 * v84);
      v86 = *v85;
      if ( *v85 )
      {
        if ( v86 != -8 )
          goto LABEL_118;
        --*(_DWORD *)(v81 + 40);
      }
      v237 = v85;
      v234 = v84;
      v194 = sub_25CC9C0(20, 8);
      v83 = (char *)v234;
      *(_BYTE *)(v194 + 18) = 119;
      *(_WORD *)(v194 + 16) = 24946;
      *(_BYTE *)(v194 + 19) = 0;
      *(_QWORD *)v194 = 3;
      *(_QWORD *)(v194 + 8) = 0;
      *v237 = v194;
      ++*(_DWORD *)(v81 + 36);
      v84 = *(_QWORD *)(v81 + 24) + 8LL * (unsigned int)sub_25E2C40(v81 + 24, v234);
      v86 = *(_QWORD *)v84;
      if ( *(_QWORD *)v84 == -8 || !v86 )
      {
        do
        {
          do
          {
            v86 = *(_QWORD *)(v84 + 8);
            v84 += 8;
          }
          while ( !v86 );
        }
        while ( v86 == -8 );
      }
LABEL_118:
      v87 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v86 + 8) + 16LL))(
              *(_QWORD *)(v86 + 8),
              v83,
              v84);
      v88 = *(char **)v87;
      v89 = *(char **)(v87 + 8);
      v270[0] = (size_t)&v271;
      n = v89 != nullptr && v88 == nullptr;
      if ( n )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v269[0] = v89;
      if ( (unsigned __int64)v89 > 0xF )
      {
        v270[0] = std::string::_M_create();
        v213 = (__int128 *)v270[0];
        *(void **)&v271 = v269[0];
      }
      else
      {
        if ( v89 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v271) = *v88;
          goto LABEL_122;
        }
        if ( !v89 )
        {
LABEL_122:
          v90 = (size_t)&v271;
          goto LABEL_123;
        }
        v213 = &v271;
      }
      v83 = v88;
      memcpy(v213, v88, (size_t)v89);
      v89 = (char *)v269[0];
      v90 = v270[0];
LABEL_123:
      v270[1] = (size_t)v89;
      v89[v90] = 0;
      v91 = v270[1];
      v92 = *(__m128 **)(v268.m128i_i64[0] + 40);
      v93 = (unsigned __int16 *)v92[15].m128_u64[1];
      if ( v93 == &v92[16].m128_u16[4] )
      {
        if ( (__int128 *)v270[0] != &v271 )
        {
          v92[15].m128_u64[1] = v270[0];
          v92[16] = _mm_loadh_ps((const double *)&v271);
LABEL_354:
          v270[0] = (size_t)&v271;
          v93 = (unsigned __int16 *)&v271;
          goto LABEL_127;
        }
      }
      else if ( (__int128 *)v270[0] != &v271 )
      {
        v92[15].m128_u64[1] = v270[0];
        v94 = v92[16].m128_u64[1];
        v92[16] = _mm_loadh_ps((const double *)&v271);
        if ( v93 )
        {
          v270[0] = (size_t)v93;
          *(_QWORD *)&v271 = v94;
          goto LABEL_127;
        }
        goto LABEL_354;
      }
      if ( v270 == (size_t *)&v92[15].m128_u16[4] )
      {
        v93 = (unsigned __int16 *)v270[0];
      }
      else
      {
        if ( v270[1] )
        {
          if ( v270[1] == 1 )
          {
            *(_BYTE *)v93 = v271;
          }
          else
          {
            v83 = (char *)&v271;
            memcpy(v93, &v271, v270[1]);
          }
          v93 = (unsigned __int16 *)v92[15].m128_u64[1];
          v91 = v270[1];
        }
        v92[16].m128_u64[0] = v91;
        *((_BYTE *)v93 + v91) = 0;
        v93 = (unsigned __int16 *)v270[0];
      }
LABEL_127:
      v270[1] = 0;
      *(_BYTE *)v93 = 0;
      if ( (__int128 *)v270[0] != &v271 )
      {
        v83 = (char *)(v271 + 1);
        operator delete((void *)v270[0], v271 + 1);
      }
      if ( v80 )
      {
        v95 = v80 + 2;
        if ( *((_QWORD *)v80 + 1) == 0x100000001LL )
        {
          v226 = *(_QWORD *)v80;
          *((_QWORD *)v80 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, char *, volatile signed __int32 *))(v226 + 16))(
            v80,
            v83,
            v95);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 24LL))(v80);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v96 = _InterlockedExchangeAdd(v95, 0xFFFFFFFF);
          }
          else
          {
            v96 = *((_DWORD *)v80 + 2);
            *((_DWORD *)v80 + 2) = v96 - 1;
          }
          if ( v96 == 1 )
            sub_6111C0(v80);
        }
      }
      v269[0] = v265;
      if ( v265 )
        ++*(_DWORD *)v265;
      v97 = (__m128)_mm_load_si128(&v268);
      v98 = _mm_movehl_ps(a8, v97).m128_u64[0];
      *(__m128 *)v270 = v97;
      if ( v98 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v98 + 8), 1u);
        else
          ++*(_DWORD *)(v98 + 8);
      }
      sub_FF76D0(&v266, v270, v269, v251, 1);
      v99 = (volatile signed __int32 *)v270[1];
      if ( v270[1] )
      {
        v100 = (volatile signed __int32 *)(v270[1] + 8);
        if ( *(_QWORD *)(v270[1] + 8) == 0x100000001LL )
        {
          v224 = *(_QWORD *)v270[1];
          v225 = v270[1];
          *(_QWORD *)(v270[1] + 8) = 0;
          (*(void (__fastcall **)(size_t, size_t *, volatile signed __int32 *))(v224 + 16))(v225, v270, v100);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v99 + 24LL))(v99);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v101 = _InterlockedExchangeAdd(v100, 0xFFFFFFFF);
          }
          else
          {
            v101 = *(_DWORD *)(v270[1] + 8);
            *(_DWORD *)(v270[1] + 8) = v101 - 1;
          }
          if ( v101 == 1 )
            sub_6111C0(v99);
        }
      }
      v102 = v269[0];
      if ( v269[0] )
      {
        v48 = (*(_DWORD *)v269[0])-- == 1;
        if ( v48 )
        {
          sub_C68450(v102);
          operator delete(v102, 0x3B90u);
        }
      }
      v50 = 3;
      v236 = v266;
      if ( v266 )
      {
        v233 = (__int64 *)operator new(8u);
        v103 = v266;
        v266 = nullptr;
        v270[0] = (size_t)v103;
        *v233 = sub_602020(v253, (const double *)v270);
        v104 = (void *)v270[0];
        if ( v270[0] )
        {
          sub_FFE9C0(v270[0]);
          operator delete(v104, 0x808u);
        }
        v247 = 0;
        v105 = sub_25A17C0();
        if ( v105 )
        {
          v106 = operator new(0x30u);
          *(_QWORD *)(v106 + 8) = v105;
          *(_BYTE *)(v106 + 16) = 0;
          *(_OWORD *)(v106 + 24) = 0;
          v247 = v106;
          *(_QWORD *)(v106 + 40) = v233;
          *(_QWORD *)v106 = &off_47D0358;
          sub_25A1980(v105, v106);
        }
        if ( (a5 & 0x10) != 0 && (*(_BYTE *)(*(_QWORD *)v268.m128i_i64[0] + 1LL) & 8) != 0 )
        {
          n = 1;
          *(_BYTE *)(*(_QWORD *)(v268.m128i_i64[0] + 144) + 1LL) |= 0x40u;
        }
        v107 = 0;
        v108 = *v233;
        v109 = operator new(0x108u);
        *(_QWORD *)(v109 + 24) = 0;
        *(_QWORD *)(v109 + 8) = 0x100000001LL;
        *(_QWORD *)(v109 + 56) = v108;
        *(_DWORD *)(v109 + 80) = 0;
        *(_QWORD *)v109 = off_47D03E0;
        *(_QWORD *)(v109 + 64) = 0;
        *(_QWORD *)(v109 + 72) = 0;
        *(_QWORD *)(v109 + 16) = &off_47D00E8;
        *(_DWORD *)(v109 + 104) = 0;
        *(_QWORD *)(v109 + 32) = a2;
        *(_QWORD *)(v109 + 88) = 0;
        *(_QWORD *)(v109 + 40) = v273;
        *(_QWORD *)(v109 + 96) = 0;
        *(_DWORD *)(v109 + 48) = a5;
        *(_QWORD *)(v109 + 176) = v109 + 192;
        *(_DWORD *)(v109 + 128) = 0;
        *(_QWORD *)(v109 + 184) = 0x400000000LL;
        *(_QWORD *)(v109 + 112) = 0;
        *(_QWORD *)(v109 + 120) = 0;
        *(_DWORD *)(v109 + 152) = 0;
        *(_QWORD *)(v109 + 136) = 0;
        *(_QWORD *)(v109 + 144) = 0;
        *(_QWORD *)(v109 + 224) = v109 + 240;
        *(_QWORD *)(v109 + 232) = 0;
        *(_OWORD *)(v109 + 160) = 0;
        v110 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
        *(_DWORD *)(v109 + 256) = 0;
        *(__m128i *)(v109 + 240) = v110;
        if ( n )
          v107 = a1[1];
        LODWORD(v270[0]) = 1;
        *(_DWORD *)((char *)v270 + 5) = 256;
        BYTE1(v270[1]) = 0;
        v271 = 0;
        v272 = 0u;
        BYTE4(v270[0]) = (a5 & 2) != 0;
        if ( (a5 & 4) != 0 )
          BYTE5(v270[0]) = 1;
        v111 = (char *)operator new(0xB8u);
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v109 + 8), 1u);
        else
          ++*(_DWORD *)(v109 + 8);
        sub_1097950(v111);
        *((_QWORD *)v111 + 13) = v109 + 16;
        *(_QWORD *)v111 = off_49F5060;
        v112 = v270[0];
        *((_QWORD *)v111 + 14) = v109;
        *((_QWORD *)v111 + 15) = v112;
        LOWORD(v112) = v270[1];
        *((_QWORD *)v111 + 19) = 0;
        *((_WORD *)v111 + 64) = v112;
        v113 = (void (__fastcall *)(char *, __int128 *, __int64))v272.m128i_i64[0];
        *((_QWORD *)v111 + 20) = 0;
        *(_OWORD *)(v111 + 136) = 0;
        if ( v113 )
        {
          v113(v111 + 136, &v271, 2);
          v114 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v272.m128i_i64[0];
          *((_QWORD *)v111 + 21) = v107;
          v115 = _mm_load_si128(&v272);
          *((_QWORD *)v111 + 22) = 0;
          *(__m128i *)(v111 + 152) = v115;
          if ( v114 )
            v114(&v271, &v271, 3);
        }
        else
        {
          *((_QWORD *)v111 + 21) = v107;
          *((_QWORD *)v111 + 22) = 0;
        }
        v116 = 0;
        v117 = sub_25A17C0();
        if ( v117 )
        {
          v116 = operator new(0x30u);
          *(_QWORD *)(v116 + 8) = v117;
          *(_BYTE *)(v116 + 16) = 0;
          *(_QWORD *)(v116 + 40) = v111;
          *(_OWORD *)(v116 + 24) = 0;
          *(_QWORD *)v116 = &off_47D0380;
          sub_25A1980(v117, v116);
        }
        v118 = v268.m128i_i64[0];
        v119 = *(_QWORD *)(v268.m128i_i64[0] + 56);
        *(_BYTE *)(v119 + 172) = 1;
        if ( a14 )
        {
          v120 = *(_BYTE *)v253;
          if ( (a15 & 1) != 0 )
            *(_BYTE *)(v119 + 75) = 1;
          v121 = v120;
          v255 = (a15 >> 3) & 1;
          v122 = a15 & 4;
          if ( (a15 & 4) != 0 )
            v122 = 2 - ((a15 >> 8) & 1);
        }
        else
        {
          if ( (a15 & 1) != 0 )
            *(_BYTE *)(v119 + 75) = 1;
          if ( *(char *)(*(_QWORD *)v118 + 18LL) >= 0 )
            *(_BYTE *)(v119 + 75) = 0;
          v255 = 0;
          v122 = 0;
          v121 = 0;
        }
        v249 = v265;
        v239 = *((_DWORD *)v265 + 49);
        v123 = sub_636F20((__m128 *)v253);
        v124 = *v123;
        v125 = v123[1];
        v267 = v265;
        if ( v265 )
          ++*(_DWORD *)v265;
        v126 = (__m128)_mm_loadu_si128((const __m128i *)(v253 + 40));
        v127 = _mm_movehl_ps(a9, v126).m128_u64[0];
        *(__m128 *)v269 = v126;
        if ( v127 )
        {
          if ( &_pthread_key_create )
            _InterlockedAdd((volatile signed __int32 *)(v127 + 8), 1u);
          else
            ++*(_DWORD *)(v127 + 8);
        }
        *(__m128i *)v270 = _mm_load_si128(&v268);
        v268 = 0;
        v232 = v124;
        v128 = v269;
        v129 = sub_1000AC0(
                 (unsigned int)v270,
                 (unsigned int)v269,
                 (unsigned int)&v267,
                 (_DWORD)v111,
                 (_DWORD)v236,
                 a14 != nullptr,
                 v232,
                 v125,
                 v121,
                 v251,
                 v122,
                 v255,
                 1,
                 0);
        v130 = (volatile signed __int32 *)v270[1];
        v131 = v129;
        if ( v270[1] )
        {
          v132 = (volatile signed __int32 *)(v270[1] + 8);
          if ( *(_QWORD *)(v270[1] + 8) == 0x100000001LL )
          {
            *(_QWORD *)(v270[1] + 8) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, void **, volatile signed __int32 *))(*(_QWORD *)v130
                                                                                                  + 16LL))(
              v130,
              v269,
              v132);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v130 + 24LL))(v130);
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v133 = _InterlockedExchangeAdd(v132, 0xFFFFFFFF);
            }
            else
            {
              v133 = *(_DWORD *)(v270[1] + 8);
              *(_DWORD *)(v270[1] + 8) = v133 - 1;
            }
            if ( v133 == 1 )
              sub_6111C0(v130);
          }
        }
        v134 = (volatile signed __int32 *)v269[1];
        if ( v269[1] )
        {
          v135 = (volatile signed __int32 *)((char *)v269[1] + 8);
          if ( *((_QWORD *)v269[1] + 1) == 0x100000001LL )
          {
            *((_QWORD *)v269[1] + 1) = 0;
            (*(void (__fastcall **)(volatile signed __int32 *, void **, volatile signed __int32 *))(*(_QWORD *)v134
                                                                                                  + 16LL))(
              v134,
              v269,
              v135);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v134 + 24LL))(v134);
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v136 = _InterlockedExchangeAdd(v135, 0xFFFFFFFF);
            }
            else
            {
              v136 = *((_DWORD *)v269[1] + 2);
              *((_DWORD *)v269[1] + 2) = v136 - 1;
            }
            if ( v136 == 1 )
              sub_6111C0(v134);
          }
        }
        v137 = v267;
        if ( v267 )
        {
          v48 = (*(_DWORD *)v267)-- == 1;
          if ( v48 )
          {
            sub_C68450(v137);
            v128 = (void **)(&stru_3B88 + 8);
            operator delete(v137, 0x3B90u);
          }
        }
        if ( v239 < v249[49] && *(_BYTE *)(v253 + 1) )
          sub_60B4B0((__int64)v236);
        v50 = 4;
        if ( !(unsigned __int8)sub_6020A0((__int64)v236) )
        {
          if ( v131 )
          {
            if ( a14 )
            {
              v138 = *v233;
              *v233 = 0;
              *a14 = v138;
            }
            v50 = 0;
          }
          else
          {
            v50 = 1;
          }
        }
        if ( v116 && !*(_BYTE *)(v116 + 16) )
        {
          v128 = (void **)v116;
          sub_25A19A0(*(_QWORD *)(v116 + 8), v116);
        }
        v139 = *((_QWORD **)v111 + 22);
        *(_QWORD *)v111 = off_49F5060;
        if ( v139 )
        {
          v140 = (_QWORD *)v139[6];
          if ( v140 != v139 + 8 )
            free(v140);
          operator delete();
          v128 = (void **)(elf_gnu_hash_indexes + 448);
          operator delete(v139, 0x468u);
        }
        v141 = *((void (__fastcall **)(char *, char *, __int64))v111 + 19);
        *((_QWORD *)v111 + 22) = 0;
        if ( v141 )
        {
          v128 = (void **)(v111 + 136);
          v141(v111 + 136, v111 + 136, 3);
        }
        v142 = *((volatile signed __int32 **)v111 + 14);
        if ( v142 )
        {
          v143 = v142 + 2;
          if ( *((_QWORD *)v142 + 1) == 0x100000001LL )
          {
            v229 = *(_QWORD *)v142;
            v230 = *((_QWORD *)v111 + 14);
            *((_QWORD *)v142 + 1) = 0;
            (*(void (__fastcall **)(__int64, void **, volatile signed __int32 *))(v229 + 16))(v230, v128, v143);
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v142 + 24LL))(v142);
          }
          else
          {
            if ( &_pthread_key_create )
            {
              v144 = _InterlockedExchangeAdd(v143, 0xFFFFFFFF);
            }
            else
            {
              v144 = *((_DWORD *)v142 + 2);
              *((_DWORD *)v142 + 2) = v144 - 1;
            }
            if ( v144 == 1 )
              sub_6111C0(v142);
          }
        }
        *(_QWORD *)v111 = &off_4A32C48;
        sub_10979A0(v111);
        operator delete(v111, 0xB8u);
        if ( *(_QWORD *)(v109 + 8) == 0x100000001LL )
        {
          v227 = *(_QWORD *)v109;
          *(_QWORD *)(v109 + 8) = 0;
          (*(void (__fastcall **)(__int64))(v227 + 16))(v109);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 24LL))(v109);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v145 = _InterlockedExchangeAdd((volatile signed __int32 *)(v109 + 8), 0xFFFFFFFF);
          }
          else
          {
            v145 = *(_DWORD *)(v109 + 8);
            *(_DWORD *)(v109 + 8) = v145 - 1;
          }
          if ( v145 == 1 )
            sub_6111C0((volatile signed __int32 *)v109);
        }
        if ( v247 && !*(_BYTE *)(v247 + 16) )
          sub_25A19A0(*(_QWORD *)(v247 + 8), v247);
        sub_602110(v233);
        operator delete(v233, 8u);
        v146 = v266;
        if ( v266 )
        {
          sub_FFE9C0(v266);
          operator delete(v146, 0x808u);
        }
      }
      v266 = nullptr;
      if ( v264 && !*(_BYTE *)(v264 + 16) )
        sub_25A19A0(*(_QWORD *)(v264 + 8), v264);
      v147 = (_QWORD *)*v60;
      v148 = (_QWORD *)(*v60 + 8LL * *((unsigned int *)v60 + 2));
      if ( (_QWORD *)*v60 != v148 )
      {
        do
        {
          while ( 1 )
          {
            v149 = *--v148;
            if ( !v149 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v149 + 8LL))(v149);
            *v148 = 0;
            if ( v147 == v148 )
              goto LABEL_232;
          }
        }
        while ( v147 != v148 );
LABEL_232:
        v148 = (_QWORD *)*v60;
      }
      if ( v60 + 2 != v148 )
        free(v148);
      v37 = 80;
      operator delete(v60, 0x50u);
      if ( !v262 )
        goto LABEL_62;
      v52 = v262;
      if ( *(_BYTE *)(v262 + 16) )
        goto LABEL_62;
      goto LABEL_242;
    }
LABEL_84:
    v50 = 1;
    goto LABEL_62;
  }
  v50 = 1;
  v51 = operator new(0x30u);
  *(_QWORD *)(v51 + 8) = v49;
  *(_BYTE *)(v51 + 16) = 0;
  *(_OWORD *)(v51 + 24) = 0;
  v262 = v51;
  *(_QWORD *)(v51 + 40) = &v268;
  *(_QWORD *)v51 = &off_47D0308;
  sub_25A1980(v49, v51);
  v37 = *(unsigned int *)(*(_QWORD *)(v268.m128i_i64[0] + 144) + 136LL);
  if ( (_DWORD)v37 )
    goto LABEL_92;
  v52 = v262;
  if ( !*(_BYTE *)(v262 + 16) )
  {
LABEL_242:
    v37 = v52;
    sub_25A19A0(*(_QWORD *)(v52 + 8), v52);
  }
LABEL_62:
  v53 = (volatile signed __int32 *)v268.m128i_i64[1];
  if ( v268.m128i_i64[1] )
  {
    v54 = (volatile signed __int32 *)(v268.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v268.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v210 = *(_QWORD *)v268.m128i_i64[1];
      v211 = v268.m128i_i64[1];
      *(_QWORD *)(v268.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v210 + 16))(v211, v37, v54);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 24LL))(v53);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v55 = _InterlockedExchangeAdd(v54, 0xFFFFFFFF);
      }
      else
      {
        v55 = *(_DWORD *)(v268.m128i_i64[1] + 8);
        *(_DWORD *)(v268.m128i_i64[1] + 8) = v55 - 1;
      }
      if ( v55 == 1 )
        sub_6111C0(v53);
    }
  }
  if ( v250 && !*(_BYTE *)(v250 + 16) )
    sub_25A19A0(*(_QWORD *)(v250 + 8), v250);
  if ( *v235 )
    operator delete((void *)*v235, v235[2] - *v235);
  operator delete(v235, 0x18u);
  if ( v252 && !*(_BYTE *)(v252 + 16) )
    sub_25A19A0(*(_QWORD *)(v252 + 8), v252);
  v56 = v265;
  if ( v265 )
  {
    v48 = (*(_DWORD *)v265)-- == 1;
    if ( v48 )
    {
      sub_C68450(v56);
      operator delete(v56, 0x3B90u);
    }
  }
  return v50;
}

