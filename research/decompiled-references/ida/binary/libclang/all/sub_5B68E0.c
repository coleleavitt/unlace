void __fastcall sub_5B68E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // r14
  __m128i *v5; // rax
  _BYTE *v6; // rdx
  __m128i *v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // r12
  size_t v10; // rbp
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // rbp
  size_t v14; // rbp
  size_t v15; // rdx
  int v16; // eax
  int v17; // ebx
  char *v18; // r10
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // rdi
  unsigned int i; // esi
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // r13
  _BYTE *v27; // rdi
  _BYTE *v28; // rcx
  size_t v29; // rdx
  _BYTE *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbp
  char *v33; // r12
  unsigned __int64 v34; // rax
  int v35; // r9d
  unsigned __int64 v36; // rsi
  unsigned int jj; // ecx
  unsigned __int64 v38; // rdx
  int v39; // edi
  __int64 v40; // rax
  size_t v41; // rbx
  _BYTE *v42; // rcx
  void *v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rdx
  size_t v46; // rax
  size_t v47; // rbx
  void *v48; // rax
  void *v49; // r10
  const void *v50; // r11
  size_t v51; // rdx
  int v52; // eax
  signed __int64 v53; // rax
  signed __int64 v54; // rax
  void *v55; // rdi
  __int64 *v56; // rbx
  size_t v57; // rbp
  void *v58; // rdi
  void *v59; // r12
  size_t v60; // rax
  __int64 v61; // rdx
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r10
  size_t v65; // r14
  size_t v66; // rdx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  size_t v71; // r10
  _QWORD *v72; // r11
  size_t v73; // rdx
  int v74; // eax
  __int64 v75; // r10
  __int64 v76; // rax
  __int64 v77; // rax
  size_t v78; // r11
  size_t v79; // rdx
  signed __int64 v80; // rax
  int v81; // ecx
  _DWORD *v82; // rdi
  __int64 v83; // rcx
  int v84; // ecx
  _DWORD *v85; // rdi
  __int64 v86; // rcx
  size_t v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  _DWORD *v90; // rax
  __int64 v91; // rdx
  _DWORD *v92; // rdx
  _QWORD *v93; // rbp
  char *v94; // r13
  unsigned int v95; // ecx
  int v96; // esi
  int v97; // esi
  int v98; // eax
  unsigned __int64 v99; // r11
  unsigned int j; // edi
  unsigned __int64 v101; // rdx
  int v102; // r8d
  char v103; // cl
  _QWORD *v104; // rcx
  __int64 v105; // rcx
  bool v106; // zf
  _QWORD *v107; // rdi
  _QWORD *v108; // rdi
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  _DWORD *v111; // rax
  __int64 v112; // rdx
  _DWORD *v113; // rdx
  char *v114; // r13
  _QWORD *kk; // rbp
  unsigned int v116; // edx
  int v117; // eax
  int v118; // esi
  int v119; // r10d
  unsigned __int64 v120; // r9
  unsigned int mm; // ecx
  unsigned __int64 v122; // rax
  int v123; // r8d
  char v124; // dl
  _QWORD *v125; // rdx
  __int64 v126; // rdx
  _QWORD *v127; // rdi
  _QWORD *v128; // rdi
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  _DWORD *v134; // rdx
  _DWORD *v135; // rcx
  char *v136; // rax
  _QWORD *v137; // r12
  char *v138; // rbp
  unsigned int v139; // ecx
  int v140; // esi
  int v141; // esi
  char *v142; // r11
  int v143; // eax
  char *v144; // r10
  unsigned int i1; // edi
  char *v146; // rdx
  int v147; // r8d
  char v148; // cl
  _QWORD *v149; // rcx
  __int64 v150; // rcx
  _QWORD *v151; // rdi
  _QWORD *v152; // rdi
  unsigned __int64 v153; // rax
  unsigned __int64 v154; // rax
  __int64 v155; // rax
  _DWORD *v156; // rax
  __int64 v157; // rdx
  int v158; // r8d
  _DWORD *v159; // rdx
  _QWORD *v160; // rbp
  char *v161; // r13
  unsigned int v162; // ecx
  int v163; // esi
  int v164; // esi
  char *v165; // r11
  int v166; // eax
  char *v167; // r10
  unsigned int m; // edi
  char *v169; // rdx
  int v170; // r8d
  char v171; // cl
  _QWORD *v172; // rcx
  __int64 v173; // rcx
  _QWORD *v174; // rdi
  _QWORD *v175; // rdi
  int v176; // eax
  int v177; // ecx
  int v178; // r10d
  unsigned __int64 v179; // rsi
  unsigned int nn; // eax
  int v181; // r8d
  int v182; // eax
  int v183; // ecx
  int v184; // r9d
  unsigned __int64 v185; // rsi
  unsigned int k; // eax
  int v187; // r8d
  int v188; // eax
  int v189; // eax
  int v190; // edi
  unsigned __int64 v191; // rcx
  unsigned int ii; // r8d
  int v193; // r9d
  int v194; // eax
  int v195; // eax
  int v196; // r9d
  unsigned __int64 v197; // rcx
  unsigned int i2; // r13d
  int v199; // edi
  unsigned int v200; // esi
  unsigned int v201; // ecx
  unsigned int v202; // ecx
  unsigned int v203; // edi
  unsigned int v204; // edi
  unsigned int v205; // edi
  unsigned int v206; // eax
  unsigned int v207; // r8d
  unsigned int v208; // r13d
  unsigned int v209; // eax
  void *s1; // [rsp+18h] [rbp-130h]
  _BYTE *s1c; // [rsp+18h] [rbp-130h]
  char *s1a; // [rsp+18h] [rbp-130h]
  char *s1b; // [rsp+18h] [rbp-130h]
  void *v214; // [rsp+38h] [rbp-110h]
  void *v215; // [rsp+38h] [rbp-110h]
  void *v216; // [rsp+38h] [rbp-110h]
  _QWORD *v217; // [rsp+38h] [rbp-110h]
  void *v218; // [rsp+38h] [rbp-110h]
  size_t v219; // [rsp+40h] [rbp-108h]
  size_t v220; // [rsp+40h] [rbp-108h]
  size_t v221; // [rsp+40h] [rbp-108h]
  void *v222; // [rsp+48h] [rbp-100h]
  void *s2; // [rsp+50h] [rbp-F8h] BYREF
  size_t n; // [rsp+58h] [rbp-F0h]
  __int64 v225; // [rsp+60h] [rbp-E8h] BYREF
  void *v226; // [rsp+70h] [rbp-D8h]
  size_t v227; // [rsp+78h] [rbp-D0h]
  __int64 v228; // [rsp+80h] [rbp-C8h] BYREF
  size_t v229; // [rsp+90h] [rbp-B8h]
  __int64 v230; // [rsp+98h] [rbp-B0h]
  char v231; // [rsp+A0h] [rbp-A8h]
  void *v232; // [rsp+A8h] [rbp-A0h] BYREF
  size_t v233; // [rsp+B0h] [rbp-98h]
  _QWORD src[2]; // [rsp+B8h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+C8h] [rbp-80h] BYREF
  _BYTE v236[112]; // [rsp+D8h] [rbp-70h] BYREF

  v2 = sub_25A3D10(a1, a2);
  v3 = v2 + 32;
  v4 = v2 + 32;
  v229 = 35;
  v5 = (__m128i *)std::string::_M_create();
  v226 = v5;
  v228 = 35;
  *v5 = _mm_load_si128((const __m128i *)&xmmword_3C85470);
  v6 = v226;
  v5[1] = _mm_load_si128((const __m128i *)&xmmword_3C85480);
  *(__int32 *)((char *)&v5[1].m128i_i32[3] + 3) = 1684370529;
  v227 = v229;
  v6[v229] = 0;
  v229 = 22;
  v7 = (__m128i *)std::string::_M_create();
  s2 = v7;
  v225 = 22;
  *v7 = _mm_load_si128((const __m128i *)&xmmword_3C85570);
  v8 = s2;
  *(__int64 *)((char *)&v7->m128i_i64[1] + 6) = 0x7265746E756F632DLL;
  n = v229;
  v8[v229] = 0;
  if ( !*(_QWORD *)(v2 + 40) )
    goto LABEL_42;
  v9 = *(_QWORD *)(v2 + 40);
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = v10;
      if ( n <= v10 )
        v11 = n;
      if ( v11 )
      {
        v12 = memcmp(*(const void **)(v9 + 32), s2, v11);
        if ( v12 )
          goto LABEL_11;
      }
      v13 = v10 - n;
      if ( v13 < 0x80000000LL )
        break;
