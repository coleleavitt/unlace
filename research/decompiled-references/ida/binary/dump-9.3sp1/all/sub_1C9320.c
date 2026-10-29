__int64 __fastcall sub_1C9320(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // esi
  int v10; // edx
  int v11; // ebx
  int v12; // r12d
  int v13; // r13d
  int tinfo_size; // ecx
  int v15; // ecx
  unsigned __int64 v16; // r14
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // ecx
  int v21; // ebx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // r8d
  int v33; // r9d
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  __m128i v36; // xmm0
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  __m128i v40; // xmm0
  __int64 v41; // r12
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __m128i v45; // xmm0
  __int64 v46; // rdx
  signed int v47; // ecx
  int v48; // esi
  __int64 v49; // rbx
  unsigned int v50; // ebx
  __int64 v52; // rax
  unsigned __int64 v53; // r13
  __m128i v54; // xmm0
  __int64 v55; // rdi
  char v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rbx
  int v59; // edx
  int v60; // r13d
  __int64 v61; // rbx
  __int64 v62; // r12
  __int64 v63; // r14
  int v64; // r15d
  __int64 *v65; // rax
  __int64 *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __m128i v84; // xmm0
  __int64 v85; // r13
  __int64 v86; // rbx
  __int64 *v87; // r12
  __int64 v88; // rdi
  __int64 v89; // r12
  __int64 *v90; // r13
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // r15
  __int64 v96; // rbx
  int v97; // eax
  int v98; // [rsp+10h] [rbp-200h]
  int v100; // [rsp+24h] [rbp-1ECh]
  __int64 v101; // [rsp+28h] [rbp-1E8h]
  __int64 v102; // [rsp+30h] [rbp-1E0h]
  __int64 v103; // [rsp+38h] [rbp-1D8h]
  __int64 v105; // [rsp+48h] [rbp-1C8h]
  signed int v107; // [rsp+58h] [rbp-1B8h]
  __int64 i; // [rsp+58h] [rbp-1B8h]
  int v109; // [rsp+60h] [rbp-1B0h]
  unsigned __int64 v110; // [rsp+60h] [rbp-1B0h]
  int v111; // [rsp+68h] [rbp-1A8h]
  __int64 v112; // [rsp+68h] [rbp-1A8h]
  int v113; // [rsp+70h] [rbp-1A0h]
  int v114; // [rsp+70h] [rbp-1A0h]
  int v115; // [rsp+70h] [rbp-1A0h]
  __int64 v116; // [rsp+70h] [rbp-1A0h]
  int v117; // [rsp+78h] [rbp-198h]
  __int64 v118[2]; // [rsp+80h] [rbp-190h] BYREF
  __int64 v119; // [rsp+90h] [rbp-180h] BYREF
  __int128 v120; // [rsp+98h] [rbp-178h]
  __int64 *v121; // [rsp+B0h] [rbp-160h] BYREF
  __int128 v122; // [rsp+B8h] [rbp-158h]
  unsigned __int64 v123; // [rsp+D0h] [rbp-140h] BYREF
  __int128 v124; // [rsp+D8h] [rbp-138h]
  unsigned __int64 v125; // [rsp+F0h] [rbp-120h] BYREF
  __int128 v126; // [rsp+F8h] [rbp-118h]
  _QWORD *tinfo_property; // [rsp+110h] [rbp-100h] BYREF
  __int128 v128; // [rsp+118h] [rbp-F8h]
  __m128i v129; // [rsp+128h] [rbp-E8h] BYREF
  __int128 v130; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v131; // [rsp+150h] [rbp-C0h]
  __m128i v132; // [rsp+158h] [rbp-B8h] BYREF
  __int64 v133; // [rsp+168h] [rbp-A8h]
  __int128 v134; // [rsp+170h] [rbp-A0h]
  __int128 v135; // [rsp+180h] [rbp-90h]
  __int64 v136; // [rsp+1B0h] [rbp-60h]
  int v137; // [rsp+1B8h] [rbp-58h]
  __int64 v138; // [rsp+1C0h] [rbp-50h]
  char v139; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v140; // [rsp+1D8h] [rbp-38h]

  v4 = (_BYTE *)(a2 + 32);
  v5 = *((_QWORD *)v4 - 1);
  v140 = __readfsqword(0x28u);
  v120 = 0;
  v119 = 0;
  sub_1C8670(&v119, v4, v5);
  sub_1C8670(&v119, (_BYTE *)(a2 + 48), *(_QWORD *)(a2 + 24));
  if ( (unsigned __int64)v120 <= 1 )
  {
    v50 = 0;
    goto LABEL_74;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v121 = nullptr;
  v118[0] = 0;
  v7 = *(_QWORD *)(v6 + 1504);
  v118[1] = 0;
  v100 = 0;
  v102 = v7;
  v101 = 0;
  v122 = 0;
  do
  {
    v8 = v119 + 24 * v101;
    v9 = *(_DWORD *)(v8 + 16);
    v103 = v8;
    v10 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 4LL);
    if ( *(_DWORD *)(a2 + 68) - v9 <= v10 )
      v10 = *(_DWORD *)(a2 + 68) - v9;
    v109 = v10;
    v11 = v10;
    if ( (unsigned __int8)sub_64A60(v118, v9, v10) )
    {
LABEL_107:
      v25 = v120;
      break;
    }
    sub_63E80(v118, *(_DWORD *)(v8 + 16), v11);
    if ( *(_QWORD *)(*(_QWORD *)a3 + 440LL) < (unsigned __int64)(int)a3[4] )
    {
      if ( !under_debugger )
        sub_383060(51258);
LABEL_140:
      BUG();
    }
    v107 = 0;
    v98 = v122;
    if ( !v109 )
      goto LABEL_46;
    while ( 1 )
    {
      v139 = 0;
      v131 = 0;
      v12 = a3[2] + v107;
      v133 = 0;
      v137 = -1;
      v136 = 1;
      v138 = 0;
      v125 = 0;
      v130 = 0;
      v132 = 0;
      v134 = 0;
      v135 = 0;
      copy_tinfo_t();
      v13 = v109;
      while ( v12 || v13 < (unsigned __int64)get_tinfo_size() )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          tinfo_property = nullptr;
          tinfo_property = (_QWORD *)get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          tinfo_size = get_tinfo_size();
          v12 %= tinfo_size;
          if ( tinfo_size <= 0 )
            goto LABEL_29;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            break;
          if ( (get_tinfo_property() & 0x3F) == 0xD )
          {
            *(_QWORD *)&v130 = 8LL * v12;
            if ( (unsigned int)find_tinfo_udt_member() == -1 )
              break;
          }
          else if ( (unsigned int)find_tinfo_udt_member() == -1
                 || (unsigned __int64)(8LL * v12) >= *((_QWORD *)&v130 + 1) )
          {
            break;
          }
          v16 = (unsigned __int64)v130 >> 3;
          v12 -= (unsigned __int64)v130 >> 3;
          if ( (get_tinfo_property() & 0xF) == 0xE )
          {
            v128 = 0;
            tinfo_property = nullptr;
            if ( !get_tinfo_pdata() )
            {
              if ( !under_debugger )
                sub_383060(52698);
              goto LABEL_140;
            }
            v17 = &tinfo_property[2 * v128];
            if ( tinfo_property == v17 )
              goto LABEL_32;
            v18 = tinfo_property;
            while ( 1 )
            {
              if ( (unsigned __int64)v130 >= *v18 )
              {
                v19 = v18[1];
                if ( (unsigned __int64)v130 < v19 )
                  break;
              }
              v18 += 2;
              if ( v17 == v18 )
                goto LABEL_32;
            }
            if ( !v18 )
            {
LABEL_32:
              if ( !under_debugger )
                sub_383060(52699);
              goto LABEL_140;
            }
            v20 = (v19 >> 3) - v16;
            if ( tinfo_property )
            {
              v113 = v20;
              *(_QWORD *)&v128 = 0;
              qfree((__int64)tinfo_property);
              v20 = v113;
            }
          }
          else
          {
            v20 = get_tinfo_size();
          }
          v114 = v20;
          copy_tinfo_t();
          tinfo_size = v114;
          if ( v114 <= 0 )
          {
LABEL_29:
            if ( !under_debugger )
              sub_383060(51638);
            goto LABEL_140;
          }
        }
        v15 = tinfo_size - v12;
        if ( v13 > v15 )
          v13 = v15;
        if ( v13 <= 0 )
        {
          if ( !under_debugger )
            sub_383060(51625);
          goto LABEL_140;
        }
      }
      v21 = round_down_power2();
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v133 )
      {
        *(_QWORD *)&v134 = 0;
        qfree(v133);
      }
      if ( v131 )
      {
        v132.m128i_i64[0] = 0;
        qfree(v131);
      }
      if ( v21 <= 0 || v21 > v109 )
      {
        if ( !under_debugger )
          sub_383060(51639);
        goto LABEL_140;
      }
      v22 = sub_1C8510(
              v102,
              *(_QWORD *)v103,
              *(unsigned __int8 **)(v103 + 8),
              (unsigned __int8 *)(a2 + 64),
              v21,
              v107,
              v107 + *(_DWORD *)(v103 + 16));
      if ( !v22 )
        break;
      v23 = v122;
      v24 = v121;
      if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      {
        v121 = (__int64 *)qvector_reserve((__int64)&v121, (__int64)v121, v122 + 1, 8);
        v24 = v121;
        v23 = v122;
      }
      v107 += v21;
      v24[v23] = v22;
      *(_QWORD *)&v122 = v122 + 1;
      v109 -= v21;
      if ( !v109 )
        goto LABEL_46;
    }
    v46 = *(_QWORD *)(v103 + 8);
    v47 = *(_DWORD *)(v103 + 16);
    v48 = *(_DWORD *)(v46 + 4);
    if ( *(_DWORD *)(a2 + 68) - v47 <= v48 )
      v48 = *(_DWORD *)(a2 + 68) - v47;
    v49 = sub_1C8510(v102, *(_QWORD *)v103, (unsigned __int8 *)v46, (unsigned __int8 *)(a2 + 64), v48, 0, v47);
    if ( !v49 )
      goto LABEL_107;
    sub_1C8310((__int64 *)&v121, v98);
    if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      v121 = (__int64 *)qvector_reserve((__int64)&v121, (__int64)v121, v122 + 1, 8);
    v121[(_QWORD)v122] = v49;
    *(_QWORD *)&v122 = v122 + 1;
