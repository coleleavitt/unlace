__m128i *__fastcall sub_273A40(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __m128i *v8; // rbx
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // r14
  bool v19; // zf
  const __m128i *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // r9
  __int64 v25; // rsi
  int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // r9d
  __int32 v30; // eax
  __int64 v31; // r14
  __int64 v32; // rax
  __int32 v33; // eax
  __int64 (*v34)(); // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // edx
  __m128i *v39; // rax
  unsigned __int64 v40; // rax
  unsigned int tinfo_property; // eax
  unsigned __int64 v42; // rax
  char tinfo_details; // al
  int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int32 v60; // ecx
  __int32 v61; // ecx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rdi
  __int64 v75; // r8
  __int64 v76; // r12
  __int64 v77; // rbx
  _QWORD *v78; // r15
  __int64 v79; // r8
  char v80; // al
  int v81; // r15d
  __int64 v82; // rax
  __int64 v84; // rdx
  __m128i *v85; // rsi
  __m128i *v86; // rdi
  __int64 v87; // rcx
  __int64 v88; // r9
  signed __int64 v89; // r15
  signed __int64 v90; // rax
  bool v91; // al
  int v92; // r15d
  __int64 v93; // r14
  __int64 v94; // rdi
  __int64 v95; // r14
  __int64 v96; // r15
  _QWORD *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  bool v100; // al
  signed __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // r13
  _QWORD *v106; // r15
  __int64 v107; // [rsp+0h] [rbp-190h]
  __int64 v108; // [rsp+8h] [rbp-188h]
  __int64 v109; // [rsp+20h] [rbp-170h]
  _QWORD *v110; // [rsp+20h] [rbp-170h]
  __int64 v111; // [rsp+20h] [rbp-170h]
  __int64 v112; // [rsp+20h] [rbp-170h]
  __int64 v113; // [rsp+20h] [rbp-170h]
  __int64 v114; // [rsp+20h] [rbp-170h]
  __int64 v115; // [rsp+20h] [rbp-170h]
  __int64 v116; // [rsp+20h] [rbp-170h]
  __int64 v117; // [rsp+20h] [rbp-170h]
  __int64 v118; // [rsp+20h] [rbp-170h]
  __int64 v119; // [rsp+20h] [rbp-170h]
  __int64 v120; // [rsp+20h] [rbp-170h]
  __int64 v121; // [rsp+20h] [rbp-170h]
  __int64 v122; // [rsp+20h] [rbp-170h]
  __int64 v123; // [rsp+28h] [rbp-168h]
  __int64 v124; // [rsp+30h] [rbp-160h]
  __m128i *v125; // [rsp+40h] [rbp-150h]
  int v126; // [rsp+50h] [rbp-140h]
  int tinfo_size; // [rsp+5Ch] [rbp-134h]
  int v128; // [rsp+60h] [rbp-130h]
  __m128i *v129; // [rsp+60h] [rbp-130h]
  __int64 v130; // [rsp+70h] [rbp-120h]
  __int64 v131; // [rsp+70h] [rbp-120h]
  __m128i *v132; // [rsp+70h] [rbp-120h]
  __int64 v133; // [rsp+70h] [rbp-120h]
  __m128i *v134; // [rsp+78h] [rbp-118h] BYREF
  unsigned __int64 v135; // [rsp+80h] [rbp-110h] BYREF
  __int64 v136; // [rsp+88h] [rbp-108h] BYREF
  unsigned __int64 v137; // [rsp+90h] [rbp-100h] BYREF
  __int64 v138; // [rsp+98h] [rbp-F8h]
  __int64 v139; // [rsp+A0h] [rbp-F0h]
  __int64 v140; // [rsp+A8h] [rbp-E8h] BYREF
  _BYTE *v141; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v142; // [rsp+B8h] [rbp-D8h]
  __int128 v143; // [rsp+D0h] [rbp-C0h]
  __int64 v144; // [rsp+E0h] [rbp-B0h]
  int v145; // [rsp+E8h] [rbp-A8h]
  __int16 v146; // [rsp+ECh] [rbp-A4h]
  _OWORD v147[2]; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v148; // [rsp+110h] [rbp-80h]
  __int64 v149; // [rsp+118h] [rbp-78h]
  __int128 v150; // [rsp+120h] [rbp-70h]
  __int64 v151; // [rsp+130h] [rbp-60h]
  __int128 v152; // [rsp+138h] [rbp-58h]
  char v153; // [rsp+148h] [rbp-48h]
  unsigned __int64 v154; // [rsp+158h] [rbp-38h]

  v134 = (__m128i *)a2;
  v154 = __readfsqword(0x28u);
  *(_QWORD *)&v147[0] = 0;
  v143 = 0;
  copy_tinfo_t();
  v144 = 0;
  copy_tinfo_t();
  v145 = 0;
  v146 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  v142 = 0;
  v141 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v142 = 2;
  *v141 = 120;
  v141[1] = 0;
  sub_26AE90(
    (__int64 *)v147,
    a1[2].m128i_i64[0],
    *(_QWORD *)(a1->m128i_i64[1] + 64),
    (__int64 *)a1[1].m128i_i64[0],
    &a1[28].m128i_i8[2],
    -1);
  v125 = a1 + 9;
  copy_tinfo_t();
  clear_tinfo_t();
  tinfo_size = get_tinfo_size();
  if ( !a1[9].m128i_i8[0] )
  {
    v3 = a1[1].m128i_i64[1];
    if ( *(_DWORD *)(v3 + 8) == 2 && *(_QWORD *)(v3 + 24) == a1[2].m128i_i64[1] )
      tinfo_size = get_tinfo_size();
  }
  dstr_tinfo();
  v128 = 0;
  v123 = *(_QWORD *)(a1->m128i_i64[0] + 112);
  v124 = (__int64)v134;
  v8 = v134;
  v126 = (_DWORD)a1 + 136;
LABEL_4:
  if ( v8->m128i_i32[2] == 52 )
  {
LABEL_69:
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( a1[27].m128i_i32[2] )
      {
        if ( !under_debugger )
          sub_383060(50191);
LABEL_211:
        BUG();
      }
      a1[27].m128i_i32[2] = 1;
      sub_255850(v8->m128i_i64, v8[1].m128i_i64[1]);
      v40 = (unsigned int)(v8->m128i_i32[2] - 51);
      if ( (unsigned int)v40 > 0xE || (v4 = 25473, !_bittest64(&v4, v40)) )
      {
        if ( (v8[3].m128i_i8[8] & 2) == 0 )
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD
            || (tinfo_property = get_tinfo_property(), !(unsigned __int8)sub_32A490(&v8[3], tinfo_property)) )
          {
            if ( !under_debugger )
              sub_383060(50192);
            goto LABEL_211;
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v9 = sub_26CA00((_DWORD)a1, (_DWORD)v8, v4, v5, v6, v7, v107);
    v136 = 0;
    v130 = v9;
    v10 = v9;
    v135 = v9;
    copy_tinfo_t();
    v11 = a1[5].m128i_i64[1];
    v12 = a1[6].m128i_i64[0];
    v13 = v11 - v12;
    v137 = v11 - v12;
    if ( v11 - v12 < 0 && !a1[27].m128i_i32[2] )
    {
      v109 = v11;
      tinfo_details = get_tinfo_details();
      v11 = v109;
      if ( tinfo_details )
      {
        v44 = v145;
        if ( v145 )
        {
          v45 = v145;
          if ( v145 >= v12 - v109 )
          {
            v46 = a1[6].m128i_i64[0];
            v47 = a1[5].m128i_i64[1];
LABEL_92:
            v138 = 0;
            if ( v45 > v46 )
              v45 = v46;
            v139 = 0;
            v140 = 0;
            v147[0] = 0;
            a1[6].m128i_i64[0] = v46 - v45;
            a1[5].m128i_i64[1] = v47 + v44 - (int)v45;
            copy_tinfo_t();
            *(_QWORD *)&v147[1] = 0;
            copy_tinfo_t();
            DWORD2(v147[1]) = 0;
            WORD6(v147[1]) = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            v153 = 16;
            v148 = 0;
            memset(v147, 0, sizeof(v147));
            v149 = 0;
            v151 = 0;
            v150 = 0;
            v152 = 0;
            copy_tinfo_t();
            v48 = *((_QWORD *)&v147[0] + 1);
            HIDWORD(v147[1]) = 0;
            v49 = *(_QWORD *)&v147[0];
            v153 = v153 & 0xF | 0x70;
            if ( *(_QWORD *)&v147[1] < (unsigned __int64)(*((_QWORD *)&v147[0] + 1) + 1LL) )
            {
              *(_QWORD *)&v147[0] = qvector_reserve();
              v48 = *((_QWORD *)&v147[0] + 1);
              v49 = *(_QWORD *)&v147[0];
            }
            v50 = v49 + 80 * v48;
            *(_DWORD *)v50 = 0;
            *(_QWORD *)(v50 + 8) = 0;
            *(_QWORD *)(v50 + 16) = 0;
            *(_QWORD *)(v50 + 40) = 0;
            *(_QWORD *)(v50 + 64) = 0;
            *(_DWORD *)(v50 + 72) = 0;
            *(_OWORD *)(v50 + 24) = 0;
            *(_OWORD *)(v50 + 48) = 0;
            v110 = (_QWORD *)v50;
            ++*((_QWORD *)&v147[0] + 1);
            copy_tinfo_t();
            v51 = v110[2];
            if ( v110[4] <= 3u )
            {
              v51 = qvector_reserve();
              v110[2] = v51;
            }
            v110[3] = 4;
            *(_WORD *)v51 = 29808;
            *(_BYTE *)(v51 + 2) = 114;
            *(_BYTE *)(v110[2] + 3LL) = 0;
            v140 = 0;
            create_tinfo();
            v111 = sub_2426C0(0);
            v52 = j__qalloc_or_throw();
            *(_QWORD *)v52 = -1;
            *(_DWORD *)(v52 + 8) = 57;
            *(_QWORD *)(v52 + 24) = v111;
            *(_QWORD *)(v52 + 12) = -1;
            *(_QWORD *)(v52 + 32) = 0;
            *(_QWORD *)(v52 + 40) = 0;
            *(_QWORD *)(v52 + 48) = 0;
            *(_DWORD *)(v52 + 56) = 0;
            v112 = v52;
            v53 = qalloc_or_throw();
            *(_QWORD *)v53 = 0;
            *(_QWORD *)(v53 + 24) = 0;
            *(_DWORD *)(v53 + 32) = 0;
            *(_OWORD *)(v53 + 8) = 0;
            *(_QWORD *)(v112 + 32) = v53;
            copy_tinfo_t();
            v54 = v112;
            v55 = *(__int64 **)(v112 + 32);
            v56 = v55[1];
            v57 = *v55;
            if ( v55[2] < (unsigned __int64)(v56 + 1) )
            {
              v103 = qvector_reserve();
              v54 = v112;
              v57 = v103;
              *v55 = v103;
              v56 = v55[1];
            }
            v108 = v54;
            v58 = v57 + 72 * v56;
            *(_QWORD *)v58 = -1;
            *(_DWORD *)(v58 + 8) = 0;
            *(_QWORD *)(v58 + 12) = -1;
            *(_QWORD *)(v58 + 40) = 0;
            *(_QWORD *)(v58 + 48) = 0;
            *(_DWORD *)(v58 + 56) = 0;
            *(_BYTE *)(v58 + 60) = 0;
            *(_QWORD *)(v58 + 64) = 0;
            *(_OWORD *)(v58 + 24) = 0;
            ++v55[1];
            v113 = v58;
            copy_tinfo_t();
            v59 = v8->m128i_i64[0];
            v8->m128i_i64[0] = *(_QWORD *)v113;
            v60 = *(_DWORD *)(v113 + 8);
            *(_QWORD *)v113 = v59;
            LODWORD(v59) = v8->m128i_i32[2];
            v8->m128i_i32[2] = v60;
            v61 = *(_DWORD *)(v113 + 12);
            *(_DWORD *)(v113 + 8) = v59;
            LODWORD(v59) = v8->m128i_i32[3];
            v8->m128i_i32[3] = v61;
            v62 = *(_QWORD *)(v113 + 24);
            *(_DWORD *)(v113 + 12) = v59;
            v63 = v8[1].m128i_i64[1];
            v8[1].m128i_i64[1] = v62;
            v64 = *(_QWORD *)(v113 + 32);
            *(_QWORD *)(v113 + 24) = v63;
            v65 = v8[2].m128i_i64[0];
            v8[2].m128i_i64[0] = v64;
            v66 = *(_QWORD *)(v113 + 40);
            *(_QWORD *)(v113 + 32) = v65;
            v67 = v8[2].m128i_i64[1];
            v8[2].m128i_i64[1] = v66;
            v68 = *(_QWORD *)(v113 + 48);
            *(_QWORD *)(v113 + 40) = v67;
            v69 = v8[3].m128i_i64[0];
            v8[3].m128i_i64[0] = v68;
            LODWORD(v68) = *(_DWORD *)(v113 + 56);
            *(_QWORD *)(v113 + 48) = v69;
            LODWORD(v69) = v8[3].m128i_i32[2];
            v8[3].m128i_i32[2] = v68;
            *(_DWORD *)(v113 + 56) = v69;
            v70 = v108;
            if ( v8 )
            {
              sub_255630((__int64)v8);
              clear_tinfo_t();
              j__qfree();
              v70 = v108;
            }
            v71 = v138;
            *(_DWORD *)(v70 + 56) |= 1u;
            v72 = *(_QWORD *)(v70 + 48);
            v114 = v70;
            *(_QWORD *)(v70 + 48) = v71;
            v138 = v72;
            clear_tinfo_t();
            v73 = v114;
            if ( v151 )
            {
              *(_QWORD *)&v152 = 0;
              qfree();
              v73 = v114;
            }
            v115 = v73;
            cleanup_argloc();
            clear_tinfo_t();
            v74 = *(_QWORD *)&v147[0];
            v75 = v115;
            if ( *(_QWORD *)&v147[0] )
            {
              v76 = *((_QWORD *)&v147[0] + 1);
              if ( *((_QWORD *)&v147[0] + 1) )
              {
                v77 = 0;
                do
                {
                  v78 = (_QWORD *)(v74 + 80 * v77);
                  clear_tinfo_t();
                  if ( v78[5] )
                  {
                    v78[6] = 0;
                    qfree();
                  }
                  if ( v78[2] )
                  {
                    v78[3] = 0;
                    qfree();
                  }
                  ++v77;
                  cleanup_argloc();
                  v74 = *(_QWORD *)&v147[0];
                }
                while ( v76 != v77 );
                v75 = v115;
              }
              v116 = v75;
              *((_QWORD *)&v147[0] + 1) = 0;
              qfree();
              v75 = v116;
            }
            v117 = v75;
            clear_tinfo_t();
            v79 = v117;
            v134 = (__m128i *)v117;
            goto LABEL_132;
          }
        }
      }
    }
    if ( v130 <= 0 )
      goto LABEL_120;
    v14 = v13 / v130;
    v15 = v13 / v130;
    v16 = 0xFFFFFFFF80000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) == 8 )
      v16 = 0x8000000000000000LL;
    if ( a1[4].m128i_i64[0] )
    {
      if ( v13 < 0 && v12 - v11 < v130 )
      {
        v91 = sub_26AAE0(a1->m128i_i64[0], (_QWORD *)a1[3].m128i_i64[1], v130);
        v15 = v13 / v130;
        if ( v91 )
        {
          v14 = v13 / v130;
LABEL_136:
          v15 = v14 - 1;
          v18 = 0;
          goto LABEL_13;
        }
      }
    }
    else if ( v13 < 0 && v14 * v130 != v13 )
    {
      v19 = v16 == 0x8000000000000000LL;
      v42 = 0x8000000000000001LL;
      if ( !v19 )
        v42 = -2147483647;
      if ( v42 != v13 && v14 * v130 - v130 < 0 )
        goto LABEL_136;
    }
    v17 = a1[6].m128i_i64[0];
    if ( !v17 )
      goto LABEL_79;
    v18 = v17 != a1[5].m128i_i64[1] && a1[5].m128i_i64[1] < v130 && v130 != 1;
    if ( v18 )
    {
      if ( !(v17 % v130) )
      {
        v15 = -v17 / v130;
        goto LABEL_13;
      }
LABEL_79:
      v18 = 0;
    }
LABEL_13:
    v19 = a1[27].m128i_i32[3] == 1;
    v137 = v15;
    if ( v19
      && v8->m128i_i32[2] == 65
      && (*(_BYTE *)(*(_QWORD *)(v8[1].m128i_i64[1] + 432) + 104LL * v8[2].m128i_i32[0] + 25) & 1) != 0 )
    {
      v118 = v15;
      v80 = sub_26D3F0((__int64)a1, (__int64 *)&v137, (__int64 *)&v135, &v136);
      v15 = v118;
      if ( v80 )
      {
        v81 = get_tinfo_size();
        v82 = j__qalloc_or_throw();
        *(_QWORD *)v82 = -1;
        *(_QWORD *)(v82 + 40) = 0;
        *(_DWORD *)(v82 + 8) = 51;
        *(_QWORD *)(v82 + 12) = -1;
        *(_QWORD *)(v82 + 24) = v8;
        *(_QWORD *)(v82 + 32) = 0;
        *(_QWORD *)(v82 + 48) = 0;
        *(_DWORD *)(v82 + 56) = 0;
        v134 = (__m128i *)v82;
        *(_DWORD *)(v82 + 40) = v81;
        v131 = v82;
        sub_2441C0(v82, *(_QWORD *)(a1->m128i_i64[0] + 112), 0);
        v79 = v131;
        *(_DWORD *)(v131 + 56) |= 1u;
        goto LABEL_132;
      }
    }
    if ( !a1[27].m128i_i32[2] && !a1[28].m128i_i8[5] && !v18 && v15 >= 0 )
    {
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v44 = v145;
        if ( v145 )
        {
          v47 = a1[5].m128i_i64[1];
          v45 = v145;
          v46 = a1[6].m128i_i64[0];
          v102 = v145 + v47 - v46;
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) != 8 )
            v102 = (int)v102;
          if ( v102 >= 0 )
            goto LABEL_92;
        }
      }
    }
    if ( a1[4].m128i_i64[0] )
    {
      v20 = (const __m128i *)a1[3].m128i_i64[1];
      v147[0] = _mm_loadu_si128(v20);
      v147[1] = _mm_loadu_si128(v20 + 1);
      if ( sub_26D4E0(a1->m128i_i64, v147, (__int64 *)&v137, (__int64 *)&v135, &v136) )
      {
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
        {
          v23 = v135;
          v120 = v137;
          v98 = sub_270E10(a1->m128i_i64, v8, (__int64 *)v147, v135, (__int64)&a1[6].m128i_i64[1], v137, 0);
          v99 = v120;
          if ( v98 )
          {
            v86 = (__m128i *)a1[3].m128i_i64[1];
            v121 = v98;
            v133 = v99;
            v85 = v86 + 2;
            memmove(v86, &v86[2], 32 * a1[4].m128i_i64[0]-- - 32);
            v88 = v133;
            v79 = v121;
            goto LABEL_127;
          }
        }
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD
      && (a1[27].m128i_i8[12] & 2) == 0
      && (unsigned __int8)a1[9].m128i_i64[0]
      && (unsigned __int64)v142 > 1 )
    {
      if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] && !a1[4].m128i_i64[0]
        || (*(_QWORD *)&v147[0] = 0,
            *(_QWORD *)&v147[0] = get_tinfo_property(),
            v21 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            (_BYTE)v21 != 1) )
      {
        if ( (a1[27].m128i_i32[1] != 0) == a1[28].m128i_i8[5] || get_tinfo_property() )
        {
          v140 = 0;
          copy_tinfo_t();
          if ( !a1[27].m128i_i32[1] && (a1[27].m128i_i32[2] || a1[28].m128i_i8[5]) )
          {
            sub_32C540(v147, *(_QWORD *)(a1->m128i_i64[0] + 112), &v140);
            copy_tinfo_t();
            clear_tinfo_t();
          }
          if ( (unsigned __int8)sub_32A510(a1->m128i_i64[0], &v140, v125) )
          {
            if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
            {
LABEL_162:
              clear_tinfo_t();
              goto LABEL_120;
            }
            clear_tinfo_t();
            goto LABEL_34;
          }
          clear_tinfo_t();
        }
      }
    }
    if ( !(unsigned __int8)sub_26D610((__int64)a1, (__int64 *)&v137, (__int64 *)&v135, &v136) )
      goto LABEL_34;
    v22 = a1[5].m128i_i64[0];
    v23 = v135;
    v24 = v137;
    v25 = a1[5].m128i_i64[1];
    v26 = 8 * *(_DWORD *)(*(_QWORD *)(v22 + 112) + 84LL) - 1;
    if ( (unsigned __int64)v26 <= 0x3F )
    {
      v27 = v137 * v135;
      v28 = 1LL << v26;
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 24LL) == 8 )
      {
        if ( (v28 & (v27 ^ v137)) != 0 )
          goto LABEL_34;
        v84 = (v25 ^ (v25 - v27)) & v28;
      }
      else
      {
        if ( (v28 & ((int)v27 ^ v137)) != 0 )
          goto LABEL_34;
        v84 = (v25 ^ ((int)v25 - (int)v27)) & v28;
      }
      if ( v84 )
        goto LABEL_34;
    }
    if ( a1[6].m128i_i64[0] == v25 )
    {
      v122 = v137;
      v100 = sub_26D070((__int64)a1);
      v24 = v122;
      if ( !v100 )
        goto LABEL_120;
    }
    v85 = v8;
    v86 = a1;
    v119 = v24;
    v79 = sub_270E10(a1->m128i_i64, v8, nullptr, 1u, (__int64)&a1[6].m128i_i64[1], v24, v24 == 0);
    v88 = v119;
    if ( v79 )
    {
LABEL_127:
      v89 = v88 * v23;
      if ( v18 )
      {
        v101 = a1[6].m128i_i64[0];
        if ( -v89 > v101 )
          sub_269F20(v86, v85, -v89, v87, v79);
        a1[6].m128i_i64[0] = v101 + v89;
        goto LABEL_130;
      }
      v90 = a1[5].m128i_i64[1];
      if ( v89 > v90 )
      {
        if ( !under_debugger )
          sub_383060(50183);
        goto LABEL_211;
      }
      a1[5].m128i_i64[1] = v90 - v89;
LABEL_130:
      v19 = *(_DWORD *)(v79 + 8) == 58;
      v134 = (__m128i *)v79;
      if ( v19 )
        ++v128;
LABEL_132:
      v132 = (__m128i *)v79;
      clear_tinfo_t();
      v8 = v132;
      goto LABEL_4;
    }
