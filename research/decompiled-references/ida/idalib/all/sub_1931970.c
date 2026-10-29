__int64 __fastcall sub_1931970(__int64 a1, __int128 *a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  bool v13; // r15
  __int64 *v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  const __m128i *v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rbx
  __int64 v35; // r11
  _QWORD *v36; // r12
  __int64 v37; // rbp
  char v38; // al
  __int64 v39; // r15
  unsigned __int64 v40; // r14
  char v41; // cl
  __int64 v42; // rdx
  unsigned int v43; // r14d
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  void *v47; // rcx
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // edx
  bool v52; // zf
  __int64 v53; // rax
  unsigned __int64 v54; // r15
  unsigned __int64 *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r9
  _WORD *v63; // rax
  char v64; // bl
  __int64 v65; // r14
  unsigned __int8 v66; // al
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // rbx
  _QWORD *v74; // r13
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned __int64 *v77; // rcx
  __int64 v78; // rdi
  unsigned __int64 *v79; // rdx
  unsigned __int64 *v80; // rax
  unsigned __int64 *v81; // rdx
  __int64 v83; // r14
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned __int16 v86; // dx
  int v87; // r9d
  __int64 i; // r15
  __int64 v89; // rax
  _QWORD *v90; // rax
  unsigned __int64 *v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  _QWORD *v95; // rax
  __int64 *v96; // rax
  __int64 v97; // r15
  unsigned __int64 v98; // rax
  char v99; // r14
  unsigned __int8 v100; // bl
  __int64 v101; // rax
  unsigned __int64 v102; // r10
  __int64 v103; // r11
  unsigned __int64 v104; // rbx
  unsigned __int64 v105; // r15
  unsigned __int64 v106; // r15
  unsigned __int64 v107; // r10
  __int64 v108; // r11
  __int64 v109; // r13
  unsigned __int64 v110; // rax
  int v111; // ebx
  int v112; // eax
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // [rsp+0h] [rbp-168h]
  int v116; // [rsp+8h] [rbp-160h]
  unsigned __int64 v118; // [rsp+10h] [rbp-158h]
  unsigned __int64 v119; // [rsp+18h] [rbp-150h]
  unsigned __int64 v120; // [rsp+30h] [rbp-138h]
  __int64 v121; // [rsp+38h] [rbp-130h]
  int v122; // [rsp+4Ch] [rbp-11Ch] BYREF
  __int64 v123; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v124; // [rsp+58h] [rbp-110h]
  __int64 v125; // [rsp+60h] [rbp-108h] BYREF
  __int128 v126; // [rsp+70h] [rbp-F8h] BYREF
  void *v127[2]; // [rsp+80h] [rbp-E8h]
  __int128 v128; // [rsp+90h] [rbp-D8h]
  __m128 ptr; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v130; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-B0h]
  __int64 v132; // [rsp+C0h] [rbp-A8h]
  __int64 v133; // [rsp+C8h] [rbp-A0h]
  __int64 v134; // [rsp+D0h] [rbp-98h]
  __int64 v135; // [rsp+D8h] [rbp-90h]
  __int64 v136; // [rsp+E0h] [rbp-88h]
  __int64 v137; // [rsp+E8h] [rbp-80h]
  int v138; // [rsp+F0h] [rbp-78h]
  __int64 v139; // [rsp+F8h] [rbp-70h]
  __int64 v140; // [rsp+100h] [rbp-68h]
  __int64 v141; // [rsp+108h] [rbp-60h]
  __int64 v142; // [rsp+110h] [rbp-58h]

  v5 = a1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 20LL) & 0x40) == 0 )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), (unsigned int)a2, 0xD07u, 0);
    LODWORD(v126) = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 47LL) & 0x20) != 0;
    a2 = &v126;
    sub_1588370((__int64)&ptr, (unsigned int *)&v126);
    sub_15F7200(&ptr);
  }
  if ( sub_15F2430(a1) )
    sub_18C3E40(a1);
  sub_190D5E0(a1, a4);
  v9 = *(unsigned int *)(a1 + 40);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v9 - 8);
  v11 = *(_QWORD *)(v10 + 1528);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 248) + 17441LL) )
  {
    v95 = *(_QWORD **)(v11 + 96);
    if ( v95 )
    {
      v96 = (__int64 *)(*v95 & 0xFFFFFFFFFFFFFFF0LL);
      v8 = *v96;
      if ( *(_BYTE *)(*v96 + 16) == 26 || (v8 = sub_18BBDA0(*v96, (__int64)a2, v9, v6)) != 0 )
      {
        v97 = *(_QWORD *)(v8 + 16) >> 24;
        if ( (v97 & 0x40) != 0 )
        {
          v98 = (v8 + (((char)v97 >> 5) & 4) + 8LL * *(unsigned __int16 *)(v8 + 22) + 48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v99 = *(_BYTE *)(v98 + 1);
          if ( (v99 & 0xF0) != 0 )
          {
            v100 = *(_BYTE *)(v98 + 1);
            v101 = sub_18BCBB0(v8);
            v104 = v100 >> 4;
            if ( (v99 & 8) != 0 && v104 )
            {
              if ( (v97 & 0x20) != 0 )
                v101 += v103;
              v105 = ((v101 + 7) & 0xFFFFFFFFFFFFFFF8LL) + v104 + 8 * (v97 & 1) + 7;
              v101 = sub_18BCBB0(v8);
              v106 = v105 & 0xFFFFFFFFFFFFFFF8LL;
              v9 = v104;
            }
            else
            {
              v9 = 0;
              v106 = 0;
            }
            v107 = v102 >> 24;
            v108 = v101 + v103;
            ptr.m128_u64[1] = v104;
            v130 = v106;
            if ( (v107 & 0x20) != 0 )
              v101 = v108;
            v131 = v9;
            ptr.m128_u64[0] = ((v101 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * (v107 & 1);
            if ( v104 )
            {
              a2 = (__int128 *)v11;
              sub_19EC360(a1, v11, &ptr);
            }
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(v10 + 1464) )
  {
    a2 = (__int128 *)v10;
    sub_1A323B0(a1, v10);
  }
  v12 = *(_QWORD *)(v10 + 1472);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
  if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
    goto LABEL_11;
  v91 = sub_B8C3D0(v11, (__int64)a2, v9, v6, v7, v8);
  v92 = *v91;
  v93 = *v91 + 8LL * *((unsigned int *)v91 + 2);
  if ( v92 >= v93 )
  {
    if ( v92 == v93 )
    {
LABEL_11:
      v13 = 0;
      goto LABEL_12;
    }
    while ( *(_WORD *)(*(_QWORD *)v93 + 36LL) != 279 )
    {
      v93 += 8LL;
      if ( v92 == v93 )
        goto LABEL_11;
    }
  }
  else
  {
    v94 = v92;
    while ( 1 )
    {
      a2 = *(__int128 **)v94;
      v92 = v94;
      if ( *(_WORD *)(*(_QWORD *)v94 + 36LL) == 279 )
        break;
      v94 += 8LL;
      if ( v93 == v94 )
        goto LABEL_11;
    }
  }
  v13 = v92 != v93;
LABEL_12:
  v14 = (__int64 *)(*(_QWORD *)(v10 + 1544) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v14 )
  {
    ptr.m128_i16[1] &= 0xF000u;
    ptr.m128_u64[1] = 0;
    LODWORD(v130) = 0;
    LODWORD(v131) = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v135 = 0;
    v136 = 0;
    v137 = 0;
    v138 = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    ptr.m128_i16[0] = v13 << 6;
LABEL_14:
    v15 = sub_A73610(*(_QWORD *)(a1 + 248), v12, nullptr, 0, (const __m128i *)&ptr, 0);
    goto LABEL_15;
  }
  v83 = *v14;
  v84 = *(unsigned __int8 *)(*v14 + 16);
  v85 = (unsigned int)(v84 - 25);
  if ( (unsigned int)v85 > 1 )
  {
    v83 = sub_F63050(*v14, a2, v85, v84);
    LOBYTE(v84) = *(_BYTE *)(v83 + 16);
  }
  v86 = *(_WORD *)(v83 + 20) >> 2;
  v87 = v86;
  if ( v13 )
  {
    v87 = v86 | 0x40;
    if ( (v86 & 0x40) != 0 )
      v87 = *(_WORD *)(v83 + 20) >> 2;
  }
  if ( (_BYTE)v84 == 25 )
  {
    ptr.m128_i16[1] &= 0xF000u;
    ptr.m128_u64[1] = 0;
    LODWORD(v130) = 0;
    LODWORD(v131) = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v135 = 0;
    v136 = 0;
    v137 = 0;
    v138 = 0;
    v139 = 0;
    v140 = 0;
    v141 = 0;
    v142 = 0;
    ptr.m128_i16[0] = v87;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(v83 + 24) == v12 && (!v13 || (v86 & 0x40) != 0) )
  {
    v15 = *(_QWORD *)(v10 + 1544);
  }
  else
  {
    v116 = v87;
    sub_A5E110(&ptr, v83);
    ptr.m128_u64[1] = 0;
    v113 = *(_QWORD *)(a1 + 248);
    ptr.m128_i16[0] = v116;
    v15 = sub_A73610(v113, v12, (__int64 *)(v83 + 48), *(unsigned __int16 *)(v83 + 22), (const __m128i *)&ptr, 0);
  }
LABEL_15:
  sub_17C3F80(v5, *(_QWORD *)(v11 + 72), *(unsigned int *)(v11 + 80));
  v16 = v15;
  v119 = sub_A74B00(*(_QWORD *)(v5 + 248), v15);
  v20 = *(unsigned int *)(v5 + 40);
  if ( !(_DWORD)v20 )
    BUG();
  v21 = *(_QWORD *)(v5 + 32);
  v22 = *(_BYTE *)(*(_QWORD *)(v21 + 8 * v20 - 8) + 8LL);
  if ( v22 >= 0
    && ((v22 & 0x20) != 0 || (v22 & 0x40) != 0 || (v22 & 8) != 0 && (v22 & 0x10) != 0)
    && !*(_QWORD *)(*(_QWORD *)(v5 + 240) + 760LL) )
  {
    v16 = a3;
    sub_15CD990(v5, a3, (__m128i)a4);
  }
  *(_QWORD *)(v11 + 88) = a3;
  if ( a3 )
  {
    v23 = *(unsigned int *)(v5 + 40);
    if ( !(_DWORD)v23 )
      BUG();
    v21 = *(_QWORD *)(v5 + 32);
    if ( (*(_BYTE *)(*(_QWORD *)(v21 + 8 * v23 - 8) + 9LL) & 8) != 0 )
    {
      v16 = v11;
      sub_1680510(v5, (_QWORD *)v11);
    }
  }
  v24 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v25 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 232) + 1LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
  {
    goto LABEL_27;
  }
  if ( !(unsigned __int8)sub_B8E180(v11 + 40) )
  {
    v16 = a3;
    sub_17A5C30(v5, a3, v10, v17, v18);
  }
  v25 = *(_QWORD *)v24;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v24 + 16LL) - 2) > 4u )
    goto LABEL_28;
  while ( 1 )
  {
    do
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_27:
      ;
    }
    while ( (unsigned __int8)(*(_BYTE *)(v25 + 16) - 2) <= 4u );
LABEL_28:
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v26 = sub_F63050(v25, v16, v21, v17);
    if ( !v26 )
      break;
    v25 = v26;
  }
  v27 = sub_F63240(v25, v16, v21, v17, v18, v19);
  if ( v27 && (unsigned __int8)sub_F58560((__int64)v27) )
  {
LABEL_32:
    sub_17D0CF0(v5, v12, *(unsigned int *)(v11 + 24), 1, 6, v31, v115, v116);
    goto LABEL_33;
  }
  for ( i = *(_QWORD *)v24; ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v89 = sub_F63050(i, v16, v28, v29);
    if ( !v89 )
      break;
    i = v89;
  }
  v90 = sub_F63240(i, v16, v28, v29, v30, v31);
  if ( v90 && sub_F58570((__int64)v90) )
    goto LABEL_32;
LABEL_33:
  sub_17A2E10(v5);
  v32 = (const __m128i *)&v130;
  ptr.m128_u64[1] = 0x400000000LL;
  v33 = *(unsigned int *)(v10 + 1328);
  ptr.m128_u64[0] = (unsigned __int64)&v130;
  v34 = *(_QWORD *)(v10 + 1320);
  v35 = 32 * v33;
  if ( v34 != v34 + v35 )
  {
    v120 = v11;
    v36 = (_QWORD *)v5;
    v37 = v34 + v35;
    while ( 2 )
    {
      while ( 1 )
      {
        v38 = *(_BYTE *)(v34 + 24);
        if ( (v38 & 0x48) == 0 )
          break;
        v34 += 32;
        if ( v37 == v34 )
          goto LABEL_54;
      }
      v39 = *(_QWORD *)v34;
      v40 = 0;
      v41 = v38 & 3;
      if ( (*(_BYTE *)(v36[29] + 1LL) & 8) == 0 )
        goto LABEL_49;
      if ( v41 )
        goto LABEL_49;
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v42 + 16) != 48 )
        goto LABEL_49;
      if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x2B )
        sub_185A590(v36, *(_QWORD *)v34, v42);
      sub_18C79E0((__int64)v36, 6, 4);
      v43 = *(_DWORD *)(v34 + 8);
      v123 = *(_QWORD *)(v39 + 40);
      v124 = v43;
      sub_B85890(&v125, v123);
      v126 = 0;
      *(_OWORD *)v127 = 0;
      v128 = 0;
      v44 = sub_190AE60((__int64)v36, (__int64 *)&v126, (__int64)&v123, v39, 0, 0, (__m128i)0LL, a5, 0);
      if ( !HIDWORD(v127[1]) )
      {
        if ( v44 == 1 )
          goto LABEL_47;
LABEL_44:
        v45 = v44 & 0xFFFFFFFFFFFFFFFELL;
        v46 = *(_QWORD *)(v45 + 8);
        if ( (*(_BYTE *)(v45 + 8) & 1) != 0 || (byte_8[v46 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
LABEL_45:
          v47 = *(void **)(v34 + 16);
          v48 = *(_DWORD *)(v39 + 24);
          LODWORD(v126) = 13;
          v127[0] = v47;
          LODWORD(v128) = v48;
          *((_QWORD *)&v126 + 1) = 0;
          LODWORD(v127[1]) = 0;
          BYTE4(v128) = 0;
          v49 = sub_1A24E20(v36, &v126, v43, v45, 0, 0);
          if ( v49 == 1 )
            goto LABEL_47;
          v50 = *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFFELL) + 16);
          if ( *(char *)(v50 + 82) < 0 )
            goto LABEL_47;
          v40 = sub_19A3E60(v36, v49, v50) & 0xFFFFFFFFFFFFFFFELL;
        }
        else
        {
          v114 = sub_160A600(
                   (__int64)v36,
                   v45,
                   v46 & 0xFFFFFFFFFFFFFFF8LL | *(_QWORD *)(v45 + 8) & 6LL | 1,
                   5u,
                   1u,
                   0,
                   0.0,
                   *(double *)a5.m128_u64,
                   0);
          if ( v114 != 1 )
          {
            v45 = v114 & 0xFFFFFFFFFFFFFFFELL;
            goto LABEL_45;
          }
LABEL_47:
          v40 = 0;
        }
        sub_190D5E0((__int64)v36, (__m128)0LL);
        v38 = *(_BYTE *)(v34 + 24);
        v41 = v38 & 3;
LABEL_49:
        v51 = v41 == 2;
        v52 = (v38 & 4) == 0;
        v53 = ptr.m128_u32[2];
        if ( !v52 )
          v51 |= 2u;
        v54 = (2LL * v51) | v39 & 0xFFFFFFFFFFFFFFF9LL;
        if ( (unsigned __int64)ptr.m128_u32[2] + 1 > ptr.m128_u32[3] )
        {
          sub_2237220(&ptr, &v130, ptr.m128_u32[2] + 1LL, 16);
          v53 = ptr.m128_u32[2];
        }
        v34 += 32;
        v55 = (unsigned __int64 *)(ptr.m128_u64[0] + 16 * v53);
        *v55 = v54;
        v55[1] = v40;
        ++ptr.m128_i32[2];
        if ( v37 == v34 )
        {
LABEL_54:
          v5 = (__int64)v36;
          v32 = (const __m128i *)ptr.m128_u64[0];
          v11 = v120;
          v56 = ptr.m128_u32[2];
          goto LABEL_55;
        }
        continue;
      }
      break;
    }
    v121 = v44;
    free(v127[0]);
    v44 = v121;
    if ( v121 != 1 )
      goto LABEL_44;
    goto LABEL_47;
  }
  v56 = 0;
