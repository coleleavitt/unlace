__int64 __fastcall sub_1C4F60(__int64 a1, __int64 a2, int *a3)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // esi
  int v10; // edx
  int v11; // ebx
  unsigned __int64 v12; // rax
  int v13; // r12d
  int v14; // r13d
  int tinfo_size; // ecx
  int v16; // ecx
  unsigned __int64 v17; // r14
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // ecx
  int v22; // ebx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __m128i v32; // xmm0
  unsigned __int64 v33; // rsi
  __int64 v34; // rax
  __m128i v35; // xmm0
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r13
  __m128i v39; // xmm0
  __int64 v40; // r12
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // r14
  __m128i v44; // xmm0
  __int64 v45; // rdx
  signed int v46; // ecx
  int v47; // esi
  __int64 v48; // rbx
  unsigned int v49; // ebx
  __int64 v51; // rax
  unsigned __int64 v52; // r13
  __m128i v53; // xmm0
  unsigned __int64 v54; // rdi
  char v55; // r15
  unsigned __int64 v56; // rdi
  __int64 v57; // rbx
  int v58; // edx
  int v59; // r13d
  __int64 v60; // rbx
  __int64 v61; // r12
  __int64 v62; // r14
  int v63; // r15d
  __int64 *v64; // rax
  __int64 *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  __m128i v75; // xmm0
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rcx
  __m128i v83; // xmm0
  __int64 v84; // r13
  __int64 v85; // rbx
  _QWORD *v86; // r12
  __int64 v87; // rdi
  __int64 v88; // r12
  _QWORD *v89; // r13
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // r15
  __int64 v95; // rbx
  int v96; // eax
  int v97; // [rsp+10h] [rbp-200h]
  int v99; // [rsp+24h] [rbp-1ECh]
  __int64 v100; // [rsp+28h] [rbp-1E8h]
  __int64 v101; // [rsp+30h] [rbp-1E0h]
  __int64 v102; // [rsp+38h] [rbp-1D8h]
  __int64 v103; // [rsp+40h] [rbp-1D0h]
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
  __int64 tinfo_property; // [rsp+110h] [rbp-100h] BYREF
  __int128 v128; // [rsp+118h] [rbp-F8h]
  __m128i v129; // [rsp+128h] [rbp-E8h] BYREF
  __int128 v130; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v131; // [rsp+150h] [rbp-C0h]
  __m128i v132; // [rsp+158h] [rbp-B8h] BYREF
  __int64 v133; // [rsp+168h] [rbp-A8h]
  __int128 v134; // [rsp+170h] [rbp-A0h]
  _OWORD v135[3]; // [rsp+180h] [rbp-90h] BYREF
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
  sub_1C42B0(&v119, v4, v5);
  sub_1C42B0(&v119, (_BYTE *)(a2 + 48), *(_QWORD *)(a2 + 24));
  if ( (unsigned __int64)v120 <= 1 )
  {
    v49 = 0;
    goto LABEL_74;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v121 = nullptr;
  v118[0] = 0;
  v7 = *(_QWORD *)(v6 + 1504);
  v118[1] = 0;
  v99 = 0;
  v101 = v7;
  v100 = 0;
  v122 = 0;
  do
  {
    v8 = v119 + 24 * v100;
    v9 = *(_DWORD *)(v8 + 16);
    v102 = v8;
    v10 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 4LL);
    if ( *(_DWORD *)(a2 + 68) - v9 <= v10 )
      v10 = *(_DWORD *)(a2 + 68) - v9;
    v109 = v10;
    v11 = v10;
    if ( (unsigned __int8)sub_60860(v118, v9, v10) )
    {
LABEL_107:
      v26 = v120;
      break;
    }
    sub_5FC80(v118, *(_DWORD *)(v8 + 16), v11);
    v12 = a3[4];
    if ( *(_QWORD *)(*(_QWORD *)a3 + 440LL) < v12 )
    {
      if ( !under_debugger )
        sub_37E160(51258);
LABEL_140:
      BUG();
    }
    v107 = 0;
    v103 = *(_QWORD *)(*(_QWORD *)a3 + 432LL) + 104 * v12 + 80;
    v97 = v122;
    if ( !v109 )
      goto LABEL_46;
    while ( 1 )
    {
      v139 = 0;
      v131 = 0;
      v13 = a3[2] + v107;
      v133 = 0;
      v137 = -1;
      v136 = 1;
      v138 = 0;
      v125 = 0;
      v130 = 0;
      v132 = 0;
      v134 = 0;
      v135[0] = 0;
      copy_tinfo_t(&v125, v103);
      v14 = v109;
      while ( v13 || v14 < (unsigned __int64)get_tinfo_size(0, v125, 0) )
      {
        if ( (get_tinfo_property(v125, 2) & 0xF) == 0xB )
        {
          tinfo_property = 0;
          tinfo_property = get_tinfo_property(v125, 11);
          copy_tinfo_t(&v125, &tinfo_property);
          clear_tinfo_t(&tinfo_property);
          tinfo_size = get_tinfo_size(0, v125, 0);
          v13 %= tinfo_size;
          if ( tinfo_size <= 0 )
            goto LABEL_29;
        }
        else
        {
          if ( (get_tinfo_property(v125, 2) & 0x2F) != 0xD )
            break;
          if ( (get_tinfo_property(v125, 2) & 0x3F) == 0xD )
          {
            *(_QWORD *)&v130 = 8LL * v13;
            if ( (unsigned int)find_tinfo_udt_member(&v130, v125, 0x20000000) == -1 )
              break;
          }
          else if ( (unsigned int)find_tinfo_udt_member(&v130, v125, 7) == -1
                 || (unsigned __int64)(8LL * v13) >= *((_QWORD *)&v130 + 1) )
          {
            break;
          }
          v17 = (unsigned __int64)v130 >> 3;
          v13 -= (unsigned __int64)v130 >> 3;
          if ( (get_tinfo_property(*(_QWORD *)&v135[0], 2) & 0xF) == 0xE )
          {
            v128 = 0;
            tinfo_property = 0;
            if ( !get_tinfo_pdata(&tinfo_property, v125, 7) )
            {
              if ( !under_debugger )
                sub_37E160(52698);
              goto LABEL_140;
            }
            v18 = (_QWORD *)(tinfo_property + 16 * v128);
            if ( (_QWORD *)tinfo_property == v18 )
              goto LABEL_32;
            v19 = (_QWORD *)tinfo_property;
            while ( 1 )
            {
              if ( (unsigned __int64)v130 >= *v19 )
              {
                v20 = v19[1];
                if ( (unsigned __int64)v130 < v20 )
                  break;
              }
              v19 += 2;
              if ( v18 == v19 )
                goto LABEL_32;
            }
            if ( !v19 )
            {
LABEL_32:
              if ( !under_debugger )
                sub_37E160(52699);
              goto LABEL_140;
            }
            v21 = (v20 >> 3) - v17;
            if ( tinfo_property )
            {
              v113 = v21;
              *(_QWORD *)&v128 = 0;
              qfree(tinfo_property);
              v21 = v113;
            }
          }
          else
          {
            v21 = get_tinfo_size(0, *(_QWORD *)&v135[0], 0);
          }
          v114 = v21;
          copy_tinfo_t(&v125, v135);
          tinfo_size = v114;
          if ( v114 <= 0 )
          {
LABEL_29:
            if ( !under_debugger )
              sub_37E160(51638);
            goto LABEL_140;
          }
        }
        v16 = tinfo_size - v13;
        if ( v14 > v16 )
          v14 = v16;
        if ( v14 <= 0 )
        {
          if ( !under_debugger )
            sub_37E160(51625);
          goto LABEL_140;
        }
      }
      v22 = round_down_power2((unsigned int)v14);
      clear_tinfo_t(&v125);
      clear_tinfo_t(v135);
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
      if ( v22 <= 0 || v22 > v109 )
      {
        if ( !under_debugger )
          sub_37E160(51639);
        goto LABEL_140;
      }
      v23 = sub_1C4150(
              v101,
              *(_QWORD *)v102,
              *(unsigned __int8 **)(v102 + 8),
              (unsigned __int8 *)(a2 + 64),
              v22,
              v107,
              v107 + *(_DWORD *)(v102 + 16));
      if ( !v23 )
        break;
      v24 = v122;
      v25 = v121;
      if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      {
        v121 = (__int64 *)qvector_reserve(&v121, v121, v122 + 1, 8);
        v25 = v121;
        v24 = v122;
      }
      v107 += v22;
      v25[v24] = v23;
      *(_QWORD *)&v122 = v122 + 1;
      v109 -= v22;
      if ( !v109 )
        goto LABEL_46;
    }
    v45 = *(_QWORD *)(v102 + 8);
    v46 = *(_DWORD *)(v102 + 16);
    v47 = *(_DWORD *)(v45 + 4);
    if ( *(_DWORD *)(a2 + 68) - v46 <= v47 )
      v47 = *(_DWORD *)(a2 + 68) - v46;
    v48 = sub_1C4150(v101, *(_QWORD *)v102, (unsigned __int8 *)v45, (unsigned __int8 *)(a2 + 64), v47, 0, v46);
    if ( !v48 )
      goto LABEL_107;
    sub_1C3F50((__int64 *)&v121, v97);
    if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      v121 = (__int64 *)qvector_reserve(&v121, v121, v122 + 1, 8);
    v121[(_QWORD)v122] = v48;
    *(_QWORD *)&v122 = v122 + 1;
LABEL_46:
    v100 = ++v99;
    v26 = v120;
  }
  while ( v99 < (unsigned __int64)v120 );
  if ( v100 != v26 )
    goto LABEL_87;
  v123 = 0;
  v125 = 0;
  v111 = v122;
  v117 = v122;
  v124 = 0;
  v126 = 0;
  if ( !(_QWORD)v122 )
    goto LABEL_133;
  v27 = 0;
  v115 = 0;
  do
  {
    v40 = v27;
    sub_120480((__int64)&tinfo_property, a1, v121[v27], 0);
    v41 = v123;
    if ( (unsigned __int64)&tinfo_property < v123
      || (unsigned __int64)&tinfo_property >= v123 + 40LL * *((_QWORD *)&v124 + 1) )
    {
      v42 = v124;
      if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
      {
        v123 = qvector_reserve(&v123, v123, v124 + 1, 40);
        v41 = v123;
        v42 = v124;
      }
      v43 = v41 + 40 * v42;
      sub_5FE00((__int64 *)v43, (__int64)&tinfo_property);
      v44 = _mm_loadu_si128(&v129);
      *(_QWORD *)&v124 = v124 + 1;
      *(_QWORD *)(v43 + 16) = *((_QWORD *)&v128 + 1);
      *(__m128i *)(v43 + 24) = v44;
    }
    else
    {
      sub_5FE00((__int64 *)&v130, (__int64)&tinfo_property);
      v28 = *((_QWORD *)&v128 + 1);
      v29 = _mm_loadu_si128(&v129);
      *((_QWORD *)&v128 + 1) = 0;
      v30 = v123;
      v131 = v28;
      v31 = v124;
      v132 = v29;
      v129 = 0;
      if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
      {
        v123 = qvector_reserve(&v123, v123, v124 + 1, 40);
        v30 = v123;
        v31 = v124;
      }
      v110 = v30 + 40 * v31;
      sub_5FE00((__int64 *)v110, (__int64)&v130);
      v32 = _mm_loadu_si128(&v132);
      *(_QWORD *)(v110 + 16) = v131;
      *(__m128i *)(v110 + 24) = v32;
      qfree(v130);
      *(_QWORD *)&v124 = v124 + 1;
      if ( *((_QWORD *)&v128 + 1) )
      {
        v129.m128i_i64[0] = 0;
        qfree(*((_QWORD *)&v128 + 1));
      }
    }
    qfree(tinfo_property);
    sub_123820((__int64)&tinfo_property, a1, v121[v40], 0);
    v33 = v125;
    if ( (unsigned __int64)&tinfo_property < v125
      || (unsigned __int64)&tinfo_property >= v125 + 40LL * *((_QWORD *)&v126 + 1) )
    {
      v51 = v126;
      if ( *((_QWORD *)&v126 + 1) < (unsigned __int64)(v126 + 1) )
      {
        v125 = qvector_reserve(&v125, v125, v126 + 1, 40);
        v33 = v125;
        v51 = v126;
      }
      v52 = v33 + 40 * v51;
      sub_5FE00((__int64 *)v52, (__int64)&tinfo_property);
      v53 = _mm_loadu_si128(&v129);
      *(_QWORD *)(v52 + 16) = *((_QWORD *)&v128 + 1);
      *(__m128i *)(v52 + 24) = v53;
      *(_QWORD *)&v126 = v126 + 1;
    }
    else
    {
      sub_5FE00((__int64 *)&v130, (__int64)&tinfo_property);
      v34 = *((_QWORD *)&v128 + 1);
      v35 = _mm_loadu_si128(&v129);
      *((_QWORD *)&v128 + 1) = 0;
      v36 = v125;
      v131 = v34;
      v37 = v126;
      v132 = v35;
      v129 = 0;
      if ( *((_QWORD *)&v126 + 1) < (unsigned __int64)(v126 + 1) )
      {
        v125 = qvector_reserve(&v125, v125, v126 + 1, 40);
        v36 = v125;
        v37 = v126;
      }
      v38 = v36 + 40 * v37;
      sub_5FE00((__int64 *)v38, (__int64)&v130);
      v39 = _mm_loadu_si128(&v132);
      *(_QWORD *)(v38 + 16) = v131;
      *(__m128i *)(v38 + 24) = v39;
      qfree(v130);
      *(_QWORD *)&v126 = v126 + 1;
      if ( *((_QWORD *)&v128 + 1) )
      {
        v129.m128i_i64[0] = 0;
        qfree(*((_QWORD *)&v128 + 1));
      }
    }
    qfree(tinfo_property);
    v27 = ++v115;
  }
  while ( v115 < (unsigned __int64)v122 );
  v58 = v111;
  if ( v111 - 1 <= 0 )
  {
    v54 = v125;
    v55 = 1;
    if ( v125 )
      goto LABEL_112;
LABEL_133:
    v56 = v123;
    if ( v123 )
    {
      v57 = v124;
      v55 = 1;
      if ( (_QWORD)v124 )
        goto LABEL_119;
      qfree(v123);
    }
LABEL_125:
    v91 = (unsigned int)(v122 - 1);
    if ( (int)v122 - 1 > 0 )
    {
      v92 = 8 * v91;
      v93 = 8 * (v91 - (unsigned int)(v122 - 2));
      while ( 1 )
      {
        v94 = v92;
        sub_9EF60(a1, *(_QWORD **)((char *)v121 + v92), a2);
        if ( v93 == v94 )
          break;
        v92 = v94 - 8;
      }
    }
    sub_119690(a2, *v121);
    sub_126950(a2 + 64, v101, *(_DWORD *)(a2 + 68), 2);
    v95 = *v121;
    if ( *v121 )
    {
      sub_118BA0(v95 + 64);
      sub_118BA0(v95 + 48);
      sub_118BA0(v95 + 32);
      j__qfree(v95);
    }
    v49 = v122;
    v96 = *(_DWORD *)(a1 + 24);
    BYTE1(v96) &= ~2u;
    LOBYTE(v96) = v96 | 0x80;
    *(_DWORD *)(a1 + 24) = v96;
    goto LABEL_88;
  }
  v112 = 0;
  v105 = (unsigned int)(v58 - 2);
  for ( i = 0; ; ++i )
  {
    v59 = i;
    v116 = v112;
    if ( v117 > (int)i )
    {
      while ( 1 )
      {
        v62 = v112;
        v63 = i;
        while ( 1 )
        {
          if ( v63 != v59 )
          {
            v60 = v125 + v116;
            v61 = v62 + v123;
            if ( (unsigned __int8)sub_60580((_QWORD *)(v125 + v116), (_QWORD *)(v62 + v123))
              || (unsigned __int8)sub_3136F0(v60 + 16, v61 + 16) )
            {
              break;
            }
          }
          ++v63;
          v62 += 40;
          if ( v117 == v63 )
            goto LABEL_100;
        }
        if ( v117 == v63 )
          break;
        ++v59;
        v116 += 40;
        if ( v117 == v59 )
          goto LABEL_83;
      }
LABEL_100:
      if ( v117 == v59 )
      {
LABEL_83:
        v54 = v125;
        v55 = 0;
        if ( v125 )
          goto LABEL_112;
        v56 = v123;
        if ( v123 )
        {
          v57 = v124;
          if ( (_QWORD)v124 )
            goto LABEL_119;
          qfree(v123);
        }
        goto LABEL_87;
      }
      if ( v59 != (_DWORD)i )
      {
        v64 = &v121[v59];
        v65 = &v121[i];
        v66 = *v65;
        *v65 = *v64;
        *v64 = v66;
        v67 = 40LL * v59;
        v68 = v123 + v112;
        v69 = (_QWORD *)(v67 + v123);
        v70 = *(_QWORD *)(v123 + v112);
        *(_QWORD *)v68 = *(_QWORD *)(v67 + v123);
        v71 = v69[1];
        *v69 = v70;
        v72 = *(_QWORD *)(v68 + 8);
        *(_QWORD *)(v68 + 8) = v71;
        v73 = v69[2];
        v69[1] = v72;
        v74 = *(_QWORD *)(v68 + 16);
        *(_QWORD *)(v68 + 16) = v73;
        v75 = _mm_loadu_si128((const __m128i *)(v68 + 24));
        *(_QWORD *)(v68 + 24) = v69[3];
        *(_QWORD *)(v68 + 32) = v69[4];
        v69[2] = v74;
        *(__m128i *)(v69 + 3) = v75;
        v76 = v125 + v112;
        v77 = (_QWORD *)(v67 + v125);
        v78 = *(_QWORD *)(v67 + v125);
        v79 = *(_QWORD *)(v125 + v112);
        *(_QWORD *)v76 = v78;
        *v77 = v79;
        v80 = *(_QWORD *)(v76 + 8);
        *(_QWORD *)(v76 + 8) = v77[1];
        v81 = v77[2];
        v77[1] = v80;
        v82 = *(_QWORD *)(v76 + 16);
        *(_QWORD *)(v76 + 16) = v81;
        v83 = _mm_loadu_si128((const __m128i *)(v76 + 24));
        *(_QWORD *)(v76 + 24) = v77[3];
        *(_QWORD *)(v76 + 32) = v77[4];
        v77[2] = v82;
        *(__m128i *)(v77 + 3) = v83;
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
  v54 = v125;
  if ( !v125 )
    goto LABEL_133;
  v55 = 1;
LABEL_112:
  v84 = v126;
  if ( (_QWORD)v126 )
  {
    v85 = 0;
    do
    {
      v86 = (_QWORD *)(v54 + 40 * v85);
      v87 = v86[2];
      if ( v87 )
      {
        v86[3] = 0;
        qfree(v87);
      }
      ++v85;
      qfree(*v86);
      v54 = v125;
    }
    while ( v84 != v85 );
  }
  *(_QWORD *)&v126 = 0;
  qfree(v54);
  v56 = v123;
  if ( v123 )
  {
    v57 = v124;
    if ( (_QWORD)v124 )
    {
LABEL_119:
      v88 = 0;
      do
      {
        v89 = (_QWORD *)(v56 + 40 * v88);
        v90 = v89[2];
        if ( v90 )
        {
          v89[3] = 0;
          qfree(v90);
        }
        ++v88;
        qfree(*v89);
        v56 = v123;
      }
      while ( v57 != v88 );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v56);
  }
  if ( v55 )
    goto LABEL_125;
LABEL_87:
  sub_1C3F50((__int64 *)&v121, 0);
  v49 = 0;
LABEL_88:
  qfree(v118[0]);
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
LABEL_74:
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
  return v49;
}
