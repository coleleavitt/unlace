__int64 __fastcall sub_1338610(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  void **v7; // r14
  int v8; // eax
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int16 v17; // ax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __m128i si128; // xmm1
  _QWORD *v30; // r15
  __int64 v31; // r12
  _QWORD *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rbx
  char *v35; // r12
  size_t v36; // rax
  _QWORD *v37; // r15
  _QWORD *v38; // rax
  int v39; // r12d
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  bool v44; // dl
  unsigned __int8 **v45; // r12
  char v46; // si
  unsigned int *v47; // r13
  unsigned __int8 *v48; // rcx
  __int64 v49; // rdx
  unsigned __int8 *v50; // rdi
  unsigned __int8 *v51; // rax
  __int64 v52; // r9
  unsigned __int8 *v53; // r15
  _QWORD *v54; // rdx
  __int64 v55; // rax
  unsigned __int8 *v56; // rbp
  unsigned __int8 *v57; // rbx
  _QWORD *v58; // rcx
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rax
  char *v62; // r15
  unsigned int *v63; // rdi
  __int64 v64; // rax
  void **v65; // rbx
  _QWORD *v66; // rdx
  void **v67; // rbp
  void **v68; // r15
  void **v69; // rdi
  void **v70; // rdi
  void **v71; // r15
  void **v72; // rbp
  void **v73; // rbx
  _QWORD *v74; // rdx
  void **v75; // rbp
  void **v76; // r15
  void **v77; // rdi
  void **v78; // rdi
  void **v79; // r15
  void **v80; // rbp
  int v81; // r13d
  _BYTE **v82; // r12
  unsigned int *v83; // r15
  char *v84; // rdx
  _BYTE *v85; // rax
  unsigned __int8 *v86; // rbx
  _QWORD *v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // rax
  char *v90; // rbx
  unsigned int *v91; // rdi
  __int64 v92; // rax
  void **v93; // rbx
  _QWORD *v94; // rax
  void **v95; // rcx
  unsigned __int64 v96; // rax
  void **v97; // rbp
  void **v98; // rdi
  void **v99; // rdi
  void **v100; // rax
  void **v101; // rbp
  int v102; // eax
  __int64 v103; // rax
  char *v104; // r12
  size_t v105; // rax
  _QWORD *v107; // r15
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  size_t v111; // rdx
  _QWORD *v112; // rdx
  int v113; // eax
  __int64 v114; // rcx
  size_t v115; // rdx
  _QWORD *v116; // rdx
  int v117; // eax
  _QWORD *v118; // rdx
  int v119; // eax
  __int64 v120; // r9
  __int64 v121; // r9
  __int64 v122; // r9
  __int64 v123; // r8
  const char *v124; // r13
  size_t v125; // rax
  size_t v126; // rax
  size_t v127; // rax
  size_t v128; // rcx
  size_t v129; // rax
  size_t v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r15
  unsigned __int8 **v135; // r13
  unsigned __int8 *v136; // r12
  __int64 v137; // rbx
  void *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rbp
  __int64 v142; // rbx
  void *v143; // rdi
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rbp
  void **v148; // r15
  _BYTE **v149; // r14
  unsigned __int8 *v150; // r12
  __int64 v151; // rbx
  void *v152; // rdi
  _BYTE *v153; // rsi
  __int64 v154; // rdx
  __int64 v155; // r12
  __int64 v156; // r15
  unsigned __int64 v157; // rax
  __m128i *v158; // r13
  __m128i *v159; // rdi
  size_t v160; // rax
  size_t v161; // rax
  _QWORD *v162; // rax
  __int64 v163; // r15
  _DWORD *v164; // r12
  void *v165; // r12
  __int64 v167; // r8
  __int64 v168; // r8
  size_t v169; // rax
  _QWORD *v170; // [rsp+8h] [rbp-3DF0h]
  _QWORD *v171; // [rsp+20h] [rbp-3DD8h]
  _QWORD *v172; // [rsp+20h] [rbp-3DD8h]
  unsigned __int8 **v173; // [rsp+20h] [rbp-3DD8h]
  _BYTE **v174; // [rsp+20h] [rbp-3DD8h]
  char v175; // [rsp+28h] [rbp-3DD0h]
  size_t v176; // [rsp+28h] [rbp-3DD0h]
  size_t v177; // [rsp+28h] [rbp-3DD0h]
  size_t v178; // [rsp+28h] [rbp-3DD0h]
  size_t v179; // [rsp+28h] [rbp-3DD0h]
  size_t v180; // [rsp+28h] [rbp-3DD0h]
  size_t v181; // [rsp+28h] [rbp-3DD0h]
  size_t v182; // [rsp+28h] [rbp-3DD0h]
  size_t v183; // [rsp+28h] [rbp-3DD0h]
  int v184; // [rsp+34h] [rbp-3DC4h]
  __int64 v186; // [rsp+38h] [rbp-3DC0h]
  __int64 v187; // [rsp+40h] [rbp-3DB8h]
  __int64 v188; // [rsp+40h] [rbp-3DB8h]
  __int64 v189; // [rsp+48h] [rbp-3DB0h]
  unsigned int *v190; // [rsp+48h] [rbp-3DB0h]
  void *v191[2]; // [rsp+60h] [rbp-3D98h] BYREF
  _BYTE v192[16]; // [rsp+70h] [rbp-3D88h] BYREF
  void *v193[2]; // [rsp+80h] [rbp-3D78h] BYREF
  _QWORD v194[2]; // [rsp+90h] [rbp-3D68h] BYREF
  size_t n[2]; // [rsp+A0h] [rbp-3D58h] BYREF
  unsigned int v196[4]; // [rsp+B0h] [rbp-3D48h] BYREF
  void *v197[2]; // [rsp+C0h] [rbp-3D38h] BYREF
  __int64 v198; // [rsp+D0h] [rbp-3D28h] BYREF
  _QWORD *v199; // [rsp+D8h] [rbp-3D20h]
  void *v200; // [rsp+E0h] [rbp-3D18h]
  _BYTE v201[16]; // [rsp+F0h] [rbp-3D08h] BYREF
  __int16 v202; // [rsp+100h] [rbp-3CF8h]
  _QWORD v203[34]; // [rsp+110h] [rbp-3CE8h] BYREF
  _QWORD s[1906]; // [rsp+220h] [rbp-3BD8h] BYREF
  char v205; // [rsp+3DB0h] [rbp-48h]

  v5 = a2;
  v6 = a1;
  v7 = v197;
  v175 = a4;
  memset(v203, 0, sizeof(v203));
  v170 = a3;
  memset(s, 0, 0x3B98u);
  if ( !a3 )
  {
    v203[7] = 0;
    LOBYTE(v203[8]) = 0;
    v203[11] = 0;
    v203[6] = &v203[8];
    v203[10] = &v203[12];
    v203[14] = &v203[16];
    LOBYTE(v203[12]) = 0;
    v203[15] = 0;
    LOBYTE(v203[16]) = 0;
    v203[0] = v203[0] & 0xFF800000 | 0x6F0LL;
    v203[1] = 0xA00000006LL;
    v203[2] = 0x320000000ALL;
    memset(&v203[18], 0, 120);
    v203[3] = v203[3] & 0xFFFFFFFE00000000LL | 0x100000010LL;
    v203[4] = 8;
    LOBYTE(v203[5]) = 0;
    LOBYTE(v203[33]) = 1;
    v162 = (_QWORD *)operator new(0x10u);
    v162[1] = 0;
    v163 = (__int64)v162;
    *v162 = off_2B4D7F0;
    v164 = (_DWORD *)operator new(0x18u);
    sub_FD3570((__int64)v164);
    if ( v205 )
    {
      v205 = 0;
      sub_FCAA60(s);
    }
    ++*v164;
    v7 = v197;
    v197[0] = v164;
    sub_FCA6E0((__int64)s, (__int64 *)v197, (__int64)v203, v163, 1);
    v165 = v197[0];
    if ( v197[0] )
    {
      if ( (*(_DWORD *)v197[0])-- == 1 )
      {
        sub_FD5580((__int64)v165);
        operator delete(v165, 0x18u);
      }
    }
    v205 = 1;
    v170 = s;
  }
  v8 = *((_DWORD *)v170 + 53);
  *(_OWORD *)v193 = 0;
  v194[0] = 0;
  v184 = v8;
  sub_12FD200((unsigned __int64 **)v193, (__int64)v191, (__int64)v191);
  sub_C23620((__int64)n, (__int64 *)(a1 + 240));
  sub_C23620((__int64)v197, (__int64 *)v193);
  sub_12FB6B0(a1 + 240, v197);
  sub_9B4A30((void ***)v197);
  sub_9B4A30((void ***)n);
  sub_9B4A30((void ***)v193);
  sub_12FB670((__m128i *)v197, 0xD8Cu, a2);
  if ( (_BYTE)v199 )
  {
    sub_C23620((__int64)v191, (__int64 *)v197);
    sub_C23620((__int64)v193, (__int64 *)(a1 + 240));
    sub_C23620((__int64)n, (__int64 *)v191);
    sub_12FB6B0(a1 + 240, n);
    sub_9B4A30((void ***)n);
    sub_9B4A30((void ***)v193);
    sub_9B4A30((void ***)v191);
    if ( (_BYTE)v199 )
      sub_9B4A30((void ***)v197);
  }
  *(_OWORD *)v193 = 0;
  v194[0] = 0;
  sub_12FD200((unsigned __int64 **)v193, (__int64)v191, (__int64)v191);
  sub_C23620((__int64)n, (__int64 *)(a1 + 168));
  sub_C23620((__int64)v197, (__int64 *)v193);
  sub_12FB6B0(a1 + 168, v197);
  sub_9B4A30((void ***)v197);
  sub_9B4A30((void ***)n);
  sub_9B4A30((void ***)v193);
  sub_12FB670((__m128i *)v197, 0xD8Fu, a2);
  if ( (_BYTE)v199 )
  {
    sub_C23620((__int64)v191, (__int64 *)v197);
    sub_C23620((__int64)v193, (__int64 *)(a1 + 168));
    sub_C23620((__int64)n, (__int64 *)v191);
    sub_12FB6B0(a1 + 168, n);
    sub_9B4A30((void ***)n);
    sub_9B4A30((void ***)v193);
    sub_9B4A30((void ***)v191);
    if ( (_BYTE)v199 )
      sub_9B4A30((void ***)v197);
  }
  *(_BYTE *)(a1 + 1) |= 2u;
  LOWORD(v197[0]) = 256;
  HIDWORD(v197[0]) = 491;
  v9 = sub_12FBBD0((char *)v197, 0x41Au, a2);
  if ( HIBYTE(v9) )
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xFD | (2 * (v9 & 1));
  *(_BYTE *)(a1 + 2) &= ~8u;
  if ( sub_13021E0(a2, 0x1A8u) )
    *(_BYTE *)(a1 + 2) |= 8u;
  *(_DWORD *)(a1 + 16) = 10;
  v10 = sub_1302610(0x207u, a2, (__int64)v170);
  if ( BYTE4(v10) )
    *(_DWORD *)(a1 + 16) = v10;
  *(_BYTE *)(a1 + 1) |= 4u;
  if ( sub_13021E0(a2, 0x446u) )
    *(_BYTE *)(a1 + 1) &= ~4u;
  *(_BYTE *)(a1 + 1) &= ~0x10u;
  if ( sub_13021E0(a2, 0x25Fu) )
    *(_BYTE *)(a1 + 1) |= 0x10u;
  *(_BYTE *)(a1 + 1) &= ~8u;
  if ( sub_13021E0(a2, 0x260u) )
    *(_BYTE *)(a1 + 1) |= 8u;
  *(_BYTE *)(a1 + 1) |= 0x40u;
  LOWORD(v197[0]) = 256;
  HIDWORD(v197[0]) = 615;
  v11 = sub_12FBBD0((char *)v197, 0x44Au, a2);
  if ( HIBYTE(v11) )
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xBF | ((v11 & 1) << 6);
  *(_BYTE *)(a1 + 1) &= ~0x80u;
  LOWORD(v197[0]) = 1;
  HIDWORD(v197[0]) = 1097;
  sub_12FBBD0((char *)v197, 0x266u, a2);
  *(_BYTE *)(a1 + 1) &= ~0x80u;
  HIDWORD(v197[0]) = 614;
  LOWORD(v197[0]) = 256;
  v12 = sub_12FBBD0((char *)v197, 0x449u, a2);
  if ( HIBYTE(v12) )
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0x7F | ((_BYTE)v12 << 7);
  *(_BYTE *)(a1 + 2) &= ~0x40u;
  if ( sub_13021E0(a2, 0x268u) )
    *(_BYTE *)(a1 + 2) |= 0x40u;
  *(_BYTE *)(a1 + 40) &= ~1u;
  LOWORD(v197[0]) = 1;
  HIDWORD(v197[0]) = 1350;
  v13 = sub_12FBBD0((char *)v197, 0x6B1u, a2);
  if ( HIBYTE(v13) )
    *(_BYTE *)(a1 + 40) = *(_BYTE *)(a1 + 40) & 0xFE | v13 & 1;
  *(_BYTE *)(a1 + 2) |= 0x20u;
  if ( sub_13021E0(a2, 0x45Bu) )
    *(_BYTE *)(a1 + 2) &= ~0x20u;
  *(_DWORD *)(a1 + 8) = 6;
  v14 = sub_1302610(0x390u, a2, (__int64)v170);
  if ( BYTE4(v14) )
    *(_DWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 24) = 16;
  v15 = sub_1302610(0x1EAu, a2, (__int64)v170);
  if ( BYTE4(v15) )
    *(_DWORD *)(a1 + 24) = v15;
  *(_DWORD *)(a1 + 36) = 0;
  v16 = sub_1302610(0x3A2u, a2, (__int64)v170);
  if ( BYTE4(v16) )
    *(_DWORD *)(a1 + 36) = v16;
  *(_BYTE *)(a1 + 1) &= ~1u;
  if ( sub_13021E0(a2, 0x257u) )
    *(_BYTE *)(a1 + 1) |= 1u;
  *(_BYTE *)(a1 + 28) |= 1u;
  LOWORD(v197[0]) = 256;
  HIDWORD(v197[0]) = 612;
  v17 = sub_12FBBD0((char *)v197, 0x448u, a2);
  if ( HIBYTE(v17) )
    *(_BYTE *)(a1 + 28) = *(_BYTE *)(a1 + 28) & 0xFE | v17 & 1;
  *(_BYTE *)(a1 + 40) &= ~8u;
  v18 = sub_1302940(0x704u, 0x15u, a2, (__int64)v170);
  if ( BYTE4(v18) )
    *(_BYTE *)(a1 + 40) = *(_BYTE *)(a1 + 40) & 0xF7 | (8 * (v18 & 1));
  *(_BYTE *)a1 |= 0x20u;
  LOWORD(v197[0]) = 256;
  HIDWORD(v197[0]) = 1795;
  v19 = sub_12FBBD0((char *)v197, 0x573u, a2);
  if ( HIBYTE(v19) )
    *(_BYTE *)a1 = *(_BYTE *)a1 & 0xDF | (32 * (v19 & 1));
  *(_BYTE *)a1 |= 0x40u;
  LOWORD(v197[0]) = 256;
  HIDWORD(v197[0]) = 1798;
  v20 = sub_12FBBD0((char *)v197, 0x574u, a2);
  if ( HIBYTE(v20) )
    *(_BYTE *)a1 = *(_BYTE *)a1 & 0xBF | ((v20 & 1) << 6);
  *(_DWORD *)(a1 + 20) = 50;
  v21 = sub_1302610(0x715u, a2, (__int64)v170);
  if ( BYTE4(v21) )
    *(_DWORD *)(a1 + 20) = v21;
  *(_DWORD *)(a1 + 12) = 10;
  v22 = sub_1302610(0x73Du, a2, (__int64)v170);
  if ( BYTE4(v22) )
    *(_DWORD *)(a1 + 12) = v22;
  *(_BYTE *)a1 &= ~8u;
  if ( sub_13021E0(a2, 0xC35u) )
    *(_BYTE *)a1 |= 8u;
  *(_BYTE *)a1 &= ~4u;
  if ( sub_13021E0(a2, 0xC36u) )
    *(_BYTE *)a1 |= 4u;
  *(_BYTE *)a1 &= ~1u;
  if ( sub_13021E0(a2, 0xD98u) )
    *(_BYTE *)a1 |= 1u;
  v193[1] = nullptr;
  v23 = *(_BYTE **)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 56);
  LOBYTE(v194[0]) = 0;
  v193[0] = v194;
  n[0] = (size_t)v196;
  sub_12FAA20(n, v23, (__int64)&v23[v24]);
  v197[0] = &v198;
  sub_12FAA20(v197, (_BYTE *)v193[0], (__int64)v193[0] + (unsigned __int64)v193[1]);
  sub_A0AAD0(a1 + 48, v197);
  if ( v197[0] != &v198 )
    operator delete(v197[0]);
  if ( (unsigned int *)n[0] != v196 )
    operator delete((void *)n[0]);
  if ( v193[0] != v194 )
    operator delete(v193[0]);
  sub_1302A80((__m128i *)v197, 0x119u, v5);
  if ( (_BYTE)v200 )
  {
    v191[0] = v192;
    sub_12FAA20(v191, (_BYTE *)v197[0], (__int64)v197[0] + (unsigned __int64)v197[1]);
    v153 = *(_BYTE **)(a1 + 48);
    v154 = (__int64)&v153[*(_QWORD *)(a1 + 56)];
    v193[0] = v194;
    sub_12FAA20(v193, v153, v154);
    n[0] = (size_t)v196;
    sub_12FAA20(n, (_BYTE *)v191[0], (__int64)v191[0] + (unsigned __int64)v191[1]);
    sub_A0AAD0(a1 + 48, n);
    if ( (unsigned int *)n[0] != v196 )
      operator delete((void *)n[0]);
    if ( v193[0] != v194 )
      operator delete(v193[0]);
    if ( v191[0] != v192 )
      operator delete(v191[0]);
    if ( (_BYTE)v200 && v197[0] != &v198 )
      operator delete(v197[0]);
  }
  *(_BYTE *)(a1 + 40) &= 0xF9u;
  v25 = sub_1302940(0x25Cu, 0x30u, v5, (__int64)v170);
  if ( BYTE4(v25) )
    *(_BYTE *)(a1 + 40) = *(_BYTE *)(a1 + 40) & 0xF9 | (2 * (v25 & 3));
  *(_BYTE *)(a1 + 2) &= 0xFCu;
  v26 = sub_1302940(0x262u, 0x31u, v5, (__int64)v170);
  if ( BYTE4(v26) )
    *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xFC | v26 & 3;
  *(_BYTE *)(a1 + 1) |= 0x20u;
  if ( sub_13021E0(v5, 0x44Bu) )
    *(_BYTE *)(a1 + 1) &= ~0x20u;
  *(_DWORD *)(a1 + 32) = 8;
  v27 = sub_1302610(0x73Cu, v5, (__int64)v170);
  if ( BYTE4(v27) )
    *(_DWORD *)(a1 + 32) = v27;
  *(_DWORD *)(a1 + 4) = 0;
  v28 = sub_1302610(0x295u, v5, (__int64)v170);
  if ( BYTE4(v28) )
    *(_DWORD *)(a1 + 4) = v28;
  *(_BYTE *)a1 &= ~2u;
  if ( sub_13021E0(v5, 0xD7Du) )
    *(_BYTE *)a1 |= 2u;
  nullsub_1524((*(_BYTE *)(a1 + 2) & 8) != 0);
  sub_10DF020((__int64)v197, v5, 0xCB9u, 0xCBAu);
  si128 = _mm_load_si128((const __m128i *)v197);
  *(_QWORD *)v196 = v198;
  v30 = v197[0];
  *(__m128i *)n = si128;
  v171 = v199;
  if ( v199 != v197[0] )
  {
    do
    {
      while ( 1 )
      {
        v31 = *v30;
        v32 = v30 + 1;
        v33 = *(_QWORD *)(*v30 + 16LL);
        if ( !v33 )
          v33 = *v30;
        *(_BYTE *)(v33 + 44) |= 1u;
        v30 = (_QWORD *)n[1];
        n[0] = (size_t)v32;
        if ( v32 != (_QWORD *)n[1] )
          break;
LABEL_81:
        if ( v171 == v30 )
          goto LABEL_82;
      }
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          if ( v196[0]
            && ((unsigned __int8)sub_21B9810(*v32, v196[0]) || v196[1] && (unsigned __int8)sub_21B9810(v34, v196[1])) )
          {
            break;
          }
        }
        n[0] = (size_t)++v32;
        if ( v32 == v30 )
          goto LABEL_81;
      }
      v30 = (_QWORD *)n[0];
    }
    while ( v171 != (_QWORD *)n[0] );