LABEL_55:
  sub_B7C620(v11, *(_QWORD *)(v5 + 248), v32, v56, *(_DWORD *)(v10 + 1312) != 0);
  v57 = sub_EEC140(a3);
  v122 = sub_1580FF0((_BYTE *)(v5 + 352), v57, v58, v59, v60, v61);
  sub_15F7280((__int64 *)&v126, v5, &v122, v11, v119, v62);
  v63 = (_WORD *)sub_EEE9A0(24, *(_QWORD **)(v5 + 248), 8u);
  v64 = *(_BYTE *)(v10 + 1465);
  v65 = (__int64)v63;
  *v63 = *v63 & 0xFE00 | 0x75;
  if ( unk_2CD7484 )
    sub_EE9B50(117);
  *(_QWORD *)(v65 + 16) = v11;
  *(_WORD *)(v65 + 1) &= 0xF801u;
  *(_QWORD *)(v65 + 8) = v119;
  v66 = sub_B631C0(v65, v64);
  *(_BYTE *)(v65 + 1) = (v66 << 6) | *(_BYTE *)(v65 + 1) & 0x3F;
  *(_BYTE *)(v65 + 2) = *(_BYTE *)(v65 + 2) & 0xF8 | (v66 >> 2) & 7;
  v67 = *(_QWORD *)(v65 + 16);
  if ( *(_DWORD *)(v67 + 112) || (*(_BYTE *)(v67 + 49) & 0x40) != 0 )
  {
    v68 = *(unsigned int *)(v5 + 4528);
    v69 = *(unsigned int *)(v5 + 4532);
    v70 = v67 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v68 + 1 > v69 )
    {
      v69 = v5 + 4536;
      v118 = v70;
      sub_2237220(v5 + 4520, v5 + 4536, v68 + 1, 8);
      v68 = *(unsigned int *)(v5 + 4528);
      v70 = v118;
    }
    v71 = *(_QWORD *)(v5 + 4520);
    *(_QWORD *)(v71 + 8 * v68) = v70;
    ++*(_DWORD *)(v5 + 4528);
    *(_WORD *)(v5 + 4512) = 257;
    v72 = *(_QWORD *)(v65 + 16);
    v73 = *(_QWORD **)(v72 + 104);
    v74 = &v73[2 * *(unsigned int *)(v72 + 112)];
    if ( v73 != v74 )
    {
      while ( !(unsigned int)sub_F65A30(*(_QWORD *)((*v73 & 0xFFFFFFFFFFFFFFF8LL) + 48), v69, v71, v68) )
      {
        v73 += 2;
        if ( v74 == v73 )
          goto LABEL_65;
      }
      sub_15F2480(v5);
    }
  }
