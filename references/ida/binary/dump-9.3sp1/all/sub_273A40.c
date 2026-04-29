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
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  __int32 v64; // ecx
  __int32 v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rdi
  __int64 v79; // r8
  __int64 v80; // r12
  __int64 v81; // rbx
  _QWORD *v82; // r15
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // r8
  char v86; // al
  __int64 v87; // rsi
  int v88; // r15d
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v93; // rdx
  __m128i *v94; // rsi
  __m128i *v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // r9
  signed __int64 v98; // r15
  signed __int64 v99; // rax
  bool v100; // al
  int v101; // r15d
  __int64 v102; // r14
  __int64 v103; // rdi
  __int64 v104; // r14
  __int64 v105; // r15
  _QWORD *v106; // rbx
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // r8
  __int64 v110; // r9
  bool v111; // al
  signed __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // r12
  __int64 v116; // r13
  _QWORD *v117; // r15
  __int64 v118; // rdi
  __int64 v119; // rdi
  __int64 v120; // [rsp+0h] [rbp-190h]
  __int64 v121; // [rsp+8h] [rbp-188h]
  __int64 v122; // [rsp+20h] [rbp-170h]
  _QWORD *v123; // [rsp+20h] [rbp-170h]
  __int64 v124; // [rsp+20h] [rbp-170h]
  __int64 v125; // [rsp+20h] [rbp-170h]
  __int64 v126; // [rsp+20h] [rbp-170h]
  __int64 v127; // [rsp+20h] [rbp-170h]
  __int64 v128; // [rsp+20h] [rbp-170h]
  __int64 v129; // [rsp+20h] [rbp-170h]
  __int64 v130; // [rsp+20h] [rbp-170h]
  __int64 v131; // [rsp+20h] [rbp-170h]
  __int64 v132; // [rsp+20h] [rbp-170h]
  __int64 v133; // [rsp+20h] [rbp-170h]
  __int64 v134; // [rsp+20h] [rbp-170h]
  __int64 v135; // [rsp+20h] [rbp-170h]
  __int64 v136; // [rsp+28h] [rbp-168h]
  __int64 v137; // [rsp+30h] [rbp-160h]
  __m128i *v138; // [rsp+40h] [rbp-150h]
  int v139; // [rsp+50h] [rbp-140h]
  int tinfo_size; // [rsp+5Ch] [rbp-134h]
  int v141; // [rsp+60h] [rbp-130h]
  __m128i *v142; // [rsp+60h] [rbp-130h]
  __int64 v143; // [rsp+70h] [rbp-120h]
  __int64 v144; // [rsp+70h] [rbp-120h]
  __m128i *v145; // [rsp+70h] [rbp-120h]
  __int64 v146; // [rsp+70h] [rbp-120h]
  __m128i *v147; // [rsp+78h] [rbp-118h] BYREF
  unsigned __int64 v148; // [rsp+80h] [rbp-110h] BYREF
  __int64 v149; // [rsp+88h] [rbp-108h] BYREF
  unsigned __int64 v150; // [rsp+90h] [rbp-100h] BYREF
  __int64 v151; // [rsp+98h] [rbp-F8h]
  __int64 v152; // [rsp+A0h] [rbp-F0h]
  __int64 v153; // [rsp+A8h] [rbp-E8h] BYREF
  _BYTE *v154; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v155; // [rsp+B8h] [rbp-D8h]
  __int128 v156; // [rsp+D0h] [rbp-C0h]
  __int64 v157; // [rsp+E0h] [rbp-B0h]
  int v158; // [rsp+E8h] [rbp-A8h]
  __int16 v159; // [rsp+ECh] [rbp-A4h]
  _OWORD v160[2]; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v161; // [rsp+110h] [rbp-80h]
  __int64 v162; // [rsp+118h] [rbp-78h]
  __int128 v163; // [rsp+120h] [rbp-70h]
  __int64 v164; // [rsp+130h] [rbp-60h]
  __int128 v165; // [rsp+138h] [rbp-58h]
  char v166; // [rsp+148h] [rbp-48h]
  unsigned __int64 v167; // [rsp+158h] [rbp-38h]

  v147 = (__m128i *)a2;
  v167 = __readfsqword(0x28u);
  *(_QWORD *)&v160[0] = 0;
  v154 = nullptr;
  v156 = 0;
  copy_tinfo_t();
  v157 = 0;
  copy_tinfo_t();
  v158 = 0;
  v159 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  v154 = nullptr;
  v155 = 0;
  v154 = (_BYTE *)qvector_reserve((__int64)&v154, 0, 2, 1);
  *(_QWORD *)&v155 = 2;
  *v154 = 120;
  v154[1] = 0;
  sub_26AE90(
    (__int64 *)v160,
    a1[2].m128i_i64[0],
    *(_QWORD *)(a1->m128i_i64[1] + 64),
    (__int64 *)a1[1].m128i_i64[0],
    &a1[28].m128i_i8[2],
    -1);
  v138 = a1 + 9;
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
  v141 = 0;
  v136 = *(_QWORD *)(a1->m128i_i64[0] + 112);
  v137 = (__int64)v147;
  v8 = v147;
  v139 = (_DWORD)a1 + 136;
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
    v9 = sub_26CA00((_DWORD)a1, (_DWORD)v8, v4, v5, v6, v7, v120);
    v149 = 0;
    v143 = v9;
    v10 = v9;
    v148 = v9;
    copy_tinfo_t();
    v11 = a1[5].m128i_i64[1];
    v12 = a1[6].m128i_i64[0];
    v13 = v11 - v12;
    v150 = v11 - v12;
    if ( v11 - v12 < 0 && !a1[27].m128i_i32[2] )
    {
      v122 = v11;
      tinfo_details = get_tinfo_details();
      v11 = v122;
      if ( tinfo_details )
      {
        v44 = v158;
        if ( v158 )
        {
          v45 = v158;
          if ( v158 >= v12 - v122 )
          {
            v46 = a1[6].m128i_i64[0];
            v47 = a1[5].m128i_i64[1];
LABEL_92:
            v151 = 0;
            if ( v45 > v46 )
              v45 = v46;
            v152 = 0;
            v153 = 0;
            v160[0] = 0;
            a1[6].m128i_i64[0] = v46 - v45;
            a1[5].m128i_i64[1] = v47 + v44 - (int)v45;
            copy_tinfo_t();
            *(_QWORD *)&v160[1] = 0;
            copy_tinfo_t();
            DWORD2(v160[1]) = 0;
            WORD6(v160[1]) = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            v166 = 16;
            v161 = 0;
            memset(v160, 0, sizeof(v160));
            v162 = 0;
            v164 = 0;
            v163 = 0;
            v165 = 0;
            copy_tinfo_t();
            v48 = *((_QWORD *)&v160[0] + 1);
            HIDWORD(v160[1]) = 0;
            v49 = *(_QWORD *)&v160[0];
            v166 = v166 & 0xF | 0x70;
            if ( *(_QWORD *)&v160[1] < (unsigned __int64)(*((_QWORD *)&v160[0] + 1) + 1LL) )
            {
              *(_QWORD *)&v160[0] = qvector_reserve(
                                      (__int64)v160,
                                      *(__int64 *)&v160[0],
                                      *((_QWORD *)&v160[0] + 1) + 1LL,
                                      80);
              v48 = *((_QWORD *)&v160[0] + 1);
              v49 = *(_QWORD *)&v160[0];
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
            v123 = (_QWORD *)v50;
            ++*((_QWORD *)&v160[0] + 1);
            copy_tinfo_t();
            v51 = v123[2];
            if ( v123[4] <= 3u )
            {
              v51 = qvector_reserve((__int64)(v123 + 2), v51, 4, 1);
              v123[2] = v51;
            }
            v123[3] = 4;
            *(_WORD *)v51 = 29808;
            *(_BYTE *)(v51 + 2) = 114;
            *(_BYTE *)(v123[2] + 3LL) = 0;
            v153 = 0;
            create_tinfo();
            v124 = sub_2426C0(0);
            v54 = j__qalloc_or_throw(64, (__int64)&v153, v52, v53);
            *(_QWORD *)v54 = -1;
            v55 = v124;
            *(_DWORD *)(v54 + 8) = 57;
            *(_QWORD *)(v54 + 24) = v124;
            *(_QWORD *)(v54 + 12) = -1;
            *(_QWORD *)(v54 + 32) = 0;
            *(_QWORD *)(v54 + 40) = 0;
            *(_QWORD *)(v54 + 48) = 0;
            *(_DWORD *)(v54 + 56) = 0;
            v125 = v54;
            v57 = qalloc_or_throw(40, (__int64)&v153, v55, v56);
            *(_QWORD *)v57 = 0;
            *(_QWORD *)(v57 + 24) = 0;
            *(_DWORD *)(v57 + 32) = 0;
            *(_OWORD *)(v57 + 8) = 0;
            *(_QWORD *)(v125 + 32) = v57;
            copy_tinfo_t();
            v58 = v125;
            v59 = *(__int64 **)(v125 + 32);
            v60 = v59[1];
            v61 = *v59;
            if ( v59[2] < (unsigned __int64)(v60 + 1) )
            {
              v114 = qvector_reserve((__int64)v59, v61, v60 + 1, 72);
              v58 = v125;
              v61 = v114;
              *v59 = v114;
              v60 = v59[1];
            }
            v121 = v58;
            v62 = v61 + 72 * v60;
            *(_QWORD *)v62 = -1;
            *(_DWORD *)(v62 + 8) = 0;
            *(_QWORD *)(v62 + 12) = -1;
            *(_QWORD *)(v62 + 40) = 0;
            *(_QWORD *)(v62 + 48) = 0;
            *(_DWORD *)(v62 + 56) = 0;
            *(_BYTE *)(v62 + 60) = 0;
            *(_QWORD *)(v62 + 64) = 0;
            *(_OWORD *)(v62 + 24) = 0;
            ++v59[1];
            v126 = v62;
            copy_tinfo_t();
            v63 = v8->m128i_i64[0];
            v8->m128i_i64[0] = *(_QWORD *)v126;
            v64 = *(_DWORD *)(v126 + 8);
            *(_QWORD *)v126 = v63;
            LODWORD(v63) = v8->m128i_i32[2];
            v8->m128i_i32[2] = v64;
            v65 = *(_DWORD *)(v126 + 12);
            *(_DWORD *)(v126 + 8) = v63;
            LODWORD(v63) = v8->m128i_i32[3];
            v8->m128i_i32[3] = v65;
            v66 = *(_QWORD *)(v126 + 24);
            *(_DWORD *)(v126 + 12) = v63;
            v67 = v8[1].m128i_i64[1];
            v8[1].m128i_i64[1] = v66;
            v68 = *(_QWORD *)(v126 + 32);
            *(_QWORD *)(v126 + 24) = v67;
            v69 = v8[2].m128i_i64[0];
            v8[2].m128i_i64[0] = v68;
            v70 = *(_QWORD *)(v126 + 40);
            *(_QWORD *)(v126 + 32) = v69;
            v71 = v8[2].m128i_i64[1];
            v8[2].m128i_i64[1] = v70;
            v72 = *(_QWORD *)(v126 + 48);
            *(_QWORD *)(v126 + 40) = v71;
            v73 = v8[3].m128i_i64[0];
            v8[3].m128i_i64[0] = v72;
            LODWORD(v72) = *(_DWORD *)(v126 + 56);
            *(_QWORD *)(v126 + 48) = v73;
            LODWORD(v73) = v8[3].m128i_i32[2];
            v8[3].m128i_i32[2] = v72;
            *(_DWORD *)(v126 + 56) = v73;
            v74 = v121;
            if ( v8 )
            {
              sub_255630((__int64)v8);
              clear_tinfo_t();
              j__qfree((__int64)v8);
              v74 = v121;
            }
            v75 = v151;
            *(_DWORD *)(v74 + 56) |= 1u;
            v76 = *(_QWORD *)(v74 + 48);
            v127 = v74;
            *(_QWORD *)(v74 + 48) = v75;
            v151 = v76;
            clear_tinfo_t();
            v77 = v127;
            if ( v164 )
            {
              *(_QWORD *)&v165 = 0;
              qfree(v164);
              v77 = v127;
            }
            v128 = v77;
            cleanup_argloc();
            clear_tinfo_t();
            v78 = *(_QWORD *)&v160[0];
            v79 = v128;
            if ( *(_QWORD *)&v160[0] )
            {
              v80 = *((_QWORD *)&v160[0] + 1);
              if ( *((_QWORD *)&v160[0] + 1) )
              {
                v81 = 0;
                do
                {
                  v82 = (_QWORD *)(v78 + 80 * v81);
                  clear_tinfo_t();
                  v83 = v82[5];
                  if ( v83 )
                  {
                    v82[6] = 0;
                    qfree(v83);
                  }
                  v84 = v82[2];
                  if ( v84 )
                  {
                    v82[3] = 0;
                    qfree(v84);
                  }
                  ++v81;
                  cleanup_argloc();
                  v78 = *(_QWORD *)&v160[0];
                }
                while ( v80 != v81 );
                v79 = v128;
              }
              v129 = v79;
              *((_QWORD *)&v160[0] + 1) = 0;
              qfree(v78);
              v79 = v129;
            }
            v130 = v79;
            clear_tinfo_t();
            v85 = v130;
            v147 = (__m128i *)v130;
            goto LABEL_132;
          }
        }
      }
    }
    if ( v143 <= 0 )
      goto LABEL_120;
    v14 = v13 / v143;
    v15 = v13 / v143;
    v16 = 0xFFFFFFFF80000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) == 8 )
      v16 = 0x8000000000000000LL;
    if ( a1[4].m128i_i64[0] )
    {
      if ( v13 < 0 && v12 - v11 < v143 )
      {
        v100 = sub_26AAE0(a1->m128i_i64[0], (_QWORD *)a1[3].m128i_i64[1], v143);
        v15 = v13 / v143;
        if ( v100 )
        {
          v14 = v13 / v143;
LABEL_136:
          v15 = v14 - 1;
          v18 = 0;
          goto LABEL_13;
        }
      }
    }
    else if ( v13 < 0 && v14 * v143 != v13 )
    {
      v19 = v16 == 0x8000000000000000LL;
      v42 = 0x8000000000000001LL;
      if ( !v19 )
        v42 = -2147483647;
      if ( v42 != v13 && v14 * v143 - v143 < 0 )
        goto LABEL_136;
    }
    v17 = a1[6].m128i_i64[0];
    if ( !v17 )
      goto LABEL_79;
    v18 = v17 != a1[5].m128i_i64[1] && a1[5].m128i_i64[1] < v143 && v143 != 1;
    if ( v18 )
    {
      if ( !(v17 % v143) )
      {
        v15 = -v17 / v143;
        goto LABEL_13;
      }
LABEL_79:
      v18 = 0;
    }