LABEL_82:
    v6 = a1;
    v35 = **(char ***)(v31 + 48);
    v36 = strlen(v35);
    sub_99BDC0((_QWORD *)(v6 + 80), 0, *(_QWORD *)(v6 + 88), v35, v36);
  }
  v37 = *(_QWORD **)(v5 + 8);
  v38 = &v37[*(unsigned int *)(v5 + 16)];
  v172 = v38;
  if ( a4 )
  {
    v39 = 2;
    if ( v37 == v38 )
      goto LABEL_205;
  }
  else
  {
    v39 = 1;
    if ( v37 == v38 )
      goto LABEL_96;
  }
  v40 = v37 + 1;
  if ( *v37 )
    goto LABEL_91;
  do
  {
    v37 = v40;
    if ( v40 == v172 )
      goto LABEL_95;
    ++v40;
  }
  while ( !*(v40 - 1) );
  while ( 1 )
  {
LABEL_91:
    v42 = *v37;
    if ( (unsigned __int8)sub_21B9810(*v37, 508) )
    {
LABEL_87:
      v39 = 0;
      goto LABEL_88;
    }
    if ( !(unsigned __int8)sub_21B9810(v42, 1055) )
    {
      if ( !(unsigned __int8)sub_21B9810(v42, 600) )
        goto LABEL_88;
      v124 = **(const char ***)(v42 + 48);
      v125 = j__strlen("always");
      if ( v124 )
      {
        v179 = v125;
        v126 = j__strlen(v124);
        if ( v126 != v179 )
        {
          v180 = v126;
          v127 = j__strlen("never");
          v128 = v180;
          if ( v180 == v127 )
          {
            if ( !v180 )
              goto LABEL_93;
LABEL_294:
            v181 = v128;
            if ( !memcmp(v124, "never", v128) )
              goto LABEL_93;
            v129 = j__strlen("auto");
            v130 = v181;
            if ( v181 != v129 )
              goto LABEL_88;
          }
          else
          {
            v169 = j__strlen("auto");
            v130 = v180;
            if ( v180 != v169 )
              goto LABEL_88;
            if ( !v180 )
            {
              v39 = 2;
              goto LABEL_88;
            }
          }
LABEL_296:
          if ( !memcmp(v124, "auto", v130) )
            v39 = 2;
          goto LABEL_88;
        }
        if ( !v126 )
          goto LABEL_87;
        v183 = v126;
        if ( !memcmp(v124, "always", v126) )
          goto LABEL_87;
        v160 = j__strlen("never");
        v128 = v183;
        if ( v183 != v160 )
        {
          v161 = j__strlen("auto");
          v130 = v183;
          if ( v161 == v183 )
            goto LABEL_296;
LABEL_88:
          v41 = v37 + 1;
          if ( v37 + 1 == v172 )
            goto LABEL_94;
          goto LABEL_89;
        }
        goto LABEL_294;
      }
      if ( !v125 )
        goto LABEL_87;
      if ( j__strlen("never") )
      {
        if ( !j__strlen("auto") )
          v39 = 2;
        goto LABEL_88;
      }
    }
LABEL_93:
    v39 = 1;
    v41 = v37 + 1;
    if ( v37 + 1 == v172 )
      goto LABEL_94;
LABEL_89:
    if ( !v37[1] )
      break;
LABEL_90:
    v37 = v41;
  }
  v107 = v37 + 2;
  while ( 1 )
  {
    v41 = v107;
    if ( v107 == v172 )
      break;
    if ( *v107++ )
      goto LABEL_90;
  }
