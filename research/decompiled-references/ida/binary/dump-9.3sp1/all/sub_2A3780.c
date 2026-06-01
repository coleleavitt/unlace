__int64 __fastcall sub_2A3780(__int64 a1, __int64 *a2)
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
  __int64 (__fastcall ***v12)(); // rsi
  unsigned __int64 v13; // rax
  int v14; // r8d
  int v15; // r9d
  unsigned __int64 v16; // rdx
  int v17; // ecx
  __int64 *v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // r15
  __int64 (__fastcall **v21)(); // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // r14
  __int32 v27; // edi
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm1
  int v37; // eax
  int v38; // edx
  __int64 v39; // rax
  unsigned __int64 v40; // r12
  __int64 v41; // r14
  __m128i *v42; // r14
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  char tinfo_property; // al
  char v58; // al
  char v59; // r15
  __int64 tinfo_size; // r15
  __int64 (__fastcall *v61)(); // rdi
  unsigned int v62; // eax
  unsigned int v63; // edx
  __int64 v64; // rdx
  char v65; // r15
  bool v66; // zf
  __int64 v67; // rbx
  __int64 v68; // r15
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
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // r15
  char v95; // al
  unsigned int v96; // eax
  __int64 v98; // [rsp+8h] [rbp-140h]
  __int64 v99; // [rsp+8h] [rbp-140h]
  __int64 v100; // [rsp+8h] [rbp-140h]
  __int64 v101; // [rsp+8h] [rbp-140h]
  int v102; // [rsp+1Ch] [rbp-12Ch]
  int v103; // [rsp+1Ch] [rbp-12Ch]
  __int64 v104; // [rsp+20h] [rbp-128h]
  __int64 v105; // [rsp+20h] [rbp-128h]
  int v106; // [rsp+20h] [rbp-128h]
  __int64 v107; // [rsp+20h] [rbp-128h]
  unsigned int v108; // [rsp+30h] [rbp-118h]
  int v109; // [rsp+34h] [rbp-114h]
  char v110; // [rsp+38h] [rbp-110h]
  __int64 v111; // [rsp+38h] [rbp-110h]
  __int64 v112; // [rsp+40h] [rbp-108h]
  char v113; // [rsp+40h] [rbp-108h]
  char v114; // [rsp+40h] [rbp-108h]
  unsigned int v115; // [rsp+40h] [rbp-108h]
  unsigned __int8 v116; // [rsp+48h] [rbp-100h]
  char v117; // [rsp+48h] [rbp-100h]
  unsigned __int8 v118; // [rsp+50h] [rbp-F8h]
  char v119; // [rsp+50h] [rbp-F8h]
  char v120; // [rsp+50h] [rbp-F8h]
  char v121; // [rsp+50h] [rbp-F8h]
  int v122; // [rsp+58h] [rbp-F0h]
  char v123; // [rsp+5Ch] [rbp-ECh]
  char v124; // [rsp+5Dh] [rbp-EBh]
  char v125; // [rsp+5Dh] [rbp-EBh]
  unsigned __int8 v126; // [rsp+5Eh] [rbp-EAh]
  unsigned __int8 v127; // [rsp+5Fh] [rbp-E9h]
  unsigned __int8 v128; // [rsp+5Fh] [rbp-E9h]
  int v129; // [rsp+64h] [rbp-E4h] BYREF
  __int64 (__fastcall ***v130)(); // [rsp+68h] [rbp-E0h] BYREF
  __int64 v131; // [rsp+70h] [rbp-D8h]
  __int64 v132; // [rsp+78h] [rbp-D0h]
  __int64 v133; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v134; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v135)(); // [rsp+A0h] [rbp-A8h] BYREF
  __int64 i; // [rsp+A8h] [rbp-A0h]
  __int128 v137; // [rsp+B0h] [rbp-98h]
  __int64 v138; // [rsp+C0h] [rbp-88h]
  int v139; // [rsp+C8h] [rbp-80h]
  __int64 (__fastcall **v140)(); // [rsp+D0h] [rbp-78h] BYREF
  __int64 j; // [rsp+D8h] [rbp-70h]
  __m128i v142; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v143; // [rsp+F0h] [rbp-58h]
  __int32 v144; // [rsp+F8h] [rbp-50h]
  int v145; // [rsp+FCh] [rbp-4Ch]
  int v146; // [rsp+100h] [rbp-48h]
  unsigned __int64 v147; // [rsp+108h] [rbp-40h]

  v2 = a1;
  v147 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v134 = 0;
  v133 = 0;
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 440);
  if ( v5 )
  {
    v133 = qvector_reserve((__int64)&v133, 0, *(_QWORD *)(v4 + 440), 1);
    memset((void *)(v133 + v134), 0, v5 - v134);
    *(_QWORD *)&v134 = v5;
  }
  v109 = a2[1];
  if ( !a2[1] )
  {
    v108 = 0;
    goto LABEL_52;
  }
  v123 = 0;
  v6 = 0;
  v7 = 0;
  v108 = 0;
  do
  {
    while ( 1 )
    {
      v20 = *a2 + 48 * v7;
      v21 = *(__int64 (__fastcall ***)())v20;
      if ( !*(_DWORD *)(v2 + 72) && v109 > v6 )
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
      v130 = nullptr;
      v24 = *(_QWORD *)(*(_QWORD *)v2 + 112LL);
      i = v2;
      *(_QWORD *)&v137 = v21;
      v98 = v24;
      v135 = &off_4E0EA0;
      v25 = *(_QWORD *)(v23 + 8);
      v105 = *(_QWORD *)(v25 + 432);
      if ( (v22 & 0x40000) != 0 )
      {
        *(_DWORD *)(v20 + 40) |= 8u;
        v25 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      }
      v26 = sub_2A3210((__int64)&v130, &v129, v25, v20, (unsigned __int8 (__fastcall ***)(_QWORD, __int64))&v135);
      if ( !v26 )
      {
LABEL_31:
        v18 = (__int64 *)(v21 + 10);
        goto LABEL_18;
      }
      v102 = sub_32E340(&v130, &v129);
      if ( (v129 & 4) != 0
        || (v129 & 0x80u) != 0
        && (v129 & 3) == 0
        && (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (v58 = get_tinfo_property(), (v58 & 0x3E) != 0)
        && (v58 & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (_BYTE)v130
        && (((unsigned __int8)v130 & 0xE) != 0 || ((unsigned __int8)v130 & 0x30) == 0)
        && (v140 = nullptr,
            v140 = (__int64 (__fastcall **)())get_tinfo_property(),
            v59 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            v59 != 48)
        && sub_29A1B0((__int64 *)v21 + 10)
        && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size()) )
      {
        ++v102;
      }
      set_tinfo_property();
      sub_299900(v24, (__int64 *)&v130, &v129, v8, v9, v10);
      if ( (unsigned __int8)sub_29CC80(&v130) )
      {
        v11 = *((int *)v21 + 22);
        if ( v11 != get_tinfo_size() )
          sub_29CA60(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 216LL), (unsigned int)&v130, *((_DWORD *)v21 + 22));
      }
      v12 = v130;
      v110 = v129;
      v112 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      v13 = get_tinfo_size();
      v16 = *((int *)v21 + 22);
      if ( v13 != v16 )
      {
        v17 = *((_DWORD *)v21 + 6);
        if ( ((v17 & 0x10) == 0 || (BYTE1(v17) &= 1u) != 0) && v16 != -1 )
          goto LABEL_31;
        if ( v13 < v16 )
        {
          v64 = (__int64)v21 - *(_QWORD *)(v112 + 432);
          v146 = v13;
          v12 = &v140;
          j = 0;
          v142 = 0u;
          v143 = 0;
          LOBYTE(v144) = 0;
          v140 = &off_4E0E78;
          v145 = -991146299 * (v64 >> 3);
          if ( (unsigned int)sub_11FBB0(v112, (__int64)&v140) )
          {
            v18 = (__int64 *)(v21 + 10);
            goto LABEL_18;
          }
        }
      }
      v18 = (__int64 *)(v21 + 10);
      v122 = sub_32E340(v21 + 10, v12) - ((((_DWORD)v21[3] & 0x4000) == 0) - 1);
      v14 = compare_tinfo();
      v17 = -991146299;
      v104 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v21 - v105) >> 3);
      if ( (_BYTE)v14 )
      {
        if ( v102 < v122 )
        {
          v140 = nullptr;
          v140 = (__int64 (__fastcall **)())get_tinfo_property();
          v113 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v113 & 0x3F) != 1 )
            goto LABEL_81;
        }
        else if ( v102 == v122 && ((unsigned __int8)v130 & 0x3F) == 0x3D && ((_BYTE)v21[10] & 0x3F) != 0x3D )
        {
LABEL_81:
          *(_BYTE *)(v133 + (int)v104) = 1;
          v106 = (_DWORD)v21[3] & 0x800;
          if ( v102 > 0 )
          {
LABEL_82:
            sub_1EF950((__int64)v21, v98, &v130, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 72LL), 0);
            v62 = *((_DWORD *)v21 + 6);
            if ( !v26 )
              v62 = (_DWORD)v21[3] & 0xFFFBFFFD | 2;
            v63 = v62;
            BYTE1(v62) &= ~0x40u;
            BYTE1(v63) |= 0x40u;
            if ( (v110 & 4) != 0 )
              v62 = v63;
            if ( !v106 )
              v123 |= (v62 & 0x800) != 0;
            *((_DWORD *)v21 + 6) = v62 & 0xFFFFFFEF;
            goto LABEL_21;
          }
