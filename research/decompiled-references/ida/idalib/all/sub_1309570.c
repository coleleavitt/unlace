char __fastcall sub_1309570(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v8; // eax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _BYTE **v21; // r15
  __int64 v22; // r14
  char *v23; // r12
  char *v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r13
  char *v28; // rax
  __m128i *v29; // rbp
  char *v30; // r13
  const __m128i *v31; // rax
  unsigned __int64 v32; // rdi
  __m128i *v33; // rdx
  __int32 v34; // ecx
  const __m128i *v35; // rcx
  void **v36; // r13
  __int64 v37; // rax
  __int8 *v38; // r13
  char *v39; // r14
  unsigned int v40; // r15d
  __m128i *v41; // r12
  char *v42; // rbp
  __int64 v43; // rdx
  __int8 *v44; // rbp
  _QWORD *v45; // rbp
  _BYTE *v46; // r14
  unsigned int v47; // r12d
  _QWORD *v48; // r15
  char *v49; // rbx
  size_t v50; // rax
  size_t v51; // r13
  _BYTE *v52; // rax
  _QWORD *v53; // r13
  __int64 v54; // rdx
  int v55; // eax
  __int64 v57; // r8
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // rdx
  __m128i *v60; // rax
  _QWORD *v61; // r8
  __int64 v62; // rdx
  size_t v63; // rax
  const __m128i *v64; // rcx
  const __m128i *v65; // rax
  unsigned __int64 v66; // rsi
  __m128i *v67; // rdx
  __int32 v68; // ecx
  const __m128i *v69; // rcx
  void **v70; // rbp
  __m128 v71; // xmm0
  int v72; // eax
  char *v73; // rsi
  int v74; // eax
  char *v75; // rsi
  __int32 *v76; // rbx
  _BYTE *v77; // rsi
  __int64 v78; // rdx
  _BYTE *v79; // rsi
  __int64 v80; // rdx
  _BYTE *v81; // rsi
  __int64 v82; // rdx
  _BYTE *v83; // rsi
  __int64 v84; // rdx
  int v85; // eax
  char *v86; // rsi
  int v87; // eax
  char *v88; // rsi
  void *v89; // rax
  void *v90; // rbp
  size_t v91; // rax
  __int64 v92; // rdx
  size_t v93; // r15
  _BYTE *v94; // rax
  const char **v95; // rax
  char *v96; // r13
  void *v97; // rax
  void *v98; // rbp
  size_t v99; // rax
  size_t v100; // r15
  _BYTE *v101; // rax
  const char **v102; // rax
  char *v103; // r13
  __int64 v104; // rdx
  int v105; // eax
  char *v106; // rsi
  int v107; // eax
  char *v108; // rsi
  _BYTE **v110; // [rsp+28h] [rbp-1C0h]
  __int64 v111; // [rsp+28h] [rbp-1C0h]
  __m128i *v112; // [rsp+28h] [rbp-1C0h]
  __int8 *v113; // [rsp+30h] [rbp-1B8h] BYREF
  void *v114; // [rsp+38h] [rbp-1B0h]
  __int64 v115; // [rsp+40h] [rbp-1A8h] BYREF
  _QWORD *v116; // [rsp+48h] [rbp-1A0h]
  __int64 *v117; // [rsp+50h] [rbp-198h]
  __int64 v118; // [rsp+58h] [rbp-190h]
  __int64 v119; // [rsp+60h] [rbp-188h]
  int v120; // [rsp+6Ch] [rbp-17Ch]
  void *v121; // [rsp+70h] [rbp-178h] BYREF
  __int64 v122; // [rsp+78h] [rbp-170h]
  void *v123[2]; // [rsp+C0h] [rbp-128h] BYREF
  _QWORD v124[8]; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v125; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v126[64]; // [rsp+120h] [rbp-C8h] BYREF
  void *v127[2]; // [rsp+160h] [rbp-88h] BYREF
  __int64 v128; // [rsp+170h] [rbp-78h] BYREF
  char *v129; // [rsp+178h] [rbp-70h]
  char v130; // [rsp+180h] [rbp-68h]

  v8 = *(_DWORD *)(a3 + 212);
  *(_BYTE *)a1 &= ~2u;
  v119 = a3;
  v120 = v8;
  if ( sub_13021E0(a2, 0x84Eu) )
    *(_BYTE *)a1 |= 2u;
  *(_BYTE *)a1 &= ~0x20u;
  if ( sub_13021E0(a2, 0x705u) )
    *(_BYTE *)a1 |= 0x20u;
  *(_BYTE *)a1 &= ~8u;
  if ( sub_13021E0(a2, 0x961u) )
    *(_BYTE *)a1 |= 8u;
  *(_BYTE *)a1 &= ~4u;
  if ( sub_13021E0(a2, 0xB01u) )
    *(_BYTE *)a1 |= 4u;
  v124[0] = 0;
  v117 = (__int64 *)&v121;
  *(_OWORD *)v123 = 0;
  sub_12FD200((unsigned __int64 **)v123, (__int64)&v121, (__int64)&v121);
  sub_C23620((__int64)&v125, (__int64 *)(a1 + 88));
  sub_C23620((__int64)v127, (__int64 *)v123);
  sub_12FB6B0(a1 + 88, v127);
  sub_9B4A30((void ***)v127);
  sub_9B4A30((void ***)&v125);
  sub_9B4A30((void ***)v123);
  sub_12FB670((__m128i *)v127, 0xB67u, a2);
  if ( (_BYTE)v129 )
  {
    sub_C23620((__int64)v117, (__int64 *)v127);
    sub_C23620((__int64)v123, (__int64 *)(a1 + 88));
    sub_C23620((__int64)&v125, v117);
    sub_12FB6B0(a1 + 88, &v125);
    sub_9B4A30((void ***)&v125);
    sub_9B4A30((void ***)v123);
    sub_9B4A30((void ***)v117);
    if ( (_BYTE)v129 )
      sub_9B4A30((void ***)v127);
  }
  *(_DWORD *)(a1 + 16) = 0;
  if ( sub_13021E0(a2, 0xB93u) )
    *(_DWORD *)(a1 + 16) = 1;
  v123[1] = nullptr;
  v9 = *(_BYTE **)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 32);
  LOBYTE(v124[0]) = 0;
  v123[0] = v124;
  v125.m128i_i64[0] = (__int64)v126;
  sub_12FAA20(&v125, v9, (__int64)&v9[v10]);
  v127[0] = &v128;
  sub_12FAA20(v127, (_BYTE *)v123[0], (__int64)v123[0] + (unsigned __int64)v123[1]);
  sub_A0AAD0(a1 + 24, v127);
  if ( v127[0] != &v128 )
    operator delete(v127[0]);
  if ( (_BYTE *)v125.m128i_i64[0] != v126 )
    operator delete((void *)v125.m128i_i64[0]);
  if ( v123[0] != v124 )
    operator delete(v123[0]);
  sub_1302A80((__m128i *)v127, 0x115u, a2);
  if ( v130 )
  {
    v121 = v117 + 2;
    sub_12FAA20(v117, (_BYTE *)v127[0], (__int64)v127[0] + (unsigned __int64)v127[1]);
    v83 = *(_BYTE **)(a1 + 24);
    v84 = (__int64)&v83[*(_QWORD *)(a1 + 32)];
    v123[0] = v124;
    sub_12FAA20(v123, v83, v84);
    v125.m128i_i64[0] = (__int64)v126;
    sub_12FAA20(&v125, v121, (__int64)v121 + v122);
    sub_A0AAD0(a1 + 24, &v125);
    if ( (_BYTE *)v125.m128i_i64[0] != v126 )
      operator delete((void *)v125.m128i_i64[0]);
    if ( v123[0] != v124 )
      operator delete(v123[0]);
    if ( v121 != v117 + 2 )
      operator delete(v121);
    if ( v130 && v127[0] != &v128 )
      operator delete(v127[0]);
  }
  v123[1] = nullptr;
  v11 = *(_BYTE **)(a1 + 136);
  v12 = *(_QWORD *)(a1 + 144);
  LOBYTE(v124[0]) = 0;
  v123[0] = v124;
  v125.m128i_i64[0] = (__int64)v126;
  sub_12FAA20(&v125, v11, (__int64)&v11[v12]);
  v127[0] = &v128;
  sub_12FAA20(v127, (_BYTE *)v123[0], (__int64)v123[0] + (unsigned __int64)v123[1]);
  sub_A0AAD0(a1 + 136, v127);
  if ( v127[0] != &v128 )
    operator delete(v127[0]);
  if ( (_BYTE *)v125.m128i_i64[0] != v126 )
    operator delete((void *)v125.m128i_i64[0]);
  if ( v123[0] != v124 )
    operator delete(v123[0]);
  sub_1302A80((__m128i *)v127, 0x114u, a2);
  if ( v130 )
  {
    v121 = v117 + 2;
    sub_12FAA20(v117, (_BYTE *)v127[0], (__int64)v127[0] + (unsigned __int64)v127[1]);
    v81 = *(_BYTE **)(a1 + 136);
    v82 = (__int64)&v81[*(_QWORD *)(a1 + 144)];
    v123[0] = v124;
    sub_12FAA20(v123, v81, v82);
    v125.m128i_i64[0] = (__int64)v126;
    sub_12FAA20(&v125, v121, (__int64)v121 + v122);
    sub_A0AAD0(a1 + 136, &v125);
    if ( (_BYTE *)v125.m128i_i64[0] != v126 )
      operator delete((void *)v125.m128i_i64[0]);
    if ( v123[0] != v124 )
      operator delete(v123[0]);
    if ( v121 != v117 + 2 )
      operator delete(v121);
    if ( v130 && v127[0] != &v128 )
      operator delete(v127[0]);
  }
  v123[1] = nullptr;
  v13 = *(_BYTE **)(a1 + 168);
  v14 = *(_QWORD *)(a1 + 176);
  LOBYTE(v124[0]) = 0;
  v123[0] = v124;
  v125.m128i_i64[0] = (__int64)v126;
  sub_12FAA20(&v125, v13, (__int64)&v13[v14]);
  v127[0] = &v128;
  sub_12FAA20(v127, (_BYTE *)v123[0], (__int64)v123[0] + (unsigned __int64)v123[1]);
  sub_A0AAD0(a1 + 168, v127);
  if ( v127[0] != &v128 )
    operator delete(v127[0]);
  if ( (_BYTE *)v125.m128i_i64[0] != v126 )
    operator delete((void *)v125.m128i_i64[0]);
  if ( v123[0] != v124 )
    operator delete(v123[0]);
  sub_1302A80((__m128i *)v127, 0xAE0u, a2);
  if ( v130 )
  {
    v121 = v117 + 2;
    sub_12FAA20(v117, (_BYTE *)v127[0], (__int64)v127[0] + (unsigned __int64)v127[1]);
    v79 = *(_BYTE **)(a1 + 168);
    v80 = (__int64)&v79[*(_QWORD *)(a1 + 176)];
    v123[0] = v124;
    sub_12FAA20(v123, v79, v80);
    v125.m128i_i64[0] = (__int64)v126;
    sub_12FAA20(&v125, v121, (__int64)v121 + v122);
    sub_A0AAD0(a1 + 168, &v125);
    if ( (_BYTE *)v125.m128i_i64[0] != v126 )
      operator delete((void *)v125.m128i_i64[0]);
    if ( v123[0] != v124 )
      operator delete(v123[0]);
    if ( v121 != v117 + 2 )
      operator delete(v121);
    if ( v130 && v127[0] != &v128 )
      operator delete(v127[0]);
  }
  *(_BYTE *)a1 &= ~1u;
  if ( sub_13021E0(a2, 0xCF3u) )
    *(_BYTE *)a1 |= 1u;
  *(_BYTE *)a1 &= ~0x10u;
  if ( sub_13021E0(a2, 0xAE2u) )
    *(_BYTE *)a1 |= 0x10u;
  v123[1] = nullptr;
  v15 = *(_BYTE **)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 64);
  LOBYTE(v124[0]) = 0;
  v123[0] = v124;
  v125.m128i_i64[0] = (__int64)v126;
  sub_12FAA20(&v125, v15, (__int64)&v15[v16]);
  v127[0] = &v128;
  sub_12FAA20(v127, (_BYTE *)v123[0], (__int64)v123[0] + (unsigned __int64)v123[1]);
  sub_A0AAD0(a1 + 56, v127);
  if ( v127[0] != &v128 )
    operator delete(v127[0]);
  if ( (_BYTE *)v125.m128i_i64[0] != v126 )
    operator delete((void *)v125.m128i_i64[0]);
  if ( v123[0] != v124 )
    operator delete(v123[0]);
  sub_1302A80((__m128i *)v127, 0x832u, a2);
  if ( v130 )
  {
    v121 = v117 + 2;
    sub_12FAA20(v117, (_BYTE *)v127[0], (__int64)v127[0] + (unsigned __int64)v127[1]);
    v77 = *(_BYTE **)(a1 + 56);
    v78 = (__int64)&v77[*(_QWORD *)(a1 + 64)];
    v123[0] = v124;
    sub_12FAA20(v123, v77, v78);
    v125.m128i_i64[0] = (__int64)v126;
    sub_12FAA20(&v125, v121, (__int64)v121 + v122);
    sub_A0AAD0(a1 + 56, &v125);
    if ( (_BYTE *)v125.m128i_i64[0] != v126 )
      operator delete((void *)v125.m128i_i64[0]);
    if ( v123[0] != v124 )
      operator delete(v123[0]);
    if ( v121 != v117 + 2 )
      operator delete(v121);
    if ( v130 && v127[0] != &v128 )
      operator delete(v127[0]);
  }
  v17 = v119;
  *(_DWORD *)(a1 + 4) = 1;
  v18 = sub_1302940(0x834u, 0x2Eu, a2, v17);
  if ( BYTE4(v18) )
    *(_DWORD *)(a1 + 4) = v18;
  v19 = v119;
  *(_DWORD *)(a1 + 8) = 0;
  v20 = sub_1302940(0x833u, 0x2Fu, a2, v19);
  if ( BYTE4(v20) )
    *(_DWORD *)(a1 + 8) = v20;
  if ( sub_10DCD30(a2, 0xCC2u) )
  {
    if ( a4 == 29 || a5 != 1 )
      *(_DWORD *)(a1 + 12) = 2;
    else
      *(_DWORD *)(a1 + 12) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0;
  }
  if ( !sub_10DCD30(a2, 0x555u) )
  {
    sub_10DC500((__int64)v127, a2, 0x6DAu);
    v89 = v127[0];
    v90 = v129;
    *(__m128i *)v123 = _mm_load_si128((const __m128i *)v127);
    v124[0] = v128;
    if ( v129 == v127[0] )
    {
LABEL_209:
      if ( (*(_BYTE *)a1 & 1) == 0 )
        goto LABEL_53;
      sub_10DC500((__int64)v127, a2, 0x6EBu);
      v97 = v127[0];
      v98 = v129;
      *(__m128i *)v123 = _mm_load_si128((const __m128i *)v127);
      v124[0] = v128;
      if ( v129 == v127[0] )
        goto LABEL_53;
      while ( 1 )
      {
        v102 = *(const char ***)(*(_QWORD *)v97 + 48LL);
        v103 = (char *)*v102;
        if ( !*v102 )
          break;
        v99 = j__strlen(*v102);
        v100 = v99;
        if ( !v99 )
          break;
        v101 = memchr(v103, 61, v99);
        if ( !v101 || v101 - v103 == -1 )
        {
          v104 = (__int64)&v103[v100];
LABEL_218:
          LODWORD(v121) = 0;
          v125.m128i_i64[0] = (__int64)v126;
          sub_12FAAE0(&v125, v103, v104);
          sub_1304350((__m128i **)(a1 + 112), &v125, (__int32 *)v117);
          if ( (_BYTE *)v125.m128i_i64[0] != v126 )
            operator delete((void *)v125.m128i_i64[0]);
        }
        v123[0] = (char *)v123[0] + 8;
        sub_10DFFA0((__int64)v123);
        v97 = v123[0];
        if ( v98 == v123[0] )
          goto LABEL_53;
      }
      v104 = (__int64)v103;
      goto LABEL_218;
    }
    while ( 1 )
    {
      v92 = 0;
      v95 = *(const char ***)(*(_QWORD *)v89 + 48LL);
      v96 = (char *)*v95;
      if ( !*v95 )
        goto LABEL_207;
      v91 = j__strlen(*v95);
      v92 = (__int64)v96;
      v93 = v91;
      if ( !v91 )
        goto LABEL_207;
      v94 = memchr(v96, 61, v91);
      if ( !v94 || v94 - v96 == -1 )
        break;
LABEL_205:
      v123[0] = (char *)v123[0] + 8;
      sub_10DFFA0((__int64)v123);
      v89 = v123[0];
      if ( v123[0] == v90 )
        goto LABEL_209;
    }
    v92 = (__int64)&v96[v93];
LABEL_207:
    LODWORD(v121) = 0;
    v125.m128i_i64[0] = (__int64)v126;
    sub_12FAAE0(&v125, v96, v92);
    sub_1304350((__m128i **)(a1 + 112), &v125, (__int32 *)v117);
    if ( (_BYTE *)v125.m128i_i64[0] != v126 )
      operator delete((void *)v125.m128i_i64[0]);
    goto LABEL_205;
  }