LABEL_3:
      v4 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v9 )
        goto LABEL_13;
    }
    if ( v13 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
      goto LABEL_12;
    v12 = v13;
LABEL_11:
    if ( v12 >= 0 )
      goto LABEL_3;
LABEL_12:
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v9 );
LABEL_13:
  v3 = v2 + 32;
  if ( v2 + 32 == v4 )
    goto LABEL_42;
  v14 = *(_QWORD *)(v4 + 40);
  v15 = v14;
  if ( n <= v14 )
    v15 = n;
  if ( v15 )
  {
    v16 = memcmp(s2, *(const void **)(v4 + 32), v15);
    if ( v16 )
    {
LABEL_21:
      if ( v16 < 0 )
        goto LABEL_42;
      goto LABEL_22;
    }
  }
  if ( (__int64)(n - v14) > 0x7FFFFFFF )
    goto LABEL_22;
  if ( (__int64)(n - v14) >= (__int64)0xFFFFFFFF80000000LL )
  {
    v16 = n - v14;
    goto LABEL_21;
  }
LABEL_42:
  v40 = operator new(0x48u);
  v41 = n;
  v42 = s2;
  v43 = (void *)(v40 + 48);
  v44 = v40;
  *(_QWORD *)(v40 + 32) = v40 + 48;
  v229 = v41;
  if ( v41 > 0xF )
  {
    s1c = v42;
    v63 = std::string::_M_create();
    v42 = s1c;
    *(_QWORD *)(v44 + 32) = v63;
    v62 = (void *)v63;
    *(_QWORD *)(v44 + 48) = v229;
LABEL_74:
    memcpy(v62, v42, v41);
  }
  else
  {
    if ( v41 == 1 )
    {
      *(_BYTE *)(v40 + 48) = *v42;
      goto LABEL_45;
    }
    if ( v41 )
    {
      v62 = (void *)(v40 + 48);
      goto LABEL_74;
    }
  }