LABEL_46:
    v101 = ++v100;
    v25 = v120;
  }
  while ( v100 < (unsigned __int64)v120 );
  if ( v101 != v25 )
    goto LABEL_87;
  v123 = 0;
  v125 = 0;
  v111 = v122;
  v117 = v122;
  v124 = 0;
  v126 = 0;
  if ( !(_QWORD)v122 )
    goto LABEL_133;
  v26 = 0;
  v115 = 0;
  do
  {
    v41 = v26;
    sub_124680((__int64)&tinfo_property, a1, v121[v26], 0);
    v42 = v123;
    if ( (unsigned __int64)&tinfo_property < v123
      || (unsigned __int64)&tinfo_property >= v123 + 40LL * *((_QWORD *)&v124 + 1) )
    {
      v43 = v124;
      if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
      {
        v123 = qvector_reserve((__int64)&v123, v123, v124 + 1, 40);
        v42 = v123;
        v43 = v124;
      }
      v44 = v42 + 40 * v43;
      sub_64000((__int64 *)v44, (__int64)&tinfo_property);
      v45 = _mm_loadu_si128(&v129);
      *(_QWORD *)&v124 = v124 + 1;
      *(_QWORD *)(v44 + 16) = *((_QWORD *)&v128 + 1);
      *(__m128i *)(v44 + 24) = v45;
    }
    else
    {
      sub_64000((__int64 *)&v130, (__int64)&tinfo_property);
      v27 = *((_QWORD *)&v128 + 1);
      v28 = _mm_loadu_si128(&v129);
      *((_QWORD *)&v128 + 1) = 0;
      v29 = v123;
      v131 = v27;
      v30 = v124;
      v132 = v28;
      v129 = 0;
      if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
      {
        v123 = qvector_reserve((__int64)&v123, v123, v124 + 1, 40);
        v29 = v123;
        v30 = v124;
      }
      v110 = v29 + 40 * v30;
      sub_64000((__int64 *)v110, (__int64)&v130);
      v31 = _mm_loadu_si128(&v132);
      *(_QWORD *)(v110 + 16) = v131;
      *(__m128i *)(v110 + 24) = v31;
      qfree(v130);
      *(_QWORD *)&v124 = v124 + 1;
      if ( *((_QWORD *)&v128 + 1) )
      {
        v129.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v128 + 1));
      }
    }
    qfree((__int64)tinfo_property);
    sub_127A20((__int64)&tinfo_property, a1, v121[v41], 0, v32, v33);
    v34 = v125;
    if ( (unsigned __int64)&tinfo_property < v125
      || (unsigned __int64)&tinfo_property >= v125 + 40LL * *((_QWORD *)&v126 + 1) )
    {
      v52 = v126;
      if ( *((_QWORD *)&v126 + 1) < (unsigned __int64)(v126 + 1) )
      {
        v125 = qvector_reserve((__int64)&v125, v125, v126 + 1, 40);
        v34 = v125;
        v52 = v126;
      }
      v53 = v34 + 40 * v52;
      sub_64000((__int64 *)v53, (__int64)&tinfo_property);
      v54 = _mm_loadu_si128(&v129);
      *(_QWORD *)(v53 + 16) = *((_QWORD *)&v128 + 1);
      *(__m128i *)(v53 + 24) = v54;
      *(_QWORD *)&v126 = v126 + 1;
    }
    else
    {
      sub_64000((__int64 *)&v130, (__int64)&tinfo_property);
      v35 = *((_QWORD *)&v128 + 1);
      v36 = _mm_loadu_si128(&v129);
      *((_QWORD *)&v128 + 1) = 0;
      v37 = v125;
      v131 = v35;
      v38 = v126;
      v132 = v36;
      v129 = 0;
      if ( *((_QWORD *)&v126 + 1) < (unsigned __int64)(v126 + 1) )
      {
        v125 = qvector_reserve((__int64)&v125, v125, v126 + 1, 40);
        v37 = v125;
        v38 = v126;
      }
      v39 = v37 + 40 * v38;
      sub_64000((__int64 *)v39, (__int64)&v130);
      v40 = _mm_loadu_si128(&v132);
      *(_QWORD *)(v39 + 16) = v131;
      *(__m128i *)(v39 + 24) = v40;
      qfree(v130);
      *(_QWORD *)&v126 = v126 + 1;
      if ( *((_QWORD *)&v128 + 1) )
      {
        v129.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v128 + 1));
      }
    }
    qfree((__int64)tinfo_property);
    v26 = ++v115;
  }
  while ( v115 < (unsigned __int64)v122 );
  v59 = v111;
  if ( v111 - 1 <= 0 )
  {
    v55 = v125;
    v56 = 1;
    if ( v125 )
      goto LABEL_112;
LABEL_133:
    v57 = v123;
    if ( v123 )
    {
      v58 = v124;
      v56 = 1;
      if ( (_QWORD)v124 )
        goto LABEL_119;
      qfree(v123);
    }
LABEL_125:
    v92 = (unsigned int)(v122 - 1);
    if ( (int)v122 - 1 > 0 )
    {
      v93 = 8 * v92;
      v94 = 8 * (v92 - (unsigned int)(v122 - 2));
      while ( 1 )
      {
        v95 = v93;
        sub_A3160(a1, *(_QWORD **)((char *)v121 + v93), a2);
        if ( v94 == v95 )
          break;
        v93 = v95 - 8;
      }
    }
    sub_11D890(a2, *v121);
    sub_12AB50((unsigned __int8 *)(a2 + 64), v102, *(_DWORD *)(a2 + 68), 2);
    v96 = *v121;
    if ( *v121 )
    {
      sub_11CDA0(v96 + 64);
      sub_11CDA0(v96 + 48);
      sub_11CDA0(v96 + 32);
      j__qfree(v96);
    }
    v50 = v122;
    v97 = *(_DWORD *)(a1 + 24);
    BYTE1(v97) &= ~2u;
    LOBYTE(v97) = v97 | 0x80;
    *(_DWORD *)(a1 + 24) = v97;
    goto LABEL_88;
  }
  v112 = 0;
  v105 = (unsigned int)(v59 - 2);
  for ( i = 0; ; ++i )
  {
    v60 = i;
    v116 = v112;
    if ( v117 > (int)i )
    {
      while ( 1 )
      {
        v63 = v112;
        v64 = i;
        while ( 1 )
        {
          if ( v64 != v60 )
          {
            v61 = v125 + v116;
            v62 = v63 + v123;
            if ( (unsigned __int8)sub_64780((_QWORD *)(v125 + v116), (_QWORD *)(v63 + v123))
              || (unsigned __int8)sub_318470(v61 + 16, v62 + 16) )
            {
              break;
            }
          }
          ++v64;
          v63 += 40;
          if ( v117 == v64 )
            goto LABEL_100;
        }
        if ( v117 == v64 )
          break;
        ++v60;
        v116 += 40;
        if ( v117 == v60 )
          goto LABEL_83;
      }
LABEL_100:
      if ( v117 == v60 )
      {
LABEL_83:
        v55 = v125;
        v56 = 0;
        if ( v125 )
          goto LABEL_112;
        v57 = v123;
        if ( v123 )
        {
          v58 = v124;
          if ( (_QWORD)v124 )
            goto LABEL_119;
          qfree(v123);
        }
        goto LABEL_87;
      }
      if ( v60 != (_DWORD)i )
      {
        v65 = &v121[v60];
        v66 = &v121[i];
        v67 = *v66;
        *v66 = *v65;
        *v65 = v67;
        v68 = 40LL * v60;
        v69 = v123 + v112;
        v70 = (_QWORD *)(v68 + v123);
        v71 = *(_QWORD *)(v123 + v112);
        *(_QWORD *)v69 = *(_QWORD *)(v68 + v123);
        v72 = v70[1];
        *v70 = v71;
        v73 = *(_QWORD *)(v69 + 8);
        *(_QWORD *)(v69 + 8) = v72;
        v74 = v70[2];
        v70[1] = v73;
        v75 = *(_QWORD *)(v69 + 16);
        *(_QWORD *)(v69 + 16) = v74;
        v76 = _mm_loadu_si128((const __m128i *)(v69 + 24));
        *(_QWORD *)(v69 + 24) = v70[3];
        *(_QWORD *)(v69 + 32) = v70[4];
        v70[2] = v75;
        *(__m128i *)(v70 + 3) = v76;
        v77 = v125 + v112;
        v78 = (_QWORD *)(v68 + v125);
        v79 = *(_QWORD *)(v68 + v125);
        v80 = *(_QWORD *)(v125 + v112);
        *(_QWORD *)v77 = v79;
        *v78 = v80;
        v81 = *(_QWORD *)(v77 + 8);
        *(_QWORD *)(v77 + 8) = v78[1];
        v82 = v78[2];
        v78[1] = v81;
        v83 = *(_QWORD *)(v77 + 16);
        *(_QWORD *)(v77 + 16) = v82;
        v84 = _mm_loadu_si128((const __m128i *)(v77 + 24));
        *(_QWORD *)(v77 + 24) = v78[3];
        *(_QWORD *)(v77 + 32) = v78[4];
        v78[2] = v83;
        *(__m128i *)(v78 + 3) = v84;
      }
    }
    else if ( v117 == (_DWORD)i )
    {
      goto LABEL_83;
    }
    v112 += 40;
    if ( v105 == i )
      break;
  }
  v55 = v125;
  if ( !v125 )
    goto LABEL_133;
  v56 = 1;
LABEL_112:
  v85 = v126;
  if ( (_QWORD)v126 )
  {
    v86 = 0;
    do
    {
      v87 = (__int64 *)(v55 + 40 * v86);
      v88 = v87[2];
      if ( v88 )
      {
        v87[3] = 0;
        qfree(v88);
      }
      ++v86;
      qfree(*v87);
      v55 = v125;
    }
    while ( v85 != v86 );
  }
  *(_QWORD *)&v126 = 0;
  qfree(v55);
  v57 = v123;
  if ( v123 )
  {
    v58 = v124;
    if ( (_QWORD)v124 )
    {
LABEL_119:
      v89 = 0;
      do
      {
        v90 = (__int64 *)(v57 + 40 * v89);
        v91 = v90[2];
        if ( v91 )
        {
          v90[3] = 0;
          qfree(v91);
        }
        ++v89;
        qfree(*v90);
        v57 = v123;
      }
      while ( v58 != v89 );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v57);
  }
  if ( v56 )
    goto LABEL_125;
LABEL_87:
  sub_1C8310((__int64 *)&v121, 0);
  v50 = 0;
LABEL_88:
  qfree(v118[0]);
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree((__int64)v121);
  }
LABEL_74:
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  return v50;
}