LABEL_53:
  sub_21B7150(v127, a2, 1643);
  v110 = (_BYTE **)v127[1];
  if ( v127[1] != v127[0] )
  {
    v21 = (_BYTE **)v127[0];
    v22 = *(_QWORD *)(a1 + 120);
    do
    {
      while ( *(_QWORD *)(a1 + 128) != v22 )
      {
        v21 += 4;
        *(_QWORD *)v22 = v22 + 16;
        sub_12FAA20((_QWORD *)v22, *(v21 - 4), (__int64)&(*(v21 - 3))[(_QWORD)*(v21 - 4)]);
        *(_DWORD *)(v22 + 32) = 1;
        v22 = *(_QWORD *)(a1 + 120) + 40LL;
        *(_QWORD *)(a1 + 120) = v22;
        if ( v110 == v21 )
          goto LABEL_74;
      }
      v23 = *(char **)(a1 + 112);
      v24 = (char *)(v22 - (_QWORD)v23);
      v25 = (v22 - (__int64)v23) >> 3;
      if ( 0xCCCCCCCCCCCCCCCDLL * v25 )
      {
        v26 = 0x999999999999999ALL * v25;
        if ( 0xCCCCCCCCCCCCCCCDLL * v25 > 0x999999999999999ALL * v25 )
        {
          v27 = -16;
        }
        else
        {
          v27 = -16;
          if ( v26 <= 0x666666666666666LL )
          {
            if ( !v26 )
            {
              v115 = 0;
              v29 = nullptr;
              v113 = (__int8 *)&qword_28;
              goto LABEL_61;
            }
            v27 = 16 * v25;
          }
        }
      }
      else
      {
        v27 = 40;
      }
      v114 = (void *)(v22 - (_QWORD)v23);
      v28 = (char *)operator new(v27);
      v24 = (char *)v114;
      v29 = (__m128i *)v28;
      v113 = v28 + 40;
      v115 = (__int64)&v28[v27];
LABEL_61:
      v30 = &v24[(_QWORD)v29];
      *(_QWORD *)&v24[(_QWORD)v29] = &v24[(_QWORD)v29 + 16];
      sub_12FAA20(&v24[(_QWORD)v29], *v21, (__int64)&v21[1][(_QWORD)*v21]);
      *((_DWORD *)v30 + 8) = 1;
      if ( v23 != (char *)v22 )
      {
        v31 = (const __m128i *)(v23 + 16);
        v32 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v22 - (_QWORD)v23 - 40) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
        v33 = v29;
        do
        {
          v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
          v35 = (const __m128i *)v31[-1].m128i_i64[0];
          if ( v31 == v35 )
          {
            v33[1] = _mm_loadu_si128(v31);
          }
          else
          {
            v33->m128i_i64[0] = (__int64)v35;
            v33[1].m128i_i64[0] = v31->m128i_i64[0];
          }
          v33 = (__m128i *)((char *)v33 + 40);
          v33[-2].m128i_i64[0] = v31[-1].m128i_i64[1];
          v34 = v31[1].m128i_i32[0];
          v31[-1].m128i_i64[0] = (__int64)v31;
          v31 = (const __m128i *)((char *)v31 + 40);
          v31[-3].m128i_i64[0] = 0;
          v31[-3].m128i_i8[8] = 0;
          v33[-1].m128i_i32[2] = v34;
        }
        while ( &v29[2].m128i_u64[5 * v32 + 1] != (unsigned __int64 *)v33 );
        v36 = (void **)v23;
        v113 = &v29[5].m128i_i8[40 * v32];
        do
        {
          while ( *v36 != v36 + 2 )
          {
            operator delete(*v36);
            v36 += 5;
            if ( v36 == (void **)v22 )
              goto LABEL_71;
          }
          v36 += 5;
        }
        while ( v36 != (void **)v22 );
      }
LABEL_71:
      if ( v23 )
        operator delete(v23);
      v114 = v29;
      v21 += 4;
      v37 = v115;
      v22 = (__int64)v113;
      *(__m128 *)(a1 + 112) = _mm_loadh_ps((const double *)&v113);
      *(_QWORD *)(a1 + 128) = v37;
    }
    while ( v110 != v21 );
  }
