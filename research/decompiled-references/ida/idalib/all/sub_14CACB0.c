__int64 __fastcall sub_14CACB0(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  _DWORD *v8; // r14
  __int64 *v9; // r12
  unsigned __int64 v11; // rdx
  char v12; // al
  int v13; // eax
  char v14; // al
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int16 v19; // ax
  unsigned int v20; // r13d
  unsigned int v21; // ebp
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rax
  const __m128i *p_ptr; // r13
  unsigned __int16 v29; // bp
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 result; // rax
  char *v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // al
  __int16 v40; // ax
  int *v41; // rbp
  unsigned int *v42; // rax
  __int64 v43; // rdx
  int v44; // r9d
  int v45; // r11d
  int v46; // r10d
  __int64 v47; // rbp
  __int16 v48; // ax
  char v49; // r13
  int v50; // edx
  __int64 v51; // rcx
  __int64 *v52; // rdi
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int16 v56; // ax
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  char v59; // al
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 v62; // rax
  int v63; // eax
  __int64 *v64; // rdi
  __int64 v65; // rdi
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rdi
  __int64 *v72; // rdi
  __int64 v73; // rax
  __int64 *v74; // rdi
  __int64 v75; // rdi
  char v76; // al
  char v77; // dl
  _BYTE *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rdi
  char v84; // al
  size_t v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // [rsp+8h] [rbp-190h]
  __int64 v94; // [rsp+8h] [rbp-190h]
  unsigned int v95; // [rsp+10h] [rbp-188h]
  bool v96; // [rsp+10h] [rbp-188h]
  int v97; // [rsp+14h] [rbp-184h]
  __m128i *v98; // [rsp+18h] [rbp-180h]
  unsigned __int64 v99; // [rsp+20h] [rbp-178h]
  __int64 v100; // [rsp+28h] [rbp-170h]
  int v101; // [rsp+30h] [rbp-168h]
  int v102; // [rsp+34h] [rbp-164h]
  __int128 *v103; // [rsp+38h] [rbp-160h]
  void *v104; // [rsp+48h] [rbp-150h]
  int v105; // [rsp+50h] [rbp-148h]
  int v106; // [rsp+50h] [rbp-148h]
  int v107; // [rsp+50h] [rbp-148h]
  int v108; // [rsp+50h] [rbp-148h]
  int v109; // [rsp+50h] [rbp-148h]
  int v110; // [rsp+54h] [rbp-144h]
  int v111; // [rsp+54h] [rbp-144h]
  int v112; // [rsp+54h] [rbp-144h]
  int v113; // [rsp+54h] [rbp-144h]
  __int64 v114; // [rsp+58h] [rbp-140h]
  int v115; // [rsp+58h] [rbp-140h]
  int v116; // [rsp+58h] [rbp-140h]
  int v117; // [rsp+5Ch] [rbp-13Ch]
  __int128 v118; // [rsp+60h] [rbp-138h] BYREF
  _BYTE *v119; // [rsp+70h] [rbp-128h] BYREF
  char v120; // [rsp+78h] [rbp-120h]
  __int64 v121; // [rsp+80h] [rbp-118h]
  int v122; // [rsp+88h] [rbp-110h]
  __int16 v123; // [rsp+8Ch] [rbp-10Ch]
  __int64 (__fastcall *v124)(__int64); // [rsp+90h] [rbp-108h]
  __int64 v125; // [rsp+98h] [rbp-100h]
  __int64 v126; // [rsp+A0h] [rbp-F8h]
  char *v127; // [rsp+B0h] [rbp-E8h] BYREF
  char v128; // [rsp+B8h] [rbp-E0h]
  _BYTE v129[12]; // [rsp+BCh] [rbp-DCh]
  void *v130; // [rsp+C8h] [rbp-D0h]
  __int64 (__fastcall *v131)(__int64); // [rsp+D0h] [rbp-C8h]
  __int64 v132; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v133; // [rsp+E0h] [rbp-B8h]
  char v134; // [rsp+E8h] [rbp-B0h]
  void *ptr; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+F8h] [rbp-A0h]
  unsigned __int64 v137; // [rsp+100h] [rbp-98h] BYREF
  unsigned __int64 v138; // [rsp+108h] [rbp-90h]
  __int64 (__fastcall *v139)(__int64); // [rsp+110h] [rbp-88h]
  __int64 v140; // [rsp+118h] [rbp-80h]
  __int64 v141; // [rsp+120h] [rbp-78h]

  v8 = a3;
  v9 = a2;
  if ( a3 )
    *a3 = 0;
  v11 = *(unsigned __int16 *)(a1 + 32);
  v121 = a1;
  v104 = (void *)(a1 + 1952);
  v119 = (_BYTE *)(a1 + 1952);
  v12 = *(_BYTE *)(a1 + 1952);
  v122 = 1376276;
  v120 = v12;
  v124 = sub_14789E0;
  v13 = 0;
  *(_BYTE *)(a1 + 1952) = 1;
  v123 = 63;
  v125 = 0;
  v126 = 0;
  if ( (_WORD)v11 != 20 )
  {
LABEL_6:
    *(_DWORD *)a2 = v13;
    if ( (_WORD)v11 != 28 )
      goto LABEL_7;
    goto LABEL_120;
  }
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 90) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    v13 = sub_14789E0(a1);
    v11 = *(unsigned __int16 *)(a1 + 32);
    LODWORD(v126) = v13;
    goto LABEL_6;
  }
  sub_1568800(&v119);
  v11 = *(unsigned __int16 *)(a1 + 32);
  *(_DWORD *)a2 = v126;
  if ( (_WORD)v11 != 28 )
  {
LABEL_7:
    if ( (_WORD)v11 != 64 )
      goto LABEL_8;
LABEL_127:
    *((_DWORD *)v9 + 3) = 1;
    v8 = nullptr;
    v71 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    a2 = (__int64 *)(a1 + 16);
    v98 = (__m128i *)(a1 + 16);
    sub_14634E0(v71, (int *)(a1 + 16));
    *((_DWORD *)v9 + 2) = *(_DWORD *)(a1 + 40);
    v29 = *(_WORD *)(a1 + 32);
    goto LABEL_28;
  }