LABEL_94:
  v175 = 1;
  if ( v39 )
  {
LABEL_95:
    v175 = 0;
    if ( v39 != 2 )
      goto LABEL_96;
LABEL_205:
    v175 = sub_2290CB0();
  }
LABEL_96:
  *(_BYTE *)(v6 + 2) = (4 * (v175 & 1)) | *(_BYTE *)(v6 + 2) & 0xFB;
  v43 = sub_10DCD30(v5, 0xD36u);
  v44 = 1;
  if ( !v43 )
    v44 = sub_10DCD30(v5, 0xD35u) != 0;
  *(_BYTE *)(v6 + 2) = (16 * v44) | *(_BYTE *)(v6 + 2) & 0xEF;
  sub_21B7150(v197, v5, 3381);
  sub_12FB6B0(v6 + 216, v197);
  sub_9B4A30((void ***)v197);
  if ( sub_10DCD30(v5, 0xD36u) )
  {
    sub_12FB750(v197, "expected");
    sub_A82C60(v6 + 216, (__m128i *)v197);
    if ( v197[0] != &v198 )
      operator delete(v197[0]);
  }
  v45 = *(unsigned __int8 ***)(v6 + 216);
  v173 = *(unsigned __int8 ***)(v6 + 224);
  if ( v45 != v173 )
  {
    v186 = v6;
    v46 = 1;
    v187 = v5;
    v47 = v196;
    while ( 1 )
    {
      v48 = *v45;
      v49 = (__int64)v45[1];
      v50 = &(*v45)[v49];
      if ( v49 >> 2 > 0 )
      {
        v51 = *v45;
        while ( 1 )
        {
          v52 = *v51;
          if ( (byte_2411740[2 * v52] & 0x68) == 0 && (_BYTE)v52 != 45 && (_BYTE)v52 != 95 )
            goto LABEL_108;
          v120 = v51[1];
          if ( (byte_2411740[2 * v120] & 0x68) == 0 && (_BYTE)v120 != 45 && (_BYTE)v120 != 95 )
          {
            if ( v50 != v51 + 1 )
              goto LABEL_109;
            goto LABEL_270;
          }
          v121 = v51[2];
          if ( (byte_2411740[2 * v121] & 0x68) == 0 && (_BYTE)v121 != 45 && (_BYTE)v121 != 95 )
          {
            v51 += 2;
            goto LABEL_108;
          }
          v122 = v51[3];
          if ( (byte_2411740[2 * v122] & 0x68) == 0 && (_BYTE)v122 != 45 && (_BYTE)v122 != 95 )
          {
            v51 += 3;
            goto LABEL_108;
          }
          v51 += 4;
          if ( &v48[4 * (v49 >> 2)] == v51 )
          {
            v49 = v50 - v51;
            goto LABEL_282;
          }
        }
      }
      v51 = *v45;
LABEL_282:
      if ( v49 == 2 )
        goto LABEL_362;
      if ( v49 != 3 )
      {
        if ( v49 != 1 )
          goto LABEL_270;
LABEL_285:
        v123 = *v51;
        if ( (byte_2411740[2 * v123] & 0x68) != 0 || (_BYTE)v123 == 45 || (_BYTE)v123 == 95 )
          goto LABEL_270;
        goto LABEL_108;
      }
      v167 = *v51;
      if ( (byte_2411740[2 * v167] & 0x68) != 0 || (_BYTE)v167 == 45 || (_BYTE)v167 == 95 )
        break;
LABEL_108:
      if ( v50 != v51 )
        goto LABEL_109;
LABEL_270:
      if ( (byte_2411740[2 * *v48] & 0x60) == 0 )
      {
LABEL_109:
        sub_FC70B0((__int64)v197, (__int64)v170, 0, 400);
        v53 = (unsigned __int8 *)v197[0];
        if ( !v197[0] )
        {
          v118 = v197[1];
          v119 = *((_DWORD *)v197[1] + 3744);
          if ( v119 )
          {
            v139 = (unsigned int)(v119 - 1);
            *((_DWORD *)v197[1] + 3744) = v139;
            v53 = (unsigned __int8 *)v118[v139 + 1856];
            v140 = *((unsigned int *)v53 + 134);
            *v53 = 0;
            v141 = *((_QWORD *)v53 + 66);
            *((_DWORD *)v53 + 106) = 0;
            v142 = v141 + (v140 << 6);
            while ( v141 != v142 )
            {
              while ( 1 )
              {
                v142 -= 64;
                v143 = *(void **)(v142 + 24);
                if ( v143 == (void *)(v142 + 40) )
                  break;
                operator delete(v143);
                if ( v141 == v142 )
                  goto LABEL_311;
              }
            }
LABEL_311:
            *((_DWORD *)v53 + 134) = 0;
          }
          else
          {
            v53 = (unsigned __int8 *)operator new(0x3A0u);
            *v53 = 0;
            *((_QWORD *)v53 + 12) = v53 + 112;
            *((_QWORD *)v53 + 16) = v53 + 144;
            *((_QWORD *)v53 + 20) = v53 + 176;
            *((_QWORD *)v53 + 24) = v53 + 208;
            *((_QWORD *)v53 + 28) = v53 + 240;
            *((_QWORD *)v53 + 32) = v53 + 272;
            *((_QWORD *)v53 + 36) = v53 + 304;
            *((_QWORD *)v53 + 40) = v53 + 336;
            *((_QWORD *)v53 + 44) = v53 + 368;
            *((_QWORD *)v53 + 48) = v53 + 400;
            *((_QWORD *)v53 + 52) = v53 + 432;
            *((_QWORD *)v53 + 13) = 0;
            v53[112] = 0;
            *((_QWORD *)v53 + 17) = 0;
            v53[144] = 0;
            *((_QWORD *)v53 + 21) = 0;
            v53[176] = 0;
            *((_QWORD *)v53 + 25) = 0;
            v53[208] = 0;
            *((_QWORD *)v53 + 29) = 0;
            v53[240] = 0;
            *((_QWORD *)v53 + 33) = 0;
            v53[272] = 0;
            *((_QWORD *)v53 + 37) = 0;
            v53[304] = 0;
            *((_QWORD *)v53 + 41) = 0;
            v53[336] = 0;
            *((_QWORD *)v53 + 45) = 0;
            v53[368] = 0;
            *((_QWORD *)v53 + 49) = 0;
            v53[400] = 0;
            *((_QWORD *)v53 + 53) = 0x800000000LL;
            *((_QWORD *)v53 + 66) = v53 + 544;
            *((_QWORD *)v53 + 67) = 0x600000000LL;
          }
          v197[0] = v53;
        }
        v53[*v53 + 1] = 1;
        v54 = v197[0];
        v55 = *(unsigned __int8 *)v197[0];
        *(_BYTE *)v197[0] = v55 + 1;
        v54[v55 + 2] = "-verify=";
        v56 = (unsigned __int8 *)v197[0];
        v57 = *v45;
        v176 = (size_t)v45[1];
        if ( !v197[0] )
        {
          v116 = v197[1];
          v117 = *((_DWORD *)v197[1] + 3744);
          if ( v117 )
          {
            v131 = (unsigned int)(v117 - 1);
            *((_DWORD *)v197[1] + 3744) = v131;
            v56 = (unsigned __int8 *)v116[v131 + 1856];
            v132 = *((unsigned int *)v56 + 134);
            *v56 = 0;
            v133 = *((_QWORD *)v56 + 66);
            *((_DWORD *)v56 + 106) = 0;
            v132 <<= 6;
            v134 = v133 + v132;
            if ( v133 != v133 + v132 )
            {
              v190 = v47;
              v135 = v45;
              v136 = v57;
              v137 = v133;
              do
              {
                while ( 1 )
                {
                  v134 -= 64;
                  v138 = *(void **)(v134 + 24);
                  if ( v138 == (void *)(v134 + 40) )
                    break;
                  operator delete(v138);
                  if ( v137 == v134 )
                    goto LABEL_303;
                }
              }
              while ( v137 != v134 );
LABEL_303:
              v57 = v136;
              v45 = v135;
              v47 = v190;
            }
            *((_DWORD *)v56 + 134) = 0;
          }
          else
          {
            v56 = (unsigned __int8 *)operator new(0x3A0u);
            *v56 = 0;
            *((_QWORD *)v56 + 12) = v56 + 112;
            *((_QWORD *)v56 + 16) = v56 + 144;
            *((_QWORD *)v56 + 20) = v56 + 176;
            *((_QWORD *)v56 + 24) = v56 + 208;
            *((_QWORD *)v56 + 28) = v56 + 240;
            *((_QWORD *)v56 + 32) = v56 + 272;
            *((_QWORD *)v56 + 36) = v56 + 304;
            *((_QWORD *)v56 + 40) = v56 + 336;
            *((_QWORD *)v56 + 44) = v56 + 368;
            *((_QWORD *)v56 + 48) = v56 + 400;
            *((_QWORD *)v56 + 52) = v56 + 432;
            *((_QWORD *)v56 + 13) = 0;
            v56[112] = 0;
            *((_QWORD *)v56 + 17) = 0;
            v56[144] = 0;
            *((_QWORD *)v56 + 21) = 0;
            v56[176] = 0;
            *((_QWORD *)v56 + 25) = 0;
            v56[208] = 0;
            *((_QWORD *)v56 + 29) = 0;
            v56[240] = 0;
            *((_QWORD *)v56 + 33) = 0;
            v56[272] = 0;
            *((_QWORD *)v56 + 37) = 0;
            v56[304] = 0;
            *((_QWORD *)v56 + 41) = 0;
            v56[336] = 0;
            *((_QWORD *)v56 + 45) = 0;
            v56[368] = 0;
            *((_QWORD *)v56 + 49) = 0;
            v56[400] = 0;
            *((_QWORD *)v56 + 53) = 0x800000000LL;
            *((_QWORD *)v56 + 66) = v56 + 544;
            *((_QWORD *)v56 + 67) = 0x600000000LL;
          }
          v197[0] = v56;
        }
        v56[*v56 + 1] = 0;
        n[0] = (size_t)v47;
        sub_12FAAE0(n, v57, (__int64)&v57[v176]);
        v58 = v197[0];
        v59 = *(unsigned __int8 *)v197[0];
        *(_BYTE *)v197[0] = v59 + 1;
        v60 = (unsigned __int8)v59;
        v61 = 4 * (v59 + 3);
        v62 = (char *)&v58[v61];
        v63 = (unsigned int *)v58[v61];
        if ( (unsigned int *)n[0] == v47 )
        {
          v115 = n[1];
          if ( n[1] )
          {
            if ( n[1] == 1 )
              *(_BYTE *)v63 = v196[0];
            else
              memcpy(v63, v47, n[1]);
            v115 = n[1];
            v63 = *(unsigned int **)v62;
          }
          *((_QWORD *)v62 + 1) = v115;
          *((_BYTE *)v63 + v115) = 0;
          v63 = (unsigned int *)n[0];
          goto LABEL_115;
        }
        if ( v63 == (unsigned int *)&v58[v61 + 2] )
        {
          *(_QWORD *)v62 = n[0];
          *((_QWORD *)v62 + 1) = n[1];
          *((_QWORD *)v62 + 2) = *(_QWORD *)v196;
        }
        else
        {
          v64 = v58[4 * v60 + 14];
          *(_QWORD *)v62 = n[0];
          *((_QWORD *)v62 + 1) = n[1];
          *((_QWORD *)v62 + 2) = *(_QWORD *)v196;
          if ( v63 )
          {
            n[0] = (size_t)v63;
            *(_QWORD *)v196 = v64;
LABEL_115:
            n[1] = 0;
            *(_BYTE *)v63 = 0;
            if ( (unsigned int *)n[0] != v47 )
              operator delete((void *)n[0]);
            if ( (_BYTE)v202 )
            {
              sub_FC7790(v198, (__int64 *)v197, SHIBYTE(v202));
              v198 = 0;
              v202 = 0;
            }
            if ( v200 != v201 )
              operator delete(v200);
            v65 = (void **)v197[0];
            if ( v197[0] )
            {
              v66 = v197[1];
              if ( v197[1] )
              {
                if ( v197[0] < v197[1] || v197[0] > (char *)v197[1] + 14848 )
                {
                  v67 = *((void ***)v197[0] + 66);
                  v68 = &v67[8 * (unsigned __int64)*((unsigned int *)v197[0] + 134)];
                  if ( v67 != v68 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v68 -= 8;
                        v69 = (void **)v68[3];
                        if ( v69 == v68 + 5 )
                          break;
                        operator delete(v69);
                        if ( v67 == v68 )
                          goto LABEL_127;
                      }
                    }
                    while ( v67 != v68 );
LABEL_127:
                    v68 = (void **)v65[66];
                  }
                  if ( v68 != v65 + 68 )
                    free(v68);
                  v70 = (void **)v65[52];
                  v71 = v65 + 52;
                  if ( v70 != v65 + 54 )
                    free(v70);
                  v72 = v65 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v71 -= 4;
                      if ( *v71 == v71 + 2 )
                        break;
                      operator delete(*v71);
                      if ( v71 == v72 )
                        goto LABEL_135;
                    }
                  }
                  while ( v71 != v72 );
LABEL_135:
                  operator delete(v65, 0x3A0u);
                }
                else
                {
                  v114 = *((unsigned int *)v197[1] + 3744);
                  *((_DWORD *)v197[1] + 3744) = v114 + 1;
                  v66[v114 + 1856] = v65;
                }
              }
            }
            sub_FC70B0((__int64)v197, (__int64)v170, 0, 527);
            if ( (_BYTE)v202 )
            {
              sub_FC7790(v198, (__int64 *)v197, SHIBYTE(v202));
              v198 = 0;
              v202 = 0;
            }
            if ( v200 != v201 )
              operator delete(v200);
            v73 = (void **)v197[0];
            if ( v197[0] )
            {
              v74 = v197[1];
              if ( v197[1] )
              {
                if ( v197[0] < v197[1] || v197[0] > (char *)v197[1] + 14848 )
                {
                  v75 = *((void ***)v197[0] + 66);
                  v76 = &v75[8 * (unsigned __int64)*((unsigned int *)v197[0] + 134)];
                  if ( v75 != v76 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v76 -= 8;
                        v77 = (void **)v76[3];
                        if ( v77 == v76 + 5 )
                          break;
                        operator delete(v77);
                        if ( v75 == v76 )
                          goto LABEL_146;
                      }
                    }
                    while ( v75 != v76 );
LABEL_146:
                    v76 = (void **)v73[66];
                  }
                  if ( v76 != v73 + 68 )
                    free(v76);
                  v78 = (void **)v73[52];
                  if ( v78 != v73 + 54 )
                    free(v78);
                  v79 = v73 + 48;
                  v80 = v73 + 8;
                  do
                  {
                    while ( *v79 != v79 + 2 )
                    {
                      operator delete(*v79);
                      v79 -= 4;
                      if ( v79 == v80 )
                        goto LABEL_154;
                    }
                    v79 -= 4;
                  }
                  while ( v80 != v79 );
LABEL_154:
                  operator delete(v73, 0x3A0u);
                }
                else
                {
                  v110 = *((unsigned int *)v197[1] + 3744);
                  *((_DWORD *)v197[1] + 3744) = v110 + 1;
                  v74[v110 + 1856] = v73;
                }
              }
            }
            v46 = 0;
            goto LABEL_156;
          }
        }
        n[0] = (size_t)v47;
        v63 = v47;
        goto LABEL_115;
      }
