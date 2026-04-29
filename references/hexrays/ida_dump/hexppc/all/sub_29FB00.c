__int64 __fastcall sub_29FB00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // r13d
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // rdx
  int v17; // ecx
  _QWORD *v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  __int64 (__fastcall **v21)(); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // r14
  __int32 v27; // edi
  int v28; // edx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm1
  int v36; // eax
  int v37; // edx
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // r14
  __m128i *v41; // r14
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rcx
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  char tinfo_property; // al
  char v57; // al
  char v58; // r15
  __int64 tinfo_size; // r15
  __int64 (__fastcall *v60)(); // rdi
  unsigned int v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rdx
  char v64; // r15
  __int64 v65; // rax
  bool v66; // zf
  __int64 v67; // rbx
  const __m128i *v68; // r15
  __m128i *v69; // r12
  const __m128i *v70; // rbx
  __int64 v71; // rbp
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // r13
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // r14
  __int64 v84; // rbx
  unsigned int *v85; // rdx
  unsigned int *v86; // r12
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // r14
  __int64 v92; // rbx
  __int64 v93; // r15
  __int64 (__fastcall *v94)(); // rdi
  char v95; // al
  unsigned int v96; // eax
  __int64 v98; // [rsp+8h] [rbp-140h]
  __int64 v99; // [rsp+8h] [rbp-140h]
  __int64 v100; // [rsp+8h] [rbp-140h]
  int v101; // [rsp+1Ch] [rbp-12Ch]
  int v102; // [rsp+1Ch] [rbp-12Ch]
  __int64 v103; // [rsp+20h] [rbp-128h]
  __int64 v104; // [rsp+20h] [rbp-128h]
  int v105; // [rsp+20h] [rbp-128h]
  __int64 v106; // [rsp+20h] [rbp-128h]
  unsigned int v107; // [rsp+30h] [rbp-118h]
  int v108; // [rsp+34h] [rbp-114h]
  char v109; // [rsp+38h] [rbp-110h]
  __int64 v110; // [rsp+38h] [rbp-110h]
  __int64 v111; // [rsp+40h] [rbp-108h]
  char v112; // [rsp+40h] [rbp-108h]
  char v113; // [rsp+40h] [rbp-108h]
  unsigned int v114; // [rsp+40h] [rbp-108h]
  unsigned __int8 v115; // [rsp+48h] [rbp-100h]
  char v116; // [rsp+48h] [rbp-100h]
  unsigned __int8 v117; // [rsp+50h] [rbp-F8h]
  char v118; // [rsp+50h] [rbp-F8h]
  char v119; // [rsp+50h] [rbp-F8h]
  char v120; // [rsp+50h] [rbp-F8h]
  int v121; // [rsp+58h] [rbp-F0h]
  char v122; // [rsp+5Ch] [rbp-ECh]
  char v123; // [rsp+5Dh] [rbp-EBh]
  char v124; // [rsp+5Dh] [rbp-EBh]
  unsigned __int8 v125; // [rsp+5Eh] [rbp-EAh]
  unsigned __int8 v126; // [rsp+5Fh] [rbp-E9h]
  unsigned __int8 v127; // [rsp+5Fh] [rbp-E9h]
  int v128; // [rsp+64h] [rbp-E4h] BYREF
  __int64 v129; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v130; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v131; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v132; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v133; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v134)(); // [rsp+A0h] [rbp-A8h] BYREF
  __int64 i; // [rsp+A8h] [rbp-A0h]
  __int128 v136; // [rsp+B0h] [rbp-98h]
  __int64 v137; // [rsp+C0h] [rbp-88h]
  int v138; // [rsp+C8h] [rbp-80h]
  __int64 (__fastcall **v139)(); // [rsp+D0h] [rbp-78h] BYREF
  __int64 j; // [rsp+D8h] [rbp-70h]
  __m128i v141; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v142; // [rsp+F0h] [rbp-58h]
  __int32 v143; // [rsp+F8h] [rbp-50h]
  int v144; // [rsp+FCh] [rbp-4Ch]
  int v145; // [rsp+100h] [rbp-48h]
  unsigned __int64 v146; // [rsp+108h] [rbp-40h]

  v2 = a1;
  v146 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v133 = 0;
  v132 = 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 440);
  if ( v5 )
  {
    v132 = qvector_reserve(&v132, 0, *(_QWORD *)(v4 + 440), 1);
    memset((void *)(v132 + v133), 0, v5 - v133);
    *(_QWORD *)&v133 = v5;
  }
  v108 = a2[1];
  if ( !a2[1] )
  {
    v107 = 0;
    goto LABEL_52;
  }
  v122 = 0;
  v6 = 0;
  v7 = 0;
  v107 = 0;
  do
  {
    while ( 1 )
    {
      v20 = *a2 + 48 * v7;
      v21 = *(__int64 (__fastcall ***)())v20;
      if ( !*(_DWORD *)(v2 + 72) && v108 > v6 )
      {
        v27 = *(_DWORD *)(v20 + 40);
        v28 = v27 & 8;
        if ( (v27 & 8) == 0 )
        {
          v29 = *(_QWORD *)(v20 + 16);
          if ( v29 )
            break;
        }
      }
LABEL_26:
      v22 = *((_DWORD *)v21 + 6);
      v23 = *(_QWORD *)(v2 + 8);
      if ( (v22 & 0x80u) != 0 && *(_BYTE *)(*(_QWORD *)(v23 + 8) + 320LL) )
      {
        v19 = a2[1];
        goto LABEL_23;
      }
      v129 = 0;
      v24 = *(_QWORD *)(*(_QWORD *)v2 + 112LL);
      i = v2;
      *(_QWORD *)&v136 = v21;
      v134 = &off_4CDFC0;
      v25 = *(_QWORD *)(v23 + 8);
      v104 = *(_QWORD *)(v25 + 432);
      if ( (v22 & 0x40000) != 0 )
      {
        *(_DWORD *)(v20 + 40) |= 8u;
        v25 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      }
      v26 = sub_29F590((__int64)&v129, &v128, v25, v20, (unsigned __int8 (__fastcall ***)(_QWORD, __int64))&v134);
      if ( !v26 )
      {
LABEL_31:
        v18 = v21 + 10;
        goto LABEL_18;
      }
      v101 = sub_32A000(&v129);
      if ( (v128 & 4) != 0
        || (v128 & 0x80u) != 0
        && (v128 & 3) == 0
        && (tinfo_property = get_tinfo_property(v129, 2), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8
        && (get_tinfo_property(v129, 2) & 0xF) != 8
        && (v57 = get_tinfo_property(v21[10], 2), (v57 & 0x3E) != 0)
        && (v57 & 0xFu) <= 8
        && (get_tinfo_property(v21[10], 2) & 0xF) != 8
        && (_BYTE)v129
        && ((v129 & 0xE) != 0 || (v129 & 0x30) == 0)
        && (v139 = nullptr,
            v139 = (__int64 (__fastcall **)())get_tinfo_property(v129, 9),
            v58 = get_tinfo_property(v139, 2) & 0x3F,
            clear_tinfo_t(&v139),
            v58 != 48)
        && sub_296530((__int64 *)v21 + 10)
        && (tinfo_size = get_tinfo_size(0, v129, 0), tinfo_size == get_tinfo_size(0, v21[10], 0)) )
      {
        ++v101;
      }
      set_tinfo_property(&v129, 6, 64);
      sub_295C80(v24, &v129, &v128, v8, v9, v10);
      if ( (unsigned __int8)sub_299000(&v129) )
      {
        v11 = *((int *)v21 + 22);
        if ( v11 != get_tinfo_size(0, v129, 0) )
          sub_298DE0(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 216LL), (__int64)&v129, *((unsigned int *)v21 + 22), v12);
      }
      v109 = v128;
      v111 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      v13 = get_tinfo_size(0, v129, 0);
      v16 = *((int *)v21 + 22);
      if ( v13 != v16 )
      {
        v17 = *((_DWORD *)v21 + 6);
        if ( ((v17 & 0x10) == 0 || (BYTE1(v17) &= 1u) != 0) && v16 != -1 )
          goto LABEL_31;
        if ( v13 < v16 )
        {
          v63 = (__int64)v21 - *(_QWORD *)(v111 + 432);
          v145 = v13;
          j = 0;
          v141 = 0u;
          v142 = 0;
          LOBYTE(v143) = 0;
          v139 = &off_4CDF98;
          v144 = -991146299 * (v63 >> 3);
          if ( (unsigned int)sub_11C170(v111, (__int64)&v139) )
          {
            v18 = v21 + 10;
            goto LABEL_18;
          }
        }
      }
      v18 = v21 + 10;
      v121 = sub_32A000(v21 + 10) - ((((_DWORD)v21[3] & 0x4000) == 0) - 1);
      v14 = compare_tinfo(v129, v21[10], 0);
      v17 = -991146299;
      v103 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v21 - v104) >> 3);
      if ( (_BYTE)v14 )
      {
        if ( v101 < v121 )
        {
          v139 = nullptr;
          v139 = (__int64 (__fastcall **)())get_tinfo_property(v129, 9);
          v112 = get_tinfo_property(v139, 2);
          clear_tinfo_t(&v139);
          if ( (v112 & 0x3F) != 1 )
            goto LABEL_81;
        }
        else if ( v101 == v121 && (v129 & 0x3F) == 0x3D && ((_BYTE)v21[10] & 0x3F) != 0x3D )
        {
LABEL_81:
          *(_BYTE *)(v132 + (int)v103) = 1;
          v105 = (_DWORD)v21[3] & 0x800;
          if ( v101 > 0 )
          {
LABEL_82:
            sub_1EBCD0((__int64)v21, v24, &v129, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 72LL), 0);
            v61 = *((_DWORD *)v21 + 6);
            if ( !v26 )
              v61 = (_DWORD)v21[3] & 0xFFFBFFFD | 2;
            v62 = v61;
            BYTE1(v61) &= ~0x40u;
            BYTE1(v62) |= 0x40u;
            if ( (v109 & 4) != 0 )
              v61 = v62;
            if ( !v105 )
              v122 |= (v61 & 0x800) != 0;
            *((_DWORD *)v21 + 6) = v61 & 0xFFFFFFEF;
            goto LABEL_21;
          }
LABEL_96:
          v139 = nullptr;
          v139 = (__int64 (__fastcall **)())get_tinfo_property(v129, 9);
          v64 = get_tinfo_property(v139, 2) & 0x3F;
          clear_tinfo_t(&v139);
          if ( v64 != 1 && ((v109 & 0x20) == 0 || (get_tinfo_property(v129, 2) & 0xF) == 0xA) )
          {
            v26 = 0;
            if ( *(_DWORD *)(v2 + 72) <= 1u && (v109 & 8) != 0 )
              v26 = (get_tinfo_property(v129, 2) & 0xF) == 10;
          }
          goto LABEL_82;
        }
        goto LABEL_18;
      }
      v15 = sub_36A1A0(v111, v21, &v129);
      if ( !(_BYTE)v15 )
        goto LABEL_18;
      v60 = v21[10];
      v14 = 0;
      if ( ((unsigned __int8)v60 & 0xE) != 0 )
      {
        v65 = v129;
        v123 = v129 & 0xF;
        if ( ((unsigned __int8)v60 & 0xF) != 0xA )
        {
          v66 = v123 == 10;
          v124 = 0;
          if ( v66 )
            goto LABEL_118;
          goto LABEL_106;
        }
        v127 = v15;
        v139 = nullptr;
        v139 = (__int64 (__fastcall **)())get_tinfo_property(v60, 9);
        v119 = get_tinfo_property(v139, 2);
        clear_tinfo_t(&v139);
        v14 = 0;
        LOBYTE(v15) = v127;
        if ( (v119 & 0x3F) == 1 )
        {
          if ( v123 == 10 )
            goto LABEL_159;
          goto LABEL_125;
        }
        v94 = v21[10];
        v130 = 0;
        v130 = get_tinfo_property(v94, 9);
        v120 = v130;
        clear_tinfo_t(&v130);
        v15 = v127;
        LOBYTE(v14) = (v120 & 0x3F) != 48;
        if ( v123 != 10 )
        {
          LOBYTE(v14) = ((v109 & 8) == 0) & v14;
          if ( (_BYTE)v14 )
            goto LABEL_18;
LABEL_125:
          v124 = v15;
          goto LABEL_106;
        }
LABEL_159:
        v124 = v15;
        v65 = v129;
LABEL_118:
        v126 = v15;
        v125 = v14;
        v139 = nullptr;
        v139 = (__int64 (__fastcall **)())get_tinfo_property(v65, 9);
        v118 = get_tinfo_property(v139, 2);
        clear_tinfo_t(&v139);
        v14 = v125;
        v15 = v126;
        if ( (v118 & 0x3F) == 1
          || (v131 = 0,
              v131 = get_tinfo_property(v129, 9),
              v116 = v131,
              clear_tinfo_t(&v131),
              v14 = v125,
              v15 = v126,
              (v116 & 0x3F) == 0x30) )
        {
          LOBYTE(v14) = ((v109 & 8) == 0) & v14;
          if ( (_BYTE)v14 )
            goto LABEL_18;
          goto LABEL_107;
        }
        if ( (v109 & 8) != 0 )
        {
          if ( v125 )
            goto LABEL_152;
        }
        else
        {
          if ( !v125 )
            goto LABEL_81;
LABEL_152:
          if ( (unsigned __int8)sub_299630(*(_QWORD *)(v111 + 1496), v111, 0, v21 + 10, &v129) )
            goto LABEL_18;
          v95 = sub_299630(*(_QWORD *)(v111 + 1496), v111, 0, &v129, v21 + 10);
          v15 = v126;
          if ( v95 )
            goto LABEL_81;
        }
        v14 = v15;
        goto LABEL_107;
      }
      if ( ((unsigned __int8)v60 & 0x30) != 0 )
        goto LABEL_81;
      v65 = v129;
      v124 = 0;
      if ( (v129 & 0xF) == 0xA )
        goto LABEL_118;