LABEL_120:
  v65 = *(_QWORD *)(a1 + 8);
  v66 = *(_QWORD *)(v65 + 2944);
  if ( *(unsigned int *)(v65 + 2912) <= v66 )
  {
    a2 = (_QWORD *)(&dword_0 + 1);
    v67 = sub_14180A0(v65, 1u);
  }
  else
  {
    v67 = *(_QWORD *)(v65 + 2904) + 24 * v66;
  }
  if ( *(_WORD *)(v67 + 16) == 66
    || ((v68 = *(_QWORD *)(a1 + 8), v69 = *(_QWORD *)(v68 + 2944), *(unsigned int *)(v68 + 2912) <= v69)
      ? (a2 = (_QWORD *)(&dword_0 + 1), v70 = sub_14180A0(v68, 1u))
      : (v70 = *(_QWORD *)(v68 + 2904) + 24 * v69),
        *(_WORD *)(v70 + 16) == 21) )
  {
    *((_DWORD *)v9 + 3) = 2;
    v83 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    a2 = (__int64 *)(a1 + 16);
    v98 = (__m128i *)(a1 + 16);
    sub_14634E0(v83, (int *)(a1 + 16));
    *((_DWORD *)v9 + 2) = *(_DWORD *)(a1 + 40);
    v29 = *(_WORD *)(a1 + 32);
    v84 = sub_141A630(v29);
    if ( v29 == 1 || v84 )
    {
      v8 = nullptr;
    }
    else if ( !*(_QWORD *)(a1 + 24) )
    {
      v8 = nullptr;
    }
    goto LABEL_28;
  }
  v11 = *(unsigned __int16 *)(a1 + 32);
  if ( (_WORD)v11 == 64 )
    goto LABEL_127;