LABEL_65:
  v75 = *(unsigned int *)(v5 + 40);
  if ( (_DWORD)v75 )
  {
    v76 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v75 - 8);
    if ( v76 )
    {
      if ( *(_BYTE *)(v76 + 428) )
      {
        v77 = *(unsigned __int64 **)(v76 + 408);
        v78 = *(unsigned int *)(v76 + 420);
        v79 = &v77[v78];
        if ( v77 != v79 )
        {
          v80 = *(unsigned __int64 **)(v76 + 408);
          if ( v11 == *v77 )
          {
LABEL_75:
            v81 = &v77[*(unsigned int *)(v76 + 420)];
            goto LABEL_76;
          }
          while ( v79 != ++v80 )
          {
            if ( v11 == *v80 )
              goto LABEL_75;
          }
        }
        if ( (unsigned int)v78 < *(_DWORD *)(v76 + 416) )
        {
          *(_DWORD *)(v76 + 420) = v78 + 1;
          *v79 = v11;
          v77 = *(unsigned __int64 **)(v76 + 408);
          v80 = &v77[v78];
          goto LABEL_75;
        }
      }
      v80 = (unsigned __int64 *)sub_2236760(v76 + 408, v11);
      v77 = *(unsigned __int64 **)(v76 + 408);
      if ( *(_BYTE *)(v76 + 428) )
        goto LABEL_75;
      v81 = &v77[*(unsigned int *)(v76 + 416)];
LABEL_76:
      if ( v81 != v80 && *v80 + 2 <= 1 )
      {
        do
          ++v80;
        while ( v81 != v80 && *v80 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
  }
  if ( *(char *)(v11 + 28) < 0 )
  {
    v109 = *(_QWORD *)(v65 + 8);
    v123 = v65;
    v110 = sub_BFB2D0(v65);
    v111 = sub_EEC140(v110);
    v112 = sub_BFB2C0(v65);
    v65 = sub_18C4330(v5, v112, v111, &v123, 1, v109);
  }
  if ( *((_QWORD *)&v126 + 1) )
    sub_15F2350((__int64 *)&v126, *((_BYTE **)&v126 + 1));
  if ( (unsigned __int64 *)ptr.m128_u64[0] != &v130 )
    free((void *)ptr.m128_u64[0]);
  return v65;
}