LABEL_34:
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      goto LABEL_120;
    v30 = a1[27].m128i_i32[3];
    if ( v128 <= 0 )
    {
      if ( v30 == 3 )
        goto LABEL_120;
    }
    else if ( v30 )
    {
      goto LABEL_120;
    }
    v31 = a1[5].m128i_i64[1];
    v32 = a1[6].m128i_i64[0];
    if ( v31 > 0 && v31 < v32 )
    {
      if ( v130 > v31 )
        goto LABEL_42;
      v31 -= v32;
      if ( v31 < 0 )
        goto LABEL_120;
      if ( v130 > v31 )
        goto LABEL_42;
LABEL_41:
      if ( !get_tinfo_property() )
        goto LABEL_120;
      goto LABEL_42;
    }
    v31 -= v32;
    if ( v31 < 0 )
      break;
    if ( v130 <= v31 )
      goto LABEL_41;
LABEL_42:
    v33 = v8->m128i_i32[2];
    if ( v33 != 52 && a1[27].m128i_i32[2] && a1[27].m128i_i32[3] == 1 && (v33 != 64 || !(unsigned __int8)is_spec_ea()) )
      goto LABEL_120;
    if ( tinfo_size == v10 )
    {
      v34 = *(__int64 (**)())(*(_QWORD *)v123 + 296LL);
      if ( v34 != sub_269EE0 && !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64))v34)(v123, &v8[3], v31) )
        goto LABEL_120;
    }
    if ( (unsigned __int8)sub_26D870((__int64)a1, v31) )
      goto LABEL_120;
    if ( !v31 && !a1[27].m128i_i32[1] && (unsigned __int64)v142 > 1 && !a1[10].m128i_i64[0] )
    {
      if ( (!a1[4].m128i_i64[0] || !(*(_QWORD *)(a1[3].m128i_i64[1] + 24) % v130))
        && (!(unsigned __int8)a1[9].m128i_i64[0] || (get_tinfo_property() & 0x3F) == 1)
        || *(_DWORD *)(a1[2].m128i_i64[0] + 8) == 52 )
      {
        goto LABEL_120;
      }
      if ( !a1[28].m128i_i8[5] )
      {
        v35 = a1[1].m128i_i64[0];
        v36 = *(_DWORD *)(v35 + 8) - 1;
        if ( v36 >= 0 )
        {
          v37 = *(_QWORD *)v35 + 8LL * (unsigned int)v36;
          do
          {
            if ( !*(_QWORD *)v37 )
              break;
            v38 = *(_DWORD *)(*(_QWORD *)v37 + 8LL);
            if ( v38 == 51 )
              goto LABEL_66;
            if ( v38 != 48 )
              break;
            --v36;
            v37 -= 8;
          }
          while ( v36 != -1 );
        }
        if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) == 80
          && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL) + 320LL)
          || !(unsigned __int8)sub_26D9B0(a1) )
        {
          goto LABEL_120;
        }
      }
    }