LABEL_8:
  if ( (_WORD)v11 == 21 )
    goto LABEL_36;
  v14 = 1;
  if ( (_WORD)v11 == 3 )
  {
LABEL_31:
    v31 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v31 + 760) )
    {
      *(_BYTE *)(v31 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v31 + 48) + 6LL) = 1;
      v31 = *(_QWORD *)(a1 + 8);
    }
    v32 = *(_QWORD *)(a1 + 96);
    *(_WORD *)(a1 + 32) = 1;
    v33 = *(_QWORD *)(v32 + 656);
    a2 = *(__int64 **)(v32 + 608);
    if ( (*(_BYTE *)(*(_QWORD *)(v31 + 56) + 2LL) & 4) != 0 && ((unsigned __int8)v14 & (v8 != nullptr)) != 0 )
      sub_1722370(v33, a2);
    else
      sub_1718700(v33, a2, v9, 0);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)(a1 + 16);
    v99 = 0;
    v118 = 0;
    v16 = v15;
    if ( (_WORD)v11 != 31 )
      break;
    *(_DWORD *)(a1 + 40) = v15;
    v98 = (__m128i *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v101 = *(_DWORD *)(a1 + 40);
    if ( *(_WORD *)(a1 + 32) != 147 )
    {
      if ( !v8 )
      {
        v86 = *(unsigned int *)(a1 + 16);
        v87 = 1652;
        goto LABEL_177;
      }
      goto LABEL_178;
    }
    v60 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v60, (int *)(a1 + 16));
    v95 = 0;
    v100 = 0;
    v97 = 1;
LABEL_22:
    if ( v8 && *(_WORD *)(a1 + 32) == 5 )
    {
      v53 = *(_QWORD *)(a1 + 8);
      v54 = *(_QWORD *)(v53 + 2944);
      v55 = v54 >= *(unsigned int *)(v53 + 2912) ? sub_14180A0(v53, 1u) : *(_QWORD *)(v53 + 2904) + 24 * v54;
      v56 = *(_WORD *)(v55 + 16);
      if ( v56 == 62 || v56 == 21 )
      {
        *v8 = 2;
        result = 0;
        goto LABEL_94;
      }
    }
    a6 = (unsigned int)v118;
    v20 = 0;
    v102 = HIDWORD(v118);
    v21 = HIDWORD(v118) | DWORD2(v118) | DWORD1(v118) | v118;
    if ( !v21 )
    {
LABEL_25:
      v22 = 0;
      v23 = v99;
      if ( v99 > 1 )
        goto LABEL_44;
      goto LABEL_26;
    }
    v35 = (char *)&v118;
    if ( v95 )
    {
      if ( v97 == 3 )
      {
        v35 = (char *)&v118 + 4;
        v103 = (__int128 *)((char *)&v118 + 4);
      }
      else
      {
        v103 = &v118;
      }
    }
    else
    {
      v35 = (char *)&v118 + 8;
      v103 = (__int128 *)((char *)&v118 + 8);
    }
    v20 = *(_DWORD *)v35;
    v21 = *(_DWORD *)v35;
    if ( *(_DWORD *)v35 )
    {
      a5 = 1722;
      if ( (HIDWORD(v118) != 0) + (DWORD2(v118) != 0) + (DWORD1(v118) != 0) + ((_DWORD)v118 != 0) <= 1 )
        goto LABEL_25;
      if ( v8 )
      {
LABEL_42:
        *v8 = 1;
        goto LABEL_43;
      }
    }
    else
    {
      a5 = 1721;
      if ( (_DWORD)v118 )
        v20 = v118;
      if ( DWORD1(v118) )
        v20 = DWORD1(v118);
      if ( DWORD2(v118) )
        v20 = DWORD2(v118);
      if ( HIDWORD(v118) )
        v20 = HIDWORD(v118);
      if ( v8 )
        goto LABEL_42;
    }
    if ( v103 == &v118 )
    {
      if ( DWORD1(v118) )
      {
        v42 = (unsigned int *)v103 + 1;
LABEL_161:
        v43 = *v42;
        goto LABEL_71;
      }
    }
    else
    {
      if ( (_DWORD)v118 )
      {
        v43 = (unsigned int)v118;
        goto LABEL_71;
      }
      v42 = (unsigned int *)&v118 + 1;
      if ( v103 != (__int128 *)((char *)&v118 + 4) )
      {
        if ( DWORD1(v118) )
          goto LABEL_161;
        if ( v103 == (__int128 *)((char *)&v118 + 8) )
          goto LABEL_69;
      }
    }
    if ( DWORD2(v118) )
    {
      v43 = DWORD2(v118);
      goto LABEL_71;
    }