LABEL_74:
  sub_9B4A30((void ***)v127);
  sub_10DC500((__int64)v127, a2, 0x253u);
  v38 = (__int8 *)v127[0];
  v39 = (char *)v127[1];
  v40 = v128;
  v113 = v129;
LABEL_75:
  if ( v113 != v38 )
  {
    do
    {
      v41 = *(__m128i **)(a1 + 120);
      v42 = **(char ***)(*(_QWORD *)v38 + 48LL);
      if ( v41 != *(__m128i **)(a1 + 128) )
      {
        v43 = -1;
        v41->m128i_i64[0] = (__int64)v41[1].m128i_i64;
        if ( v42 )
          v43 = (__int64)&v42[strlen(v42)];
        sub_12FAAE0(v41, v42, v43);
        v41[2].m128i_i32[0] = 3;
        *(_QWORD *)(a1 + 120) += 40LL;
        goto LABEL_80;
      }
      v57 = (__int64)v41->m128i_i64 - *(_QWORD *)(a1 + 112);
      v114 = *(void **)(a1 + 112);
      if ( 0xCCCCCCCCCCCCCCCDLL * (v57 >> 3) )
      {
        v58 = 0x999999999999999ALL * (v57 >> 3);
        if ( 0xCCCCCCCCCCCCCCCDLL * (v57 >> 3) > v58 )
        {
          v59 = -16;
        }
        else
        {
          v59 = -16;
          if ( v58 <= 0x666666666666666LL )
          {
            if ( !v58 )
            {
              v115 = 40;
              v118 = 0;
              v112 = nullptr;
              goto LABEL_112;
            }
            v59 = 16 * (v57 >> 3);
          }
        }
      }
      else
      {
        v59 = 40;
      }
      v116 = (_QWORD *)v57;
      v115 = v59;
      v60 = (__m128i *)operator new(v59);
      v57 = (__int64)v116;
      v112 = v60;
      v118 = (__int64)v60->m128i_i64 + v115;
      v115 = (__int64)&v60[2].m128i_i64[1];
LABEL_112:
      v61 = (__int64 *)((char *)v112->m128i_i64 + v57);
      v62 = -1;
      *v61 = v61 + 2;
      if ( v42 )
      {
        v116 = v61;
        v63 = strlen(v42);
        v61 = v116;
        v62 = (__int64)&v42[v63];
      }
      v116 = v61;
      sub_12FAAE0(v61, v42, v62);
      v64 = (const __m128i *)v114;
      *((_DWORD *)v116 + 8) = 3;
      if ( v41 != v64 )
      {
        v65 = v64 + 1;
        v66 = (0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)((char *)&v41[-3].m128i_u64[1] - (char *)v64) >> 3))
            & 0x1FFFFFFFFFFFFFFFLL;
        v67 = v112;
        do
        {
          v67->m128i_i64[0] = (__int64)v67[1].m128i_i64;
          v69 = (const __m128i *)v65[-1].m128i_i64[0];
          if ( v69 == v65 )
          {
            v67[1] = _mm_loadu_si128(v65);
          }
          else
          {
            v67->m128i_i64[0] = (__int64)v69;
            v67[1].m128i_i64[0] = v65->m128i_i64[0];
          }
          v67 = (__m128i *)((char *)v67 + 40);
          v67[-2].m128i_i64[0] = v65[-1].m128i_i64[1];
          v68 = v65[1].m128i_i32[0];
          v65[-1].m128i_i64[0] = (__int64)v65;
          v65 = (const __m128i *)((char *)v65 + 40);
          v65[-3].m128i_i64[0] = 0;
          v65[-3].m128i_i8[8] = 0;
          v67[-1].m128i_i32[2] = v68;
        }
        while ( &v112[2].m128i_u64[5 * v66 + 1] != (unsigned __int64 *)v67 );
        v70 = (void **)v114;
        v115 = (__int64)&v112[5].m128i_i64[5 * v66];
        do
        {
          while ( *v70 != v70 + 2 )
          {
            operator delete(*v70);
            v70 += 5;
            if ( v70 == (void **)v41 )
              goto LABEL_123;
          }
          v70 += 5;
        }
        while ( v41 != (__m128i *)v70 );
      }
