__m128i *__fastcall sub_7DBF50(__m128i *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __m128i *v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // r15
  int v20; // esi
  bool v21; // al
  int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // r13
  int v30; // eax
  unsigned int v31; // eax
  int v32; // r9d
  int v33; // edx
  __int64 v34; // rax
  __m128i *v35; // r15
  __m128i si128; // xmm0
  bool v37; // al
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  const __m128i *v42; // rdx
  unsigned __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // esi
  _WORD *v49; // rax
  int v50; // ebp
  __m128i *v51; // r13
  int v52; // esi
  _WORD *v53; // r13
  int v54; // esi
  _WORD *v55; // rcx
  unsigned __int16 v56; // bp
  unsigned __int64 v57; // rax
  unsigned int v58; // r15d
  __int64 v59; // rax
  __int32 v60; // eax
  int v61; // esi
  int v62; // esi
  __int64 v63; // rsi
  __int64 *v64; // rbp
  __int64 v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm2
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  int v70; // esi
  __int64 v71; // rsi
  __int64 *v72; // rbp
  __int64 v73; // rax
  __m128i v74; // xmm0
  int v75; // eax
  int v76; // r10d
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rdx
  __m128i v80; // xmm0
  unsigned __int128 v81; // kr00_16
  char v82; // al
  __m128i v83; // xmm0
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdi
  unsigned int v87; // esi
  _QWORD *v88; // rax
  _WORD *v89; // r8
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int32 v92; // eax
  unsigned int v93; // eax
  int v94; // esi
  bool v95; // al
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rax
  int v100; // esi
  __int64 v101; // rsi
  __int64 *v102; // rbp
  __int64 v103; // rax
  __m128i v104; // xmm0
  unsigned __int64 v105; // rax
  unsigned int v106; // r15d
  unsigned __int64 v107; // r13
  __int64 v108; // rax
  _WORD *v109; // rdx
  __int64 v110; // r15
  __int32 v111; // eax
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  int v117; // eax
  int v118; // r10d
  __int64 v119; // rax
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  unsigned __int64 v124; // rax
  int v125; // [rsp+8h] [rbp-180h]
  _WORD *v126; // [rsp+8h] [rbp-180h]
  __int64 v127; // [rsp+8h] [rbp-180h]
  int v128; // [rsp+8h] [rbp-180h]
  _WORD *v129; // [rsp+10h] [rbp-178h]
  int v130; // [rsp+10h] [rbp-178h]
  _WORD *v131; // [rsp+10h] [rbp-178h]
  unsigned __int64 v132; // [rsp+18h] [rbp-170h]
  int v133; // [rsp+18h] [rbp-170h]
  __m128i v134; // [rsp+20h] [rbp-168h] BYREF
  __m128i v135; // [rsp+30h] [rbp-158h] BYREF
  __m128i v136; // [rsp+40h] [rbp-148h] BYREF
  __m128i v137; // [rsp+50h] [rbp-138h] BYREF
  __m128i v138; // [rsp+60h] [rbp-128h]
  __int64 v139; // [rsp+70h] [rbp-118h]
  char v140; // [rsp+78h] [rbp-110h]
  unsigned __int128 v141; // [rsp+80h] [rbp-108h] BYREF
  __m128i v142; // [rsp+90h] [rbp-F8h] BYREF
  __m128i v143; // [rsp+A0h] [rbp-E8h]
  __m128i v144; // [rsp+B0h] [rbp-D8h] BYREF
  __m256i v145; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v146; // [rsp+E0h] [rbp-A8h] BYREF
  char v147; // [rsp+F0h] [rbp-98h]
  unsigned __int128 v148; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v149[24]; // [rsp+110h] [rbp-78h] BYREF
  __m128i v150; // [rsp+128h] [rbp-60h] BYREF
  __m128i v151; // [rsp+138h] [rbp-50h]

  if ( *(int *)a4 <= 73 )
  {
    v18 = *(_DWORD *)(a2 + 40);
    if ( !v18 )
      goto LABEL_33;
    v19 = *(_QWORD *)(a2 + 24);
    v20 = *(_DWORD *)a4;
    LODWORD(v148) = 73;
    v21 = sub_7204C0((int *)&v148, v20);
    v22 = *(_DWORD *)a4;
    if ( v21 )
    {
      v45 = *(_QWORD *)(a4 + 8);
      v125 = *(_DWORD *)a4;
      *(_QWORD *)&v148 = *(_QWORD *)(a4 + 16);
      v144.m128i_i64[0] = v45;
      v23 = sub_7DB4D0(&v144, &v148);
      v22 = v125;
    }
    else if ( v22 == 5 )
    {
      v40 = *(_QWORD *)(a4 + 8);
      v144.m128i_i64[0] = *(_QWORD *)(a4 + 16);
      *(_QWORD *)&v148 = v40;
      v23 = sub_7DB530(&v148, &v144);
      v22 = 5;
    }
    else
    {
      v23 = -1916529075;
      if ( v22 > 73 )
      {
        v24 = *(_QWORD *)(a4 + 8);
        v25 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (HIDWORD(v24) ^ (8LL * (unsigned int)v24 - 0xAE502812AA7333LL))) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v24) ^ (8LL * (unsigned int)v24 - 0xAE502812AA7333LL)))
             ^ HIDWORD(v24));
        v23 = -348639895 * (v25 ^ (v25 >> 47));
      }
    }
    v26 = v18 - 1;
    v27 = 1;
    for ( LODWORD(v28) = (v18 - 1) & v23; ; LODWORD(v28) = v26 & (v28 + v97) )
    {
      v29 = v19 + 48LL * (unsigned int)v28;
      v30 = *(_DWORD *)v29;
      if ( !v22 )
      {
        if ( !v30 )
          goto LABEL_21;
        v31 = v26 & (v28 + v27);
        v29 = v19 + 48LL * v31;
        if ( *(_DWORD *)v29 )
        {
          v32 = v27 + 1;
          do
          {
            v33 = v32++;
            v31 = v26 & (v33 + v31);
            v29 = v19 + 48LL * v31;
          }
          while ( *(_DWORD *)v29 );
LABEL_21:
          v34 = *(_QWORD *)(a2 + 24) + 48LL * *(unsigned int *)(a2 + 40);
        }
        else
        {
LABEL_40:
          v34 = *(_QWORD *)(a2 + 24) + 48LL * *(unsigned int *)(a2 + 40);
        }
        if ( v34 != v29 )
        {
          v41 = *(_QWORD *)(v29 + 40);
          v42 = (const __m128i *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
          v43 = v41 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v41 )
            goto LABEL_51;
          v44 = v41 & 6;
          if ( v44 == 6 )
          {
            if ( v42 )
            {
              v46 = v42->m128i_i64[0];
              v47 = v42->m128i_u32[2];
              a1[2].m128i_i8[8] = 0;
              a1->m128i_i64[0] = v46;
              a1->m128i_i64[1] = v47;
              return a1;
            }
            goto LABEL_51;
          }
          if ( v44 )
          {
            if ( v44 != 2 || !v42 )
              goto LABEL_51;
            LODWORD(v148) = sub_720B10((_WORD *)(*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFFFFFFF8LL));
          }
          else
          {
            if ( v42 )
            {
              LODWORD(v148) = sub_720580(*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFFFFFFF8LL);
              goto LABEL_47;
            }
LABEL_51:
            v148 = (unsigned __int128)_mm_loadu_si128(v42);
            *(__m128i *)v149 = _mm_loadu_si128(v42 + 1);
            *(_QWORD *)&v149[16] = v42[2].m128i_i64[0];
            v43 = v42->m128i_u64[1];
          }
LABEL_47:
          a1[2].m128i_i8[8] = 1;
          *((_QWORD *)&v148 + 1) = v43;
LABEL_48:
          *a1 = _mm_load_si128((const __m128i *)&v148);
          a1[1] = _mm_load_si128((const __m128i *)v149);
          a1[2].m128i_i64[0] = *(_QWORD *)&v149[16];
          return a1;
        }
LABEL_33:
        a1[2].m128i_i8[8] = 0;
        a1->m128i_i64[0] = 0;
        a1->m128i_i64[1] = 0;
        return a1;
      }
      if ( v22 == 1045 )
        break;
      while ( 1 )
      {
        if ( v22 != v30 )
          goto LABEL_32;
        if ( v22 != 6 )
          break;
        if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(v29 + 8) )
          goto LABEL_40;
        v93 = v27 + v28;
        ++v27;
        v28 = v26 & v93;
        v29 = v19 + 48 * v28;
        v30 = *(_DWORD *)v29;
      }
      v94 = *(_DWORD *)a4;
      v133 = v28;
      v130 = v26;
      v128 = v27;
      LODWORD(v148) = 73;
      v95 = sub_7204C0((int *)&v148, v94);
      v27 = v128;
      v26 = v130;
      LODWORD(v28) = v133;
      if ( v95 || *(_DWORD *)a4 == 5 )
      {
        if ( *(_QWORD *)(a4 + 8) == *(_QWORD *)(v29 + 8) && *(_QWORD *)(a4 + 16) == *(_QWORD *)(v29 + 16) )
          goto LABEL_40;
        v30 = *(_DWORD *)v29;
        goto LABEL_32;
      }
      v30 = *(_DWORD *)v29;
      if ( *(int *)a4 <= 73 )
      {
        if ( v30 <= 73 || !*(_QWORD *)(v29 + 8) )
          goto LABEL_40;
      }
      else
      {
        v96 = *(_QWORD *)(a4 + 8);
        if ( v30 <= 73 )
        {
          if ( !v96 )
            goto LABEL_40;
          goto LABEL_32;
        }
        if ( v96 == *(_QWORD *)(v29 + 8) )
          goto LABEL_40;
      }