LABEL_69:
    if ( HIDWORD(v118) )
      v43 = HIDWORD(v118);
    else
      v43 = 0;
LABEL_71:
    v114 = *(_QWORD *)((char *)&v118 + 4);
    v110 = v118;
    v105 = a5;
    sub_1564820(&ptr, a1, v43, (unsigned int)a5);
    v44 = v110;
    v45 = v114;
    v46 = HIDWORD(v114);
    if ( v105 == 1721 )
    {
      if ( v95 )
      {
        v117 = v101;
      }
      else
      {
        v88 = sub_13DC060(
                v101,
                0,
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                (__m128i)0LL,
                *(double *)a8.m128_u64);
        v46 = HIDWORD(v114);
        v45 = v114;
        v117 = v88;
        v44 = v110;
      }
      v106 = v44;
      v115 = v46;
      v111 = v45;
      sub_AE9DF0((unsigned __int8 **)&ptr, v95 != 0, 2u);
      v85 = j__strlen("...");
      sub_9EC740((__int64)&v127, v117, "...", v85, 0);
      v44 = v106;
      v45 = v111;
      v46 = v115;
      if ( (_DWORD)v127 && HIDWORD(v127) )
      {
        sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v127);
        v46 = v115;
        v45 = v111;
        v44 = v106;
      }
      if ( v130 != &v132 )
      {
        v116 = v46;
        v112 = v45;
        v107 = v44;
        operator delete(v130);
        v46 = v116;
        v45 = v112;
        v44 = v107;
      }
    }
    if ( v103 == &v118 )
    {
      if ( !v45 )
        goto LABEL_77;
LABEL_163:
      v108 = v46;
      *(_QWORD *)v129 = 0;
      v129[8] = 0;
      v130 = &v132;
      v131 = nullptr;
      LOBYTE(v132) = 0;
      v134 = 0;
      LODWORD(v127) = v45;
      HIDWORD(v127) = v45;
      v128 = 1;
      sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v127);
      v46 = v108;
      if ( v130 != &v132 )
      {
        operator delete(v130);
        v46 = v108;
      }
      goto LABEL_76;
    }
    if ( v44 )
    {
      v113 = v46;
      v109 = v45;
      *(_QWORD *)v129 = 0;
      v129[8] = 0;
      v130 = &v132;
      v131 = nullptr;
      LOBYTE(v132) = 0;
      v134 = 0;
      LODWORD(v127) = v44;
      HIDWORD(v127) = v44;
      v128 = 1;
      sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v127);
      v45 = v109;
      v46 = v113;
      if ( v130 != &v132 )
      {
        operator delete(v130);
        v46 = v113;
        v45 = v109;
      }
    }
    if ( v103 == (__int128 *)((char *)&v118 + 4) )
    {
LABEL_77:
      if ( v46 )
      {
        *(_QWORD *)v129 = 0;
        v129[8] = 0;
        v130 = &v132;
        v131 = nullptr;
        LOBYTE(v132) = 0;
        v134 = 0;
        LODWORD(v127) = v46;
        HIDWORD(v127) = v46;
        v128 = 1;
        sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v127);
        if ( v130 != &v132 )
          operator delete(v130);
      }
      goto LABEL_78;
    }
    if ( v45 )
      goto LABEL_163;
LABEL_76:
    if ( v103 != (__int128 *)((char *)&v118 + 8) )
      goto LABEL_77;
LABEL_78:
    if ( v102 )
    {
      *(_QWORD *)v129 = 0;
      v129[8] = 0;
      v130 = &v132;
      v131 = nullptr;
      LOBYTE(v132) = 0;
      v134 = 0;
      LODWORD(v127) = v102;
      HIDWORD(v127) = v102;
      v128 = 1;
      sub_14C6E00((__int64 *)&ptr, (unsigned __int64)&v127);
      if ( v130 != &v132 )
        operator delete(v130);
    }
    sub_AEA040((__int64)&ptr);