LABEL_156:
      v45 += 4;
      if ( v173 == v45 )
      {
        v6 = v186;
        v5 = v187;
        if ( v46 )
        {
          v155 = *(_QWORD *)(v186 + 224);
          v156 = *(_QWORD *)(v186 + 216);
          if ( v155 != v156 )
          {
            _BitScanReverse64(&v157, (v155 - v156) >> 5);
            sub_1337FA0(*(__m128i **)(v186 + 216), *(__m128i **)(v186 + 224), 2LL * (int)(63 - (v157 ^ 0x3F)));
            if ( v155 - v156 <= 512 )
            {
              sub_12FC0D0(v156, v155);
            }
            else
            {
              v158 = (__m128i *)(v156 + 512);
              sub_12FC0D0(v156, v156 + 512);
              if ( v155 != v156 + 512 )
              {
                do
                {
                  v159 = v158;
                  v158 += 2;
                  sub_12FBE20(v159);
                }
                while ( (__m128i *)v155 != v158 );
              }
            }
          }
        }
        else
        {
          *(_BYTE *)(v186 + 2) &= ~0x10u;
        }
        goto LABEL_159;
      }
    }
    ++v51;
LABEL_362:
    v168 = *v51;
    if ( (byte_2411740[2 * v168] & 0x68) != 0 || (_BYTE)v168 == 45 || (_BYTE)v168 == 95 )
    {
      ++v51;
      goto LABEL_285;
    }
    goto LABEL_108;
  }
