bool __fastcall sub_13203F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v7; // eax
  _BYTE *v8; // rsi
  __int64 v9; // rdx
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // dl
  _QWORD *v15; // rbp
  _BYTE *v16; // r14
  unsigned __int32 v17; // r12d
  __int64 v18; // rdx
  char *v19; // r13
  _QWORD *v20; // r13
  __int64 v21; // rax
  const char **v22; // rax
  const char *v23; // r12
  size_t v24; // rax
  size_t v25; // r14
  _BYTE *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  int v30; // r13d
  size_t v31; // rbp
  size_t v32; // rsi
  size_t v33; // rsi
  int v34; // eax
  __m128i si128; // xmm4
  __int64 v36; // r12
  _QWORD *v37; // r13
  __int64 v38; // rbp
  char v39; // al
  __int64 v40; // rdx
  bool v41; // zf
  const char **v42; // rax
  char *v43; // rbp
  __m128i *v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rbp
  __int64 v47; // r14
  _QWORD *v48; // rbp
  void *v49; // r14
  unsigned __int32 v50; // r12d
  __int64 v51; // r13
  __m128i *v52; // r15
  char *v53; // r14
  __int64 v54; // rdx
  _QWORD *v55; // r15
  char *v56; // rbp
  char *v57; // r14
  unsigned __int32 v58; // r12d
  char *i; // r13
  __m128i *v60; // r15
  char *v61; // r14
  __int64 v62; // rdx
  __int64 *v63; // rdi
  char *v64; // r15
  const __m128i *v65; // rsi
  __int64 v66; // r12
  __int64 v67; // r15
  void *v68; // rdi
  void *v69; // rax
  char *v70; // rax
  void *v71; // rdi
  _BYTE *v72; // rbp
  _BYTE *v73; // rsi
  char *v74; // rdx
  __int64 v75; // rsi
  _QWORD *v76; // rbp
  __int64 v77; // rax
  const char **v78; // rax
  size_t v79; // r12
  char *v80; // rbp
  char *v81; // r12
  char *v82; // rbp
  unsigned __int32 v83; // r13d
  __int64 v84; // rdx
  const char **v85; // rax
  char *v86; // rsi
  __m128i *v87; // rsi
  char *v88; // r14
  __int64 v89; // rax
  _BYTE *v91; // rsi
  __int64 v92; // rdx
  _BYTE *v93; // rsi
  __int64 v94; // rdx
  __int64 v96; // [rsp+8h] [rbp-150h]
  __int64 v97; // [rsp+10h] [rbp-148h]
  __int64 v98; // [rsp+10h] [rbp-148h]
  __int64 v99; // [rsp+10h] [rbp-148h]
  __int64 v100; // [rsp+10h] [rbp-148h]
  unsigned __int32 v101; // [rsp+18h] [rbp-140h]
  char *v102; // [rsp+18h] [rbp-140h]
  char *v103; // [rsp+30h] [rbp-128h]
  char *v104; // [rsp+30h] [rbp-128h]
  __int64 v105; // [rsp+30h] [rbp-128h]
  char *v106; // [rsp+38h] [rbp-120h]
  char *v107; // [rsp+38h] [rbp-120h]
  int v110; // [rsp+54h] [rbp-104h]
  __int64 v111; // [rsp+58h] [rbp-100h]
  void *v112; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v113; // [rsp+68h] [rbp-F0h]
  _BYTE v114[16]; // [rsp+70h] [rbp-E8h] BYREF
  void *v115[2]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v116; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v117; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v118; // [rsp+B0h] [rbp-A8h] BYREF
  void *v119[2]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v120; // [rsp+E0h] [rbp-78h] BYREF
  char v121; // [rsp+F0h] [rbp-68h]

  v7 = *(_DWORD *)(a3 + 212);
  *(_BYTE *)(a1 + 72) = 1;
  v110 = v7;
  if ( sub_13021E0(a2, 0x4C3u) )
    *(_BYTE *)(a1 + 72) = 0;
  v116.m128i_i64[0] = 0;
  *(_OWORD *)v115 = 0;
  sub_12FD200((unsigned __int64 **)v115, (__int64)&v112, (__int64)&v112);
  sub_C23620((__int64)&v117, (__int64 *)(a1 + 48));
  sub_C23620((__int64)v119, (__int64 *)v115);
  sub_12FB6B0(a1 + 48, v119);
  sub_9B4A30((void ***)v119);
  sub_9B4A30((void ***)&v117);
  sub_9B4A30((void ***)v115);
  sub_12FB670((__m128i *)v119, 0x858u, a2);
  if ( v120.m128i_i8[8] )
  {
    sub_C23620((__int64)&v112, (__int64 *)v119);
    sub_C23620((__int64)v115, (__int64 *)(a1 + 48));
    sub_C23620((__int64)&v117, (__int64 *)&v112);
    sub_12FB6B0(a1 + 48, &v117);
    sub_9B4A30((void ***)&v117);
    sub_9B4A30((void ***)v115);
    sub_9B4A30((void ***)&v112);
    if ( v120.m128i_i8[8] )
      sub_9B4A30((void ***)v119);
  }
  v8 = *(_BYTE **)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 120);
  v116.m128i_i8[0] = 0;
  v115[1] = nullptr;
  v115[0] = &v116;
  v117.m128i_i64[0] = (__int64)&v118;
  sub_12FAA20(&v117, v8, (__int64)&v8[v9]);
  v119[0] = &v120;
  sub_12FAA20(v119, (_BYTE *)v115[0], (__int64)v115[0] + (unsigned __int64)v115[1]);
  sub_A0AAD0(a1 + 112, v119);
  if ( v119[0] != &v120 )
    operator delete(v119[0]);
  if ( (__m128i *)v117.m128i_i64[0] != &v118 )
    operator delete((void *)v117.m128i_i64[0]);
  if ( v115[0] != &v116 )
    operator delete(v115[0]);
  sub_1302A80((__m128i *)v119, 0x862u, a2);
  if ( v121 )
  {
    v112 = v114;
    sub_12FAA20(&v112, (_BYTE *)v119[0], (__int64)v119[0] + (unsigned __int64)v119[1]);
    v93 = *(_BYTE **)(a1 + 112);
    v94 = (__int64)&v93[*(_QWORD *)(a1 + 120)];
    v115[0] = &v116;
    sub_12FAA20(v115, v93, v94);
    v117.m128i_i64[0] = (__int64)&v118;
    sub_12FAA20(&v117, v112, (__int64)v112 + v113);
    sub_A0AAD0(a1 + 112, &v117);
    if ( (__m128i *)v117.m128i_i64[0] != &v118 )
      operator delete((void *)v117.m128i_i64[0]);
    if ( v115[0] != &v116 )
      operator delete(v115[0]);
    if ( v112 != v114 )
      operator delete(v112);
    if ( v121 && v119[0] != &v120 )
      operator delete(v119[0]);
  }
  *(_BYTE *)(a1 + 73) = 1;
  if ( sub_13021E0(a2, 0xD1Cu) )
    *(_BYTE *)(a1 + 73) = 0;
  v10 = *(_BYTE **)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 88);
  v116.m128i_i8[0] = 0;
  v115[1] = nullptr;
  v115[0] = &v116;
  v117.m128i_i64[0] = (__int64)&v118;
  sub_12FAA20(&v117, v10, (__int64)&v10[v11]);
  v119[0] = &v120;
  sub_12FAA20(v119, (_BYTE *)v115[0], (__int64)v115[0] + (unsigned __int64)v115[1]);
  sub_A0AAD0(a1 + 80, v119);
  if ( v119[0] != &v120 )
    operator delete(v119[0]);
  if ( (__m128i *)v117.m128i_i64[0] != &v118 )
    operator delete((void *)v117.m128i_i64[0]);
  if ( v115[0] != &v116 )
    operator delete(v115[0]);
  sub_1302A80((__m128i *)v119, 0xC34u, a2);
  if ( v121 )
  {
    v112 = v114;
    sub_12FAA20(&v112, (_BYTE *)v119[0], (__int64)v119[0] + (unsigned __int64)v119[1]);
    v91 = *(_BYTE **)(a1 + 80);
    v92 = (__int64)&v91[*(_QWORD *)(a1 + 88)];
    v115[0] = &v116;
    sub_12FAA20(v115, v91, v92);
    v117.m128i_i64[0] = (__int64)&v118;
    sub_12FAA20(&v117, v112, (__int64)v112 + v113);
    sub_A0AAD0(a1 + 80, &v117);
    if ( (__m128i *)v117.m128i_i64[0] != &v118 )
      operator delete((void *)v117.m128i_i64[0]);
    if ( v115[0] != &v116 )
      operator delete(v115[0]);
    if ( v112 != v114 )
      operator delete(v112);
    if ( v121 && v119[0] != &v120 )
      operator delete(v119[0]);
  }
  *(_BYTE *)(a1 + 77) = 0;
  if ( sub_13021E0(a2, 0xC32u) )
    *(_BYTE *)(a1 + 77) = 1;
  *(_DWORD *)(a1 + 316) = 0;
  v12 = sub_1302940(0x5E1u, 0x33u, a2, a3);
  if ( BYTE4(v12) )
    *(_DWORD *)(a1 + 316) = v12;
  *(_DWORD *)(a1 + 168) = 0;
  if ( sub_13021E0(a2, 0x5BAu) )
    *(_DWORD *)(a1 + 168) = 3;
  *(_BYTE *)(a1 + 172) = 0;
  *(_BYTE *)(a1 + 172) = (*(_BYTE *)(a5 + 3) & 4) != 0;
  if ( sub_13021E0(a2, 0x19Eu) )
    *(_BYTE *)(a1 + 172) = 1;
  *(_BYTE *)(a1 + 173) = 0;
  if ( sub_13021E0(a2, 0x19Fu) )
    *(_BYTE *)(a1 + 173) = 1;
  *(_BYTE *)(a1 + 174) = 0;
  if ( sub_13021E0(a2, 0x12Eu) )
    *(_BYTE *)(a1 + 174) = 1;
  *(_BYTE *)(a1 + 75) = 0;
  if ( sub_13021E0(a2, 0x117u) )
    *(_BYTE *)(a1 + 75) = 1;
  *(_BYTE *)(a1 + 320) = 0;
  if ( sub_13021E0(a2, 0xCBBu) )
    *(_BYTE *)(a1 + 320) = 1;
  *(_BYTE *)(a1 + 321) = 0;
  if ( sub_13021E0(a2, 0x125u) )
    *(_BYTE *)(a1 + 321) = 1;
  v13 = sub_10DCD30(a2, 0xC32u);
  v14 = 1;
  if ( !v13 )
    v14 = sub_10DCD30(a2, 0xC33u) != 0;
  *(_BYTE *)(a1 + 76) = v14;
  sub_10DC500((__int64)v119, a2, 0x16Fu);
  v15 = v119[1];
  v16 = v119[0];
  v17 = v120.m128i_i32[0];
  v97 = v120.m128i_i64[1];
  v106 = (char *)v119[1] - 16;
  if ( (void *)v120.m128i_i64[1] != v119[0] )
  {
    while ( 1 )
    {
      v18 = -1;
      v19 = **(char ***)(*(_QWORD *)v16 + 48LL);
      v117.m128i_i64[0] = (__int64)&v118;
      if ( v19 )
        v18 = (__int64)&v19[strlen(v19)];
      sub_12FAAE0(&v117, v19, v18);
      sub_11A14A0(a1 + 176, &v117);
      if ( (__m128i *)v117.m128i_i64[0] != &v118 )
        operator delete((void *)v117.m128i_i64[0]);
      v20 = v16 + 8;
      if ( v16 + 8 == (_BYTE *)v15 )
        break;
      if ( v17 )
      {
        while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, v17) )
        {
          if ( ++v20 == v15 )
            goto LABEL_50;
        }
        v16 = v20;
        if ( (_QWORD *)v97 == v20 )
          goto LABEL_53;
      }
      else
      {
        v20 += ((unsigned __int64)(v106 - v16) >> 3) + 1;
LABEL_50:
        if ( (_QWORD *)v97 == v20 )
          goto LABEL_53;
        v16 = v20;
      }
    }
    v20 = v15;
    goto LABEL_50;
  }
