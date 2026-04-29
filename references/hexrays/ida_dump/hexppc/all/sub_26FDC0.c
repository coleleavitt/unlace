__m128i *__fastcall sub_26FDC0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __m128i *v8; // rbx
  int v9; // eax
  int v10; // r12d
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
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // rsi
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rdx
  int v30; // r9d
  __int32 v31; // eax
  __int64 v32; // r14
  __int64 v33; // rax
  __int32 v34; // eax
  __int64 (*v35)(); // rax
  __int64 v36; // rdi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // edx
  __m128i *v41; // rax
  unsigned __int64 v42; // rax
  unsigned int tinfo_property; // eax
  unsigned __int64 v44; // rax
  char tinfo_details; // al
  int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int32 v62; // ecx
  __int32 v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // rdi
  __int64 v77; // r8
  __int64 v78; // r12
  __int64 v79; // rbx
  _QWORD *v80; // r15
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // r8
  char v84; // al
  int v85; // r15d
  __int64 v86; // rax
  __int64 v88; // rdx
  __m128i *v89; // rsi
  __m128i *v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // r9
  signed __int64 v93; // r15
  signed __int64 v94; // rax
  bool v95; // al
  int v96; // r15d
  __int64 v97; // r14
  __int64 v98; // rdi
  __int64 v99; // r14
  __int64 v100; // r15
  _QWORD *v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rdi
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdi
  bool v107; // al
  signed __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // r12
  __int64 v113; // r13
  _QWORD *v114; // r15
  __int64 v115; // rdi
  __int64 v116; // rdi
  __int64 v117; // [rsp+0h] [rbp-190h]
  __int64 v118; // [rsp+8h] [rbp-188h]
  __int64 v119; // [rsp+20h] [rbp-170h]
  _QWORD *v120; // [rsp+20h] [rbp-170h]
  __int64 v121; // [rsp+20h] [rbp-170h]
  __int64 v122; // [rsp+20h] [rbp-170h]
  __int64 v123; // [rsp+20h] [rbp-170h]
  __int64 v124; // [rsp+20h] [rbp-170h]
  __int64 v125; // [rsp+20h] [rbp-170h]
  __int64 v126; // [rsp+20h] [rbp-170h]
  __int64 v127; // [rsp+20h] [rbp-170h]
  __int64 v128; // [rsp+20h] [rbp-170h]
  __int64 v129; // [rsp+20h] [rbp-170h]
  __int64 v130; // [rsp+20h] [rbp-170h]
  __int64 v131; // [rsp+20h] [rbp-170h]
  __int64 v132; // [rsp+20h] [rbp-170h]
  __int64 v133; // [rsp+28h] [rbp-168h]
  __int64 v134; // [rsp+30h] [rbp-160h]
  __m128i *v135; // [rsp+40h] [rbp-150h]
  __int64 *v136; // [rsp+50h] [rbp-140h]
  int tinfo_size; // [rsp+5Ch] [rbp-134h]
  int v138; // [rsp+60h] [rbp-130h]
  __m128i *v139; // [rsp+60h] [rbp-130h]
  __int64 v140; // [rsp+70h] [rbp-120h]
  __int64 v141; // [rsp+70h] [rbp-120h]
  __m128i *v142; // [rsp+70h] [rbp-120h]
  __int64 v143; // [rsp+70h] [rbp-120h]
  __m128i *v144; // [rsp+78h] [rbp-118h] BYREF
  unsigned __int64 v145; // [rsp+80h] [rbp-110h] BYREF
  __int64 v146; // [rsp+88h] [rbp-108h] BYREF
  unsigned __int64 v147; // [rsp+90h] [rbp-100h] BYREF
  __int64 v148; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v149; // [rsp+A0h] [rbp-F0h] BYREF
  __int64 v150; // [rsp+A8h] [rbp-E8h] BYREF
  _BYTE *v151; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v152; // [rsp+B8h] [rbp-D8h]
  __int128 v153; // [rsp+D0h] [rbp-C0h] BYREF
  __int64 v154; // [rsp+E0h] [rbp-B0h] BYREF
  int v155; // [rsp+E8h] [rbp-A8h]
  __int16 v156; // [rsp+ECh] [rbp-A4h]
  _OWORD v157[2]; // [rsp+F0h] [rbp-A0h] BYREF
  __int64 v158; // [rsp+110h] [rbp-80h] BYREF
  __int64 v159; // [rsp+118h] [rbp-78h] BYREF
  __int128 v160; // [rsp+120h] [rbp-70h]
  __int64 v161; // [rsp+130h] [rbp-60h]
  __int128 v162; // [rsp+138h] [rbp-58h]
  char v163; // [rsp+148h] [rbp-48h]
  unsigned __int64 v164; // [rsp+158h] [rbp-38h]

  v144 = (__m128i *)a2;
  v164 = __readfsqword(0x28u);
  *(_QWORD *)&v157[0] = 0;
  v151 = nullptr;
  v153 = 0;
  copy_tinfo_t((char *)&v153 + 8, &v151);
  v154 = 0;
  copy_tinfo_t(&v154, v157);
  v155 = 0;
  v156 = 0;
  clear_tinfo_t(&v151);
  clear_tinfo_t(v157);
  v151 = nullptr;
  v152 = 0;
  v151 = (_BYTE *)qvector_reserve(&v151, 0, 2, 1);
  *(_QWORD *)&v152 = 2;
  *v151 = 120;
  v151[1] = 0;
  sub_267210(
    v157,
    a1[2].m128i_i64[0],
    *(_QWORD *)(a1->m128i_i64[1] + 64),
    (__int64 *)a1[1].m128i_i64[0],
    &a1[28].m128i_i8[2],
    -1);
  v135 = a1 + 9;
  copy_tinfo_t(&a1[9], v157);
  clear_tinfo_t(v157);
  tinfo_size = get_tinfo_size(0, a1[9].m128i_i64[0], 0);
  if ( !a1[9].m128i_i8[0] )
  {
    v3 = a1[1].m128i_i64[1];
    if ( *(_DWORD *)(v3 + 8) == 2 )
    {
      v110 = a1[2].m128i_i64[1];
      if ( *(_QWORD *)(v3 + 24) == v110 )
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v110 + 48), 0);
    }
  }
  dstr_tinfo(v135);
  v138 = 0;
  v133 = *(_QWORD *)(a1->m128i_i64[0] + 112);
  v134 = (__int64)v144;
  v8 = v144;
  v136 = &a1[8].m128i_i64[1];