LABEL_96:
          v140 = nullptr;
          v140 = (__int64 (__fastcall **)())get_tinfo_property();
          v65 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v65 != 1 && ((v110 & 0x20) == 0 || (get_tinfo_property() & 0xF) == 0xA) )
          {
            v26 = 0;
            if ( *(_DWORD *)(v2 + 72) <= 1u && (v110 & 8) != 0 )
              v26 = (get_tinfo_property() & 0xF) == 10;
          }
          goto LABEL_82;
        }
        goto LABEL_18;
      }
      v15 = sub_36E320(v112, v21, &v130);
      if ( !(_BYTE)v15 )
        goto LABEL_18;
      v61 = v21[10];
      v14 = 0;
      if ( ((unsigned __int8)v61 & 0xE) != 0 )
      {
        v124 = (unsigned __int8)v130 & 0xF;
        if ( ((unsigned __int8)v61 & 0xF) != 0xA )
        {
          v66 = v124 == 10;
          v125 = 0;
          if ( v66 )
            goto LABEL_118;
          goto LABEL_106;
        }
        v128 = v15;
        v140 = nullptr;
        v140 = (__int64 (__fastcall **)())get_tinfo_property();
        v120 = get_tinfo_property();
        clear_tinfo_t();
        v14 = 0;
        LOBYTE(v15) = v128;
        if ( (v120 & 0x3F) == 1 )
        {
          if ( v124 == 10 )
            goto LABEL_159;
          goto LABEL_125;
        }
        v131 = 0;
        v131 = get_tinfo_property();
        v121 = v131;
        clear_tinfo_t();
        v15 = v128;
        LOBYTE(v14) = (v121 & 0x3F) != 48;
        if ( v124 != 10 )
        {
          LOBYTE(v14) = ((v110 & 8) == 0) & v14;
          if ( (_BYTE)v14 )
            goto LABEL_18;
LABEL_125:
          v125 = v15;
          goto LABEL_106;
        }
LABEL_159:
        v125 = v15;
LABEL_118:
        v127 = v15;
        v126 = v14;
        v140 = nullptr;
        v140 = (__int64 (__fastcall **)())get_tinfo_property();
        v119 = get_tinfo_property();
        clear_tinfo_t();
        v14 = v126;
        v15 = v127;
        if ( (v119 & 0x3F) == 1
          || (v132 = 0,
              v132 = get_tinfo_property(),
              v117 = v132,
              clear_tinfo_t(),
              v14 = v126,
              v15 = v127,
              (v117 & 0x3F) == 0x30) )
        {
          LOBYTE(v14) = ((v110 & 8) == 0) & v14;
          if ( (_BYTE)v14 )
            goto LABEL_18;
          goto LABEL_107;
        }
        if ( (v110 & 8) != 0 )
        {
          if ( v126 )
            goto LABEL_152;
        }
        else
        {
          if ( !v126 )
            goto LABEL_81;
LABEL_152:
          if ( (unsigned __int8)sub_29D2B0(*(_QWORD *)(v112 + 1496), v112, 0) )
            goto LABEL_18;
          v95 = sub_29D2B0(*(_QWORD *)(v112 + 1496), v112, 0);
          v15 = v127;
          if ( v95 )
            goto LABEL_81;
        }
        v14 = v15;
        goto LABEL_107;
      }
      if ( ((unsigned __int8)v61 & 0x30) != 0 )
        goto LABEL_81;
      v125 = 0;
      if ( ((unsigned __int8)v130 & 0xF) == 0xA )
        goto LABEL_118;