LABEL_159:
  v81 = 0;
  sub_21B7150(v193, v5, 3378);
  v82 = (_BYTE **)v193[0];
  v174 = (_BYTE **)v193[1];
  if ( v193[0] == v193[1] )
    goto LABEL_191;
  v188 = v6;
  v189 = v5;
  v83 = v196;
  while ( 2 )
  {
    v84 = v82[1];
    v85 = *v82;
    if ( v84 != &byte_4 )
    {
      if ( v84 == &byte_6 )
      {
        if ( *(_DWORD *)v85 == 1634559346 && *((_WORD *)v85 + 2) == 27506 )
        {
          v109 = 2;
          goto LABEL_217;
        }
      }
      else if ( v84 == &byte_7 )
      {
        if ( *(_DWORD *)v85 == 1852989815 && *((_WORD *)v85 + 2) == 28265 && v85[6] == 103 )
        {
          v109 = 4;
          goto LABEL_217;
        }
      }
      else if ( v84 == &byte_5 && *(_DWORD *)v85 == 1869771365 && v85[4] == 114 )
      {
        v81 |= 8u;
        goto LABEL_189;
      }
LABEL_163:
      sub_FC70B0((__int64)v7, (__int64)v170, 0, 400);
      v86 = (unsigned __int8 *)v197[0];
      if ( !v197[0] )
      {
        v112 = v197[1];
        v113 = *((_DWORD *)v197[1] + 3744);
        if ( v113 )
        {
          v144 = (unsigned int)(v113 - 1);
          *((_DWORD *)v197[1] + 3744) = v144;
          v86 = (unsigned __int8 *)v112[v144 + 1856];
          v145 = *((unsigned int *)v86 + 134);
          *v86 = 0;
          v146 = *((_QWORD *)v86 + 66);
          *((_DWORD *)v86 + 106) = 0;
          v145 <<= 6;
          v147 = v146 + v145;
          if ( v146 != v146 + v145 )
          {
            v182 = (size_t)v83;
            v148 = v7;
            v149 = v82;
            v150 = v86;
            v151 = v146;
            do
            {
              while ( 1 )
              {
                v147 -= 64;
                v152 = *(void **)(v147 + 24);
                if ( v152 == (void *)(v147 + 40) )
                  break;
                operator delete(v152);
                if ( v151 == v147 )
                  goto LABEL_316;
              }
            }
            while ( v151 != v147 );
LABEL_316:
            v86 = v150;
            v82 = v149;
            v7 = v148;
            v83 = (unsigned int *)v182;
          }
          *((_DWORD *)v86 + 134) = 0;
        }
        else
        {
          v86 = (unsigned __int8 *)operator new(0x3A0u);
          *v86 = 0;
          *((_QWORD *)v86 + 12) = v86 + 112;
          *((_QWORD *)v86 + 16) = v86 + 144;
          *((_QWORD *)v86 + 20) = v86 + 176;
          *((_QWORD *)v86 + 24) = v86 + 208;
          *((_QWORD *)v86 + 28) = v86 + 240;
          *((_QWORD *)v86 + 32) = v86 + 272;
          *((_QWORD *)v86 + 36) = v86 + 304;
          *((_QWORD *)v86 + 40) = v86 + 336;
          *((_QWORD *)v86 + 44) = v86 + 368;
          *((_QWORD *)v86 + 48) = v86 + 400;
          *((_QWORD *)v86 + 52) = v86 + 432;
          *((_QWORD *)v86 + 13) = 0;
          v86[112] = 0;
          *((_QWORD *)v86 + 17) = 0;
          v86[144] = 0;
          *((_QWORD *)v86 + 21) = 0;
          v86[176] = 0;
          *((_QWORD *)v86 + 25) = 0;
          v86[208] = 0;
          *((_QWORD *)v86 + 29) = 0;
          v86[240] = 0;
          *((_QWORD *)v86 + 33) = 0;
          v86[272] = 0;
          *((_QWORD *)v86 + 37) = 0;
          v86[304] = 0;
          *((_QWORD *)v86 + 41) = 0;
          v86[336] = 0;
          *((_QWORD *)v86 + 45) = 0;
          v86[368] = 0;
          *((_QWORD *)v86 + 49) = 0;
          v86[400] = 0;
          *((_QWORD *)v86 + 53) = 0x800000000LL;
          *((_QWORD *)v86 + 66) = v86 + 544;
          *((_QWORD *)v86 + 67) = 0x600000000LL;
        }
        v197[0] = v86;
      }
      v86[*v86 + 1] = 0;
      n[0] = (size_t)v83;
      sub_12FAAE0(n, "-verify-ignore-unexpected=", (__int64)"");
      v87 = v197[0];
      v88 = *(unsigned __int8 *)v197[0];
      *(_BYTE *)v197[0] = v88 + 1;
      v89 = 4 * (v88 + 3);
      v90 = (char *)&v87[v89];
      v91 = (unsigned int *)v87[v89];
      if ( (unsigned int *)n[0] == v83 )
      {
        v111 = n[1];
        if ( n[1] )
        {
          if ( n[1] == 1 )
            *(_BYTE *)v91 = v196[0];
          else
            memcpy(v91, v83, n[1]);
          v111 = n[1];
          v91 = *(unsigned int **)v90;
        }
        *((_QWORD *)v90 + 1) = v111;
        *((_BYTE *)v91 + v111) = 0;
        v91 = (unsigned int *)n[0];
      }
      else
      {
        if ( v91 == (unsigned int *)&v87[v89 + 2] )
        {
          *(_QWORD *)v90 = n[0];
          *((_QWORD *)v90 + 1) = n[1];
          *((_QWORD *)v90 + 2) = *(_QWORD *)v196;
        }
        else
        {
          v92 = v87[4 * (int)v88 + 14];
          *(_QWORD *)v90 = n[0];
          *((_QWORD *)v90 + 1) = n[1];
          *((_QWORD *)v90 + 2) = *(_QWORD *)v196;
          if ( v91 )
          {
            n[0] = (size_t)v91;
            *(_QWORD *)v196 = v92;
            goto LABEL_168;
          }
        }
        n[0] = (size_t)v83;
        v91 = v83;
      }
LABEL_168:
      n[1] = 0;
      *(_BYTE *)v91 = 0;
      if ( (unsigned int *)n[0] != v83 )
        operator delete((void *)n[0]);
      sub_AEC220((unsigned __int8 **)v7, *v82, (signed __int64)v82[1]);
      if ( (_BYTE)v202 )
      {
        sub_FC7790(v198, (__int64 *)v7, SHIBYTE(v202));
        v198 = 0;
        v202 = 0;
      }
      if ( v200 != v201 )
        operator delete(v200);
      v93 = (void **)v197[0];
      if ( v197[0] )
      {
        v94 = v197[1];
        if ( v197[1] )
        {
          if ( v197[0] < v197[1] || v197[0] > (char *)v197[1] + 14848 )
          {
            v95 = *((void ***)v197[0] + 66);
            v96 = (unsigned __int64)*((unsigned int *)v197[0] + 134) << 6;
            v97 = (void **)((char *)v95 + v96);
            if ( v95 != (void **)((char *)v95 + v96) )
            {
              do
              {
                while ( 1 )
                {
                  v97 -= 8;
                  v98 = (void **)v97[3];
                  if ( v98 == v97 + 5 )
                    break;
                  v177 = (size_t)v95;
                  operator delete(v98);
                  v95 = (void **)v177;
                  if ( (void **)v177 == v97 )
                    goto LABEL_180;
                }
              }
              while ( v95 != v97 );
LABEL_180:
              v97 = (void **)v93[66];
            }
            if ( v97 != v93 + 68 )
              free(v97);
            v99 = (void **)v93[52];
            if ( v99 != v93 + 54 )
              free(v99);
            v100 = v93 + 48;
            v101 = v93 + 8;
            do
            {
              while ( *v100 != v100 + 2 )
              {
                v178 = (size_t)v100;
                operator delete(*v100);
                v100 = (void **)(v178 - 32);
                if ( v101 == (void **)(v178 - 32) )
                  goto LABEL_188;
              }
              v100 -= 4;
            }
            while ( v100 != v101 );
LABEL_188:
            operator delete(v93, 0x3A0u);
          }
          else
          {
            v108 = *((unsigned int *)v197[1] + 3744);
            *((_DWORD *)v197[1] + 3744) = v108 + 1;
            v94[v108 + 1856] = v93;
          }
        }
      }
      goto LABEL_189;
    }
    if ( *(_DWORD *)v85 != 1702129518 )
      goto LABEL_163;
    v109 = 1;
LABEL_217:
    v81 |= v109;
LABEL_189:
    v82 += 4;
    if ( v174 != v82 )
      continue;
    break;
  }
  v6 = v188;
  v5 = v189;