LABEL_53:
  v21 = sub_10DCD30(a2, 0xC41u);
  if ( v21 )
  {
    v22 = *(const char ***)(v21 + 48);
    v23 = *v22;
    if ( !*v22 )
      goto LABEL_183;
    v24 = j__strlen(*v22);
    v25 = v24;
    if ( !v24 )
      goto LABEL_183;
    v26 = memchr(v23, 44, v24);
    if ( !v26 )
      goto LABEL_183;
    v27 = v26 - v23;
    v28 = v27;
    if ( v27 == -1 )
      goto LABEL_183;
    v29 = v27;
    if ( v25 <= v27 )
      v29 = v25;
    if ( (unsigned __int8)sub_2247970(v23, v29, 10, v119) )
      goto LABEL_183;
    v30 = (int)v119[0];
    if ( v119[0] != (void *)LODWORD(v119[0]) )
      goto LABEL_183;
    v31 = v28 + 1;
    v32 = 0;
    if ( v31 <= v25 )
    {
      v33 = v25;
      v25 = v31;
      v32 = v33 - v31;
    }
    if ( !(unsigned __int8)sub_2247970(&v23[v25], v32, 10, v119)
      && (v34 = (int)v119[0], v119[0] == (void *)LODWORD(v119[0])) )
    {
      *(_DWORD *)(a1 + 224) = v30;
      *(_BYTE *)(a1 + 228) = v34 != 0;
    }
    else
    {
LABEL_183:
      sub_FC70B0((__int64)v119, a3, 0, 458);
      sub_AEA040((__int64)v119);
    }
  }
  sub_10DF020((__int64)v119, a2, 0x144u, 0xD23u);
  si128 = _mm_load_si128((const __m128i *)v119);
  v36 = v120.m128i_i64[1];
  v116.m128i_i64[0] = v120.m128i_i64[0];
  *(__m128i *)v115 = si128;