LABEL_43:
    v23 = v99;
    v21 = v20;
    v22 = 0;
    if ( v99 > 1 )
    {
LABEL_44:
      if ( v8 )
      {
        *v8 = 1;
      }
      else
      {
        v75 = *(_QWORD *)(a1 + 96);
        ptr = (void *)(v23 & 0xFFFFFFFFFFFFFFFELL);
        v22 = sub_1A2D1F0(v75, v101, v97 == 3, v20, 0, v100, v95 != 1, (__int64)&ptr);
        v23 = (unsigned __int64)ptr;
      }
    }
LABEL_26:
    v24 = *(_DWORD *)(a1 + 40);
    v138 = v23;
    v25 = *((unsigned int *)v9 + 6);
    v137 = __PAIR64__(v95, v21);
    ptr = (void *)__PAIR64__(v101, v97);
    v139 = (__int64 (__fastcall *)(__int64))v22;
    v26 = v9[2];
    v11 = v25 + 1;
    HIDWORD(v140) = v24;
    a4 = *((unsigned int *)v9 + 7);
    v27 = v26 + 48 * v25;
    v136 = v100;
    a2 = (__int64 *)v95;
    LODWORD(v140) = v15;
    p_ptr = (const __m128i *)&ptr;
    if ( v11 > a4 )
    {
      v74 = v9 + 2;
      a2 = v9 + 4;
      if ( v26 > (unsigned __int64)&ptr || v27 <= (unsigned __int64)&ptr )
      {
        sub_2237220(v74, a2, v11, 48);
        p_ptr = (const __m128i *)&ptr;
        v27 = v9[2] + 48LL * *((unsigned int *)v9 + 6);
      }
      else
      {
        sub_2237220(v74, a2, v11, 48);
        v11 = v9[2];
        p_ptr = (const __m128i *)((char *)&ptr + v11 - v26);
        v27 = v11 + 48LL * *((unsigned int *)v9 + 6);
      }
    }
    a8 = (__m128)_mm_loadu_si128(p_ptr);
    *(__m128 *)v27 = a8;
    *(__m128i *)(v27 + 16) = _mm_loadu_si128(p_ptr + 1);
    *(__m128i *)(v27 + 32) = _mm_loadu_si128(p_ptr + 2);
    v29 = *(_WORD *)(a1 + 32);
    ++*((_DWORD *)v9 + 6);
LABEL_28:
    if ( v29 == 21 )
      goto LABEL_36;
    if ( v29 != 66 )
    {
      if ( v29 != 3 )
      {
        if ( !v8 )
        {
          v86 = *(unsigned int *)(a1 + 16);
          v87 = 1610;
LABEL_177:
          sub_1564820(&ptr, a1, v86, v87);
          sub_AEA040((__int64)&ptr);
          result = 1;
          goto LABEL_94;
        }
        goto LABEL_178;
      }
      v89 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(*(_QWORD *)(v89 + 56) + 2LL) & 4) == 0 || !v8 )
      {
        if ( *(_QWORD *)(v89 + 760) )
        {
          *(_BYTE *)(v89 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v89 + 48) + 6LL) = 1;
        }
        v90 = *(_QWORD *)(a1 + 96);
        *(_WORD *)(a1 + 32) = 1;
        a2 = *(__int64 **)(v90 + 608);
        sub_1718700(*(_QWORD *)(v90 + 656), a2, v9, 0);
        goto LABEL_36;
      }