LABEL_191:
  sub_9B4A30((void ***)v193);
  if ( sub_10DCD30(v5, 0xD33u) )
    LOBYTE(v81) = 15;
  v102 = *(_DWORD *)(v6 + 32);
  *(_BYTE *)(v6 + 40) = *(_BYTE *)(v6 + 40) & 0xF | (16 * v81);
  if ( (unsigned int)(v102 - 1) > 0x63 )
  {
    sub_FC70B0((__int64)v7, (__int64)v170, 0, 618);
    sub_AE9DF0((unsigned __int8 **)v7, *(unsigned int *)(v6 + 32), 3u);
    sub_AE9DF0((unsigned __int8 **)v7, 8, 2u);
    sub_AEA040((__int64)v7);
    *(_DWORD *)(v6 + 32) = 8;
  }
  v103 = sub_10DCD30(v5, 0xD52u);
  if ( v103 )
  {
    v104 = **(char ***)(v103 + 48);
    v105 = strlen(v104);
    sub_99BDC0((_QWORD *)(v6 + 112), 0, *(_QWORD *)(v6 + 120), v104, v105);
  }
  sub_131FF10(v5, 0x10u, 0x11u, v6 + 144);
  sub_131FF10(v5, 0xCu, 0xDu, v6 + 192);
  LOBYTE(v6) = *((_DWORD *)v170 + 53) == v184;
  if ( v205 )
    sub_FCAA60(s);
  if ( LOBYTE(v203[33]) )
    sub_1300BD0(v203);
  return (unsigned int)v6;
}