LABEL_68:
  v37 = v115[0];
  while ( (_QWORD *)v36 != v37 )
  {
LABEL_70:
    v38 = *v37;
    v39 = sub_21B9810(*v37, 324);
    v40 = 0;
    v41 = v39 == 0;
    v42 = *(const char ***)(v38 + 48);
    v43 = (char *)*v42;
    if ( v41 )
    {
      if ( v43 )
        v40 = (__int64)&v43[strlen(*v42)];
      LOBYTE(v112) = 1;
      v117.m128i_i64[0] = (__int64)&v118;
      sub_12FAAE0(&v117, v43, v40);
      v44 = *(__m128i **)(a1 + 8);
      if ( v44 == *(__m128i **)(a1 + 16) )
      {
LABEL_112:
        sub_130B260((void ***)a1, v44, &v117, &v112);
        if ( (__m128i *)v117.m128i_i64[0] != &v118 )
          operator delete((void *)v117.m128i_i64[0]);
        goto LABEL_77;
      }
      v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
      v45 = v117.m128i_i64[0];
      if ( (__m128i *)v117.m128i_i64[0] == &v118 )
      {
LABEL_118:
        v44[1] = _mm_load_si128(&v118);
        goto LABEL_76;
      }
    }
    else
    {
      if ( v43 )
        v40 = (__int64)&v43[strlen(*v42)];
      LOBYTE(v112) = 0;
      v117.m128i_i64[0] = (__int64)&v118;
      sub_12FAAE0(&v117, v43, v40);
      v44 = *(__m128i **)(a1 + 8);
      if ( v44 == *(__m128i **)(a1 + 16) )
        goto LABEL_112;
      v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
      v45 = v117.m128i_i64[0];
      if ( (__m128i *)v117.m128i_i64[0] == &v118 )
        goto LABEL_118;
    }
    v44->m128i_i64[0] = v45;
    v44[1].m128i_i64[0] = v118.m128i_i64[0];
LABEL_76:
    v44->m128i_i64[1] = v117.m128i_i64[1];
    v44[2].m128i_i8[0] = (char)v112;
    *(_QWORD *)(a1 + 8) += 40LL;
LABEL_77:
    v46 = v37 + 1;
    v37 = v115[1];
    v115[0] = v46;
    if ( v46 != v115[1] )
    {
      while ( 1 )
      {
        v47 = *v46;
        if ( *v46 )
        {
          if ( v116.m128i_i32[0]
            && ((unsigned __int8)sub_21B9810(*v46, v116.m128i_u32[0])
             || v116.m128i_i32[1] && (unsigned __int8)sub_21B9810(v47, v116.m128i_u32[1])) )
          {
            goto LABEL_68;
          }
        }
        v115[0] = ++v46;
        if ( v46 == v37 )
        {
          if ( (_QWORD *)v36 != v37 )
            goto LABEL_70;
          goto LABEL_85;
        }
      }
    }
  }