LABEL_178:
      *v8 = 3;
      result = 0;
      goto LABEL_94;
    }
    v30 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v30, v98->m128i_i32);
    LOWORD(v11) = *(_WORD *)(a1 + 32);
    v14 = 0;
    if ( (_WORD)v11 == 3 )
      goto LABEL_31;
  }
  if ( (_WORD)v11 == 147 )
  {
    *(_DWORD *)(a1 + 40) = v15;
    v98 = (__m128i *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v100 = 0;
    v95 = 0;
    v101 = *(_DWORD *)(a1 + 40);
    v97 = 0;
    goto LABEL_22;
  }
  if ( (_WORD)v11 != 28 && (_WORD)v11 != 64 )
  {
    if ( (_WORD)v11 != 27 )
    {
      if ( (_WORD)v11 != 5 )
        goto LABEL_183;
      v97 = 2;
      goto LABEL_17;
    }
LABEL_96:
    *(_DWORD *)(a1 + 40) = v16;
    v41 = (int *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v97 = 2;
    LODWORD(v118) = *(_DWORD *)(a1 + 40);
    v40 = *(_WORD *)(a1 + 32);
    if ( v40 != 28 )
    {
LABEL_97:
      if ( v40 == 27 )
      {
        v57 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v57, v41);
        DWORD1(v118) = *(_DWORD *)(a1 + 40);
        v40 = *(_WORD *)(a1 + 32);
      }
      goto LABEL_52;
    }
LABEL_108:
    v61 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v61, v41);
    v40 = *(_WORD *)(a1 + 32);
    if ( v40 == 3 )
    {
      v91 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v91 + 760) )
      {
        *(_BYTE *)(v91 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v91 + 48) + 6LL) = 1;
      }
      v92 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      a2 = *(__int64 **)(v92 + 608);
      sub_1718700(*(_QWORD *)(v92 + 656), a2, v9, 1);
LABEL_36:
      sub_14808E0((__int64)&v119, a2, v11, a4, a5, a6);
      *((_DWORD *)v9 + 1) = HIDWORD(v126);
      result = 0;
      goto LABEL_94;
    }
    v97 = 3;
    goto LABEL_97;
  }
  v36 = *(_QWORD *)(a1 + 8);
  v37 = *(_QWORD *)(v36 + 2944);
  if ( v37 >= *(unsigned int *)(v36 + 2912) )
    v38 = sub_14180A0(v36, 1u);
  else
    v38 = *(_QWORD *)(v36 + 2904) + 24 * v37;
  v39 = *(_WORD *)(v38 + 16) == 66 || *(_WORD *)(v38 + 16) == 21;
  if ( !v39 || *((_DWORD *)v9 + 3) )
  {
    v40 = *(_WORD *)(a1 + 32);
    if ( v40 == 27 )
    {
      v16 = *(_DWORD *)(a1 + 16);
      goto LABEL_96;
    }
    v97 = 2;
    v41 = (int *)(a1 + 16);
    if ( v40 == 28 )
      goto LABEL_108;
LABEL_52:
    if ( v40 != 5 )
    {
      if ( v40 == 147 )
      {
        if ( !v8 )
        {
          v86 = *(unsigned int *)(a1 + 16);
          v87 = 1898;
          goto LABEL_177;
        }
      }
      else
      {
LABEL_183:
        if ( !v8 )
        {
          v86 = *(unsigned int *)(a1 + 16);
          v87 = 1603;
          goto LABEL_177;
        }
      }
      goto LABEL_178;
    }
    v16 = *(_DWORD *)(a1 + 16);
LABEL_17:
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = v16;
    v98 = (__m128i *)(a1 + 16);
    v100 = v17;
    sub_14634E0(v18, (int *)(a1 + 16));
    v101 = *(_DWORD *)(a1 + 40);
    v19 = *(_WORD *)(a1 + 32);
    if ( v19 == 27 )
    {
      v58 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v58, v98->m128i_i32);
      DWORD2(v118) = *(_DWORD *)(a1 + 40);
      v19 = *(_WORD *)(a1 + 32);
      if ( v19 != 22 )
        goto LABEL_19;
    }
    else if ( v19 != 22 )
    {
LABEL_19:
      if ( v19 != 24 )
      {
        v95 = 0;
        if ( v19 != 64 )
        {
LABEL_21:
          if ( v19 != 27 )
            goto LABEL_22;
LABEL_88:
          v52 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v52, v98->m128i_i32);
          HIDWORD(v118) = *(_DWORD *)(a1 + 40);
          goto LABEL_22;
        }
      }
      v47 = *(_QWORD *)(a1 + 96);
      sub_18C74E0(v47, 6, 0, 4);
      v48 = *(_WORD *)(a1 + 32);
      v95 = 3;
      if ( v48 == 64 )
      {
        v72 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v72, v98->m128i_i32);
        v48 = *(_WORD *)(a1 + 32);
        v95 = 1;
        if ( v8 )
          goto LABEL_84;
      }
      else if ( v8 )
      {
LABEL_84:
        if ( v48 == 24 )
        {
          v137 = a1;
          WORD2(v138) = 63;
          ptr = v104;
          v76 = *(_BYTE *)(a1 + 1952);
          *(_BYTE *)(a1 + 1952) = 1;
          LOBYTE(v136) = v76;
          v139 = sub_1478A90;
          LODWORD(v138) = 1638424;
          v140 = 0;
          v141 = 0;
          sub_149FA40((__int64)&ptr);
          sub_156E210(&ptr);
          v77 = v136;
          v78 = ptr;
          *v8 = 1;
          *v78 = v77;
        }
        else
        {
          v49 = *(_BYTE *)(a1 + 2064);
          v50 = *(_DWORD *)(a1 + 16);
          *(_BYTE *)(a1 + 2064) = 1;
          v93 = v50;
          v51 = sub_14BDAD0(a1, 0, (__m128i)0LL);
          v99 = v51;
          if ( v93 != *(_DWORD *)(a1 + 16) )
          {
            --*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2944LL);
            v62 = *(_QWORD *)(a1 + 8);
            *(_WORD *)(a1 + 32) = 423;
            *(_QWORD *)(a1 + 24) = v51;
            *(_DWORD *)(a1 + 16) = v93;
            v94 = *(_QWORD *)(v62 + 2904) + 8 * (3LL * *(_QWORD *)(v62 + 2944) - 3);
            if ( sub_10CCDE0(*(_WORD *)(v94 + 16)) )
            {
              v63 = *(_DWORD *)(v94 + 4);
              if ( !v63 )
                v63 = *(_DWORD *)v94;
            }
            else
            {
              v63 = *(_DWORD *)v94;
            }
            v64 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 20) = v63;
            if ( v64[368] && v64[370] != v64[369] )
            {
              sub_1417320((__int64)v64, v98);
              v63 = *(_DWORD *)(a1 + 20);
              v64 = *(__int64 **)(a1 + 8);
            }
            if ( !v63 )
              v63 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v63;
            sub_14634E0(v64, v98->m128i_i32);
          }
          *(_BYTE *)(a1 + 2064) = v49;
        }