LABEL_106:
      v15 = 0;
LABEL_107:
      v118 = v15;
      v17 = v122;
      v116 = v14;
      if ( v102 < v122 )
        goto LABEL_81;
      if ( v102 <= v122 )
      {
        if ( (unsigned __int8)sub_29A3A0(*(_QWORD *)(v112 + 1496), (__int64)(v21 + 10), (__int64)&v130, 1) )
          goto LABEL_81;
        v14 = v116;
        v15 = v118;
        if ( ((unsigned __int8)v130 & 0xFu) <= 9
          || (v115 = score_tinfo(), v96 = score_tinfo(), v14 = v116, v15 = v118, v96 >= v115) )
        {
          if ( v125 && (_BYTE)v15 && (!(_BYTE)v14 || (unsigned __int8)compare_tinfo()) )
          {
            v140 = nullptr;
            v140 = (__int64 (__fastcall **)())get_tinfo_property();
            v114 = (char)v140;
            clear_tinfo_t();
            if ( (v114 & 0x40) != 0 )
              goto LABEL_81;
          }
          else if ( !v102 && !(unsigned __int8)compare_tinfo() )
          {
            *(_BYTE *)(v133 + (int)v104) = 1;
            v106 = (_DWORD)v21[3] & 0x800;
            goto LABEL_96;
          }
        }
      }