LABEL_45:
  v45 = *(_QWORD *)(v44 + 32);
  v46 = v229;
  *(_QWORD *)(v44 + 40) = v229;
  *(_BYTE *)(v45 + v46) = 0;
  v47 = *(_QWORD *)(v44 + 40);
  *(_DWORD *)(v44 + 64) = 0;
  v48 = *(void **)(v44 + 32);
  s1 = v48;
  if ( v3 == v4 )
  {
    if ( *(_QWORD *)(v2 + 64) )
    {
      v64 = *(_QWORD *)(v2 + 56);
      v65 = *(_QWORD *)(v64 + 40);
      v66 = v65;
      if ( v47 <= v65 )
        v66 = v47;
      if ( !v66
        || (v216 = *(void **)(v2 + 56), v67 = memcmp(*(const void **)(v64 + 32), v48, v66), v64 = (__int64)v216, !v67) )
      {
        if ( (__int64)(v65 - v47) > 0x7FFFFFFF )
          goto LABEL_92;
        if ( (__int64)(v65 - v47) < (__int64)0xFFFFFFFF80000000LL )
        {
          v4 = 0;
          goto LABEL_93;
        }
        v67 = v65 - v47;
      }
      v4 = 0;
      if ( v67 < 0 )
      {
LABEL_93:
        if ( !v64 )
          goto LABEL_58;
        v69 = v4;
        v4 = v64;
LABEL_95:
        if ( v69 != 0 || v4 == v3 )
        {
LABEL_96:
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(v2 + 64);
          goto LABEL_61;
        }
LABEL_147:
        v87 = *(_QWORD *)(v4 + 40);
        if ( v47 <= v87 )
          v87 = v47;
        if ( v87 )
          memcmp(s1, *(const void **)(v4 + 32), v87);
        goto LABEL_96;
      }
    }
LABEL_92:
    v4 = sub_36F9340(v2 + 24, s1, v47);
    v64 = v68;
    goto LABEL_93;
  }
  v49 = *(void **)(v4 + 40);
  v50 = *(const void **)(v4 + 32);
  v51 = (size_t)v49;
  if ( v47 <= (unsigned __int64)v49 )
    v51 = v47;
  if ( !v51 )
  {
    v53 = v47 - (_QWORD)v49;
    if ( (__int64)(v47 - (_QWORD)v49) <= 0x7FFFFFFF )
      goto LABEL_51;
    goto LABEL_55;
  }
  v222 = *(void **)(v4 + 40);
  v219 = v51;
  v214 = *(void **)(v4 + 32);
  v52 = memcmp(v48, v214, v51);
  v50 = v214;
  v51 = v219;
  v49 = v222;
  if ( v52 )
  {
    if ( v52 >= 0 )
    {
LABEL_54:
      v215 = v49;
      LODWORD(v54) = memcmp(v50, s1, v51);
      v49 = v215;
      if ( !(_DWORD)v54 )
        goto LABEL_55;
LABEL_57:
      if ( (int)v54 >= 0 )
        goto LABEL_58;
LABEL_114:
      if ( *(_QWORD *)(v2 + 56) == v4 )
        goto LABEL_147;
      v77 = std::_Rb_tree_increment();
      v78 = *(_QWORD *)(v77 + 40);
      v64 = v77;
      v79 = v78;
      if ( v47 <= v78 )
        v79 = v47;
      if ( v79 )
      {
        v221 = *(_QWORD *)(v77 + 40);
        v218 = (void *)v77;
        LODWORD(v80) = memcmp(s1, *(const void **)(v77 + 32), v79);
        v64 = (__int64)v218;
        v78 = v221;
        if ( (_DWORD)v80 )
          goto LABEL_121;
      }
      v80 = v47 - v78;
      if ( (__int64)(v47 - v78) > 0x7FFFFFFF )
        goto LABEL_92;
      if ( v80 >= (__int64)0xFFFFFFFF80000000LL )
      {
LABEL_121:
        if ( (int)v80 >= 0 )
          goto LABEL_92;
      }
      if ( !*(_QWORD *)(v4 + 24) )
        goto LABEL_147;
      v4 = v64;
      goto LABEL_93;
    }
    goto LABEL_98;
  }
  v53 = v47 - (_QWORD)v222;
  if ( (__int64)(v47 - (_QWORD)v222) > 0x7FFFFFFF )
    goto LABEL_54;