LABEL_87:
        sub_190D5E0(v47);
        if ( *(_WORD *)(a1 + 32) != 27 )
          goto LABEL_22;
        goto LABEL_88;
      }
      if ( v48 == 24 )
        v73 = sub_14EE310(a1);
      else
        v73 = sub_14BDAD0(a1, 0, (__m128i)0LL);
      v99 = v73;
      goto LABEL_87;
    }
    *(_QWORD *)&v129[4] = a1;
    LODWORD(v130) = 1507350;
    v127 = (char *)v104;
    v59 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v128 = v59;
    WORD2(v130) = 63;
    v131 = sub_146A990;
    v132 = 0;
    v133 = 0;
    sub_149FA40((__int64)&v127);
    ptr = &v137;
    v136 = 0xC00000000LL;
    if ( v8 )
    {
      sub_156E210(&v127);
      *v8 = 1;
    }
    else if ( (unsigned __int8)sub_14BDD40(a1, (__int64)&ptr, nullptr, 0, 0, (__m128i)0LL) )
    {
      sub_156E210(&v127);
      v99 = 1;
    }
    else
    {
      sub_14808E0((__int64)&v127, (__int64 *)&ptr, v79, v80, v81, v82);
      v99 = sub_18C2A90(*(_QWORD *)(a1 + 96), (unsigned int)v133, HIDWORD(v133), ptr, (unsigned int)v136);
    }
    if ( ptr != &v137 )
      free(ptr);
    v95 = 2;
    *v127 = v128;
    v19 = *(_WORD *)(a1 + 32);
    goto LABEL_21;
  }
  if ( v8 )
    goto LABEL_178;
  v96 = v39;
  sub_1564820(&ptr, a1, *(unsigned int *)(a1 + 16), 1574);
  sub_AEA040((__int64)&ptr);
  result = v96;
LABEL_94:
  *v119 = v120;
  return result;
}