LABEL_85:
  sub_10DC500((__int64)v119, a2, 0x86Cu);
  v48 = v119[1];
  v49 = v119[0];
  v50 = v120.m128i_i32[0];
  v98 = v120.m128i_i64[1];
  v103 = (char *)v119[1] - 16;
LABEL_86:
  if ( (void *)v98 != v49 )
  {
    v51 = (__int64)v49;
    do
    {
      v52 = *(__m128i **)(a1 + 32);
      v53 = **(char ***)(*(_QWORD *)v51 + 48LL);
      v117.m128i_i64[0] = (__int64)v53;
      if ( v52 == *(__m128i **)(a1 + 40) )
      {
        sub_1245DD0((void ***)(a1 + 24), v52, (char **)&v117);
      }
      else
      {
        v54 = -1;
        v52->m128i_i64[0] = (__int64)v52[1].m128i_i64;
        if ( v53 )
          v54 = (__int64)&v53[strlen(v53)];
        sub_12FAAE0(v52, v53, v54);
        *(_QWORD *)(a1 + 32) += 32LL;
      }
      v55 = (_QWORD *)(v51 + 8);
      if ( (_QWORD *)(v51 + 8) == v48 )
      {
LABEL_97:
        v51 = (__int64)v48;
      }
      else
      {
        if ( v50 )
        {
          while ( !*v55 || !(unsigned __int8)sub_21B9810(*v55, v50) )
          {
            if ( ++v55 == v48 )
              goto LABEL_97;
          }
          v49 = v55;
          goto LABEL_86;
        }
        v51 = (__int64)&v55[((unsigned __int64)&v103[-v51] >> 3) + 1];
      }
    }
    while ( v98 != v51 );
  }
  sub_10DC500((__int64)v119, a2, 0xB5u);
  v56 = (char *)v119[1];
  v57 = (char *)v119[0];
  v99 = v120.m128i_i64[1];
  v58 = v120.m128i_i32[0];
  v104 = (char *)v119[1] - 16;