LABEL_51:
  if ( v53 < (__int64)0xFFFFFFFF80000000LL || (int)v53 < 0 )
  {
LABEL_98:
    if ( *(_QWORD *)(v2 + 48) == v4 )
    {
LABEL_124:
      v69 = v4;
      goto LABEL_95;
    }
    v70 = std::_Rb_tree_decrement();
    v71 = *(_QWORD *)(v70 + 40);
    v72 = (_QWORD *)v70;
    v73 = v71;
    if ( v47 <= v71 )
      v73 = v47;
    if ( v73 )
    {
      v220 = *(_QWORD *)(v70 + 40);
      v217 = (_QWORD *)v70;
      v74 = memcmp(*(const void **)(v70 + 32), s1, v73);
      v72 = v217;
      v71 = v220;
      if ( v74 )
        goto LABEL_106;
    }
    v75 = v71 - v47;
    if ( v75 <= 0x7FFFFFFF )
    {
      if ( v75 < (__int64)0xFFFFFFFF80000000LL )
        goto LABEL_107;
      v74 = v75;
LABEL_106:
      if ( v74 < 0 )
      {
LABEL_107:
        v69 = v72[3];
        if ( !v69 )
        {
          v4 = (__int64)v72;
          goto LABEL_95;
        }
        goto LABEL_124;
      }
      goto LABEL_92;
    }
    goto LABEL_92;
  }
  if ( v51 )
    goto LABEL_54;
LABEL_55:
  v54 = (signed __int64)v49 - v47;
  if ( (__int64)((__int64)v49 - v47) <= 0x7FFFFFFF )
  {
    if ( v54 >= (__int64)0xFFFFFFFF80000000LL )
      goto LABEL_57;
    goto LABEL_114;
  }
LABEL_58:
  if ( s1 != v43 )
    operator delete(s1, *(_QWORD *)(v44 + 48) + 1LL);
  v55 = (void *)v44;
  v44 = v4;
  operator delete(v55, 0x48u);
LABEL_61:
  v4 = v44;
LABEL_22:
  v17 = *(_DWORD *)(v4 + 64);
  if ( !v17 )
  {
    v56 = *(__int64 **)(v2 + 80);
    *(_DWORD *)(v4 + 64) = (((__int64)v56 - *(_QWORD *)(v2 + 72)) >> 5) + 1;
    if ( v56 == *(__int64 **)(v2 + 88) )
    {
      sub_D5D200(v2 + 72, &s2);
      goto LABEL_67;
    }
    v57 = n;
    v58 = v56 + 2;
    *v56 = (__int64)(v56 + 2);
    v59 = s2;
    v229 = v57;
    if ( v57 > 0xF )
    {
      v76 = std::string::_M_create();
      *v56 = v76;
      v58 = (void *)v76;
      v56[2] = v229;
    }
    else
    {
      if ( v57 == 1 )
      {
        *((_BYTE *)v56 + 16) = *(_BYTE *)s2;
LABEL_66:
        v60 = v229;
        v61 = *v56;
        v56[1] = v229;
        *(_BYTE *)(v61 + v60) = 0;
        *(_QWORD *)(v2 + 80) += 32LL;
LABEL_67:
        v17 = *(_DWORD *)(v4 + 64);
        goto LABEL_23;
      }
      if ( !v57 )
        goto LABEL_66;
    }
    memcpy(v58, v59, v57);
    goto LABEL_66;
  }