LABEL_128:
      v97 = v27;
      v22 = *(_DWORD *)a4;
      ++v27;
    }
    if ( v30 == 1045 )
      goto LABEL_40;
LABEL_32:
    if ( !v30 )
      goto LABEL_33;
    goto LABEL_128;
  }
  v8 = *(unsigned int *)(a2 + 16);
  v9 = *(_QWORD *)(a4 + 8);
  v10 = *(_QWORD *)a2;
  if ( !(_DWORD)v8 )
    goto LABEL_34;
  v11 = (v8 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( v9 != *v12 )
  {
    v75 = 1;
    while ( v13 != -4096 )
    {
      v76 = v75 + 1;
      v77 = ((_DWORD)v8 - 1) & (v11 + v75);
      v11 = v77;
      v12 = (__int64 *)(v10 + 16 * v77);
      v13 = *v12;
      if ( v9 == *v12 )
        goto LABEL_4;
      v75 = v76;
    }
    goto LABEL_34;
  }
LABEL_4:
  if ( v12 == (__int64 *)(v10 + 16 * v8) )
  {
LABEL_34:
    v136.m128i_i8[8] = 0;
    v35 = nullptr;
    v39 = 0;
    goto LABEL_35;
  }
  v14 = v12[1];
  v15 = (__m128i *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
  v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v14 )
    goto LABEL_24;
  v17 = v14 & 6;
  if ( v17 == 6 )
  {
    if ( !v15 )
      goto LABEL_24;
    v35 = (__m128i *)v15->m128i_i64[0];
    v39 = v15->m128i_u32[2];
    v136.m128i_i8[8] = 0;
LABEL_35:
    v134.m128i_i64[1] = v39;
    v134.m128i_i64[0] = (__int64)v35;
    v37 = 5 * v39 != 0;
    goto LABEL_26;
  }
  if ( v17 )
  {
    if ( v17 == 2 && v15 )
    {
      LODWORD(v148) = sub_720B10(v15);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  if ( !v15 )
  {
LABEL_24:
    v148 = (unsigned __int128)_mm_loadu_si128(v15);
    *(__m128i *)v149 = _mm_loadu_si128(v15 + 1);
    *(_QWORD *)&v149[16] = v15[2].m128i_i64[0];
    v16 = v15->m128i_u64[1];
    goto LABEL_25;
  }
  LODWORD(v148) = sub_720580((__int64)v15);
LABEL_25:
  *((_QWORD *)&v148 + 1) = v16;
  v35 = &v134;
  si128 = _mm_load_si128((const __m128i *)&v148);
  v136.m128i_i8[8] = 1;
  v136.m128i_i64[0] = *(_QWORD *)&v149[16];
  v37 = 1;
  v134 = si128;
  v135 = _mm_load_si128((const __m128i *)v149);
LABEL_26:
  if ( a3 != 1 || !v37 )
    goto LABEL_28;
  v48 = *(_DWORD *)a4;
  LODWORD(v148) = 180;
  if ( !sub_7204C0((int *)&v148, v48)
    || (v49 = *(_WORD **)(a4 + 8),
        v144 = _mm_load_si128(&v134),
        v126 = v49,
        *(__m128i *)v145.m256i_i8 = _mm_load_si128(&v135),
        *(__m128i *)&v145.m256i_u64[2] = _mm_load_si128(&v136),
        !v49) )
  {
    v61 = v35->m128i_i32[0];
    LODWORD(v148) = 180;
    sub_7204C0((int *)&v148, v61);
    goto LABEL_79;
  }
  v50 = 0;
  while ( 1 )
  {
    if ( v145.m256i_i8[24] )
    {
      if ( v50 == 4 )
        goto LABEL_66;
      v51 = &v144;
    }
    else
    {
      if ( 40 * v144.m128i_i64[1] != 40 || v50 == 4 )
        goto LABEL_66;
      v51 = (__m128i *)v144.m128i_i64[0];
    }
    v52 = v51->m128i_i32[0];
    LODWORD(v148) = 176;
    if ( !sub_7204C0((int *)&v148, v52) )
      goto LABEL_66;
    v53 = (_WORD *)v51->m128i_i64[1];
    if ( !v53 )
      goto LABEL_66;
    if ( (*v53 & 0x1FF) == 0x66 )
      break;
    v78 = sub_7DB590((__int64 *)a2, (__int64)v53);
    if ( v78 == (__int64 *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16)) )
    {
      v82 = 0;
      v81 = 0u;
    }
    else
    {
      v79 = v78[1];
      if ( v79 && (~(_BYTE)v79 & 6) == 0 && (v112 = v79 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v82 = 0;
        v81 = __PAIR128__(*(unsigned int *)(v112 + 8), *(_QWORD *)v112);
      }
      else
      {
        sub_7DB1A0((__m128i *)&v141, v78[1]);
        v80 = _mm_load_si128(&v142);
        v81 = v141;
        *(_QWORD *)&v149[16] = v143.m128i_i64[0];
        v82 = 1;
        *(__m128i *)v149 = v80;
      }
    }
    v148 = v81;
    ++v50;
    v83 = _mm_load_si128((const __m128i *)&v148);
    v150.m128i_i8[0] = v82;
    v144 = v83;
    *(__m128i *)v145.m256i_i8 = _mm_load_si128((const __m128i *)v149);
    *(__m128i *)((char *)&v145.m256i_u64[1] + 1) = _mm_loadu_si128((const __m128i *)&v149[9]);
  }
  sub_8C11F0(&v148, v53);
  if ( v126 == (_WORD *)sub_811DB0(*((_QWORD *)&v148 + 1))
    || (sub_8C11F0(&v148, v53), v126 == (_WORD *)sub_811DB0(*(_QWORD *)v149)) )
  {
    v92 = sub_720B10(v53);
    a1[2].m128i_i8[8] = 1;
    LODWORD(v148) = v92;
    *((_QWORD *)&v148 + 1) = v53;
    goto LABEL_48;
  }
LABEL_66:
  v54 = v35->m128i_i32[0];
  LODWORD(v148) = 180;
  if ( !sub_7204C0((int *)&v148, v54) || (v55 = (_WORD *)v35->m128i_i64[1]) == nullptr )
  {
LABEL_79:
    sub_7DB620((__m128i *)&v148, &v134, a2);
    if ( v151.m128i_i8[8] && *((_QWORD *)&v148 + 1) == *(_QWORD *)(v148 + 64) )
    {
      *a1 = _mm_load_si128((const __m128i *)v149);
      a1[1] = _mm_load_si128((const __m128i *)&v149[16]);
      a1[2] = _mm_load_si128((const __m128i *)&v150.m128i_u64[1]);
      return a1;
    }
    v62 = v35->m128i_i32[0];
    LODWORD(v148) = 121;
    if ( !sub_7204C0((int *)&v148, v62) || (v63 = v35->m128i_i64[1]) == 0 )
    {
LABEL_89:
      v70 = v35->m128i_i32[0];
      LODWORD(v148) = 116;
      if ( !sub_7204C0((int *)&v148, v70) )
        goto LABEL_133;
      v71 = v35->m128i_i64[1];
      if ( !v71 )
        goto LABEL_133;
      v72 = sub_7DB590((__int64 *)a2, v71);
      if ( v72 == (__int64 *)sub_7DB610(a2) )
      {
        v140 = 0;
        v98 = 0;
        v99 = 0;
      }
      else
      {
        v73 = v72[1];
        if ( !v73 || (~(_BYTE)v73 & 6) != 0 || (v121 = v73 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          sub_7DB1A0((__m128i *)&v148, v72[1]);
          v140 = 1;
          v74 = _mm_load_si128((const __m128i *)&v148);
          v139 = *(_QWORD *)&v149[16];
          v137 = v74;
          v138 = _mm_load_si128((const __m128i *)v149);
LABEL_95:
          sub_7DBC50(&v144, &v137, a2);
          if ( v147 )
          {
LABEL_96:
            *a1 = _mm_load_si128((const __m128i *)&v145);
            a1[1] = _mm_load_si128((const __m128i *)&v145.m256i_u64[2]);
            a1[2] = _mm_load_si128(&v146);
            return a1;
          }
LABEL_133:
          v100 = v35->m128i_i32[0];
          LODWORD(v148) = 157;
          if ( !sub_7204C0((int *)&v148, v100) )
            goto LABEL_28;
          v101 = v35->m128i_i64[1];
          if ( !v101 )
            goto LABEL_28;
          v102 = sub_7DB590((__int64 *)a2, v101);
          if ( v102 == (__int64 *)sub_7DB610(a2) )
          {
            v140 = 0;
            v122 = 0;
            v123 = 0;
          }
          else
          {
            v103 = v102[1];
            if ( !v103 || (~(_BYTE)v103 & 6) != 0 || (v124 = v103 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            {
              sub_7DB1A0((__m128i *)&v148, v102[1]);
              v140 = 1;
              v104 = _mm_load_si128((const __m128i *)&v148);
              v139 = *(_QWORD *)&v149[16];
              v137 = v104;
              v138 = _mm_load_si128((const __m128i *)v149);
LABEL_139:
              sub_7DBC50(&v144, &v137, a2);
              if ( v147 )
                goto LABEL_96;
LABEL_28:
              *a1 = _mm_load_si128(&v134);
              a1[1] = _mm_load_si128(&v135);
              a1[2] = _mm_load_si128(&v136);
              return a1;
            }
            v122 = *(_QWORD *)v124;
            v123 = *(unsigned int *)(v124 + 8);
            v140 = 0;
          }
          v137.m128i_i64[1] = v123;
          v137.m128i_i64[0] = v122;
          if ( 5 * v123 != 5 )
            goto LABEL_28;
          goto LABEL_139;
        }
        v98 = *(_QWORD *)v121;
        v99 = *(unsigned int *)(v121 + 8);
        v140 = 0;
      }
      v137.m128i_i64[1] = v99;
      v137.m128i_i64[0] = v98;
      if ( 5 * v99 != 5 )
        goto LABEL_133;
      goto LABEL_95;
    }
    v64 = sub_7DB590((__int64 *)a2, v63);
    if ( v64 == (__int64 *)sub_7DB610(a2) )
    {
      v140 = 0;
      v115 = 0;
      v116 = 0;
    }
    else
    {
      v65 = v64[1];
      if ( !v65 || (~(_BYTE)v65 & 6) != 0 || (v120 = v65 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        sub_7DB1A0((__m128i *)&v148, v64[1]);
        v140 = 1;
        v66 = _mm_load_si128((const __m128i *)&v148);
        v139 = *(_QWORD *)&v149[16];
        v137 = v66;
        v138 = _mm_load_si128((const __m128i *)v149);
LABEL_87:
        sub_7DB620(&v144, &v137, a2);
        if ( v147 )
        {
          v67 = _mm_load_si128((const __m128i *)&v145);
          v68 = _mm_load_si128((const __m128i *)&v145.m256i_u64[2]);
          v69 = _mm_load_si128(&v146);
          v141 = (unsigned __int128)v67;
          v142 = v68;
          v143 = v69;
          *(__m128i *)&v149[8] = v67;
          v150 = v68;
          v151 = v69;
          if ( *(_QWORD *)(v144.m128i_i64[0] + 24) == v144.m128i_i64[1] )
          {
            *a1 = v67;
            a1[1] = v68;
            a1[2] = v69;
            return a1;
          }
        }
        goto LABEL_89;
      }
      v115 = *(_QWORD *)v120;
      v116 = *(unsigned int *)(v120 + 8);
      v140 = 0;
    }
    v137.m128i_i64[1] = v116;
    v137.m128i_i64[0] = v115;
    if ( 5 * v116 != 5 )
      goto LABEL_89;
    goto LABEL_87;
  }
  v56 = *v55 & 0x1FF;
  while ( 1 )
  {
    if ( v56 == 80 )
      goto LABEL_112;
    if ( v56 <= 0x3Cu )
    {
      if ( v56 != 49 && v56 != 21 )
      {
        v131 = v55;
        v105 = sub_AC7B80(v126);
        v55 = v131;
        v106 = v105;
        v107 = HIDWORD(v105);
        if ( v56 != 47 )
          goto LABEL_75;
        v108 = sub_AC7B80(v131);
        v55 = v131;
        if ( __PAIR64__(v107, v106) != v108 )
          goto LABEL_75;
      }
    }
    else
    {
      if ( v56 <= 0x3Eu || v56 == 117 )
        goto LABEL_112;
      v129 = v55;
      v57 = sub_AC7B80(v126);
      v55 = v129;
      v58 = v57;
      v132 = HIDWORD(v57);
      if ( v56 == 87 )
      {
        v59 = sub_AC7B80(v129);
        v55 = v129;
        if ( v58 != (_DWORD)v59 )
          goto LABEL_75;
LABEL_163:
        if ( (_DWORD)v132 != HIDWORD(v59) )
          goto LABEL_75;
        goto LABEL_112;
      }
      if ( (unsigned int)v56 - 114 > 1 )
      {
        if ( v56 != 93 )
          goto LABEL_75;
        v59 = sub_AC7B80(v129);
        v55 = v129;
        if ( v58 != (_DWORD)v59 )
          goto LABEL_75;
        goto LABEL_163;
      }
      v84 = sub_AC7B80(v129);
      v55 = v129;
      if ( __PAIR64__(v132, v58) != v84 && (v129[1] & 8) == 0 )
        goto LABEL_75;
    }
LABEL_112:
    v85 = *(unsigned int *)(a2 + 16);
    v86 = *(_QWORD *)a2;
    if ( !(_DWORD)v85 )
      goto LABEL_75;
    v87 = (v85 - 1) & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
    v88 = (_QWORD *)(v86 + 16LL * v87);
    v89 = (_WORD *)*v88;
    if ( v55 != (_WORD *)*v88 )
    {
      v117 = 1;
      while ( v89 != (_WORD *)-4096LL )
      {
        v118 = v117 + 1;
        v119 = ((_DWORD)v85 - 1) & (v87 + v117);
        v87 = v119;
        v88 = (_QWORD *)(v86 + 16 * v119);
        v89 = (_WORD *)*v88;
        if ( v55 == (_WORD *)*v88 )
          goto LABEL_114;
        v117 = v118;
      }
LABEL_75:
      v127 = (__int64)v55;
      v60 = sub_720B10(v55);
      a1[2].m128i_i8[8] = 1;
      LODWORD(v148) = v60;
      *((_QWORD *)&v148 + 1) = v127;
      goto LABEL_48;
    }
LABEL_114:
    if ( v88 == (_QWORD *)(v86 + 16 * v85) )
      goto LABEL_75;
    v90 = v88[1];
    if ( !v90 )
      goto LABEL_118;
    v91 = v88[1] & 6LL;
    if ( v91 != 2 )
      break;
    v109 = (_WORD *)(v90 & 0xFFFFFFFFFFFFFFF8LL);
    v110 = (__int64)v109;
    if ( !v109 )
      goto LABEL_118;
    v56 = *v109 & 0x1FF;
    if ( ((v56 + 509) & 0x1FFu) > 0x7F )
    {
      v111 = sub_720B10(v109);
      a1[2].m128i_i8[8] = 1;
      LODWORD(v148) = v111;
      *((_QWORD *)&v148 + 1) = v110;
      goto LABEL_48;
    }
    v126 = v55;
    v55 = v109;
  }
  if ( v91 != 6 || (v113 = v90 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_118:
    sub_7DB1A0((__m128i *)&v148, v88[1]);
    a1[2].m128i_i8[8] = 1;
    goto LABEL_48;
  }
  v114 = *(_QWORD *)v113;
  a1[2].m128i_i8[8] = 0;
  a1->m128i_i64[0] = v114;
  a1->m128i_i64[1] = *(unsigned int *)(v113 + 8);
  return a1;
}