LABEL_4:
  if ( v8->m128i_i32[2] == 52 )
  {
LABEL_69:
    if ( (get_tinfo_property(v8[3].m128i_i64[0], 2) & 0xF) != 0xB )
    {
      if ( a1[27].m128i_i32[2] )
      {
        if ( !under_debugger )
          sub_37EEE0(50191);
LABEL_211:
        BUG();
      }
      a1[27].m128i_i32[2] = 1;
      sub_251BD0(v8->m128i_i64, v8[1].m128i_i64[1]);
      v42 = (unsigned int)(v8->m128i_i32[2] - 51);
      if ( (unsigned int)v42 > 0xE || (v4 = 25473, !_bittest64(&v4, v42)) )
      {
        if ( (v8[3].m128i_i8[8] & 2) == 0 )
        {
          if ( (get_tinfo_property(v8[3].m128i_i64[0], 2) & 0x2F) != 0xD
            || (tinfo_property = get_tinfo_property(*(_QWORD *)(v8[2].m128i_i64[0] + 24), 20),
                !(unsigned __int8)sub_326280(&v8[3], tinfo_property)) )
          {
            if ( !under_debugger )
              sub_37EEE0(50192);
            goto LABEL_211;
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v9 = sub_268D80((_DWORD)a1, (_DWORD)v8, v4, v5, v6, v7, v117);
    v146 = 0;
    v140 = v9;
    v10 = v9;
    v145 = v9;
    copy_tinfo_t(&v146, v136);
    v11 = a1[5].m128i_i64[1];
    v12 = a1[6].m128i_i64[0];
    v13 = v11 - v12;
    v147 = v11 - v12;
    if ( v11 - v12 < 0 && !a1[27].m128i_i32[2] )
    {
      v119 = v11;
      tinfo_details = get_tinfo_details(v8[3].m128i_i64[0], 10, &v153);
      v11 = v119;
      if ( tinfo_details )
      {
        v46 = v155;
        if ( v155 )
        {
          v47 = v155;
          if ( v155 >= v12 - v119 )
          {
            v48 = a1[6].m128i_i64[0];
            v49 = a1[5].m128i_i64[1];
LABEL_92:
            v148 = 0;
            if ( v47 > v48 )
              v47 = v48;
            v149 = 0;
            v150 = 0;
            v157[0] = 0;
            a1[6].m128i_i64[0] = v48 - v47;
            a1[5].m128i_i64[1] = v49 + v46 - (int)v47;
            copy_tinfo_t((char *)v157 + 8, &v150);
            *(_QWORD *)&v157[1] = 0;
            copy_tinfo_t(&v157[1], &v149);
            DWORD2(v157[1]) = 0;
            WORD6(v157[1]) = 0;
            clear_tinfo_t(&v150);
            clear_tinfo_t(&v149);
            copy_tinfo_t(v157, &v154);
            create_tinfo(&v148, 10, 10, v157);
            clear_tinfo_t(&v157[1]);
            clear_tinfo_t((char *)v157 + 8);
            clear_tinfo_t(v157);
            v163 = 16;
            v158 = 0;
            memset(v157, 0, sizeof(v157));
            v159 = 0;
            v161 = 0;
            v160 = 0;
            v162 = 0;
            copy_tinfo_t(&v158, &v148);
            v50 = *((_QWORD *)&v157[0] + 1);
            HIDWORD(v157[1]) = 0;
            v51 = *(_QWORD *)&v157[0];
            v163 = v163 & 0xF | 0x70;
            if ( *(_QWORD *)&v157[1] < (unsigned __int64)(*((_QWORD *)&v157[0] + 1) + 1LL) )
            {
              *(_QWORD *)&v157[0] = qvector_reserve(v157, *(_QWORD *)&v157[0], *((_QWORD *)&v157[0] + 1) + 1LL, 80);
              v50 = *((_QWORD *)&v157[0] + 1);
              v51 = *(_QWORD *)&v157[0];
            }
            v52 = v51 + 80 * v50;
            *(_DWORD *)v52 = 0;
            *(_QWORD *)(v52 + 8) = 0;
            *(_QWORD *)(v52 + 16) = 0;
            *(_QWORD *)(v52 + 40) = 0;
            *(_QWORD *)(v52 + 64) = 0;
            *(_DWORD *)(v52 + 72) = 0;
            *(_OWORD *)(v52 + 24) = 0;
            *(_OWORD *)(v52 + 48) = 0;
            v120 = (_QWORD *)v52;
            ++*((_QWORD *)&v157[0] + 1);
            copy_tinfo_t(v52 + 64, &v8[3]);
            v53 = v120[2];
            if ( v120[4] <= 3u )
            {
              v53 = qvector_reserve(v120 + 2, v53, 4, 1);
              v120[2] = v53;
            }
            v120[3] = 4;
            *(_WORD *)v53 = 29808;
            *(_BYTE *)(v53 + 2) = 114;
            *(_BYTE *)(v120[2] + 3LL) = 0;
            v150 = 0;
            create_tinfo(&v150, 12, 12, v157);
            v121 = sub_23EA40(0, (__int64)&v150, (__int64)"ADJ");
            v54 = j__qalloc_or_throw(64);
            *(_QWORD *)v54 = -1;
            *(_DWORD *)(v54 + 8) = 57;
            *(_QWORD *)(v54 + 24) = v121;
            *(_QWORD *)(v54 + 12) = -1;
            *(_QWORD *)(v54 + 32) = 0;
            *(_QWORD *)(v54 + 40) = 0;
            *(_QWORD *)(v54 + 48) = 0;
            *(_DWORD *)(v54 + 56) = 0;
            v122 = v54;
            v55 = qalloc_or_throw(40);
            *(_QWORD *)v55 = 0;
            *(_QWORD *)(v55 + 24) = 0;
            *(_DWORD *)(v55 + 32) = 0;
            *(_OWORD *)(v55 + 8) = 0;
            *(_QWORD *)(v122 + 32) = v55;
            copy_tinfo_t(v55 + 24, &v150);
            v56 = v122;
            v57 = *(__int64 **)(v122 + 32);
            v58 = v57[1];
            v59 = *v57;
            if ( v57[2] < (unsigned __int64)(v58 + 1) )
            {
              v111 = qvector_reserve(v57, v59, v58 + 1, 72);
              v56 = v122;
              v59 = v111;
              *v57 = v111;
              v58 = v57[1];
            }
            v118 = v56;
            v60 = v59 + 72 * v58;
            *(_QWORD *)v60 = -1;
            *(_DWORD *)(v60 + 8) = 0;
            *(_QWORD *)(v60 + 12) = -1;
            *(_QWORD *)(v60 + 40) = 0;
            *(_QWORD *)(v60 + 48) = 0;
            *(_DWORD *)(v60 + 56) = 0;
            *(_BYTE *)(v60 + 60) = 0;
            *(_QWORD *)(v60 + 64) = 0;
            *(_OWORD *)(v60 + 24) = 0;
            ++v57[1];
            v123 = v60;
            copy_tinfo_t(v60 + 64, &v8[3]);
            v61 = v8->m128i_i64[0];
            v8->m128i_i64[0] = *(_QWORD *)v123;
            v62 = *(_DWORD *)(v123 + 8);
            *(_QWORD *)v123 = v61;
            LODWORD(v61) = v8->m128i_i32[2];
            v8->m128i_i32[2] = v62;
            v63 = *(_DWORD *)(v123 + 12);
            *(_DWORD *)(v123 + 8) = v61;
            LODWORD(v61) = v8->m128i_i32[3];
            v8->m128i_i32[3] = v63;
            v64 = *(_QWORD *)(v123 + 24);
            *(_DWORD *)(v123 + 12) = v61;
            v65 = v8[1].m128i_i64[1];
            v8[1].m128i_i64[1] = v64;
            v66 = *(_QWORD *)(v123 + 32);
            *(_QWORD *)(v123 + 24) = v65;
            v67 = v8[2].m128i_i64[0];
            v8[2].m128i_i64[0] = v66;
            v68 = *(_QWORD *)(v123 + 40);
            *(_QWORD *)(v123 + 32) = v67;
            v69 = v8[2].m128i_i64[1];
            v8[2].m128i_i64[1] = v68;
            v70 = *(_QWORD *)(v123 + 48);
            *(_QWORD *)(v123 + 40) = v69;
            v71 = v8[3].m128i_i64[0];
            v8[3].m128i_i64[0] = v70;
            LODWORD(v70) = *(_DWORD *)(v123 + 56);
            *(_QWORD *)(v123 + 48) = v71;
            LODWORD(v71) = v8[3].m128i_i32[2];
            v8[3].m128i_i32[2] = v70;
            *(_DWORD *)(v123 + 56) = v71;
            v72 = v118;
            if ( v8 )
            {
              sub_2519B0((__int64)v8);
              clear_tinfo_t(&v8[3]);
              j__qfree(v8);
              v72 = v118;
            }
            v73 = v148;
            *(_DWORD *)(v72 + 56) |= 1u;
            v74 = *(_QWORD *)(v72 + 48);
            v124 = v72;
            *(_QWORD *)(v72 + 48) = v73;
            v148 = v74;
            clear_tinfo_t(&v150);
            v75 = v124;
            if ( v161 )
            {
              *(_QWORD *)&v162 = 0;
              qfree(v161);
              v75 = v124;
            }
            v125 = v75;
            cleanup_argloc(&v159);
            clear_tinfo_t(&v158);
            v76 = *(_QWORD *)&v157[0];
            v77 = v125;
            if ( *(_QWORD *)&v157[0] )
            {
              v78 = *((_QWORD *)&v157[0] + 1);
              if ( *((_QWORD *)&v157[0] + 1) )
              {
                v79 = 0;
                do
                {
                  v80 = (_QWORD *)(v76 + 80 * v79);
                  clear_tinfo_t(v80 + 8);
                  v81 = v80[5];
                  if ( v81 )
                  {
                    v80[6] = 0;
                    qfree(v81);
                  }
                  v82 = v80[2];
                  if ( v82 )
                  {
                    v80[3] = 0;
                    qfree(v82);
                  }
                  ++v79;
                  cleanup_argloc(v80);
                  v76 = *(_QWORD *)&v157[0];
                }
                while ( v78 != v79 );
                v77 = v125;
              }
              v126 = v77;
              *((_QWORD *)&v157[0] + 1) = 0;
              qfree(v76);
              v77 = v126;
            }
            v127 = v77;
            clear_tinfo_t(&v148);
            v83 = v127;
            v144 = (__m128i *)v127;
            goto LABEL_132;
          }
        }
      }
    }
    if ( v140 <= 0 )
      goto LABEL_120;
    v14 = v13 / v140;
    v15 = v13 / v140;
    v16 = 0xFFFFFFFF80000000LL;
    if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) == 8 )
      v16 = 0x8000000000000000LL;
    if ( a1[4].m128i_i64[0] )
    {
      if ( v13 < 0 && v12 - v11 < v140 )
      {
        v95 = sub_266E60(a1->m128i_i64[0], (_QWORD *)a1[3].m128i_i64[1], v140);
        v15 = v13 / v140;
        if ( v95 )
        {
          v14 = v13 / v140;
LABEL_136:
          v15 = v14 - 1;
          v18 = 0;
          goto LABEL_13;
        }
      }
    }
    else if ( v13 < 0 && v14 * v140 != v13 )
    {
      v19 = v16 == 0x8000000000000000LL;
      v44 = 0x8000000000000001LL;
      if ( !v19 )
        v44 = -2147483647;
      if ( v44 != v13 && v14 * v140 - v140 < 0 )
        goto LABEL_136;
    }
    v17 = a1[6].m128i_i64[0];
    if ( !v17 )
      goto LABEL_79;
    v18 = v17 != a1[5].m128i_i64[1] && a1[5].m128i_i64[1] < v140 && v140 != 1;
    if ( v18 )
    {
      if ( !(v17 % v140) )
      {
        v15 = -v17 / v140;
        goto LABEL_13;
      }
LABEL_79:
      v18 = 0;
    }
LABEL_13:
    v19 = a1[27].m128i_i32[3] == 1;
    v147 = v15;
    if ( v19
      && v8->m128i_i32[2] == 65
      && (*(_BYTE *)(*(_QWORD *)(v8[1].m128i_i64[1] + 432) + 104LL * v8[2].m128i_i32[0] + 25) & 1) != 0 )
    {
      v128 = v15;
      v84 = sub_269770((__int64)a1, (__int64 *)&v147, (__int64 *)&v145, &v146);
      v15 = v128;
      if ( v84 )
      {
        v85 = get_tinfo_size(0, v8[3].m128i_i64[0], 0);
        v86 = j__qalloc_or_throw(64);
        *(_QWORD *)v86 = -1;
        *(_QWORD *)(v86 + 40) = 0;
        *(_DWORD *)(v86 + 8) = 51;
        *(_QWORD *)(v86 + 12) = -1;
        *(_QWORD *)(v86 + 24) = v8;
        *(_QWORD *)(v86 + 32) = 0;
        *(_QWORD *)(v86 + 48) = 0;
        *(_DWORD *)(v86 + 56) = 0;
        v144 = (__m128i *)v86;
        *(_DWORD *)(v86 + 40) = v85;
        v141 = v86;
        sub_240540(v86, *(_QWORD *)(a1->m128i_i64[0] + 112), 0);
        v83 = v141;
        *(_DWORD *)(v141 + 56) |= 1u;
        goto LABEL_132;
      }
    }
    if ( !a1[27].m128i_i32[2] && !a1[28].m128i_i8[5] && !v18 && v15 >= 0 )
    {
      if ( (unsigned __int8)get_tinfo_details(v8[3].m128i_i64[0], 10, &v153) )
      {
        v46 = v155;
        if ( v155 )
        {
          v49 = a1[5].m128i_i64[1];
          v47 = v155;
          v48 = a1[6].m128i_i64[0];
          v109 = v155 + v49 - v48;
          if ( *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 24) + 24LL) != 8 )
            v109 = (int)v109;
          if ( v109 >= 0 )
            goto LABEL_92;
        }
      }
    }
    if ( a1[4].m128i_i64[0] )
    {
      v20 = (const __m128i *)a1[3].m128i_i64[1];
      v157[0] = _mm_loadu_si128(v20);
      v157[1] = _mm_loadu_si128(v20 + 1);
      if ( sub_269860(a1->m128i_i64, v157, (__int64 *)&v147, (__int64 *)&v145, &v146) )
      {
        if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)&v157[0] + 48LL), 2) & 0xF) - 10) > 2u )
        {
          v24 = v145;
          v130 = v147;
          v104 = sub_26D190((__int64)a1, v8, (__int64 *)v157, v145, (__int64)&a1[6].m128i_i64[1], v147, 0);
          v105 = v130;
          if ( v104 )
          {
            v90 = (__m128i *)a1[3].m128i_i64[1];
            v131 = v104;
            v143 = v105;
            v89 = v90 + 2;
            memmove(v90, &v90[2], 32 * a1[4].m128i_i64[0]-- - 32);
            v92 = v143;
            v83 = v131;
            goto LABEL_127;
          }
        }
      }
    }
    if ( (get_tinfo_property(a1[8].m128i_i64[1], 2) & 0x2F) == 0xD && (a1[27].m128i_i8[12] & 2) == 0 )
    {
      v21 = a1[9].m128i_i64[0];
      if ( (_BYTE)v21 )
      {
        if ( (unsigned __int64)v152 > 1 )
        {
          if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] && !a1[4].m128i_i64[0]
            || (*(_QWORD *)&v157[0] = 0,
                *(_QWORD *)&v157[0] = get_tinfo_property(v21, 9),
                v22 = get_tinfo_property(*(_QWORD *)&v157[0], 2) & 0x3F,
                clear_tinfo_t(v157),
                (_BYTE)v22 != 1) )
          {
            if ( (a1[27].m128i_i32[1] != 0) == a1[28].m128i_i8[5] || get_tinfo_property(a1[9].m128i_i64[0], 17) )
            {
              v150 = 0;
              copy_tinfo_t(&v150, &v8[3]);
              if ( !a1[27].m128i_i32[1] && (a1[27].m128i_i32[2] || a1[28].m128i_i8[5]) )
              {
                sub_328210(v157, *(_QWORD *)(a1->m128i_i64[0] + 112), &v150);
                copy_tinfo_t(&v150, v157);
                clear_tinfo_t(v157);
              }
              if ( (unsigned __int8)sub_326300(a1->m128i_i64[0], &v150, v135) )
              {
                if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
                {
                  clear_tinfo_t(&v150);
                  goto LABEL_120;
                }
                clear_tinfo_t(&v150);
                goto LABEL_34;
              }
              clear_tinfo_t(&v150);
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)sub_269990((__int64)a1, (__int64 *)&v147, (__int64 *)&v145, &v146) )
      goto LABEL_34;
    v23 = a1[5].m128i_i64[0];
    v24 = v145;
    v25 = v147;
    v26 = a1[5].m128i_i64[1];
    v27 = 8 * *(_DWORD *)(*(_QWORD *)(v23 + 112) + 84LL) - 1;
    if ( (unsigned __int64)v27 <= 0x3F )
    {
      v28 = v147 * v145;
      v29 = 1LL << v27;
      if ( *(_DWORD *)(*(_QWORD *)(v23 + 24) + 24LL) == 8 )
      {
        if ( (v29 & (v28 ^ v147)) != 0 )
          goto LABEL_34;
        v88 = (v26 ^ (v26 - v28)) & v29;
      }
      else
      {
        if ( (v29 & ((int)v28 ^ v147)) != 0 )
          goto LABEL_34;
        v88 = (v26 ^ ((int)v26 - (int)v28)) & v29;
      }
      if ( v88 )
        goto LABEL_34;
    }
    if ( a1[6].m128i_i64[0] == v26 )
    {
      v132 = v147;
      v107 = sub_2693F0((__int64)a1, &v146, v135);
      v25 = v132;
      if ( !v107 )
        goto LABEL_120;
    }
    v89 = v8;
    v90 = a1;
    v129 = v25;
    v83 = sub_26D190((__int64)a1, v8, nullptr, 1u, (__int64)&a1[6].m128i_i64[1], v25, v25 == 0);
    v92 = v129;
    if ( v83 )
    {
LABEL_127:
      v93 = v92 * v24;
      if ( v18 )
      {
        v108 = a1[6].m128i_i64[0];
        if ( -v93 > v108 )
          sub_2662A0(v90, v89, -v93, v91, v83);
        a1[6].m128i_i64[0] = v108 + v93;
        goto LABEL_130;
      }
      v94 = a1[5].m128i_i64[1];
      if ( v93 > v94 )
      {
        if ( !under_debugger )
          sub_37EEE0(50183);
        goto LABEL_211;
      }
      a1[5].m128i_i64[1] = v94 - v93;
LABEL_130:
      v19 = *(_DWORD *)(v83 + 8) == 58;
      v144 = (__m128i *)v83;
      if ( v19 )
        ++v138;
LABEL_132:
      v142 = (__m128i *)v83;
      clear_tinfo_t(&v146);
      v8 = v142;
      goto LABEL_4;
    }
LABEL_34:
    if ( (get_tinfo_property(a1[8].m128i_i64[1], 2) & 0x2F) != 0xD )
      goto LABEL_120;
    v31 = a1[27].m128i_i32[3];
    if ( v138 <= 0 )
    {
      if ( v31 == 3 )
        goto LABEL_120;
    }
    else if ( v31 )
    {
      goto LABEL_120;
    }
    v32 = a1[5].m128i_i64[1];
    v33 = a1[6].m128i_i64[0];
    if ( v32 > 0 && v32 < v33 )
    {
      if ( v140 > v32 )
        goto LABEL_42;
      v32 -= v33;
      if ( v32 < 0 )
        goto LABEL_120;
      if ( v140 > v32 )
        goto LABEL_42;
LABEL_41:
      if ( !get_tinfo_property(v146, 286) )
        goto LABEL_120;
      goto LABEL_42;
    }
    v32 -= v33;
    if ( v32 < 0 )
      break;
    if ( v140 <= v32 )
      goto LABEL_41;
LABEL_42:
    v34 = v8->m128i_i32[2];
    if ( v34 != 52
      && a1[27].m128i_i32[2]
      && a1[27].m128i_i32[3] == 1
      && (v34 != 64 || !(unsigned __int8)is_spec_ea(v8[1].m128i_i64[1])) )
    {
      goto LABEL_120;
    }
    if ( tinfo_size == v10 )
    {
      v35 = *(__int64 (**)())(*(_QWORD *)v133 + 296LL);
      if ( v35 != sub_266260 && !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64))v35)(v133, &v8[3], v32) )
        goto LABEL_120;
    }
    if ( (unsigned __int8)sub_269BF0((__int64)a1, v32) )
      goto LABEL_120;
    if ( !v32 && !a1[27].m128i_i32[1] && (unsigned __int64)v152 > 1 && !a1[10].m128i_i64[0] )
    {
      if ( !a1[4].m128i_i64[0] || !(*(_QWORD *)(a1[3].m128i_i64[1] + 24) % v140) )
      {
        v36 = a1[9].m128i_i64[0];
        if ( !(_BYTE)v36 || (get_tinfo_property(v36, 2) & 0x3F) == 1 )
          goto LABEL_120;
      }
      if ( *(_DWORD *)(a1[2].m128i_i64[0] + 8) == 52 )
        goto LABEL_120;
      if ( !a1[28].m128i_i8[5] )
      {
        v37 = a1[1].m128i_i64[0];
        v38 = *(_DWORD *)(v37 + 8) - 1;
        if ( v38 >= 0 )
        {
          v39 = *(_QWORD *)v37 + 8LL * (unsigned int)v38;
          do
          {
            if ( !*(_QWORD *)v39 )
              break;
            v40 = *(_DWORD *)(*(_QWORD *)v39 + 8LL);
            if ( v40 == 51 )
              goto LABEL_66;
            if ( v40 != 48 )
              break;
            --v38;
            v39 -= 8;
          }
          while ( v38 != -1 );
        }
        if ( *(_DWORD *)(a1[1].m128i_i64[1] + 8) == 80
          && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 64) + 8LL) + 320LL)
          || !(unsigned __int8)sub_269D30(a1, (__int64)v135, (__int64)v8) )
        {
          goto LABEL_120;
        }
      }
    }