LABEL_18:
      if ( (unsigned __int8)sub_299900(v98, v18, &v129, v17, v14, v15) )
      {
        if ( (v129 & 4) != 0 )
          *((_DWORD *)v21 + 6) |= 0x4000u;
LABEL_21:
        ++v108;
      }
      clear_tinfo_t();
      v19 = a2[1];
LABEL_23:
      v7 = ++v6;
      if ( v6 >= v19 )
        goto LABEL_50;
    }
    v30 = *(_QWORD *)(v20 + 8);
    v31 = 0;
    while ( 1 )
    {
      v32 = v30 + 32 * v31;
      if ( *(_DWORD *)v32 == 6 )
      {
        v33 = *(_QWORD *)(v32 + 8);
        if ( *(_DWORD *)(v33 + 8) == 52 )
        {
          v34 = *(_QWORD *)(v33 + 24);
          if ( *(_DWORD *)(v34 + 8) == 65 )
          {
            v35 = *(_QWORD *)(*(_QWORD *)(v34 + 24) + 432LL) + 104LL * *(int *)(v34 + 32);
            if ( v21 != (__int64 (__fastcall **)())v35 && (*(_BYTE *)(v35 + 24) & 2) == 0 )
              break;
          }
        }
      }
      v28 = (unsigned int)(v28 + 1);
      v31 = (int)v28;
      if ( (int)v28 >= v29 )
        goto LABEL_26;
    }
    v135 = *(__int64 (__fastcall ***)())v20;
    i = 0;
    v137 = 0;
    v99 = *(_QWORD *)(v20 + 16);
    if ( v99 )
    {
      v81 = qalloc_or_throw(32 * v99, v30, v28, v29);
      *((_QWORD *)&v137 + 1) = v99;
      v82 = v81;
      v83 = 0;
      for ( i = v81; ; v82 = i )
      {
        v84 = 32 * v83 + v82;
        v85 = (unsigned int *)(*(_QWORD *)(v20 + 8) + 32 * v83);
        *(_DWORD *)v84 = 0;
        v86 = v85;
        sub_29F770(v84, v85);
        *(_QWORD *)(v84 + 16) = 0;
        copy_tinfo_t();
        ++v83;
        *(_QWORD *)(v84 + 24) = *((_QWORD *)v86 + 3);
        if ( v99 == v83 )
          break;
      }
      *(_QWORD *)&v137 = v99;
      v88 = *(_DWORD *)(v20 + 40);
      v89 = *(_QWORD *)(v20 + 32);
      v142 = 0;
      v139 = v88;
      v138 = v89;
      v140 = v135;
      j = 0;
      v90 = qalloc_or_throw(32 * v99, (__int64)(v86 + 4), v89, v87);
      v142.m128i_i64[1] = v99;
      v91 = v90;
      v92 = 0;
      for ( j = v90; ; v91 = j )
      {
        v93 = 32 * v92 + v91;
        v94 = i + 32 * v92;
        *(_DWORD *)v93 = 0;
        sub_29F770(v93, (unsigned int *)v94);
        *(_QWORD *)(v93 + 16) = 0;
        copy_tinfo_t();
        ++v92;
        *(_QWORD *)(v93 + 24) = *(_QWORD *)(v94 + 24);
        if ( v99 == v92 )
          break;
      }
      v38 = HIDWORD(v138);
      v27 = v139;
      v142.m128i_i64[0] = v99;
      v37 = v138;
    }
    else
    {
      v36 = _mm_loadl_epi64((const __m128i *)(v20 + 32));
      v139 = v27;
      v140 = v21;
      j = 0;
      v37 = _mm_cvtsi128_si32(v36);
      v38 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v36, 229));
      v138 = v36.m128i_i64[0];
      v142 = 0;
    }
    v143 = __PAIR64__(v38, v37);
    v39 = a2[1];
    v40 = a2[2];
    v144 = v27;
    if ( v40 < v39 + 1 )
    {
      v41 = qvector_reserve((__int64)a2, 0, v39 + 1, 48);
      v67 = a2[2];
      v68 = *a2;
      a2[2] = v40;
      v100 = a2[1];
      if ( v100 - 1 >= 0 )
      {
        v103 = v6;
        v69 = (__m128i *)v41;
        v107 = v67;
        v70 = (const __m128i *)v68;
        v111 = v2;
        v71 = v100 - 1;
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
              v101 = v71;
              v76 = 0;
              v77 = v70[1].m128i_i64[0];
              do
              {
                v78 = v76++;
                v79 = v75 + 32 * v78;
                clear_tinfo_t();
                sub_29EC30(v79);
                v75 = v70->m128i_i64[1];
              }
              while ( v77 != v76 );
              v71 = v101;
            }
            v70[1].m128i_i64[0] = 0;
            qfree(v75);
          }
          v70 += 3;
          v69 += 3;
        }
        while ( v71-- != 0 );
        v6 = v103;
        v67 = v107;
        v2 = v111;
        v68 = *a2;
      }
      qfree(v68);
      *a2 = v41;
      a2[2] = v67;
      v39 = a2[1];
    }
    else
    {
      v41 = *a2;
    }
    v42 = (__m128i *)(48 * v39 + v41);
    v42->m128i_i64[0] = (__int64)v140;
    v43 = _mm_load_si128(&v142);
    v42->m128i_i64[1] = j;
    v42[1] = v43;
    v42[2].m128i_i64[0] = v143;
    v42[2].m128i_i32[2] = v144;
    v44 = i;
    v19 = a2[1] + 1;
    a2[1] = v19;
    if ( !v44 )
      goto LABEL_23;
    v45 = v137;
    if ( (_QWORD)v137 )
    {
      v46 = 0;
      do
      {
        v47 = v46++;
        v48 = v44 + 32 * v47;
        clear_tinfo_t();
        sub_29EC30(v48);
        v44 = i;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v137 = 0;
    ++v6;
    qfree(v44);
    v7 = v6;
  }
  while ( v6 < (unsigned __int64)a2[1] );
LABEL_50:
  if ( v123 )
    sub_1F1240(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL));
LABEL_52:
  v49 = v133;
  if ( *(int *)(v2 + 72) > 1 )
  {
    v50 = *(_QWORD *)(v2 + 8);
    v51 = *(_QWORD *)(v50 + 8);
    if ( *(_QWORD *)(v51 + 440) )
    {
      v52 = 0;
      v53 = 0;
      do
      {
        if ( !*(_BYTE *)(v49 + v53) )
        {
          v54 = *(_QWORD *)(v51 + 432) + 104 * v53;
          v55 = *(_DWORD *)(v54 + 24);
          if ( (v55 & 0x4000) != 0 )
          {
            BYTE1(v55) &= ~0x40u;
            *(_DWORD *)(v54 + 24) = v55;
            v50 = *(_QWORD *)(v2 + 8);
          }
        }
        v51 = *(_QWORD *)(v50 + 8);
        v53 = ++v52;
      }
      while ( (unsigned __int64)v52 < *(_QWORD *)(v51 + 440) );
    }
  }
  if ( v49 )
  {
    *(_QWORD *)&v134 = 0;
    qfree(v49);
  }
  return v108;
}