LABEL_123:
      if ( v114 )
        operator delete(v114);
      v71 = _mm_loadh_ps((const double *)&v115);
      *(_QWORD *)(a1 + 128) = v118;
      *(__m128 *)(a1 + 112) = v71;
LABEL_80:
      v44 = v38 + 8;
      if ( v38 + 8 != v39 )
      {
        if ( v40 )
        {
          while ( !*(_QWORD *)v44 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v44, v40) )
          {
            v44 += 8;
            if ( v39 == v44 )
              goto LABEL_85;
          }
          v38 = v44;
        }
        else
        {
          v38 = &v44[8 * ((unsigned __int64)(v39 - 16 - v38) >> 3) + 8];
        }
        goto LABEL_75;
      }
LABEL_85:
      v38 = v39;
    }
    while ( v113 != v39 );
  }
  sub_10DC500((__int64)v127, a2, 0x3A7u);
  v45 = v127[1];
  v111 = a1;
  v46 = v127[0];
  v47 = v128;
  v48 = v129;
  v113 = (char *)v127[1] - 16;
  while ( 1 )
  {
    if ( v48 == (_QWORD *)v46 )
      goto LABEL_103;
    v49 = **(char ***)(*(_QWORD *)v46 + 48LL);
    if ( !v49 )
      goto LABEL_99;
LABEL_89:
    v50 = strlen(v49);
    v51 = v50;
    if ( v50 )
    {
      v52 = memchr(v49, 61, v50);
      if ( !v52 || v52 - v49 == -1 )
      {
        v54 = (__int64)&v49[v51];
        goto LABEL_100;
      }
LABEL_92:
      v53 = v46 + 8;
      if ( v46 + 8 != (_BYTE *)v45 )
        goto LABEL_93;
      goto LABEL_102;
    }
    while ( 1 )
    {
LABEL_99:
      v54 = (__int64)v49;
LABEL_100:
      LODWORD(v123[0]) = 2;
      v125.m128i_i64[0] = (__int64)v126;
      sub_12FAAE0(&v125, v49, v54);
      sub_1304350((__m128i **)(v111 + 112), &v125, (__int32 *)v123);
      if ( (_BYTE *)v125.m128i_i64[0] == v126 )
        goto LABEL_92;
      operator delete((void *)v125.m128i_i64[0]);
      v53 = v46 + 8;
      if ( v46 + 8 != (_BYTE *)v45 )
        break;
LABEL_102:
      v53 = v45;
      if ( v48 == v45 )
        goto LABEL_103;
LABEL_98:
      v46 = v53;
      v49 = **(char ***)(*v53 + 48LL);
      if ( v49 )
        goto LABEL_89;
    }
LABEL_93:
    if ( !v47 )
      break;
    while ( !*v53 || !(unsigned __int8)sub_21B9810(*v53, v47) )
    {
      if ( v45 == ++v53 )
        goto LABEL_97;
    }
    v46 = v53;
  }
  v53 += ((unsigned __int64)(v113 - v46) >> 3) + 1;