LABEL_66:
    v41 = (__m128i *)sub_26EFD0(a1, v134, (__int64 *)&v144, v10, v32, v135, tinfo_size, (__int64)&v151);
    v8 = v41;
    if ( !v41 )
    {
      v8 = v144;
      goto LABEL_120;
    }
    v144 = v41;
    v41->m128i_i64[0] = a1[8].m128i_i64[0];
    if ( a1[5].m128i_i64[1] == a1[6].m128i_i64[0] )
    {
      v106 = a1[8].m128i_i64[1];
      *(_QWORD *)&v157[0] = 0;
      *(_QWORD *)&v157[0] = get_tinfo_property(v106, 9);
      if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v8[1].m128i_i64[1] + 48), *(_QWORD *)&v157[0], 0) )
      {
        clear_tinfo_t(v157);
        goto LABEL_120;
      }
      clear_tinfo_t(v157);
    }
    clear_tinfo_t(&v146);
    v138 = 0;
    if ( v8->m128i_i32[2] == 52 )
      goto LABEL_69;
  }
  if ( !a1[4].m128i_i64[0] )
    goto LABEL_120;
  memset(v157, 0, 24);
  sub_3303D0((unsigned int)v157, (_DWORD)v136, 0, 0, 0, v30);
  if ( !*((_QWORD *)&v157[0] + 1) )
  {
    v98 = *(_QWORD *)&v157[0];
    if ( *(_QWORD *)&v157[0] )
      goto LABEL_195;
    goto LABEL_120;
  }
  v96 = 0;
  v97 = 0;
  do
  {
    if ( (get_tinfo_property(*(_QWORD *)(*(_QWORD *)&v157[0] + (v97 << 6) + 56), 2) & 0xF) == 0xB )
      break;
    v97 = ++v96;
  }
  while ( (unsigned __int64)v96 < *((_QWORD *)&v157[0] + 1) );
  v98 = *(_QWORD *)&v157[0];
  if ( v97 != *((_QWORD *)&v157[0] + 1) )
  {
    if ( *(_QWORD *)&v157[0] )
    {
      if ( *((_QWORD *)&v157[0] + 1) )
      {
        v139 = v8;
        v99 = 0;
        v100 = *((_QWORD *)&v157[0] + 1);
        do
        {
          v101 = (_QWORD *)(v98 + (v99 << 6));
          clear_tinfo_t(v101 + 7);
          v102 = v101[4];
          if ( v102 )
          {
            v101[5] = 0;
            qfree(v102);
          }
          v103 = v101[1];
          if ( v103 )
          {
            v101[2] = 0;
            qfree(v103);
          }
          ++v99;
          v98 = *(_QWORD *)&v157[0];
        }
        while ( v99 != v100 );
        v8 = v139;
      }
      *((_QWORD *)&v157[0] + 1) = 0;
      qfree(v98);
    }
    v32 = 0;
    goto LABEL_42;
  }
  if ( *(_QWORD *)&v157[0] )
  {
    if ( *((_QWORD *)&v157[0] + 1) )
    {
      v112 = 0;
      v113 = *((_QWORD *)&v157[0] + 1);
      do
      {
        v114 = (_QWORD *)(v98 + (v112 << 6));
        clear_tinfo_t(v114 + 7);
        v115 = v114[4];
        if ( v115 )
        {
          v114[5] = 0;
          qfree(v115);
        }
        v116 = v114[1];
        if ( v116 )
        {
          v114[2] = 0;
          qfree(v116);
        }
        ++v112;
        v98 = *(_QWORD *)&v157[0];
      }
      while ( v112 != v113 );
    }
LABEL_195:
    *((_QWORD *)&v157[0] + 1) = 0;
    qfree(v98);
  }
LABEL_120:
  clear_tinfo_t(&v146);
  if ( v151 )
  {
    *(_QWORD *)&v152 = 0;
    qfree(v151);
  }
  clear_tinfo_t(&v154);
  clear_tinfo_t((char *)&v153 + 8);
  clear_tinfo_t(&v153);
  return v8;
}