LABEL_13:
    v19 = a1[27].m128i_i32[3] == 1;
    v150 = v15;
    if ( v19
      && v8->m128i_i32[2] == 65
      && (*(_BYTE *)(*(_QWORD *)(v8[1].m128i_i64[1] + 432) + 104LL * v8[2].m128i_i32[0] + 25) & 1) != 0 )
    {
      v131 = v15;
      v86 = sub_26D3F0((__int64)a1, (__int64 *)&v150, (__int64 *)&v148, &v149);
      v15 = v131;
      if ( v86 )
      {
        v87 = v8[3].m128i_i64[0];
        v88 = get_tinfo_size();
        v91 = j__qalloc_or_throw(64, v87, v89, v90);
        *(_QWORD *)v91 = -1;
        *(_QWORD *)(v91 + 40) = 0;
        *(_DWORD *)(v91 + 8) = 51;
        *(_QWORD *)(v91 + 12) = -1;
        *(_QWORD *)(v91 + 24) = v8;
        *(_QWORD *)(v91 + 32) = 0;
        *(_QWORD *)(v91 + 48) = 0;
        *(_DWORD *)(v91 + 56) = 0;
        v147 = (__m128i *)v91;
        *(_DWORD *)(v91 + 40) = v88;
        v144 = v91;
        sub_2441C0(v91, *(_QWORD *)(a1->m128i_i64[0] + 112), 0);
        v85 = v144;
        *(_DWORD *)(v144 + 56) |= 1u;
        goto LABEL_132;
      }
    }
    if ( !a1[27].m128i_i32[2] && !a1[28].m128i_i8[5] && !v18 && v15 >= 0 )
    {
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v44 = v158;
        if ( v158 )
        {
          v47 = a1[5].m128i_i64[1];
          v45 = v158;
          v46 = a1[6].m128i_i64[0];
          v113 = v158 + v47 - v46;
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) != 8 )
            v113 = (int)v113;
          if ( v113 >= 0 )
            goto LABEL_92;
        }
      }
    }
    if ( a1[4].m128i_i64[0] )
    {
      v20 = (const __m128i *)a1[3].m128i_i64[1];
      v160[0] = _mm_loadu_si128(v20);
      v160[1] = _mm_loadu_si128(v20 + 1);
      if ( sub_26D4E0(a1->m128i_i64, v160, (__int64 *)&v150, (__int64 *)&v148, &v149) )
      {
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
        {
          v23 = v148;
          v133 = v150;
          v109 = sub_270E10(a1->m128i_i64, v8, (__int64 *)v160, v148, (__int64)&a1[6].m128i_i64[1], v150, 0);
          v110 = v133;
          if ( v109 )
          {
            v95 = (__m128i *)a1[3].m128i_i64[1];
            v134 = v109;
            v146 = v110;
            v94 = v95 + 2;
            memmove(v95, &v95[2], 32 * a1[4].m128i_i64[0]-- - 32);
            v97 = v146;
            v85 = v134;
            goto LABEL_127;
          }
        }
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD
      && (a1[27].m128i_i8[12] & 2) == 0
      && (unsigned __int8)a1[9].m128i_i64[0]
      && (unsigned __int64)v155 > 1 )
    {
      if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] && !a1[4].m128i_i64[0]
        || (*(_QWORD *)&v160[0] = 0,
            *(_QWORD *)&v160[0] = get_tinfo_property(),
            v21 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            (_BYTE)v21 != 1) )
      {
        if ( (a1[27].m128i_i32[1] != 0) == a1[28].m128i_i8[5] || get_tinfo_property() )
        {
          v153 = 0;
          copy_tinfo_t();
          if ( !a1[27].m128i_i32[1] && (a1[27].m128i_i32[2] || a1[28].m128i_i8[5]) )
          {
            sub_32C540(v160, *(_QWORD *)(a1->m128i_i64[0] + 112), &v153);
            copy_tinfo_t();
            clear_tinfo_t();
          }
          if ( (unsigned __int8)sub_32A510(a1->m128i_i64[0], &v153, v138) )
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
    if ( !(unsigned __int8)sub_26D610((__int64)a1, (__int64 *)&v150, (__int64 *)&v148, &v149) )
      goto LABEL_34;
    v22 = a1[5].m128i_i64[0];
    v23 = v148;
    v24 = v150;
    v25 = a1[5].m128i_i64[1];
    v26 = 8 * *(_DWORD *)(*(_QWORD *)(v22 + 112) + 84LL) - 1;
    if ( (unsigned __int64)v26 <= 0x3F )
    {
      v27 = v150 * v148;
      v28 = 1LL << v26;
      if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 24LL) == 8 )
      {
        if ( (v28 & (v27 ^ v150)) != 0 )
          goto LABEL_34;
        v93 = (v25 ^ (v25 - v27)) & v28;
      }
      else
      {
        if ( (v28 & ((int)v27 ^ v150)) != 0 )
          goto LABEL_34;
        v93 = (v25 ^ ((int)v25 - (int)v27)) & v28;
      }
      if ( v93 )
        goto LABEL_34;
    }
    if ( a1[6].m128i_i64[0] == v25 )
    {
      v135 = v150;
      v111 = sub_26D070((__int64)a1);
      v24 = v135;
      if ( !v111 )
        goto LABEL_120;
    }
    v94 = v8;
    v95 = a1;
    v132 = v24;
    v85 = sub_270E10(a1->m128i_i64, v8, nullptr, 1u, (__int64)&a1[6].m128i_i64[1], v24, v24 == 0);
    v97 = v132;
    if ( v85 )
    {
LABEL_127:
      v98 = v97 * v23;
      if ( v18 )
      {
        v112 = a1[6].m128i_i64[0];
        if ( -v98 > v112 )
          sub_269F20(v95, v94, -v98, v96, v85);
        a1[6].m128i_i64[0] = v112 + v98;
        goto LABEL_130;
      }
      v99 = a1[5].m128i_i64[1];
      if ( v98 > v99 )
      {
        if ( !under_debugger )
          sub_383060(50183);
        goto LABEL_211;
      }
      a1[5].m128i_i64[1] = v99 - v98;
LABEL_130:
      v19 = *(_DWORD *)(v85 + 8) == 58;
      v147 = (__m128i *)v85;
      if ( v19 )
        ++v141;
LABEL_132:
      v145 = (__m128i *)v85;
      clear_tinfo_t();
      v8 = v145;
      goto LABEL_4;
    }