LABEL_23:
  LOBYTE(src[0]) = 0;
  v229 = 0;
  v18 = *(char **)v2;
  ptr[1] = (void *)0x300000000LL;
  v19 = *(unsigned int *)(v2 + 16);
  v230 = 0;
  v231 = 0;
  v232 = src;
  v233 = 0;
  ptr[0] = v236;
  if ( !(_DWORD)v19 )
    goto LABEL_152;
  v20 = (unsigned int)(v19 - 1);
  v21 = 1;
  v22 = 0;
  for ( i = v20 & (37 * v17); ; i = v20 & v200 )
  {
    v24 = (unsigned __int64)&v18[128 * (unsigned __int64)i];
    v25 = *(_DWORD *)v24;
    if ( v17 == *(_DWORD *)v24 )
      goto LABEL_26;
    if ( v25 == -1 )
      break;
    if ( v25 == -2 && !v22 )
      v22 = (unsigned __int64)&v18[128 * (unsigned __int64)i];
    v200 = v21 + i;
    ++v21;
  }
  if ( v22 )
    v24 = v22;
  v84 = *(_DWORD *)(v2 + 8) + 1;
  if ( 4 * v84 >= (unsigned int)(3 * v19) )
  {
LABEL_152:
    s1a = v18;
    v88 = (((((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v19 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v19 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v19 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v19 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1);
    v89 = ((v88 >> 16) | v88) + 1;
    if ( (unsigned int)v89 < 0x40 )
      LODWORD(v89) = 64;
    *(_DWORD *)(v2 + 16) = v89;
    v90 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v89 << 7, 8);
    v91 = *(unsigned int *)(v2 + 16);
    *(_QWORD *)v2 = v90;
    v92 = &v90[32 * v91];
    if ( s1a )
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v92 != v90 )
      {
        *v90 = -1;
        v90 += 32;
      }
      v93 = s1a + 48;
      v94 = &s1a[128 * v19];
      while ( v94 != (char *)(v93 - 6) )
      {
        v95 = *((_DWORD *)v93 - 12);
        if ( v95 <= 0xFFFFFFFD )
        {
          v96 = *(_DWORD *)(v2 + 16);
          if ( !v96 )
          {
LABEL_173:
            dword_0 = 0;
            BUG();
          }
          v97 = v96 - 1;
          v98 = 1;
          v99 = 0;
          for ( j = v97 & (37 * v95); ; j = v97 & v203 )
          {
            v101 = *(_QWORD *)v2 + ((unsigned __int64)j << 7);
            v102 = *(_DWORD *)v101;
            if ( v95 == *(_DWORD *)v101 )
              break;
            if ( v102 == -1 )
            {
              if ( v99 )
                v101 = v99;
              break;
            }
            if ( !v99 && v102 == -2 )
              v99 = *(_QWORD *)v2 + ((unsigned __int64)j << 7);
            v203 = v98 + j;
            ++v98;
          }
          *(_DWORD *)v101 = v95;
          *(_QWORD *)(v101 + 8) = *(v93 - 5);
          *(_QWORD *)(v101 + 16) = *(v93 - 4);
          v103 = *((_BYTE *)v93 - 24);
          *(_QWORD *)(v101 + 32) = v101 + 48;
          *(_BYTE *)(v101 + 24) = v103;
          v104 = (_QWORD *)*(v93 - 2);
          if ( v104 == v93 )
          {
            qmemcpy((void *)(v101 + 48), v93, (unsigned int)*(v93 - 1) + 1);
          }
          else
          {
            *(_QWORD *)(v101 + 32) = v104;
            *(_QWORD *)(v101 + 48) = *v93;
          }
          v105 = *(v93 - 1);
          *(v93 - 2) = v93;
          *(v93 - 1) = 0;
          *(_QWORD *)(v101 + 40) = v105;
          *(_BYTE *)v93 = 0;
          *(_QWORD *)(v101 + 72) = 0x300000000LL;
          v106 = *((_DWORD *)v93 + 6) == 0;
          *(_QWORD *)(v101 + 64) = v101 + 80;
          if ( !v106 )
            sub_36F91D0(v101 + 64, v93 + 2);
          v107 = (_QWORD *)v93[2];
          ++*(_DWORD *)(v2 + 8);
          if ( v107 != v93 + 4 )
            free(v107);
          v108 = (_QWORD *)*(v93 - 2);
          if ( v108 != v93 )
            operator delete(v108, *v93 + 1LL);
        }
        v93 += 16;
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v92 != v90 )
      {
        *v90 = -1;
        v90 += 32;
      }
    }
    v182 = *(_DWORD *)(v2 + 16);
    if ( v182 )
    {
      v183 = v182 - 1;
      v184 = 1;
      v185 = 0;
      for ( k = (v182 - 1) & (37 * v17); ; k = v183 & v206 )
      {
        v24 = *(_QWORD *)v2 + ((unsigned __int64)k << 7);
        v187 = *(_DWORD *)v24;
        if ( v17 == *(_DWORD *)v24 )
          break;
        if ( v187 == -1 )
        {
          if ( v185 )
            v24 = v185;
          goto LABEL_141;
        }
        if ( v187 == -2 && !v185 )
          v185 = *(_QWORD *)v2 + ((unsigned __int64)k << 7);
        v206 = v184 + k;
        ++v184;
      }
      goto LABEL_141;
    }
    goto LABEL_347;
  }
  if ( (unsigned int)v19 >> 3 >= (int)v19 - *(_DWORD *)(v2 + 12) - v84 )
  {
    s1b = v18;
    v153 = (((v20 >> 1) | v20) >> 2) | (v20 >> 1) | v20;
    v154 = (((v153 >> 4) | v153) >> 8) | (v153 >> 4) | v153;
    v155 = ((v154 >> 16) | v154) + 1;
    if ( (unsigned int)v155 < 0x40 )
      LODWORD(v155) = 64;
    *(_DWORD *)(v2 + 16) = v155;
    v156 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v155 << 7, 8);
    v157 = *(unsigned int *)(v2 + 16);
    *(_QWORD *)v2 = v156;
    v158 = 37 * v17;
    v159 = &v156[32 * v157];
    if ( s1b )
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v156 != v159 )
      {
        *v156 = -1;
        v156 += 32;
      }
      v160 = s1b + 48;
      v161 = &s1b[128 * v19];
      while ( v161 != (char *)(v160 - 6) )
      {
        v162 = *((_DWORD *)v160 - 12);
        if ( v162 <= 0xFFFFFFFD )
        {
          v163 = *(_DWORD *)(v2 + 16);
          if ( !v163 )
            goto LABEL_173;
          v164 = v163 - 1;
          v165 = *(char **)v2;
          v166 = 1;
          v167 = nullptr;
          for ( m = v164 & (37 * v162); ; m = v164 & v205 )
          {
            v169 = &v165[128 * (unsigned __int64)m];
            v170 = *(_DWORD *)v169;
            if ( v162 == *(_DWORD *)v169 )
              break;
            if ( v170 == -1 )
            {
              if ( v167 )
                v169 = v167;
              break;
            }
            if ( v170 == -2 && !v167 )
              v167 = &v165[128 * (unsigned __int64)m];
            v205 = v166 + m;
            ++v166;
          }
          *(_DWORD *)v169 = v162;
          *((_QWORD *)v169 + 1) = *(v160 - 5);
          *((_QWORD *)v169 + 2) = *(v160 - 4);
          v171 = *((_BYTE *)v160 - 24);
          *((_QWORD *)v169 + 4) = v169 + 48;
          v169[24] = v171;
          v172 = (_QWORD *)*(v160 - 2);
          if ( v172 == v160 )
          {
            qmemcpy(v169 + 48, v160, (unsigned int)*(v160 - 1) + 1);
          }
          else
          {
            *((_QWORD *)v169 + 4) = v172;
            *((_QWORD *)v169 + 6) = *v160;
          }
          v173 = *(v160 - 1);
          *(v160 - 2) = v160;
          *(v160 - 1) = 0;
          *((_QWORD *)v169 + 5) = v173;
          *(_BYTE *)v160 = 0;
          *((_QWORD *)v169 + 9) = 0x300000000LL;
          v106 = *((_DWORD *)v160 + 6) == 0;
          *((_QWORD *)v169 + 8) = v169 + 80;
          if ( !v106 )
            sub_36F91D0(v169 + 64, v160 + 2);
          v174 = (_QWORD *)v160[2];
          ++*(_DWORD *)(v2 + 8);
          if ( v174 != v160 + 4 )
            free(v174);
          v175 = (_QWORD *)*(v160 - 2);
          if ( v175 != v160 )
            operator delete(v175, *v160 + 1LL);
        }
        v160 += 16;
      }
      operator delete();
      v158 = 37 * v17;
    }
    else
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v156 != v159 )
      {
        *v156 = -1;
        v156 += 32;
      }
    }
    v188 = *(_DWORD *)(v2 + 16);
    if ( v188 )
    {
      v189 = v188 - 1;
      v190 = 1;
      v191 = 0;
      for ( ii = v189 & v158; ; ii = v189 & v207 )
      {
        v24 = *(_QWORD *)v2 + ((unsigned __int64)ii << 7);
        v193 = *(_DWORD *)v24;
        if ( v17 == *(_DWORD *)v24 )
          break;
        if ( v193 == -1 )
        {
          if ( v191 )
            v24 = v191;
          goto LABEL_141;
        }
        if ( v193 == -2 && !v191 )
          v191 = *(_QWORD *)v2 + ((unsigned __int64)ii << 7);
        v207 = v190 + ii;
        ++v190;
      }
      goto LABEL_141;
    }
    goto LABEL_347;
  }