LABEL_106:
      v15 = 0;
LABEL_107:
      v117 = v15;
      v17 = v121;
      v115 = v14;
      if ( v101 < v121 )
        goto LABEL_81;
      if ( v101 <= v121 )
      {
        if ( (unsigned __int8)sub_296720(*(_QWORD *)(v111 + 1496), (__int64)(v21 + 10), (__int64)&v129, 1) )
          goto LABEL_81;
        v14 = v115;
        v15 = v117;
        if ( ((unsigned __int8)v129 & 0xFu) <= 9
          || (v114 = score_tinfo(v21 + 10), v96 = score_tinfo(&v129), v14 = v115, v15 = v117, v96 >= v114) )
        {
          if ( v124 && (_BYTE)v15 && (!(_BYTE)v14 || (unsigned __int8)compare_tinfo(v21[10], v129, 17)) )
          {
            v139 = nullptr;
            v139 = (__int64 (__fastcall **)())get_tinfo_property(v21[10], 9);
            v113 = (char)v139;
            clear_tinfo_t(&v139);
            if ( (v113 & 0x40) != 0 )
              goto LABEL_81;
          }
          else if ( !v101 && !(unsigned __int8)compare_tinfo(v21[10], v129, 0) )
          {
            *(_BYTE *)(v132 + (int)v103) = 1;
            v105 = (_DWORD)v21[3] & 0x800;
            goto LABEL_96;
          }
        }
      }