LABEL_100:
  if ( (char *)v99 != v57 )
  {
    for ( i = v57; ; i = v64 )
    {
      v60 = *(__m128i **)(a1 + 152);
      v61 = **(char ***)(*(_QWORD *)i + 48LL);
      v117.m128i_i64[0] = (__int64)v61;
      if ( v60 == *(__m128i **)(a1 + 160) )
      {
        v65 = v60;
        v64 = i + 8;
        sub_1245DD0((void ***)(a1 + 144), v65, (char **)&v117);
        if ( i + 8 == v56 )
          goto LABEL_121;
      }
      else
      {
        v62 = -1;
        v60->m128i_i64[0] = (__int64)v60[1].m128i_i64;
        if ( v61 )
          v62 = (__int64)&v61[strlen(v61)];
        v63 = (__int64 *)v60;
        v64 = i + 8;
        sub_12FAAE0(v63, v61, v62);
        *(_QWORD *)(a1 + 152) += 32LL;
        if ( i + 8 == v56 )
        {
LABEL_121:
          v64 = v56;
          if ( (char *)v99 == v56 )
            break;
          continue;
        }
      }
      if ( v58 )
      {
        while ( !*(_QWORD *)v64 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v64, v58) )
        {
          v64 += 8;
          if ( v64 == v56 )
            goto LABEL_110;
        }
        v57 = v64;
        goto LABEL_100;
      }
      v64 += 8 * ((unsigned __int64)(v104 - i) >> 3) + 8;
LABEL_110:
      if ( (char *)v99 == v64 )
        break;
    }
  }
  sub_10DC500((__int64)&v117, a2, 0xC8Du);
  v66 = v117.m128i_i64[0];
  v101 = v118.m128i_i32[0];
  v100 = v117.m128i_i64[1];
  v105 = v118.m128i_i64[1];
  v111 = v117.m128i_i64[1] - 16;
  if ( v118.m128i_i64[1] != v117.m128i_i64[0] )
  {
    do
    {
      while ( 1 )
      {
        v67 = *(_QWORD *)v66;
        v68 = **(void ***)(*(_QWORD *)v66 + 48LL);
        v69 = nullptr;
        v119[0] = v68;
        if ( v68 )
          v69 = (void *)strlen((const char *)v68);
        v119[1] = v69;
        LOBYTE(v115[0]) = 59;
        v70 = (char *)sub_2246AB0(v119, v115, 1, 0);
        if ( v70 == (char *)-1LL )
          goto LABEL_150;
        v71 = v70 + 1;
        if ( v70 + 1 > v119[1] )
          goto LABEL_150;
        v72 = v119[0];
        if ( v70 > v119[1] )
          v70 = (char *)v119[1];
        v73 = (char *)v119[0] + (unsigned __int64)v71;
        v107 = v70;
        if ( v119[1] == v71 )
        {
LABEL_150:
          sub_FC70B0((__int64)v119, a3, 0, 393);
          sub_21B5FF0(v115, v67, a2);
          sub_AEC220((unsigned __int8 **)v119, (_BYTE *)v115[0], (signed __int64)v115[1]);
          if ( v115[0] != &v116 )
            operator delete(v115[0]);
          sub_AEA040((__int64)v119);
        }
        else
        {
          v74 = (char *)v119[0] + (unsigned __int64)v119[1];
          v119[0] = &v120;
          sub_12FAAE0(v119, v73, (__int64)v74);
          v115[0] = &v116;
          sub_12FAAE0(v115, v72, (__int64)&v107[(_QWORD)v72]);
          v75 = *(_QWORD *)(a1 + 248);
          if ( v75 == *(_QWORD *)(a1 + 256) )
          {
            sub_130B4F0(a1 + 240, (const __m128i *)v75, (__m128i *)v115, (__m128i *)v119);
            if ( v115[0] != &v116 )
              operator delete(v115[0]);
            if ( v119[0] != &v120 )
              operator delete(v119[0]);
          }
          else
          {
            *(_QWORD *)v75 = v75 + 16;
            if ( v115[0] == &v116 )
            {
              *(__m128i *)(v75 + 16) = _mm_load_si128(&v116);
            }
            else
            {
              *(void **)v75 = v115[0];
              *(_QWORD *)(v75 + 16) = v116.m128i_i64[0];
            }
            *(void **)(v75 + 8) = v115[1];
            v115[0] = &v116;
            v115[1] = nullptr;
            v116.m128i_i8[0] = 0;
            *(_QWORD *)(v75 + 32) = v75 + 48;
            if ( v119[0] == &v120 )
            {
              *(__m128i *)(v75 + 48) = _mm_load_si128(&v120);
            }
            else
            {
              *(void **)(v75 + 32) = v119[0];
              *(_QWORD *)(v75 + 48) = v120.m128i_i64[0];
            }
            *(void **)(v75 + 40) = v119[1];
            *(_QWORD *)(a1 + 248) += 64LL;
          }
        }
        v76 = (_QWORD *)(v66 + 8);
        if ( v100 != v66 + 8 )
          break;
LABEL_141:
        if ( (_QWORD *)v105 == v76 )
          goto LABEL_154;
        v66 = (__int64)v76;
      }
      if ( !v101 )
      {
        v76 += ((unsigned __int64)(v111 - v66) >> 3) + 1;
        goto LABEL_141;
      }
      while ( !*v76 || !(unsigned __int8)sub_21B9810(*v76, v101) )
      {
        if ( (_QWORD *)v100 == ++v76 )
          goto LABEL_141;
      }
      v66 = (__int64)v76;
    }
    while ( (_QWORD *)v105 != v76 );
  }