LABEL_141:
  ++*(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)v24 != -1 )
    --*(_DWORD *)(v2 + 12);
  v85 = (_DWORD *)(v24 + 8);
  v86 = 30;
  *(_DWORD *)v24 = v17;
  while ( v86 )
  {
    *v85++ = 0;
    --v86;
  }
  *(_DWORD *)(v24 + 76) = 3;
  *(_QWORD *)(v24 + 32) = v24 + 48;
  *(_QWORD *)(v24 + 64) = v24 + 80;
LABEL_26:
  v26 = v24 + 8;
  v27 = *(_BYTE **)(v24 + 32);
  v28 = (_BYTE *)(v24 + 48);
  *(_QWORD *)(v24 + 8) = v229;
  *(_QWORD *)(v24 + 16) = v230;
  v29 = v233;
  *(_BYTE *)(v26 + 16) = v231;
  v30 = v232;
  if ( v27 == v28 )
  {
    if ( v232 != src )
    {
      *(_QWORD *)(v26 + 24) = v232;
      *(_QWORD *)(v26 + 32) = v29;
      *(_QWORD *)(v26 + 40) = src[0];
      goto LABEL_70;
    }
LABEL_77:
    if ( &v232 != (void **)(v26 + 24) )
    {
      if ( v29 )
      {
        if ( v29 == 1 )
          *v27 = src[0];
        else
          memcpy(v27, src, v29);
        v27 = *(_BYTE **)(v26 + 24);
        v29 = v233;
      }
      *(_QWORD *)(v26 + 32) = v29;
      v27[v29] = 0;
      v30 = v232;
    }
    goto LABEL_30;
  }
  if ( v232 == src )
    goto LABEL_77;
  *(_QWORD *)(v26 + 24) = v232;
  v31 = *(_QWORD *)(v26 + 40);
  *(_QWORD *)(v26 + 32) = v29;
  *(_QWORD *)(v26 + 40) = src[0];
  if ( !v27 )
  {
LABEL_70:
    v232 = src;
    v30 = src;
    goto LABEL_30;
  }
  v232 = v27;
  v30 = v27;
  src[0] = v31;