LABEL_18:
      if ( (unsigned __int8)sub_295C80(v24, v18, &v128, v17, v14, v15) )
      {
        if ( (v128 & 4) != 0 )
          *((_DWORD *)v21 + 6) |= 0x4000u;
LABEL_21:
        ++v107;
      }
      clear_tinfo_t(&v129);
      v19 = a2[1];
LABEL_23:
      v7 = ++v6;
      if ( v6 >= v19 )
        goto LABEL_50;
    }
    v30 = 0;
    while ( 1 )
    {
      v31 = *(_QWORD *)(v20 + 8) + 32 * v30;
      if ( *(_DWORD *)v31 == 6 )
      {
        v32 = *(_QWORD *)(v31 + 8);
        if ( *(_DWORD *)(v32 + 8) == 52 )
        {
          v33 = *(_QWORD *)(v32 + 24);
          if ( *(_DWORD *)(v33 + 8) == 65 )
          {
            v34 = *(_QWORD *)(*(_QWORD *)(v33 + 24) + 432LL) + 104LL * *(int *)(v33 + 32);
            if ( v21 != (__int64 (__fastcall **)())v34 && (*(_BYTE *)(v34 + 24) & 2) == 0 )
              break;
          }
        }
      }
      v30 = ++v28;
      if ( v28 >= v29 )
        goto LABEL_26;
    }
    v134 = *(__int64 (__fastcall ***)())v20;
    i = 0;
    v136 = 0;
    v98 = *(_QWORD *)(v20 + 16);
    if ( v98 )
    {
      v81 = qalloc_or_throw(32 * v98);
      *((_QWORD *)&v136 + 1) = v98;
      v82 = v81;
      v83 = 0;
      for ( i = v81; ; v82 = i )
      {
        v84 = 32 * v83 + v82;
        v85 = (unsigned int *)(*(_QWORD *)(v20 + 8) + 32 * v83);
        *(_DWORD *)v84 = 0;
        v86 = v85;
        sub_29BAF0(v84, v85);
        *(_QWORD *)(v84 + 16) = 0;
        copy_tinfo_t(v84 + 16, v86 + 4);
        ++v83;
        *(_QWORD *)(v84 + 24) = *((_QWORD *)v86 + 3);
        if ( v98 == v83 )
          break;
      }
      *(_QWORD *)&v136 = v98;
      v87 = *(_DWORD *)(v20 + 40);
      v88 = *(_QWORD *)(v20 + 32);
      v141 = 0;
      v138 = v87;
      v137 = v88;
      v139 = v134;
      j = 0;
      v89 = qalloc_or_throw(32 * v98);
      v141.m128i_i64[1] = v98;
      v90 = v89;
      v91 = 0;
      for ( j = v89; ; v90 = j )
      {
        v92 = 32 * v91 + v90;
        v93 = i + 32 * v91;
        *(_DWORD *)v92 = 0;
        sub_29BAF0(v92, (unsigned int *)v93);
        *(_QWORD *)(v92 + 16) = 0;
        copy_tinfo_t(v92 + 16, v93 + 16);
        ++v91;
        *(_QWORD *)(v92 + 24) = *(_QWORD *)(v93 + 24);
        if ( v98 == v91 )
          break;
      }
      v37 = HIDWORD(v137);
      v27 = v138;
      v141.m128i_i64[0] = v98;
      v36 = v137;
    }
    else
    {
      v35 = _mm_loadl_epi64((const __m128i *)(v20 + 32));
      v138 = v27;
      v139 = v21;
      j = 0;
      v36 = _mm_cvtsi128_si32(v35);
      v37 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v35, 229));
      v137 = v35.m128i_i64[0];
      v141 = 0;
    }
    v142 = __PAIR64__(v37, v36);
    v38 = a2[1];
    v39 = a2[2];
    v143 = v27;
    if ( v39 < v38 + 1 )
    {
      v40 = qvector_reserve(a2, 0, v38 + 1, 48);
      v67 = a2[2];
      v68 = (const __m128i *)*a2;
      a2[2] = v39;
      v99 = a2[1];
      if ( v99 - 1 >= 0 )
      {
        v102 = v6;
        v69 = (__m128i *)v40;
        v106 = v67;
        v70 = v68;
        v110 = v2;
        v71 = v99 - 1;
        do
        {
          v69->m128i_i64[0] = v70->m128i_i64[0];
          v72 = v70->m128i_i64[1];
          v73 = _mm_loadu_si128(v70 + 1);
          v70->m128i_i64[1] = 0;
          v69->m128i_i64[1] = v72;
          v69[1] = v73;
          v74 = v70[2].m128i_i64[0];
          v70[1] = 0;
          v69[2].m128i_i64[0] = v74;
          v69[2].m128i_i32[2] = v70[2].m128i_i32[2];
          v75 = v70->m128i_i64[1];
          if ( v75 )
          {
            if ( v70[1].m128i_i64[0] )
            {
              v100 = v71;
              v76 = 0;
              v77 = v70[1].m128i_i64[0];
              do
              {
                v78 = v76++;
                v79 = v75 + 32 * v78;
                clear_tinfo_t(v79 + 16);
                sub_29AFB0(v79);
                v75 = v70->m128i_i64[1];
              }
              while ( v77 != v76 );
              v71 = v100;
            }
            v70[1].m128i_i64[0] = 0;
            qfree(v75);
          }
          v70 += 3;
          v69 += 3;
        }
        while ( v71-- != 0 );
        v6 = v102;
        v67 = v106;
        v2 = v110;
        v68 = (const __m128i *)*a2;
      }
      qfree(v68);
      *a2 = v40;
      a2[2] = v67;
      v38 = a2[1];
    }
    else
    {
      v40 = *a2;
    }
    v41 = (__m128i *)(48 * v38 + v40);
    v41->m128i_i64[0] = (__int64)v139;
    v42 = _mm_load_si128(&v141);
    v41->m128i_i64[1] = j;
    v41[1] = v42;
    v41[2].m128i_i64[0] = v142;
    v41[2].m128i_i32[2] = v143;
    v43 = i;
    v19 = a2[1] + 1;
    a2[1] = v19;
    if ( !v43 )
      goto LABEL_23;
    v44 = v136;
    if ( (_QWORD)v136 )
    {
      v45 = 0;
      do
      {
        v46 = v45++;
        v47 = v43 + 32 * v46;
        clear_tinfo_t(v47 + 16);
        sub_29AFB0(v47);
        v43 = i;
      }
      while ( v44 != v45 );
    }
    *(_QWORD *)&v136 = 0;
    ++v6;
    qfree(v43);
    v7 = v6;
  }
  while ( v6 < (unsigned __int64)a2[1] );
LABEL_50:
  if ( v122 )
    sub_1ED5C0(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL));
LABEL_52:
  v48 = v132;
  if ( *(int *)(v2 + 72) > 1 )
  {
    v49 = *(_QWORD *)(v2 + 8);
    v50 = *(_QWORD *)(v49 + 8);
    if ( *(_QWORD *)(v50 + 440) )
    {
      v51 = 0;
      v52 = 0;
      do
      {
        if ( !*(_BYTE *)(v48 + v52) )
        {
          v53 = *(_QWORD *)(v50 + 432) + 104 * v52;
          v54 = *(_DWORD *)(v53 + 24);
          if ( (v54 & 0x4000) != 0 )
          {
            BYTE1(v54) &= ~0x40u;
            *(_DWORD *)(v53 + 24) = v54;
            v49 = *(_QWORD *)(v2 + 8);
          }
        }
        v50 = *(_QWORD *)(v49 + 8);
        v52 = ++v51;
      }
      while ( (unsigned __int64)v51 < *(_QWORD *)(v50 + 440) );
    }
  }
  if ( v48 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v48);
  }
  return v107;
}
