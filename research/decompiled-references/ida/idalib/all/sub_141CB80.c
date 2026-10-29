__int64 __fastcall sub_141CB80(__int64 a1, __int64 a2, unsigned int *a3, char a4)
{
  __int16 v7; // r15
  __m128 v8; // xmm0
  unsigned __int16 v9; // r14
  char v10; // al
  __int64 v11; // r14
  __int16 v12; // ax
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  __m128i *v15; // r15
  size_t v16; // r14
  _QWORD *v17; // r14
  __m128i si128; // xmm1
  __m128i v19; // xmm2
  __int64 v20; // rax
  __int32 v21; // eax
  unsigned __int16 v23; // r15
  char v24; // al
  __int64 v25; // r15
  unsigned int *v26; // rdx
  unsigned int *v27; // rax
  void *v28; // rsi
  __int64 v29; // rcx
  __m128i v30; // xmm3
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  int v34; // r14d
  __int64 v35; // rdx
  __m128i *v36; // rsi
  unsigned __int8 **v37; // r15
  __m128i *v38; // rsi
  unsigned __int8 **v39; // r15
  __m128i *v40; // rsi
  unsigned __int8 **v41; // r15
  int v42; // r14d
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // r14
  unsigned int v46; // eax
  __m128i *v47; // rsi
  unsigned __int8 **v48; // r15
  __m128i *v49; // rsi
  unsigned __int8 **v50; // r15
  _QWORD *v51; // rdi
  __int64 v52; // r14
  unsigned int v53; // eax
  unsigned int v54; // eax
  int **v55; // [rsp+8h] [rbp-330h] BYREF
  unsigned __int8 **p_s1; // [rsp+10h] [rbp-328h]
  __int16 v57; // [rsp+18h] [rbp-320h]
  char v58; // [rsp+1Bh] [rbp-31Dh]
  unsigned int v59; // [rsp+1Ch] [rbp-31Ch]
  __m128i *v60; // [rsp+20h] [rbp-318h]
  void **v61; // [rsp+28h] [rbp-310h]
  char v62; // [rsp+36h] [rbp-302h] BYREF
  char v63; // [rsp+37h] [rbp-301h] BYREF
  __int64 v64; // [rsp+38h] [rbp-300h] BYREF
  __m128 v65; // [rsp+40h] [rbp-2F8h] BYREF
  __m128 v66; // [rsp+50h] [rbp-2E8h] BYREF
  void *v67[2]; // [rsp+60h] [rbp-2D8h] BYREF
  _BYTE v68[16]; // [rsp+70h] [rbp-2C8h] BYREF
  int **v69[6]; // [rsp+80h] [rbp-2B8h] BYREF
  void *v70; // [rsp+B0h] [rbp-288h] BYREF
  size_t v71; // [rsp+B8h] [rbp-280h]
  __m128i v72; // [rsp+C0h] [rbp-278h] BYREF
  char v73; // [rsp+D0h] [rbp-268h]
  __int64 v74; // [rsp+E0h] [rbp-258h] BYREF
  size_t v75; // [rsp+E8h] [rbp-250h]
  __m128i v76[2]; // [rsp+F0h] [rbp-248h] BYREF
  void *v77; // [rsp+110h] [rbp-228h] BYREF
  void *ptr[2]; // [rsp+118h] [rbp-220h] BYREF
  _WORD v79[28]; // [rsp+128h] [rbp-210h] BYREF
  void *s1; // [rsp+160h] [rbp-1D8h] BYREF
  size_t n; // [rsp+168h] [rbp-1D0h]
  __m128i v82; // [rsp+170h] [rbp-1C8h] BYREF
  __int16 v83; // [rsp+180h] [rbp-1B8h]
  __m128i v84[22]; // [rsp+1D0h] [rbp-168h] BYREF

  v55 = (int **)a2;
  v58 = a4;
  v7 = a4 == 0 ? 2 : 23;
  memset(v84, 0, 0x128u);
  v69[1] = (int **)a3;
  v8 = _mm_loadh_ps((const double *)&v55);
  v69[0] = (int **)&v66;
  v55 = (int **)&v66;
  v69[3] = (int **)&v62;
  v69[2] = (int **)a2;
  v69[4] = (int **)&v65;
  v65 = v8;
  v66 = v8;
  do
  {
    sub_14634E0(a2, a3);
    v9 = *((_WORD *)a3 + 8);
  }
  while ( v9 == 4 );
  if ( v9 == 2 || v7 == v9 )
  {
LABEL_57:
    si128 = _mm_load_si128(v84);
    v19 = _mm_loadu_si128((const __m128i *)&v84[1].m128i_u64[1]);
    *(_QWORD *)(a1 + 16) = v84[1].m128i_i64[0];
    v20 = v84[2].m128i_i64[1];
    *(__m128i *)a1 = si128;
    *(_QWORD *)(a1 + 40) = v20;
    *(__m128i *)(a1 + 24) = v19;
    sub_141B9A0(a1 + 48, (__int64)v84[3].m128i_i64);
    sub_141B8E0(a1 + 128, (__int64)v84[8].m128i_i64);
    sub_141B940(a1 + 208, (__int64)v84[13].m128i_i64);
    v21 = v84[18].m128i_i32[0];
    *(_BYTE *)(a1 + 296) = 1;
    *(_DWORD *)(a1 + 288) = v21;
    goto LABEL_58;
  }
  v57 = v7;
  p_s1 = (unsigned __int8 **)&s1;
  v60 = &v82;
  while ( *(_WORD *)(v66.m128_u64[0] + 16) == 5 )
  {
    v10 = sub_141A630(v9);
    if ( v9 == 1 || v10 )
      v11 = 0;
    else
      v11 = *((_QWORD *)a3 + 1);
    v59 = *a3;
    do
    {
      sub_14634E0(a2, a3);
      v12 = *((_WORD *)a3 + 8);
    }
    while ( v12 == 4 );
    if ( v12 == 72 )
    {
      do
        sub_14634E0(a2, a3);
      while ( *((_WORD *)a3 + 8) == 4 );
      if ( !(unsigned __int8)sub_141A8D0(v55, 5u) )
        goto LABEL_78;
      v23 = *((_WORD *)a3 + 8);
      v24 = sub_141A630(v23);
      if ( v23 == 1 || v24 )
        v25 = 0;
      else
        v25 = *((_QWORD *)a3 + 1);
      do
        sub_14634E0(a2, a3);
      while ( *((_WORD *)a3 + 8) == 4 );
      v26 = *(unsigned int **)(v11 + 16);
      v27 = *(unsigned int **)(v25 + 16);
      v28 = (void *)*v26;
      v29 = *v27;
      v77 = v26 + 4;
      ptr[0] = v28;
      v83 = 1282;
      ptr[1] = "::";
      v82.m128i_i64[0] = (__int64)(v27 + 4);
      v79[4] = 773;
      s1 = &v77;
      n = 0;
      v82.m128i_i64[1] = v29;
      sub_2253560(&v74, p_s1);
      v15 = (__m128i *)v74;
      v61 = &v70;
      v70 = &v72;
      if ( (__m128i *)v74 == v76 )
      {
        v15 = &v72;
        v72 = _mm_load_si128(v76);
      }
      else
      {
        v70 = (void *)v74;
        v72.m128i_i64[0] = v76[0].m128i_i64[0];
      }
      v16 = v75;
      v73 = 1;
      v71 = v75;
    }
    else
    {
      v13 = (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL);
      if ( *(_QWORD *)(v11 + 16) == -16 )
      {
        v82.m128i_i8[0] = 0;
        v16 = 0;
        v30 = _mm_load_si128(&v82);
        v15 = &v72;
        v61 = &v70;
        v70 = &v72;
        v72 = v30;
        v71 = 0;
        v73 = 1;
        goto LABEL_18;
      }
      v14 = (__int64)&v13[(unsigned int)**(_QWORD **)(v11 + 16)];
      s1 = v60;
      sub_141A0D0(p_s1, v13, v14);
      v15 = (__m128i *)s1;
      v16 = n;
      v61 = &v70;
      v70 = &v72;
      if ( s1 == v60 )
      {
        v15 = &v72;
        v72 = _mm_load_si128(&v82);
      }
      else
      {
        v70 = s1;
        v72.m128i_i64[0] = v82.m128i_i64[0];
      }
      v71 = n;
      v73 = 1;
    }
    if ( v16 > 4 )
    {
      v31 = j__strlen("__");
      if ( v16 >= v31 && (!v31 || !memcmp(v15, "__", v31)) )
      {
        v32 = j__strlen("__");
        if ( v16 >= v32 && (!v32 || !memcmp(&v15->m128i_i8[v16 - v32], "__", v32)) )
        {
          v33 = v16 - 4;
          v16 -= 2LL;
          if ( v33 <= v16 )
            v16 = v33;
          v15 = (__m128i *)((char *)v15 + 2);
        }
      }
    }
LABEL_18:
    if ( j__strlen("limit") == v16 )
    {
      if ( !v16 || !memcmp(v15, "limit", v16) )
      {
        if ( v84[1].m128i_i8[0] )
        {
          sub_FC70B0((__int64)p_s1, *(_QWORD *)(a2 + 48), *a3, 1114);
          v36 = v15;
          v37 = p_s1;
          sub_AEC220(p_s1, v36, v16);
          sub_AEA040((__int64)v37);
        }
        if ( !(unsigned __int8)sub_141A8D0(v55, 0x16u) )
          goto LABEL_102;
        v64 = 0;
        sub_1435600(&v74, a2, &v64, a3, &v63, 0);
        if ( !v76[0].m128i_i8[0] || !(unsigned __int8)sub_141A8D0(v55, 0x17u) )
          goto LABEL_119;
        do
          sub_14634E0(a2, a3);
        while ( *((_WORD *)a3 + 8) == 4 );
        if ( v63 )
        {
LABEL_158:
          sub_FC70B0((__int64)&s1, *(_QWORD *)(a2 + 48), *a3, 1029);
          sub_AEA040((__int64)&s1);
          sub_98E4B0((__int64)&v74);
          goto LABEL_102;
        }
        if ( !v76[0].m128i_i8[0] )
          goto LABEL_119;
        v34 = v75;
        if ( BYTE4(v75) )
        {
          if ( (unsigned int)v75 > 0x40 )
            goto LABEL_166;
        }
        else
        {
          v35 = 1LL << ((unsigned __int8)v75 - 1);
          if ( (unsigned int)v75 > 0x40 )
          {
            if ( (v35 & *(_QWORD *)(v74 + 8LL * ((unsigned int)(v75 - 1) >> 6))) != 0 )
              goto LABEL_133;
LABEL_166:
            v54 = v34 - sub_2206780(&v74);
            v52 = -1;
            if ( v54 <= 0x40 )
              v52 = *(_QWORD *)v74;
LABEL_163:
            sub_98E4B0((__int64)&v74);
            v53 = *a3;
            if ( !v84[1].m128i_i8[0] )
              v84[1].m128i_i8[0] = 1;
            v84[0].m128i_i64[0] = __PAIR64__(v53, v59);
            v84[0].m128i_i64[1] = v52;
            goto LABEL_52;
          }
          if ( (v35 & v74) != 0 )
          {
LABEL_133:
            sub_FC70B0((__int64)&s1, *(_QWORD *)(a2 + 48), *a3, 57);
            v77 = v79;
            *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
            sub_220BA90((unsigned int)&v74, (unsigned int)&v77, 10, BYTE4(v75) ^ 1, 0, 1, 0);
            v67[0] = v68;
            sub_141A0D0(v67, v77, (__int64)v77 + (unsigned __int64)ptr[0]);
            if ( v77 != v79 )
              free(v77);
            sub_AEC220((unsigned __int8 **)&s1, (_BYTE *)v67[0], (signed __int64)v67[1]);
            sub_AE9DF0((unsigned __int8 **)&s1, 0, 2u);
            if ( v67[0] != v68 )
              operator delete(v67[0]);
            sub_AEA040((__int64)&s1);
LABEL_119:
            sub_98E4B0((__int64)&v74);
            goto LABEL_102;
          }
        }
        v52 = v74;
        goto LABEL_163;
      }
      if ( v16 != j__strlen("clang::offset") )
      {
        if ( j__strlen("prefix") != v16 )
          goto LABEL_23;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    if ( j__strlen("clang::offset") == v16 )
    {
      if ( !v16 )
        goto LABEL_115;
LABEL_92:
      if ( !memcmp(v15, "clang::offset", v16) )
      {
LABEL_115:
        if ( v84[2].m128i_i8[8] )
        {
          sub_FC70B0((__int64)p_s1, *(_QWORD *)(a2 + 48), *a3, 1114);
          v38 = v15;
          v39 = p_s1;
          sub_AEC220(p_s1, v38, v16);
          sub_AEA040((__int64)v39);
        }
        if ( !(unsigned __int8)sub_141A8D0(v55, 0x16u) )
          goto LABEL_102;
        v64 = 0;
        sub_1435600(&v74, a2, &v64, a3, &v63, 0);
        if ( !v76[0].m128i_i8[0] || !(unsigned __int8)sub_141A8D0(v55, 0x17u) )
          goto LABEL_119;
        do
          sub_14634E0(a2, a3);
        while ( *((_WORD *)a3 + 8) == 4 );
        if ( v63 )
          goto LABEL_158;
        if ( !v76[0].m128i_i8[0] )
          goto LABEL_119;
        v42 = v75;
        if ( BYTE4(v75) )
        {
          if ( (unsigned int)v75 > 0x40 )
            goto LABEL_146;
        }
        else
        {
          v43 = 1LL << ((unsigned __int8)v75 - 1);
          if ( (unsigned int)v75 > 0x40 )
          {
            if ( (v43 & *(_QWORD *)(v74 + 8LL * ((unsigned int)(v75 - 1) >> 6))) != 0 )
              goto LABEL_133;
LABEL_146:
            v44 = v42 - sub_2206780(&v74);
            v45 = -1;
            if ( v44 <= 0x40 )
              v45 = *(_QWORD *)v74;
LABEL_148:
            sub_98E4B0((__int64)&v74);
            v46 = *a3;
            v84[2].m128i_i64[0] = v45;
            if ( !v84[2].m128i_i8[8] )
              v84[2].m128i_i8[8] = 1;
            v84[1].m128i_i64[1] = __PAIR64__(v46, v59);
            goto LABEL_52;
          }
          if ( (v43 & v74) != 0 )
            goto LABEL_133;
        }
        v45 = v74;
        goto LABEL_148;
      }
      if ( v16 != j__strlen("prefix") )
      {
LABEL_23:
        if ( j__strlen("suffix") != v16 )
          goto LABEL_96;
        if ( !v16 )
          goto LABEL_81;
        goto LABEL_25;
      }
      goto LABEL_94;
    }
    if ( j__strlen("prefix") != v16 )
      goto LABEL_23;
    if ( !v16 )
      goto LABEL_39;
LABEL_94:
    if ( !memcmp(v15, "prefix", v16) )
    {
LABEL_39:
      if ( v84[12].m128i_i8[8] )
      {
        sub_FC70B0((__int64)p_s1, *(_QWORD *)(a2 + 48), *a3, 1114);
        v47 = v15;
        v48 = p_s1;
        sub_AEC220(p_s1, v47, v16);
        sub_AEA040((__int64)v48);
      }
      n = 0x400000000LL;
      v17 = p_s1 + 2;
      s1 = p_s1 + 2;
      if ( !(unsigned __int8)sub_141C790(v69, (__int64)p_s1) )
      {
LABEL_159:
        v51 = s1;
        *(_BYTE *)(a1 + 296) = 0;
        if ( v51 != v17 )
          goto LABEL_160;
        goto LABEL_103;
      }
      HIDWORD(v77) = *a3;
      ptr[0] = v79;
      LODWORD(v77) = v59;
      ptr[1] = (void *)0x200000000LL;
      if ( (_DWORD)n )
        sub_14178A0((char ***)ptr, (char ***)p_s1);
      v84[8].m128i_i64[0] = (__int64)v77;
      if ( v84[12].m128i_i8[8] )
      {
        sub_14178A0((char ***)&v84[8].m128i_i64[1], (char ***)ptr);
      }
      else
      {
        v84[8].m128i_i64[1] = (__int64)&v84[9].m128i_i64[1];
        v84[9].m128i_i64[0] = 0x200000000LL;
        if ( LODWORD(ptr[1]) )
          sub_14178A0((char ***)&v84[8].m128i_i64[1], (char ***)ptr);
        v84[12].m128i_i8[8] = 1;
      }
      goto LABEL_48;
    }
    if ( v16 != j__strlen("suffix") )
    {
LABEL_96:
      if ( j__strlen("if_empty") != v16 )
        goto LABEL_121;
      if ( !v16 )
      {
LABEL_28:
        if ( v84[7].m128i_i8[8] )
        {
          sub_FC70B0((__int64)p_s1, *(_QWORD *)(a2 + 48), *a3, 1114);
          v49 = v15;
          v50 = p_s1;
          sub_AEC220(p_s1, v49, v16);
          sub_AEA040((__int64)v50);
        }
        n = 0x400000000LL;
        v17 = p_s1 + 2;
        s1 = p_s1 + 2;
        if ( !(unsigned __int8)sub_141C790(v69, (__int64)p_s1) )
          goto LABEL_159;
        HIDWORD(v77) = *a3;
        ptr[0] = v79;
        LODWORD(v77) = v59;
        ptr[1] = (void *)0x200000000LL;
        if ( (_DWORD)n )
          sub_14178A0((char ***)ptr, (char ***)p_s1);
        v84[3].m128i_i64[0] = (__int64)v77;
        if ( v84[7].m128i_i8[8] )
        {
          sub_14178A0((char ***)&v84[3].m128i_i64[1], (char ***)ptr);
        }
        else
        {
          v84[3].m128i_i64[1] = (__int64)&v84[4].m128i_i64[1];
          v84[4].m128i_i64[0] = 0x200000000LL;
          if ( LODWORD(ptr[1]) )
            sub_14178A0((char ***)&v84[3].m128i_i64[1], (char ***)ptr);
          v84[7].m128i_i8[8] = 1;
        }
LABEL_48:
        if ( ptr[0] != v79 )
          free(ptr[0]);
        if ( s1 != p_s1 + 2 )
          free(s1);
        goto LABEL_52;
      }
LABEL_27:
      if ( !memcmp(v15, "if_empty", v16) )
        goto LABEL_28;
      goto LABEL_121;
    }
LABEL_25:
    if ( !memcmp(v15, "suffix", v16) )
    {
LABEL_81:
      if ( v84[17].m128i_i8[8] )
      {
        sub_FC70B0((__int64)p_s1, *(_QWORD *)(a2 + 48), *a3, 1114);
        v40 = v15;
        v41 = p_s1;
        sub_AEC220(p_s1, v40, v16);
        sub_AEA040((__int64)v41);
      }
      n = 0x400000000LL;
      v17 = p_s1 + 2;
      s1 = p_s1 + 2;
      if ( !(unsigned __int8)sub_141C790(v69, (__int64)p_s1) )
        goto LABEL_159;
      HIDWORD(v77) = *a3;
      ptr[0] = v79;
      LODWORD(v77) = v59;
      ptr[1] = (void *)0x200000000LL;
      if ( (_DWORD)n )
        sub_14178A0((char ***)ptr, (char ***)p_s1);
      v84[13].m128i_i64[0] = (__int64)v77;
      if ( v84[17].m128i_i8[8] )
      {
        sub_14178A0((char ***)&v84[13].m128i_i64[1], (char ***)ptr);
      }
      else
      {
        v84[13].m128i_i64[1] = (__int64)&v84[14].m128i_i64[1];
        v84[14].m128i_i64[0] = 0x200000000LL;
        if ( LODWORD(ptr[1]) )
          sub_14178A0((char ***)&v84[13].m128i_i64[1], (char ***)ptr);
        v84[17].m128i_i8[8] = 1;
      }
      goto LABEL_48;
    }
    if ( v16 == j__strlen("if_empty") )
      goto LABEL_27;
LABEL_121:
    ++v84[18].m128i_i32[0];
    if ( *((_WORD *)a3 + 8) == 22 )
    {
      s1 = v60;
      n = 0x400000000LL;
      if ( !(unsigned __int8)sub_141C790(v69, (__int64)p_s1) )
      {
        *(_BYTE *)(a1 + 296) = 0;
        v51 = s1;
        if ( s1 != v60 )
LABEL_160:
          free(v51);
LABEL_103:
        if ( v73 && v70 != v61 + 2 )
          operator delete(v70);
        goto LABEL_58;
      }
      if ( s1 != v60 )
        free(s1);
    }
    if ( !v58 )
    {
      v55 = (int **)v15;
      sub_FC70B0((__int64)&s1, *(_QWORD *)(a2 + 48), v59, 1173);
      sub_AE9DF0((unsigned __int8 **)&s1, 1, 2u);
      sub_AEC220((unsigned __int8 **)&s1, v55, v16);
      sub_AEA040((__int64)&s1);
      if ( *((_WORD *)a3 + 8) != 2 )
        sub_141A820(a2, a3);
LABEL_102:
      *(_BYTE *)(a1 + 296) = 0;
      goto LABEL_103;
    }
LABEL_52:
    if ( v73 && v70 != v61 + 2 )
      operator delete(v70);
    v9 = *((_WORD *)a3 + 8);
    if ( v57 == v9 || v9 == 2 )
      goto LABEL_57;
  }
  sub_FC70B0((__int64)&s1, *(_QWORD *)(v66.m128_u64[1] + 48), *(_DWORD *)v66.m128_u64[0], 14);
  sub_AE9DF0((unsigned __int8 **)&s1, 5, 4u);
  sub_AEA040((__int64)&s1);
  if ( *(_WORD *)(v66.m128_u64[0] + 16) == 2 )
  {
LABEL_78:
    *(_BYTE *)(a1 + 296) = 0;
    goto LABEL_58;
  }
  sub_141A820(v66.m128_i64[1], (unsigned int *)v66.m128_u64[0]);
  *(_BYTE *)(a1 + 296) = 0;
LABEL_58:
  if ( v84[17].m128i_i8[8] && (unsigned __int64 *)v84[13].m128i_i64[1] != &v84[14].m128i_u64[1] )
    free((void *)v84[13].m128i_i64[1]);
  if ( v84[12].m128i_i8[8] && (unsigned __int64 *)v84[8].m128i_i64[1] != &v84[9].m128i_u64[1] )
    free((void *)v84[8].m128i_i64[1]);
  if ( v84[7].m128i_i8[8] && (unsigned __int64 *)v84[3].m128i_i64[1] != &v84[4].m128i_u64[1] )
    free((void *)v84[3].m128i_i64[1]);
  return a1;
}