LABEL_97:
  if ( v48 != v53 )
    goto LABEL_98;
LABEL_103:
  v55 = *(_DWORD *)(v111 + 4);
  if ( v55 == 1 )
  {
    if ( *(_DWORD *)(v111 + 8) )
    {
      if ( sub_10DCD30(a2, 0x834u) )
      {
        sub_FC70B0((__int64)v117, v119, 0, 459);
        v72 = *(_DWORD *)(v111 + 4);
        if ( v72 == 1 )
        {
          v73 = "textual";
        }
        else
        {
          if ( v72 != 2 )
            return sub_130AC60();
          v73 = "json";
        }
        sub_12FA2D0((unsigned __int8 **)v117, (__int64)v73);
        v74 = *(_DWORD *)(v111 + 8);
        if ( v74 == 1 )
        {
          v75 = "only-direct-system";
        }
        else if ( v74 )
        {
          if ( v74 != 2 )
            return sub_130AC60();
          v75 = "direct-per-file";
        }
        else
        {
          v75 = "none";
        }
        v76 = (__int32 *)v117;
        sub_12FA2D0((unsigned __int8 **)v117, (__int64)v75);
        sub_AEA040((__int64)v76);
      }
      else
      {
        sub_FC70B0((__int64)v123, v119, 0, 460);
        v105 = *(_DWORD *)(v111 + 8);
        if ( v105 == 1 )
        {
          v106 = "only-direct-system";
        }
        else if ( v105 )
        {
          if ( v105 != 2 )
            return sub_130AC60();
          v106 = "direct-per-file";
        }
        else
        {
          v106 = "none";
        }
        sub_12FA2D0((unsigned __int8 **)v123, (__int64)v106);
        sub_AEA040((__int64)v123);
      }
    }
    return *(_DWORD *)(v119 + 212) == v120;
  }
  if ( v55 != 2 || *(_DWORD *)(v111 + 8) )
    return *(_DWORD *)(v119 + 212) == v120;
  if ( !sub_10DCD30(a2, 0x833u) )
  {
    sub_FC70B0((__int64)v127, v119, 0, 461);
    v107 = *(_DWORD *)(v111 + 4);
    if ( v107 == 1 )
    {
      v108 = "textual";
    }
    else
    {
      if ( v107 != 2 )
        return sub_130AC60();
      v108 = "json";
    }
    sub_12FA2D0((unsigned __int8 **)v127, (__int64)v108);
    sub_AEA040((__int64)v127);
    return *(_DWORD *)(v119 + 212) == v120;
  }
  sub_FC70B0((__int64)&v125, v119, 0, 459);
  v85 = *(_DWORD *)(v111 + 4);
  if ( v85 == 1 )
  {
    v86 = "textual";
LABEL_188:
    sub_12FA2D0((unsigned __int8 **)&v125, (__int64)v86);
    v87 = *(_DWORD *)(v111 + 8);
    if ( v87 == 1 )
    {
      v88 = "only-direct-system";
    }
    else if ( v87 )
    {
      if ( v87 != 2 )
        return sub_130AC60();
      v88 = "direct-per-file";
    }
    else
    {
      v88 = "none";
    }
    sub_12FA2D0((unsigned __int8 **)&v125, (__int64)v88);
    sub_AEA040((__int64)&v125);
    return *(_DWORD *)(v119 + 212) == v120;
  }
  if ( v85 == 2 )
  {
    v86 = "json";
    goto LABEL_188;
  }
  return sub_130AC60();
}