LABEL_34:
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      goto LABEL_120;
    v30 = a1[27].m128i_i32[3];
    if ( v141 <= 0 )
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
      if ( v143 > v31 )
        goto LABEL_42;
      v31 -= v32;
      if ( v31 < 0 )
        goto LABEL_120;
      if ( v143 > v31 )
        goto LABEL_42;
LABEL_41:
      if ( !get_tinfo_property() )
        goto LABEL_120;
      goto LABEL_42;
    }
    v31 -= v32;
    if ( v31 < 0 )
      break;
    if ( v143 <= v31 )
      goto LABEL_41;
LABEL_42:
    v33 = v8->m128i_i32[2];
    if ( v33 != 52 && a1[27].m128i_i32[2] && a1[27].m128i_i32[3] == 1 && (v33 != 64 || !(unsigned __int8)is_spec_ea()) )
      goto LABEL_120;
    if ( tinfo_size == v10 )
    {
      v34 = *(__int64 (**)())(*(_QWORD *)v136 + 296LL);
      if ( v34 != sub_269EE0 && !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64))v34)(v136, &v8[3], v31) )
        goto LABEL_120;
    }
    if ( (unsigned __int8)sub_26D870((__int64)a1, v31) )
      goto LABEL_120;
    if ( !v31 && !a1[27].m128i_i32[1] && (unsigned __int64)v155 > 1 && !a1[10].m128i_i64[0] )
    {
      if ( (!a1[4].m128i_i64[0] || !(*(_QWORD *)(a1[3].m128i_i64[1] + 24) % v143))
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
    v39 = (__m128i *)sub_272C50(a1, v137, (__int64 *)&v147, v10, v31, v138, tinfo_size, (__int64)&v154);
    v8 = v39;
    if ( !v39 )
    {
      v8 = v147;
      goto LABEL_120;
    }
    v147 = v39;
    v39->m128i_i64[0] = a1[8].m128i_i64[0];
    if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
    {
      *(_QWORD *)&v160[0] = 0;
      *(_QWORD *)&v160[0] = get_tinfo_property();
      if ( !(unsigned int)lexcompare_tinfo() )
        goto LABEL_162;
      clear_tinfo_t();
    }
    clear_tinfo_t();
    v141 = 0;
    if ( v8->m128i_i32[2] == 52 )
      goto LABEL_69;
  }
  if ( !a1[4].m128i_i64[0] )
    goto LABEL_120;
  memset(v160, 0, 24);
  sub_3349B0((unsigned int)v160, v139, 0, 0, 0, v29);
  if ( !*((_QWORD *)&v160[0] + 1) )
  {
    v103 = *(_QWORD *)&v160[0];
    if ( *(_QWORD *)&v160[0] )
      goto LABEL_195;
    goto LABEL_120;
  }
  v101 = 0;
  v102 = 0;
  do
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
      break;
    v102 = ++v101;
  }
  while ( (unsigned __int64)v101 < *((_QWORD *)&v160[0] + 1) );
  v103 = *(_QWORD *)&v160[0];
  if ( v102 != *((_QWORD *)&v160[0] + 1) )
  {
    if ( *(_QWORD *)&v160[0] )
    {
      if ( *((_QWORD *)&v160[0] + 1) )
      {
        v142 = v8;
        v104 = 0;
        v105 = *((_QWORD *)&v160[0] + 1);
        do
        {
          v106 = (_QWORD *)(v103 + (v104 << 6));
          clear_tinfo_t();
          v107 = v106[4];
          if ( v107 )
          {
            v106[5] = 0;
            qfree(v107);
          }
          v108 = v106[1];
          if ( v108 )
          {
            v106[2] = 0;
            qfree(v108);
          }
          ++v104;
          v103 = *(_QWORD *)&v160[0];
        }
        while ( v104 != v105 );
        v8 = v142;
      }
      *((_QWORD *)&v160[0] + 1) = 0;
      qfree(v103);
    }
    v31 = 0;
    goto LABEL_42;
  }
  if ( *(_QWORD *)&v160[0] )
  {
    if ( *((_QWORD *)&v160[0] + 1) )
    {
      v115 = 0;
      v116 = *((_QWORD *)&v160[0] + 1);
      do
      {
        v117 = (_QWORD *)(v103 + (v115 << 6));
        clear_tinfo_t();
        v118 = v117[4];
        if ( v118 )
        {
          v117[5] = 0;
          qfree(v118);
        }
        v119 = v117[1];
        if ( v119 )
        {
          v117[2] = 0;
          qfree(v119);
        }
        ++v115;
        v103 = *(_QWORD *)&v160[0];
      }
      while ( v115 != v116 );
    }
LABEL_195:
    *((_QWORD *)&v160[0] + 1) = 0;
    qfree(v103);
  }
LABEL_120:
  clear_tinfo_t();
  if ( v154 )
  {
    *(_QWORD *)&v155 = 0;
    qfree((__int64)v154);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v8;
}