LABEL_66:
    v39 = (__m128i *)sub_272C50(a1, v124, (__int64 *)&v134, v10, v31, v125, tinfo_size, (__int64)&v141);
    v8 = v39;
    if ( !v39 )
    {
      v8 = v134;
      goto LABEL_120;
    }
    v134 = v39;
    v39->m128i_i64[0] = a1[8].m128i_i64[0];
    if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
    {
      *(_QWORD *)&v147[0] = 0;
      *(_QWORD *)&v147[0] = get_tinfo_property();
      if ( !(unsigned int)lexcompare_tinfo() )
        goto LABEL_162;
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v128 = 0;
    if ( v8->m128i_i32[2] == 52 )
      goto LABEL_69;
  }
  if ( !a1[4].m128i_i64[0] )
    goto LABEL_120;
  memset(v147, 0, 24);
  sub_3349B0((unsigned int)v147, v126, 0, 0, 0, v29);
  if ( !*((_QWORD *)&v147[0] + 1) )
  {
    if ( *(_QWORD *)&v147[0] )
      goto LABEL_195;
    goto LABEL_120;
  }
  v92 = 0;
  v93 = 0;
  do
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
      break;
    v93 = ++v92;
  }
  while ( (unsigned __int64)v92 < *((_QWORD *)&v147[0] + 1) );
  v94 = *(_QWORD *)&v147[0];
  if ( v93 != *((_QWORD *)&v147[0] + 1) )
  {
    if ( *(_QWORD *)&v147[0] )
    {
      if ( *((_QWORD *)&v147[0] + 1) )
      {
        v129 = v8;
        v95 = 0;
        v96 = *((_QWORD *)&v147[0] + 1);
        do
        {
          v97 = (_QWORD *)(v94 + (v95 << 6));
          clear_tinfo_t();
          if ( v97[4] )
          {
            v97[5] = 0;
            qfree();
          }
          if ( v97[1] )
          {
            v97[2] = 0;
            qfree();
          }
          ++v95;
          v94 = *(_QWORD *)&v147[0];
        }
        while ( v95 != v96 );
        v8 = v129;
      }
      *((_QWORD *)&v147[0] + 1) = 0;
      qfree();
    }
    v31 = 0;
    goto LABEL_42;
  }
  if ( *(_QWORD *)&v147[0] )
  {
    if ( *((_QWORD *)&v147[0] + 1) )
    {
      v104 = 0;
      v105 = *((_QWORD *)&v147[0] + 1);
      do
      {
        v106 = (_QWORD *)(v94 + (v104 << 6));
        clear_tinfo_t();
        if ( v106[4] )
        {
          v106[5] = 0;
          qfree();
        }
        if ( v106[1] )
        {
          v106[2] = 0;
          qfree();
        }
        ++v104;
        v94 = *(_QWORD *)&v147[0];
      }
      while ( v104 != v105 );
    }
LABEL_195:
    *((_QWORD *)&v147[0] + 1) = 0;
    qfree();
  }
LABEL_120:
  clear_tinfo_t();
  if ( v141 )
  {
    *(_QWORD *)&v142 = 0;
    qfree();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v8;
}