LABEL_154:
  v77 = sub_10DCD30(a2, 0xCCCu);
  if ( v77 )
  {
    v78 = *(const char ***)(v77 + 48);
    v79 = 0;
    v80 = (char *)*v78;
    if ( *v78 )
      v79 = j__strlen(*v78);
    if ( (unsigned __int8)sub_2247970(v80, v79, 10, v119) || v119[0] > (void *)0x3AFFF4417FLL )
    {
      sub_FC70B0((__int64)v119, a3, 0, 730);
      sub_AEC220((unsigned __int8 **)v119, v80, v79);
      sub_AE9DF0((unsigned __int8 **)v119, 0x3AFFF4417FLL, 3u);
      sub_AEA040((__int64)v119);
    }
    else
    {
      *(void **)(a1 + 328) = v119[0];
      *(_BYTE *)(a1 + 336) = 1;
    }
  }
  sub_10DC500((__int64)v119, a2, 0x14Cu);
  v81 = (char *)v119[1];
  v82 = (char *)v119[0];
  v83 = v120.m128i_i32[0];
  v96 = v120.m128i_i64[1];
  v102 = (char *)v119[1] - 16;
  while ( (char *)v96 != v82 )
  {
    while ( 1 )
    {
      v84 = 0;
      v85 = *(const char ***)(*(_QWORD *)v82 + 48LL);
      v86 = (char *)*v85;
      if ( *v85 )
      {
        v86 = (char *)*v85;
        v84 = (__int64)&v86[strlen(*v85)];
      }
      v117.m128i_i64[0] = (__int64)&v118;
      sub_12FAAE0(&v117, v86, v84);
      v87 = *(__m128i **)(a1 + 296);
      if ( v87 == *(__m128i **)(a1 + 304) )
      {
        sub_A82970((void ***)(a1 + 288), v87, &v117);
        if ( (__m128i *)v117.m128i_i64[0] != &v118 )
          operator delete((void *)v117.m128i_i64[0]);
      }
      else
      {
        v87->m128i_i64[0] = (__int64)v87[1].m128i_i64;
        if ( (__m128i *)v117.m128i_i64[0] == &v118 )
        {
          v87[1] = _mm_load_si128(&v118);
        }
        else
        {
          v87->m128i_i64[0] = v117.m128i_i64[0];
          v87[1].m128i_i64[0] = v118.m128i_i64[0];
        }
        v87->m128i_i64[1] = v117.m128i_i64[1];
        *(_QWORD *)(a1 + 296) += 32LL;
      }
      v88 = v82 + 8;
      if ( v82 + 8 != v81 )
        break;
LABEL_173:
      v82 = v81;
      if ( (char *)v96 == v81 )
        goto LABEL_174;
    }
    if ( v83 )
    {
      while ( !*(_QWORD *)v88 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v88, v83) )
      {
        v88 += 8;
        if ( v81 == v88 )
          goto LABEL_173;
      }
      v82 = v88;
    }
    else
    {
      v82 = &v88[8 * ((unsigned __int64)(v102 - v82) >> 3) + 8];
    }
  }
LABEL_174:
  v89 = 0x78F7FFF8FLL;
  if ( !_bittest64(&v89, a4) )
    *(_BYTE *)(a1 + 235) = 0;
  *(_BYTE *)(a1 + 74) = sub_21B7850(a2, 590, 1087, *(unsigned __int8 *)(a1 + 74));
  return *(_DWORD *)(a3 + 212) == v110;
}
