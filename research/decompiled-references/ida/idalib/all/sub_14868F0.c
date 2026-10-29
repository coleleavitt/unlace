__int64 __fastcall sub_14868F0(
        const __m128i *a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        double a7,
        __m128 a8,
        __int64 a9)
{
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int16 v18; // dx
  bool v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  __int64 v24; // rax
  __int32 v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int32 v28; // eax
  __int64 *v29; // rdi
  int v30; // ebp
  unsigned __int16 v31; // r13
  char v32; // al
  unsigned __int8 *v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  unsigned __int16 v37; // bp
  char v38; // al
  __int64 v39; // rsi
  __int64 v40; // rax
  __int32 v41; // eax
  __int64 *v42; // rdi
  unsigned __int8 *v43; // r13
  unsigned __int16 v44; // r12
  char v45; // al
  __int64 v46; // rbp
  char v47; // al
  __int64 v48; // rsi
  int v49; // eax
  __int32 v50; // eax
  __int64 *v51; // rdi
  char *v52; // r15
  unsigned __int16 v53; // bp
  char v54; // al
  __int64 v55; // r13
  __int64 v56; // rax
  size_t v57; // rax
  char *v58; // r12
  char *v59; // rbx
  __int64 v60; // rdx
  __int32 v61; // eax
  __int64 *v62; // rdi
  void **v63; // r12
  void **v64; // rbx
  unsigned __int16 v65; // bp
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int16 v69; // r13
  char v70; // al
  __int64 v71; // rsi
  unsigned int *v72; // rax
  signed __int64 v73; // r8
  int v75; // [rsp+0h] [rbp-5A8h]
  int v76; // [rsp+0h] [rbp-5A8h]
  __int64 v77; // [rsp+8h] [rbp-5A0h]
  __int64 v78; // [rsp+8h] [rbp-5A0h]
  int v79; // [rsp+8h] [rbp-5A0h]
  unsigned __int32 v81; // [rsp+14h] [rbp-594h]
  unsigned __int16 v82; // [rsp+14h] [rbp-594h]
  unsigned __int16 v83; // [rsp+14h] [rbp-594h]
  _BOOL4 v84; // [rsp+18h] [rbp-590h]
  int v85; // [rsp+18h] [rbp-590h]
  char *v86; // [rsp+18h] [rbp-590h]
  int v87; // [rsp+20h] [rbp-588h]
  unsigned int v88; // [rsp+20h] [rbp-588h]
  __int64 v89; // [rsp+28h] [rbp-580h]
  int v90; // [rsp+34h] [rbp-574h] BYREF
  __int64 v91; // [rsp+38h] [rbp-570h] BYREF
  __int64 v92; // [rsp+44h] [rbp-564h]
  char v93; // [rsp+4Ch] [rbp-55Ch]
  _QWORD v94[3]; // [rsp+50h] [rbp-558h] BYREF
  void *v95; // [rsp+68h] [rbp-540h]
  _BYTE v96[24]; // [rsp+78h] [rbp-530h] BYREF
  unsigned __int8 *v97[10]; // [rsp+90h] [rbp-518h] BYREF
  void **v98; // [rsp+E0h] [rbp-4C8h] BYREF
  void *ptr[2]; // [rsp+E8h] [rbp-4C0h] BYREF
  __m128i v100; // [rsp+F8h] [rbp-4B0h] BYREF
  __int64 v101; // [rsp+108h] [rbp-4A0h]
  __m128i v102; // [rsp+110h] [rbp-498h]
  int v103; // [rsp+120h] [rbp-488h]
  __int64 v104; // [rsp+128h] [rbp-480h]
  __int32 v105; // [rsp+130h] [rbp-478h]
  __int16 v106; // [rsp+134h] [rbp-474h]
  char v107; // [rsp+136h] [rbp-472h]
  void *v108[2]; // [rsp+138h] [rbp-470h]
  __int64 v109; // [rsp+148h] [rbp-460h]
  __int64 v110; // [rsp+150h] [rbp-458h]
  __int64 v111; // [rsp+158h] [rbp-450h]
  int v112; // [rsp+160h] [rbp-448h]
  __int64 v113; // [rsp+168h] [rbp-440h] BYREF
  __int128 v114; // [rsp+170h] [rbp-438h]
  __int64 v115; // [rsp+180h] [rbp-428h]

  v11 = (__int64)a2;
  v12 = a1->m128i_i64[1];
  v13 = a1[1].m128i_u32[0];
  v14 = (1LL << a6) & 0xDC3;
  v15 = *(_QWORD *)(v12 + 56);
  if ( ((1LL << a6) & 0xDC3) != 0 && (*(_WORD *)v15 & 0x808) == 0 )
  {
    v16 = *(_QWORD *)(v12 + 2944);
    if ( *(unsigned int *)(v12 + 2912) <= v16 )
    {
      v79 = a6;
      v17 = sub_14180A0(v12, 1u);
      a6 = v79;
    }
    else
    {
      v17 = *(_QWORD *)(v12 + 2904) + 24 * v16;
    }
    v18 = *(_WORD *)(v17 + 16);
    LOBYTE(v17) = 0;
    if ( (unsigned __int16)(v18 - 20) <= 0x2Eu )
      v17 = (0x5C000000001DuLL >> ((unsigned __int8)v18 - 20)) & 1;
    if ( v18 == 126 || (_BYTE)v17 )
      goto LABEL_9;
    v12 = a1->m128i_i64[1];
    v15 = *(_QWORD *)(v12 + 56);
  }
  if ( (*(_BYTE *)(v15 + 52) & 1) != 0 && (char)a2[2] < 0 )
  {
LABEL_9:
    LODWORD(v12) = 0;
    return (unsigned int)v12;
  }
  if ( (*(_BYTE *)(v15 + 1) & 8) == 0 )
  {
LABEL_15:
    if ( a3 )
    {
      v12 = a1->m128i_i64[1];
      goto LABEL_17;
    }
LABEL_52:
    v46 = a1[6].m128i_i64[0];
    v85 = a6;
    v82 = a1[2].m128i_u16[0];
    v78 = *(_QWORD *)(v46 + 608);
    v47 = sub_141A630(v82);
    if ( v82 == 1 || v47 )
      v48 = 0;
    else
      v48 = a1[1].m128i_i64[1];
    v49 = sub_17A2580(v46, v48, v78);
    a6 = v85;
    switch ( v49 )
    {
      case 23:
        v83 = 86;
        v52 = "enum ";
        v86 = "enum";
        break;
      case 24:
        v52 = "union ";
        v86 = (char *)"union";
        v83 = 106;
        break;
      case 25:
        v52 = "struct ";
        v86 = "struct";
        v83 = 103;
        break;
      case 26:
        v52 = "class ";
        v86 = "class";
        v83 = 129;
        break;
      case 27:
        v52 = "__interface ";
        v86 = "__interface";
        v83 = 400;
        break;
      default:
        if ( !v14 )
          goto LABEL_25;
        v12 = a1->m128i_i64[1];
        v20 = v85 == 6;
        goto LABEL_19;
    }
    v53 = a1[2].m128i_u16[0];
    v54 = sub_141A630(v53);
    if ( v53 == 1 || v54 )
      v55 = 0;
    else
      v55 = a1[1].m128i_i64[1];
    v56 = a1[6].m128i_i64[0];
    ptr[0] = &v100;
    ptr[1] = (void *)0x800000000LL;
    *(_OWORD *)v108 = 0;
    v110 = v56;
    v98 = nullptr;
    v109 = 0;
    v111 = v55;
    v112 = 0;
    sub_B85890(&v113, v55);
    v114 = 0;
    v115 = 0x101010000LL;
    sub_1A395A0(&v98);
    sub_1564820(v97, a1, v13, 84);
    sub_1478560(v97, v55);
    sub_1478320(v97, (__int64)v86);
    sub_AE9DF0(v97, (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0, 3u);
    v57 = j__strlen(v52);
    sub_9EC740((__int64)v94, a1[1].m128i_i32[0], v52, v57, 0);
    if ( LODWORD(v94[0]) && HIDWORD(v94[0]) )
      sub_1480470((__int64 *)v97, (unsigned __int64)v94);
    if ( v95 != v96 )
      operator delete(v95);
    sub_AEA040((__int64)v97);
    if ( (unsigned __int8)sub_1A49A10(a1[6].m128i_i64[0], &v98, *(_QWORD *)(a1[6].m128i_i64[0] + 608), 0, 0)
      && (char *)ptr[0] + 8 * LODWORD(ptr[1]) != ptr[0] )
    {
      v88 = v13;
      v58 = (char *)ptr[0] + 8 * LODWORD(ptr[1]);
      v89 = v11;
      v59 = (char *)ptr[0];
      do
      {
        v60 = *(_QWORD *)v59;
        v59 += 8;
        sub_1564820(v97, a1, *(unsigned int *)((v60 & 0xFFFFFFFFFFFFFFF8LL) + 24), 102);
        sub_1478560(v97, v55);
        sub_1478320(v97, (__int64)v86);
        sub_AEA040((__int64)v97);
      }
      while ( v58 != v59 );
      v13 = v88;
      v11 = v89;
    }
    if ( v83 == 86 )
      sub_1485220(a1, v13, v11, a4, a5, 0, (__m128i)0LL, a8);
    else
      sub_14B33A0((_DWORD)a1, v83, v13, v11, a4, a5, 0, 0, a9);
    if ( BYTE3(v115) )
    {
      if ( (_DWORD)v98 == 5 )
      {
        if ( !BYTE4(v115) )
          goto LABEL_83;
        goto LABEL_111;
      }
      if ( !v108[1] || (*(_BYTE *)(*(_QWORD *)(v110 + 232) + 46LL) & 0x20) == 0 )
        goto LABEL_83;
      sub_1663B80(v110, &v98);
    }
    if ( !BYTE4(v115) || (_DWORD)v98 != 5 )
      goto LABEL_83;
LABEL_111:
    sub_1A445B0(v110, &v98);
LABEL_83:
    if ( v108[0] )
      sub_1A39780(v108[0]);
    if ( ptr[0] != &v100 )
      free(ptr[0]);
    goto LABEL_50;
  }
  if ( (*a2 & 7) == 4 )
  {
LABEL_91:
    if ( a3 )
      sub_15655A0(a1, a3, 0);
    goto LABEL_9;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)v15 & 0x20) == 0 )
      goto LABEL_52;
    goto LABEL_38;
  }
  if ( (!*(_DWORD *)a3 || !*(_DWORD *)(a3 + 4)) && !*(_QWORD *)(a3 + 8) && (*(_BYTE *)v15 & 0x20) != 0 )
  {
LABEL_38:
    v87 = a6;
    v37 = a1[2].m128i_u16[0];
    v81 = a1[1].m128i_u32[0];
    v84 = a6 == 9;
    v77 = a1[6].m128i_i64[0];
    v38 = sub_141A630(v37);
    if ( v37 == 1 || v38 )
      v39 = 0;
    else
      v39 = a1[1].m128i_i64[1];
    v40 = sub_17BB7F0(v77, v39, v81, v84);
    a6 = v87;
    if ( v40 )
    {
      LODWORD(v12) = 0;
      sub_15AD370(
        v11,
        28,
        v13,
        (unsigned int)&v98,
        (unsigned int)v97,
        v40,
        *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
      v41 = a1[1].m128i_i32[0];
      *(_DWORD *)(v11 + 164) = v41;
      v42 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = v41;
      sub_14634E0(v42, a1[1].m128i_i32);
      return (unsigned int)v12;
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( v14 )
  {
    v20 = a6 == 6;
    if ( a6 == 6 || a6 == 1 )
    {
LABEL_19:
      v21 = *(_QWORD *)(v12 + 2944);
      if ( v21 >= *(unsigned int *)(v12 + 2912) )
      {
        v76 = a6;
        v22 = sub_14180A0(v12, 1u);
        a6 = v76;
      }
      else
      {
        v22 = *(_QWORD *)(v12 + 2904) + 24 * v21;
      }
      v23 = *(_WORD *)(v22 + 16);
      if ( v23 > 0x40u )
      {
        if ( v23 != 66 && v23 != 126 )
        {
          v12 = a1->m128i_i64[1];
          goto LABEL_26;
        }
      }
      else if ( v23 < 0x3Fu )
      {
        if ( v23 == 22 )
        {
          v24 = a1[5].m128i_i64[0];
          v75 = a6;
          v25 = a1[5].m128i_i32[2];
          v26 = a1->m128i_i64[1];
          v98 = (void **)a1;
          v101 = v24;
          LODWORD(v24) = a1[2].m128i_i32[0];
          *(__m128i *)ptr = _mm_loadu_si128(a1 + 3);
          v103 = v24;
          v27 = a1[169].m128i_u32[2];
          v100 = _mm_loadu_si128(a1 + 4);
          v104 = v27;
          LOWORD(v27) = a1[5].m128i_i16[6];
          v102 = _mm_loadu_si128(a1 + 1);
          v105 = v25;
          v106 = v27;
          sub_1418D30(v26, 0);
          v28 = a1[1].m128i_i32[0];
          v29 = (__int64 *)a1->m128i_i64[1];
          v107 = 1;
          a1[2].m128i_i32[2] = v28;
          sub_14634E0(v29, a1[1].m128i_i32);
          v30 = sub_1560060(a1, 0, 1, 0, 0);
          sub_147B460((__int64)&v98);
          if ( v30 != 1 )
          {
LABEL_25:
            v12 = a1->m128i_i64[1];
            goto LABEL_26;
          }
          if ( v75 == 1 || a3 && v20 )
          {
            v65 = a1[2].m128i_u16[0];
            v66 = sub_141A630(v65);
            if ( v65 == 1 || v66 )
              v67 = 0;
            else
              v67 = a1[1].m128i_i64[1];
            v68 = a1[6].m128i_i64[0];
            v91 = v67;
            if ( (unsigned __int8)sub_183B9A0(v68, &v91, a3) )
            {
              sub_1564820(v97, a1, v13, 1578);
              v69 = a1[2].m128i_u16[0];
              v70 = sub_141A630(v69);
              if ( v69 == 1 || v70 )
                v71 = 0;
              else
                v71 = a1[1].m128i_i64[1];
              sub_1478560(v97, v71);
              sub_1478560(v97, v91);
              v72 = *(unsigned int **)(v91 + 16);
              LODWORD(v92) = a1[1].m128i_i32[0];
              HIDWORD(v92) = v92;
              v73 = *v72;
              v93 = 1;
              sub_1478E60((__int64)v94, v92, 1, (_BYTE *)v72 + 16, v73);
              if ( LODWORD(v94[0]) && HIDWORD(v94[0]) )
                sub_1480470((__int64 *)v97, (unsigned __int64)v94);
              if ( v95 != v96 )
                operator delete(v95);
              sub_AEA040((__int64)v97);
              a1[1].m128i_i64[1] = v91;
            }
          }
        }
        else if ( v23 != 24 && v23 != 20 )
        {
          goto LABEL_25;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 9LL) & 1) != 0 )
        goto LABEL_25;
      goto LABEL_91;
    }
  }
LABEL_26:
  v94[0] = 0;
  v31 = a1[2].m128i_u16[0];
  v32 = sub_141A630(v31);
  if ( v31 == 1 || v32 )
    v33 = nullptr;
  else
    v33 = (unsigned __int8 *)a1[1].m128i_i64[1];
  v97[0] = v33;
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 56) + 1LL) & 8) != 0 )
  {
    v34 = *(_QWORD *)(v12 + 2944);
    if ( v34 >= *(unsigned int *)(v12 + 2912) )
      v35 = sub_14180A0(v12, 1u);
    else
      v35 = *(_QWORD *)(v12 + 2904) + 24 * v34;
    LOBYTE(v12) = *(_WORD *)(v35 + 16) == 47;
    v36 = (unsigned __int8)v12;
  }
  else
  {
    v36 = 0;
    LODWORD(v12) = 0;
  }
  sub_1802110(a1[6].m128i_i64[0], v36);
  v43 = (unsigned __int8 *)v94[0];
  if ( v94[0] )
  {
    LODWORD(v12) = 1;
    sub_15AD370(
      v11,
      28,
      v13,
      (unsigned int)&v98,
      (unsigned int)&v91,
      v94[0],
      *(_QWORD *)(a1[6].m128i_i64[0] + 248) + 17464LL);
    v50 = a1[1].m128i_i32[0];
    *(_DWORD *)(v11 + 164) = v50;
    v51 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = v50;
    sub_14634E0(v51, a1[1].m128i_i32);
    return (unsigned int)v12;
  }
  v44 = a1[2].m128i_u16[0];
  v45 = sub_141A630(v44);
  if ( v44 != 1 && !v45 )
    v43 = (unsigned __int8 *)a1[1].m128i_i64[1];
  if ( v97[0] != v43 )
  {
    a1[2].m128i_i16[0] = *(_WORD *)v97[0] & 0x1FF;
LABEL_50:
    LODWORD(v12) = 1;
    return (unsigned int)v12;
  }
  sub_15AEFC0(v11);
  v61 = a1[1].m128i_i32[0];
  *(_DWORD *)(v11 + 164) = v61;
  v62 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = v61;
  sub_14634E0(v62, a1[1].m128i_i32);
  if ( !(_BYTE)v12 )
    goto LABEL_50;
  v90 = 0;
  LODWORD(v91) = 0;
  v98 = &ptr[1];
  ptr[0] = (void *)0x1000000000LL;
  sub_15569D0(a1, 1, &v90, &v98, &v91, 0);
  v63 = v98;
  v64 = &v98[9 * LODWORD(ptr[0])];
  if ( v98 != v64 )
  {
    do
    {
      while ( 1 )
      {
        v64 -= 9;
        if ( *((_DWORD *)v64 + 11) )
          break;
        if ( v63 == v64 )
          goto LABEL_101;
      }
      free(v64[4]);
    }
    while ( v63 != v64 );
LABEL_101:
    v64 = v98;
  }
  if ( v64 != &ptr[1] )
    free(v64);
  return (unsigned int)v12;
}