LABEL_30:
  v233 = 0;
  *v30 = 0;
  sub_36F91D0(v26 + 56, ptr);
  if ( ptr[0] != v236 )
    free(ptr[0]);
  if ( v232 != src )
    operator delete(v232, src[0] + 1LL);
  v32 = *(unsigned int *)(v2 + 16);
  v33 = *(char **)v2;
  if ( !(_DWORD)v32 )
    goto LABEL_174;
  v34 = (unsigned int)(v32 - 1);
  v35 = 1;
  v36 = 0;
  for ( jj = v34 & (37 * v17); ; jj = v34 & v201 )
  {
    v38 = (unsigned __int64)&v33[128 * (unsigned __int64)jj];
    v39 = *(_DWORD *)v38;
    if ( v17 == *(_DWORD *)v38 )
      goto LABEL_37;
    if ( v39 == -1 )
      break;
    if ( v39 == -2 && !v36 )
      v36 = (unsigned __int64)&v33[128 * (unsigned __int64)jj];
    v201 = v35 + jj;
    ++v35;
  }
  v81 = *(_DWORD *)(v2 + 8);
  if ( v36 )
    v38 = v36;
  if ( 4 * (v81 + 1) >= (unsigned int)(3 * v32) )
  {
LABEL_174:
    v109 = (((((((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v32 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v32 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v32 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v32 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1);
    v110 = ((v109 >> 16) | v109) + 1;
    if ( (unsigned int)v110 < 0x40 )
      LODWORD(v110) = 64;
    *(_DWORD *)(v2 + 16) = v110;
    v111 = (_DWORD *)sub_25CC9C0((unsigned __int64)(unsigned int)v110 << 7, 8);
    v112 = *(unsigned int *)(v2 + 16);
    *(_QWORD *)v2 = v111;
    v113 = &v111[32 * v112];
    if ( v33 )
    {
      *(_QWORD *)(v2 + 8) = 0;
      v114 = &v33[128 * v32];
      while ( v113 != v111 )
      {
        *v111 = -1;
        v111 += 32;
      }
      for ( kk = v33 + 48; v114 != (char *)(kk - 6); kk += 16 )
      {
        v116 = *((_DWORD *)kk - 12);
        if ( v116 <= 0xFFFFFFFD )
        {
          v117 = *(_DWORD *)(v2 + 16);
          if ( !v117 )
            goto LABEL_173;
          v118 = v117 - 1;
          v119 = 1;
          v120 = 0;
          for ( mm = (v117 - 1) & (37 * v116); ; mm = v118 & v202 )
          {
            v122 = *(_QWORD *)v2 + ((unsigned __int64)mm << 7);
            v123 = *(_DWORD *)v122;
            if ( v116 == *(_DWORD *)v122 )
              break;
            if ( v123 == -1 )
            {
              if ( v120 )
                v122 = v120;
              break;
            }
            if ( v123 == -2 && !v120 )
              v120 = *(_QWORD *)v2 + ((unsigned __int64)mm << 7);
            v202 = v119 + mm;
            ++v119;
          }
          *(_DWORD *)v122 = v116;
          *(_QWORD *)(v122 + 8) = *(kk - 5);
          *(_QWORD *)(v122 + 16) = *(kk - 4);
          v124 = *((_BYTE *)kk - 24);
          *(_QWORD *)(v122 + 32) = v122 + 48;
          *(_BYTE *)(v122 + 24) = v124;
          v125 = (_QWORD *)*(kk - 2);
          if ( kk == v125 )
          {
            qmemcpy((void *)(v122 + 48), kk, (unsigned int)*(kk - 1) + 1);
          }
          else
          {
            *(_QWORD *)(v122 + 32) = v125;
            *(_QWORD *)(v122 + 48) = *kk;
          }
          v126 = *(kk - 1);
          *(kk - 2) = kk;
          *(kk - 1) = 0;
          *(_QWORD *)(v122 + 40) = v126;
          *(_BYTE *)kk = 0;
          *(_QWORD *)(v122 + 72) = 0x300000000LL;
          v106 = *((_DWORD *)kk + 6) == 0;
          *(_QWORD *)(v122 + 64) = v122 + 80;
          if ( !v106 )
            sub_36F91D0(v122 + 64, kk + 2);
          v127 = (_QWORD *)kk[2];
          ++*(_DWORD *)(v2 + 8);
          if ( v127 != kk + 4 )
            free(v127);
          v128 = (_QWORD *)*(kk - 2);
          if ( kk != v128 )
            operator delete(v128, *kk + 1LL);
        }
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v113 != v111 )
      {
        *v111 = -1;
        v111 += 32;
      }
    }
    v176 = *(_DWORD *)(v2 + 16);
    if ( v176 )
    {
      v177 = v176 - 1;
      v178 = 1;
      v179 = 0;
      for ( nn = (v176 - 1) & (37 * v17); ; nn = v177 & v209 )
      {
        v38 = *(_QWORD *)v2 + ((unsigned __int64)nn << 7);
        v181 = *(_DWORD *)v38;
        if ( v17 == *(_DWORD *)v38 )
          break;
        if ( v181 == -1 )
        {
          if ( v179 )
            v38 = v179;
          goto LABEL_130;
        }
        if ( v181 == -2 && !v179 )
          v179 = *(_QWORD *)v2 + ((unsigned __int64)nn << 7);
        v209 = v178 + nn;
        ++v178;
      }
      goto LABEL_130;
    }
    goto LABEL_347;
  }
  if ( (unsigned int)v32 >> 3 >= (int)v32 - *(_DWORD *)(v2 + 12) - (v81 + 1) )
  {
    v129 = (((v34 >> 1) | v34) >> 2) | (v34 >> 1) | v34;
    v130 = (((v129 >> 4) | v129) >> 8) | (v129 >> 4) | v129;
    v131 = ((v130 >> 16) | v130) + 1;
    if ( (unsigned int)v131 < 0x40 )
      LODWORD(v131) = 64;
    *(_DWORD *)(v2 + 16) = v131;
    v132 = sub_25CC9C0((unsigned __int64)(unsigned int)v131 << 7, 8);
    v133 = *(unsigned int *)(v2 + 16);
    *(_QWORD *)v2 = v132;
    v134 = (_DWORD *)v132;
    v135 = (_DWORD *)(v132 + (v133 << 7));
    if ( v33 )
    {
      *(_QWORD *)(v2 + 8) = 0;
      v136 = &v33[128 * (unsigned __int64)(unsigned int)v32];
      while ( v135 != v134 )
      {
        *v134 = -1;
        v134 += 32;
      }
      v137 = v33 + 48;
      v138 = v136;
      while ( v138 != (char *)(v137 - 6) )
      {
        v139 = *((_DWORD *)v137 - 12);
        if ( v139 <= 0xFFFFFFFD )
        {
          v140 = *(_DWORD *)(v2 + 16);
          if ( !v140 )
            goto LABEL_173;
          v141 = v140 - 1;
          v142 = *(char **)v2;
          v143 = 1;
          v144 = nullptr;
          for ( i1 = v141 & (37 * v139); ; i1 = v141 & v204 )
          {
            v146 = &v142[128 * (unsigned __int64)i1];
            v147 = *(_DWORD *)v146;
            if ( v139 == *(_DWORD *)v146 )
              break;
            if ( v147 == -1 )
            {
              if ( v144 )
                v146 = v144;
              break;
            }
            if ( v147 == -2 && !v144 )
              v144 = &v142[128 * (unsigned __int64)i1];
            v204 = v143 + i1;
            ++v143;
          }
          *(_DWORD *)v146 = v139;
          *((_QWORD *)v146 + 1) = *(v137 - 5);
          *((_QWORD *)v146 + 2) = *(v137 - 4);
          v148 = *((_BYTE *)v137 - 24);
          *((_QWORD *)v146 + 4) = v146 + 48;
          v146[24] = v148;
          v149 = (_QWORD *)*(v137 - 2);
          if ( v137 == v149 )
          {
            qmemcpy(v146 + 48, v137, (unsigned int)*(v137 - 1) + 1);
          }
          else
          {
            *((_QWORD *)v146 + 4) = v149;
            *((_QWORD *)v146 + 6) = *v137;
          }
          v150 = *(v137 - 1);
          *(v137 - 2) = v137;
          *((_QWORD *)v146 + 5) = v150;
          *(v137 - 1) = 0;
          *(_BYTE *)v137 = 0;
          *((_QWORD *)v146 + 9) = 0x300000000LL;
          v106 = *((_DWORD *)v137 + 6) == 0;
          *((_QWORD *)v146 + 8) = v146 + 80;
          if ( !v106 )
            sub_36F91D0(v146 + 64, v137 + 2);
          v151 = (_QWORD *)v137[2];
          ++*(_DWORD *)(v2 + 8);
          if ( v151 != v137 + 4 )
            free(v151);
          v152 = (_QWORD *)*(v137 - 2);
          if ( v137 != v152 )
            operator delete(v152, *v137 + 1LL);
        }
        v137 += 16;
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v2 + 8) = 0;
      while ( v135 != v134 )
      {
        *v134 = -1;
        v134 += 32;
      }
    }
    v194 = *(_DWORD *)(v2 + 16);
    if ( v194 )
    {
      v195 = v194 - 1;
      v196 = 1;
      v197 = 0;
      for ( i2 = v195 & (37 * v17); ; i2 = v195 & v208 )
      {
        v38 = *(_QWORD *)v2 + ((unsigned __int64)i2 << 7);
        v199 = *(_DWORD *)v38;
        if ( v17 == *(_DWORD *)v38 )
          break;
        if ( v199 == -1 )
        {
          if ( v197 )
            v38 = v197;
          goto LABEL_130;
        }
        if ( v199 == -2 && !v197 )
          v197 = *(_QWORD *)v2 + ((unsigned __int64)i2 << 7);
        v208 = v196 + i2;
        ++v196;
      }
      goto LABEL_130;
    }
LABEL_347:
    ++*(_DWORD *)(v2 + 8);
    BUG();
  }
LABEL_130:
  ++*(_DWORD *)(v2 + 8);
  if ( *(_DWORD *)v38 != -1 )
    --*(_DWORD *)(v2 + 12);
  v82 = (_DWORD *)(v38 + 8);
  v83 = 30;
  *(_DWORD *)v38 = v17;
  while ( v83 )
  {
    *v82++ = 0;
    --v83;
  }
  *(_DWORD *)(v38 + 76) = 3;
  *(_QWORD *)(v38 + 32) = v38 + 48;
  *(_QWORD *)(v38 + 64) = v38 + 80;
LABEL_37:
  std::string::_M_assign();
  if ( s2 != &v225 )
    operator delete(s2, v225 + 1);
  if ( v226 != &v228 )
    operator delete(v226, v228 + 1);
}

