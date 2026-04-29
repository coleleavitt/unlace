__int64 __fastcall sub_1B9F0(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  unsigned __int16 v10; // ax
  bool v12; // cl
  __int64 result; // rax
  unsigned __int16 v14; // dx
  int v15; // r12d
  __int64 v16; // r14
  unsigned __int16 v17; // r13
  bool v18; // zf
  __m128i *v19; // rsi
  __int64 v20; // rax
  int v21; // r12d
  __int64 v22; // r14
  int v23; // r13d
  unsigned __int16 v24; // di
  unsigned __int16 v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  bool v29; // cf
  char v30; // cl
  int v31; // eax
  char v32; // cl
  __int64 v33; // rcx
  int v34; // r12d
  __int64 v35; // r14
  int v36; // r13d
  __int64 v37; // rax
  __m128i *v38; // rax
  int v39; // r12d
  __int64 v40; // r14
  int v41; // r13d
  __int8 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // al
  __int8 *v47; // rsi
  char v48; // al
  __int64 v49; // r8
  int v50; // r13d
  __int64 v51; // r15
  int v52; // r14d
  __m128i *v53; // rsi
  __int64 v54; // rax
  __int8 *v55; // rdx
  __int64 v56; // r9
  __int64 v57; // r8
  char v58; // al
  __int64 v59; // r8
  int v60; // r13d
  __int64 v61; // r15
  int v62; // r14d
  __m128i *v63; // rsi
  __int64 v64; // rax
  __int8 *v65; // rdx
  __int64 v66; // r9
  __int64 v67; // r8
  char v68; // al
  __int64 v69; // r8
  int v70; // r13d
  __int64 v71; // r15
  int v72; // r14d
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  char v76; // al
  char v77; // al
  char v78; // al
  __int64 v79; // r13
  unsigned int dword; // eax
  char v81; // al
  __int64 v82; // r15
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // r8
  int v86; // r13d
  __int64 v87; // r15
  int v88; // r14d
  unsigned __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // r14
  __int64 v101; // rsi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // r8
  int v106; // r13d
  __int64 v107; // r15
  int v108; // r14d
  unsigned __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // rdx
  __m128i *v112; // rsi
  __m128i *v113; // rsi
  __m128i *v114; // rsi
  __m128i *v115; // rsi
  __m128i *v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  char v130; // [rsp+8h] [rbp-C0h]
  __int64 v131; // [rsp+8h] [rbp-C0h]
  __int64 v132; // [rsp+8h] [rbp-C0h]
  __int64 v133; // [rsp+8h] [rbp-C0h]
  __int64 v134; // [rsp+8h] [rbp-C0h]
  __int64 v135; // [rsp+8h] [rbp-C0h]
  __int64 v137; // [rsp+18h] [rbp-B0h]
  __int64 v138; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+28h] [rbp-A0h] BYREF
  __int64 *v140; // [rsp+30h] [rbp-98h] BYREF
  __int128 v141; // [rsp+38h] [rbp-90h]
  __int64 v142; // [rsp+48h] [rbp-80h]
  int v143; // [rsp+50h] [rbp-78h]
  __m128i v144; // [rsp+60h] [rbp-68h] BYREF
  __int64 v145; // [rsp+70h] [rbp-58h]
  __int64 v146; // [rsp+78h] [rbp-50h]
  int v147; // [rsp+80h] [rbp-48h]
  unsigned __int64 v148; // [rsp+88h] [rbp-40h]

  v8 = *a3;
  v148 = __readfsqword(0x28u);
  if ( v8 < 0 )
    return reg_finder_may_modify_stkvar(a1, a2, (unsigned int)v8, a4);
  v10 = *(_WORD *)(a4 + 24);
  if ( v10 > 0x79u )
  {
    if ( v10 > 0x1DCu )
    {
      if ( (unsigned __int16)(v10 - 477) <= 1u )
      {
        v12 = (unsigned __int16)v8 == 15;
LABEL_11:
        if ( v12 )
          goto LABEL_33;
        if ( *(_BYTE *)(a4 + 41) == 1 )
        {
          v45 = *(unsigned __int16 *)(a4 + 46);
          if ( (unsigned __int16)v8 == (_DWORD)v45 )
            goto LABEL_99;
        }
        goto LABEL_13;
      }
LABEL_61:
      if ( (unsigned __int16)(v10 - 480) > 1u || (unsigned __int16)v8 != 31 )
        goto LABEL_13;
      v33 = (unsigned int)*(_QWORD *)(a4 + 88) + 4 * *(unsigned __int16 *)(a4 + 46) - 8;
      if ( v10 == 480 )
        v33 = -(__int64)((unsigned int)*(_QWORD *)(a4 + 88) + 4 * *(unsigned __int16 *)(a4 + 46) - 8);
LABEL_55:
      if ( v33 )
      {
        LODWORD(v140) = 256;
        v144.m128i_i64[0] = 0x20000000500LL;
        v144.m128i_i64[1] = v33;
        v142 = 0;
        v143 = 0;
        HIWORD(v140) = v8;
        WORD2(v140) = 512;
        v145 = 0;
        v146 = 0;
        v147 = 0;
        v141 = 0;
        reg_finder_emulate_binary_op(a1, a2, 0, &v140, &v144, a4, a5, a6, 0, 0);
        return 1;
      }
      goto LABEL_13;
    }
    if ( v10 <= 0x1DAu )
      goto LABEL_13;
LABEL_30:
    if ( *(_BYTE *)(a4 + 41) == 1 )
    {
      if ( *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8
        || *(_BYTE *)(a4 + 81) == 1 && *(unsigned __int16 *)(a4 + 86) == (unsigned __int16)v8 )
      {
        goto LABEL_33;
      }
    }
    else if ( *(_BYTE *)(a4 + 81) == 1 && (unsigned __int16)v8 == *(unsigned __int16 *)(a4 + 86) )
    {
      goto LABEL_33;
    }
    goto LABEL_13;
  }
  if ( v10 <= 0x77u )
  {
    if ( v10 > 0x67u )
    {
      if ( (unsigned __int16)(v10 - 104) > 7u )
      {
        if ( *(_BYTE *)(a4 + 41) == 1 )
        {
          v45 = (unsigned __int16)v8;
          if ( (unsigned __int16)v8 == *(unsigned __int16 *)(a4 + 46) )
            goto LABEL_99;
        }
        goto LABEL_13;
      }
      if ( *(_BYTE *)(a4 + 41) != 1 )
        goto LABEL_13;
      v12 = *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8;
      goto LABEL_11;
    }
    if ( v10 <= 0x65u )
    {
      if ( *(_BYTE *)(a4 + 41) == 1 )
      {
        if ( *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8 )
        {
          v45 = (unsigned __int16)v8;
LABEL_99:
          switch ( v10 )
          {
            case 1u:
            case 2u:
              v58 = *(_BYTE *)(a4 + 81);
              if ( v58 == 4 )
              {
                reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, a5);
                v66 = a4;
                v67 = 0;
              }
              else
              {
                if ( v58 != 2 )
                  goto LABEL_102;
                v59 = *(_QWORD *)(a4 + 96);
                *(_BYTE *)(a2 + 24) = 10;
                v60 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v61 = *(_QWORD *)(a4 + 16);
                v62 = *(unsigned __int16 *)(a4 + 24);
                v18 = *(_BYTE *)(a4 + 81) == 5;
                v144.m128i_i64[0] = v59;
                v144.m128i_i64[1] = v61;
                LOWORD(v145) = v62;
                if ( v18 )
                  v60 = *(_BYTE *)(a4 + 121) == 0;
                v63 = *(__m128i **)a2;
                WORD1(v145) = v60;
                v64 = *(_QWORD *)(a2 + 16);
                if ( &v144 < v63 || &v144 >= (__m128i *)((char *)v63 + 24 * v64) )
                {
                  if ( !v64 )
                  {
                    v123 = qvector_reserve(a2, v63, 1, 24);
                    *(_QWORD *)a2 = v123;
                    v63 = (__m128i *)v123;
                  }
                  v115 = (__m128i *)((char *)v63 + 24 * *(_QWORD *)(a2 + 8));
                  *v115 = _mm_load_si128(&v144);
                  v115[1].m128i_i64[0] = v145;
                }
                else
                {
                  if ( !v64 )
                  {
                    v131 = v59;
                    v124 = qvector_reserve(a2, v63, 1, 24);
                    v59 = v131;
                    *(_QWORD *)a2 = v124;
                    v63 = (__m128i *)v124;
                  }
                  v65 = &v63->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
                  *(_QWORD *)v65 = v59;
                  *((_QWORD *)v65 + 1) = v61;
                  *((_DWORD *)v65 + 4) = v62 | (v60 << 16);
                }
                ++*(_QWORD *)(a2 + 8);
                v66 = a4;
                v67 = 0;
              }
              goto LABEL_131;
            case 3u:
            case 4u:
              v48 = *(_BYTE *)(a4 + 81);
              if ( v48 == 4 )
              {
                reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, a5);
                v56 = a4;
                v57 = 0;
              }
              else
              {
                if ( v48 != 2 )
                  goto LABEL_102;
                v49 = *(_QWORD *)(a4 + 96);
                *(_BYTE *)(a2 + 24) = 10;
                v50 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v51 = *(_QWORD *)(a4 + 16);
                v52 = *(unsigned __int16 *)(a4 + 24);
                v18 = *(_BYTE *)(a4 + 81) == 5;
                v144.m128i_i64[0] = v49;
                v144.m128i_i64[1] = v51;
                LOWORD(v145) = v52;
                if ( v18 )
                  v50 = *(_BYTE *)(a4 + 121) == 0;
                v53 = *(__m128i **)a2;
                WORD1(v145) = v50;
                v54 = *(_QWORD *)(a2 + 16);
                if ( &v144 < v53 || &v144 >= (__m128i *)((char *)v53 + 24 * v54) )
                {
                  if ( !v54 )
                  {
                    v120 = qvector_reserve(a2, v53, 1, 24);
                    *(_QWORD *)a2 = v120;
                    v53 = (__m128i *)v120;
                  }
                  v112 = (__m128i *)((char *)v53 + 24 * *(_QWORD *)(a2 + 8));
                  *v112 = _mm_load_si128(&v144);
                  v112[1].m128i_i64[0] = v145;
                }
                else
                {
                  if ( !v54 )
                  {
                    v134 = v49;
                    v128 = qvector_reserve(a2, v53, 1, 24);
                    v49 = v134;
                    *(_QWORD *)a2 = v128;
                    v53 = (__m128i *)v128;
                  }
                  v55 = &v53->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
                  *(_QWORD *)v55 = v49;
                  *((_QWORD *)v55 + 1) = v51;
                  *((_DWORD *)v55 + 4) = v52 | (v50 << 16);
                }
                ++*(_QWORD *)(a2 + 8);
                v56 = a4;
                v57 = 0;
              }
              goto LABEL_120;
            case 5u:
              v84 = *(_BYTE *)(a4 + 81);
              if ( v84 == 4 )
                goto LABEL_227;
              if ( v84 != 2 )
                goto LABEL_102;
              v85 = *(_QWORD *)(a4 + 96);
              *(_BYTE *)(a2 + 24) = 10;
              v86 = 0;
              *(_QWORD *)(a2 + 8) = 0;
              v87 = *(_QWORD *)(a4 + 16);
              v88 = *(unsigned __int16 *)(a4 + 24);
              v18 = *(_BYTE *)(a4 + 81) == 5;
              v144.m128i_i64[0] = v85;
              v144.m128i_i64[1] = v87;
              LOWORD(v145) = v88;
              if ( v18 )
                v86 = *(_BYTE *)(a4 + 121) == 0;
              v89 = *(_QWORD *)a2;
              WORD1(v145) = v86;
              v90 = *(_QWORD *)(a2 + 16);
              if ( (unsigned __int64)&v144 < v89 || (unsigned __int64)&v144 >= v89 + 24 * v90 )
              {
                if ( !v90 )
                {
                  v119 = qvector_reserve(a2, v89, 1, 24);
                  *(_QWORD *)a2 = v119;
                  v89 = v119;
                }
                v116 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v89);
                *v116 = _mm_load_si128(&v144);
                v116[1].m128i_i64[0] = v145;
              }
              else
              {
                if ( !v90 )
                {
                  v132 = v85;
                  v125 = qvector_reserve(a2, v89, 1, 24);
                  v85 = v132;
                  *(_QWORD *)a2 = v125;
                  v89 = v125;
                }
                v91 = v89 + 24LL * *(_QWORD *)(a2 + 8);
                *(_QWORD *)v91 = v85;
                *(_QWORD *)(v91 + 8) = v87;
                *(_DWORD *)(v91 + 16) = v88 | (v86 << 16);
              }
              ++*(_QWORD *)(a2 + 8);
              goto LABEL_193;
            case 6u:
              v77 = *(_BYTE *)(a4 + 81);
              if ( v77 == 3 )
              {
                if ( *(_BYTE *)(a4 + 112) )
                {
                  v100 = *(_QWORD *)(a4 + 88);
                  v137 = a5;
                  v130 = *(_BYTE *)(a4 + 113);
                  sub_1B950((__int64)&v140, a1, a5, a6, *(unsigned __int16 *)(a4 + 86));
                  sub_1B950((__int64)&v144, a1, v137, a6, v100);
                  if ( (unsigned __int8)sub_CF40(&v140, &v138) && (unsigned __int8)sub_CF40((__int64 **)&v144, &v139) )
                  {
                    sub_1B820(a2, (unsigned int)(v138 + ((_DWORD)v139 << v130)), a4, 0);
                    v101 = a2;
                    reg_finder_emulate_mem_read(a1, a2, a2, 4, 0, a4);
                  }
                  else
                  {
                    v101 = a4;
                    sub_1B700(a2, a4);
                  }
                  if ( v144.m128i_i64[0] )
                  {
                    v144.m128i_i64[1] = 0;
                    qfree(v144.m128i_i64[0], v101, v102, v103);
                  }
                  if ( v140 )
                  {
                    *(_QWORD *)&v141 = 0;
                    qfree(v140, v101, v102, v103);
                  }
                  return 1;
                }
              }
              else if ( v77 != 4 )
              {
                *(_BYTE *)(a2 + 24) = 4;
                v34 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v35 = *(_QWORD *)(a4 + 16);
                v36 = *(unsigned __int16 *)(a4 + 24);
                v18 = *(_BYTE *)(a4 + 81) == 5;
                v144.m128i_i64[0] = -1;
                v144.m128i_i64[1] = v35;
                LOWORD(v145) = v36;
                if ( v18 )
                  v34 = *(_BYTE *)(a4 + 121) == 0;
                v19 = *(__m128i **)a2;
                WORD1(v145) = v34;
                v37 = *(_QWORD *)(a2 + 16);
                if ( &v144 < v19 || &v144 >= (__m128i *)((char *)v19 + 24 * v37) )
                  goto LABEL_78;
LABEL_106:
                if ( !v37 )
                {
                  v95 = qvector_reserve(a2, v19, 1, 24);
                  *(_QWORD *)a2 = v95;
                  v19 = (__m128i *)v95;
                }
                v47 = &v19->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
                *(_QWORD *)v47 = -1;
LABEL_109:
                *((_QWORD *)v47 + 1) = v35;
                *((_DWORD *)v47 + 4) = v36 | (v34 << 16);
                goto LABEL_40;
              }
LABEL_227:
              reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, a5);
LABEL_193:
              reg_finder_emulate_mem_read(a1, a2, a2, 4, 0, a4);
              return 1;
            case 0x11u:
            case 0x12u:
              v46 = *(_BYTE *)(a4 + 81);
              if ( v46 == 4 )
              {
                reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, a5);
              }
              else
              {
                if ( v46 != 2 )
                  goto LABEL_102;
                v105 = *(_QWORD *)(a4 + 96);
                *(_BYTE *)(a2 + 24) = 10;
                v106 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v107 = *(_QWORD *)(a4 + 16);
                v108 = *(unsigned __int16 *)(a4 + 24);
                v18 = *(_BYTE *)(a4 + 81) == 5;
                v144.m128i_i64[0] = v105;
                v144.m128i_i64[1] = v107;
                LOWORD(v145) = v108;
                if ( v18 )
                  v106 = *(_BYTE *)(a4 + 121) == 0;
                v109 = *(_QWORD *)a2;
                WORD1(v145) = v106;
                v110 = *(_QWORD *)(a2 + 16);
                if ( (unsigned __int64)&v144 < v109 || (unsigned __int64)&v144 >= v109 + 24 * v110 )
                {
                  if ( !v110 )
                  {
                    v121 = qvector_reserve(a2, v109, 1, 24);
                    *(_QWORD *)a2 = v121;
                    v109 = v121;
                  }
                  v113 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v109);
                  *v113 = _mm_load_si128(&v144);
                  v113[1].m128i_i64[0] = v145;
                }
                else
                {
                  if ( !v110 )
                  {
                    v135 = v105;
                    v129 = qvector_reserve(a2, v109, 1, 24);
                    v105 = v135;
                    *(_QWORD *)a2 = v129;
                    v109 = v129;
                  }
                  v111 = v109 + 24LL * *(_QWORD *)(a2 + 8);
                  *(_QWORD *)v111 = v105;
                  *(_QWORD *)(v111 + 8) = v107;
                  *(_DWORD *)(v111 + 16) = v108 | (v106 << 16);
                }
                ++*(_QWORD *)(a2 + 8);
              }
              v66 = a4;
              v67 = 1;
LABEL_131:
              reg_finder_emulate_mem_read(a1, a2, a2, 1, v67, v66);
              return 1;
            case 0x13u:
            case 0x14u:
              v68 = *(_BYTE *)(a4 + 81);
              if ( v68 == 4 )
              {
                reg_finder_calc_op_addr(a1, a2, a4 + 80, a4, a5);
              }
              else
              {
                if ( v68 != 2 )
                  goto LABEL_102;
                v69 = *(_QWORD *)(a4 + 96);
                *(_BYTE *)(a2 + 24) = 10;
                v70 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v71 = *(_QWORD *)(a4 + 16);
                v72 = *(unsigned __int16 *)(a4 + 24);
                v18 = *(_BYTE *)(a4 + 81) == 5;
                v144.m128i_i64[0] = v69;
                v144.m128i_i64[1] = v71;
                LOWORD(v145) = v72;
                if ( v18 )
                  v70 = *(_BYTE *)(a4 + 121) == 0;
                v73 = *(_QWORD *)a2;
                WORD1(v145) = v70;
                v74 = *(_QWORD *)(a2 + 16);
                if ( (unsigned __int64)&v144 < v73 || (unsigned __int64)&v144 >= v73 + 24 * v74 )
                {
                  if ( !v74 )
                  {
                    v122 = qvector_reserve(a2, v73, 1, 24);
                    *(_QWORD *)a2 = v122;
                    v73 = v122;
                  }
                  v114 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v73);
                  *v114 = _mm_load_si128(&v144);
                  v114[1].m128i_i64[0] = v145;
                }
                else
                {
                  if ( !v74 )
                  {
                    v133 = v69;
                    v126 = qvector_reserve(a2, v73, 1, 24);
                    v69 = v133;
                    *(_QWORD *)a2 = v126;
                    v73 = v126;
                  }
                  v75 = v73 + 24LL * *(_QWORD *)(a2 + 8);
                  *(_QWORD *)v75 = v69;
                  *(_QWORD *)(v75 + 8) = v71;
                  *(_DWORD *)(v75 + 16) = v72 | (v70 << 16);
                }
                ++*(_QWORD *)(a2 + 8);
              }
              v56 = a4;
              v57 = 1;
LABEL_120:
              reg_finder_emulate_mem_read(a1, a2, a2, 2, v57, v56);
              return 1;
            case 0x1Fu:
              v76 = *(_BYTE *)(a4 + 81);
              if ( *(_BYTE *)(a4 + 33) != 2 || v76 )
              {
                if ( v76 != 1 || *(_BYTE *)(a4 + 121) != 1 )
                  goto LABEL_102;
                goto LABEL_146;
              }
              sub_1B950((__int64)&v144, a1, a5, a6, v45);
              if ( (unsigned __int8)sub_CF40((__int64 **)&v144, &v140) )
              {
                v96 = (unsigned int)v140 + (unsigned int)*(_QWORD *)(a4 + 16);
                sub_1B820(a2, v96, a4, 0);
              }
              else
              {
                v96 = a4;
                sub_1B700(a2, a4);
              }
              v99 = v144.m128i_i64[0];
              if ( !v144.m128i_i64[0] )
                return 1;
              goto LABEL_232;
            case 0x20u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 1 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 1, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            case 0x27u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 5 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 6, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            case 0x29u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 5 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 7, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            case 0x46u:
              if ( *(_BYTE *)(a4 + 81) != 5 || *(_QWORD *)(a4 + 88) != 992 )
                goto LABEL_102;
              sub_1B820(a2, *(_QWORD *)(a4 + 16), a4, 0);
              return 1;
            case 0x5Du:
              v81 = *(_BYTE *)(a4 + 81);
              if ( v81 == 5 )
              {
                sub_1B820(a2, *(_QWORD *)(a4 + 88), a4, 0);
                return 1;
              }
              if ( v81 != 2 )
                goto LABEL_102;
              v82 = *(_QWORD *)(a4 + 96);
              *(_BYTE *)(a2 + 24) = 10;
              v34 = 0;
              *(_QWORD *)(a2 + 8) = 0;
              v35 = *(_QWORD *)(a4 + 16);
              v36 = *(unsigned __int16 *)(a4 + 24);
              v18 = *(_BYTE *)(a4 + 81) == 5;
              v144.m128i_i64[0] = v82;
              v144.m128i_i64[1] = v35;
              LOWORD(v145) = v36;
              if ( v18 )
                v34 = *(_BYTE *)(a4 + 121) == 0;
              v19 = *(__m128i **)a2;
              WORD1(v145) = v34;
              v83 = *(_QWORD *)(a2 + 16);
              if ( &v144 >= v19 && &v144 < (__m128i *)((char *)v19 + 24 * v83) )
              {
                if ( !v83 )
                {
                  v127 = qvector_reserve(a2, v19, 1, 24);
                  *(_QWORD *)a2 = v127;
                  v19 = (__m128i *)v127;
                }
                v47 = &v19->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
                *(_QWORD *)v47 = v82;
                goto LABEL_109;
              }
              if ( v83 )
                goto LABEL_208;
              goto LABEL_207;
            case 0x5Eu:
              if ( *(_BYTE *)(a4 + 81) == 5 )
              {
                sub_1B820(a2, *(_QWORD *)(a4 + 88) << 12, a4, 0);
                return 1;
              }
              if ( (*(_QWORD *)(a4 + 80) & 0xFFFF00000000FF00LL) == 0x400 )
              {
                v79 = *(_QWORD *)(a4 + 96);
                if ( v79 )
                {
                  if ( (unsigned __int8)reg_finder_can_resolve_mem(a1, *(_QWORD *)(a4 + 96), a5, v10, v45) )
                  {
                    if ( (unsigned __int8)is_mapped(v79) )
                    {
                      dword = get_dword(v79);
                      if ( dword )
                      {
                        sub_1B820(a2, dword, a4, 0);
                        return 1;
                      }
                    }
                  }
                }
              }
              goto LABEL_102;
            case 0x72u:
              v78 = *(_BYTE *)(a4 + 81);
              if ( *(_BYTE *)(a4 + 33) == 5 )
              {
                if ( v78 == 5 )
                {
                  sub_1B950((__int64)&v144, a1, a5, a6, 0x1Du);
                  if ( (unsigned __int8)sub_CF40((__int64 **)&v144, &v140) )
                  {
                    v96 = (unsigned int)v140 + (unsigned int)*(_QWORD *)(a4 + 88);
                    sub_1B820(a2, v96, a4, 0);
                  }
                  else
                  {
                    v96 = a4;
                    sub_1B700(a2, a4);
                  }
                  v99 = v144.m128i_i64[0];
                  if ( v144.m128i_i64[0] )
                  {
LABEL_232:
                    v144.m128i_i64[1] = 0;
                    qfree(v99, v96, v97, v98);
                  }
                  return 1;
                }
                if ( v78 != 1 )
                  goto LABEL_102;
              }
              else if ( v78 != 1 )
              {
                if ( v78 == 5 )
                {
                  reg_finder_emulate_binary_op(a1, a2, 0, a4 + 40, a4 + 80, a4, a5, a6, 0, 0);
                  return 1;
                }
LABEL_102:
                *(_BYTE *)(a2 + 24) = 4;
                v34 = 0;
                *(_QWORD *)(a2 + 8) = 0;
                v144.m128i_i64[0] = -1;
                v35 = *(_QWORD *)(a4 + 16);
                v144.m128i_i64[1] = v35;
                v36 = *(unsigned __int16 *)(a4 + 24);
                LOWORD(v145) = *(_WORD *)(a4 + 24);
                if ( *(_BYTE *)(a4 + 81) == 5 )
                  v34 = *(_BYTE *)(a4 + 121) == 0;
                WORD1(v145) = v34;
                v19 = *(__m128i **)a2;
                v37 = *(_QWORD *)(a2 + 16);
                if ( (unsigned __int64)&v144 >= *(_QWORD *)a2 && &v144 < (__m128i *)((char *)v19 + 24 * v37) )
                  goto LABEL_106;
                if ( !v37 )
                {
LABEL_207:
                  v92 = qvector_reserve(a2, v19, 1, 24);
                  *(_QWORD *)a2 = v92;
                  v19 = (__m128i *)v92;
LABEL_208:
                  v19 = (__m128i *)((char *)v19 + 24 * *(_QWORD *)(a2 + 8));
                }
                goto LABEL_39;
              }
              if ( *(_BYTE *)(a4 + 121) == 5 )
              {
LABEL_146:
                reg_finder_emulate_binary_op(a1, a2, 0, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
                return 1;
              }
              goto LABEL_102;
            case 0x74u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 5 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 3, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            case 0x75u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 5 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 4, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            case 0x76u:
              if ( *(_BYTE *)(a4 + 81) != 1 || *(_BYTE *)(a4 + 121) != 5 )
                goto LABEL_102;
              reg_finder_emulate_binary_op(a1, a2, 2, a4 + 80, a4 + 120, a4, a5, a6, 0, 0);
              return 1;
            default:
              if ( v10 > 0x1Cu )
                goto LABEL_61;
              goto LABEL_46;
          }
        }
        if ( v10 > 0x1Cu )
          goto LABEL_13;
      }
      else if ( v10 > 0x1Cu )
      {
        goto LABEL_13;
      }
LABEL_46:
      if ( v10 <= 0x18u || *(_BYTE *)(a4 + 81) != 3 || *(unsigned __int16 *)(a4 + 86) != (unsigned __int16)v8 )
        goto LABEL_13;
      v24 = *(_WORD *)(a4 + 46);
      v25 = *(_WORD *)(a4 + 126);
      v26 = *(_QWORD *)(a4 + 168);
      if ( v24 != 31 || (v27 = 0, v25 != 31) )
      {
        if ( v25 < v24 )
        {
          v27 = 0;
        }
        else
        {
          v27 = 1;
          if ( v25 >= (unsigned __int16)(v24 + 1) )
          {
            if ( (((_BYTE)v25 - (_BYTE)v24) & 1) == 0 || (v27 = 2, v25 >= (unsigned __int16)(v24 + 2)) )
            {
              do
                v27 += 2;
              while ( v25 >= (unsigned __int16)(v24 + v27) );
            }
          }
        }
      }
      v28 = (v26 & 1) + v27 - (((v26 & 2) == 0) - 1) - (((v26 & 4) == 0) - 1);
      v29 = (v26 & 8) == 0;
      v30 = *(_BYTE *)(a4 + 33);
      v31 = v28 - (v29 - 1);
      if ( (unsigned __int8)(v30 - 6) > 7u )
      {
        if ( (unsigned __int8)(v30 - 14) > 7u )
        {
LABEL_213:
          v33 = 4 * v31;
          goto LABEL_55;
        }
        v32 = v30 - 14;
      }
      else
      {
        v32 = v30 - 6;
      }
      if ( (v32 & 2) != 0 )
      {
        v33 = -4 * v31;
        goto LABEL_55;
      }
      goto LABEL_213;
    }
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a4 + 41) == 1 && *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8 )
    goto LABEL_33;
LABEL_13:
  result = sub_18F40(*(_QWORD *)(a1 + 8), a4, (unsigned __int16)v8);
  if ( (_BYTE)result )
    goto LABEL_33;
  v14 = *(_WORD *)(a4 + 24);
  if ( v14 > 0x79u )
  {
    if ( v14 > 0x1DCu )
    {
      if ( (unsigned __int16)(v14 - 477) > 1u || (unsigned __int16)v8 != 15 )
        return result;
      *(_BYTE *)(a2 + 24) = 4;
      v39 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v40 = *(_QWORD *)(a4 + 16);
      v41 = *(unsigned __int16 *)(a4 + 24);
      v18 = *(_BYTE *)(a4 + 81) == 5;
      v144.m128i_i64[0] = -1;
      v144.m128i_i64[1] = v40;
      LOWORD(v145) = v41;
      if ( v18 )
        v39 = *(_BYTE *)(a4 + 121) == 0;
      v19 = *(__m128i **)a2;
      WORD1(v145) = v39;
      v20 = *(_QWORD *)(a2 + 16);
      if ( &v144 >= v19 && &v144 < (__m128i *)((char *)v19 + 24 * v20) )
      {
        if ( !v20 )
        {
          v118 = qvector_reserve(a2, v19, 1, 24);
          *(_QWORD *)a2 = v118;
          v19 = (__m128i *)v118;
        }
        v42 = &v19->m128i_i8[24 * *(_QWORD *)(a2 + 8)];
        *(_QWORD *)v42 = -1;
        *((_QWORD *)v42 + 1) = v40;
        *((_DWORD *)v42 + 4) = v41 | (v39 << 16);
        goto LABEL_40;
      }
LABEL_37:
      if ( !v20 )
      {
        v43 = qvector_reserve(a2, v19, 1, 24);
        v44 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v43;
        v19 = (__m128i *)(v43 + 24 * v44);
      }
LABEL_39:
      *v19 = _mm_load_si128(&v144);
      v19[1].m128i_i64[0] = v145;
      goto LABEL_40;
    }
    if ( v14 <= 0x1DAu
      || (*(_BYTE *)(a4 + 41) != 1 || *(unsigned __int16 *)(a4 + 46) != (unsigned __int16)v8)
      && (unsigned __int16)v8 != 15 )
    {
      return result;
    }
LABEL_33:
    *(_BYTE *)(a2 + 24) = 4;
    v21 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v144.m128i_i64[0] = -1;
    v22 = *(_QWORD *)(a4 + 16);
    v144.m128i_i64[1] = v22;
    v23 = *(unsigned __int16 *)(a4 + 24);
    LOWORD(v145) = *(_WORD *)(a4 + 24);
    if ( *(_BYTE *)(a4 + 81) == 5 )
      v21 = *(_BYTE *)(a4 + 121) == 0;
    WORD1(v145) = v21;
    v19 = *(__m128i **)a2;
    v20 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)&v144 >= *(_QWORD *)a2 && &v144 < (__m128i *)((char *)v19 + 24 * v20) )
    {
      if ( !v20 )
      {
        v93 = qvector_reserve(a2, v19, 1, 24);
        v94 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v93;
        v19 = (__m128i *)(v93 + 24 * v94);
      }
      v19->m128i_i64[0] = -1;
      v19->m128i_i64[1] = v22;
      v19[1].m128i_i32[0] = v23 | (v21 << 16);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  if ( v14 > 0x77u )
  {
LABEL_72:
    if ( *(_BYTE *)(a4 + 41) == 1 && *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8 )
    {
      *(_BYTE *)(a2 + 24) = 4;
      v34 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v144.m128i_i64[0] = -1;
      v35 = *(_QWORD *)(a4 + 16);
      v144.m128i_i64[1] = v35;
      v36 = *(unsigned __int16 *)(a4 + 24);
      LOWORD(v145) = *(_WORD *)(a4 + 24);
      if ( *(_BYTE *)(a4 + 81) == 5 )
        v34 = *(_BYTE *)(a4 + 121) == 0;
      WORD1(v145) = v34;
      v19 = *(__m128i **)a2;
      v37 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int64)&v144 >= *(_QWORD *)a2 && &v144 < (__m128i *)((char *)v19 + 24 * v37) )
        goto LABEL_106;
LABEL_78:
      if ( !v37 )
      {
        v104 = qvector_reserve(a2, v19, 1, 24);
        *(_QWORD *)a2 = v104;
        v19 = (__m128i *)v104;
      }
      v38 = (__m128i *)((char *)v19 + 24 * *(_QWORD *)(a2 + 8));
      *v38 = _mm_load_si128(&v144);
      v38[1].m128i_i64[0] = v145;
LABEL_40:
      ++*(_QWORD *)(a2 + 8);
      return 1;
    }
    return result;
  }
  if ( v14 > 0x67u )
  {
    if ( (unsigned __int16)(v14 - 104) > 5u )
      return result;
    goto LABEL_72;
  }
  if ( v14 > 0x65u
    && (*(_BYTE *)(a4 + 41) == 1 && *(unsigned __int16 *)(a4 + 46) == (unsigned __int16)v8
     || *(_BYTE *)(a4 + 81) == 1 && *(unsigned __int16 *)(a4 + 86) == (unsigned __int16)v8) )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v15 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v16 = *(_QWORD *)(a4 + 16);
    v17 = *(_WORD *)(a4 + 24);
    v18 = *(_BYTE *)(a4 + 81) == 5;
    v144.m128i_i64[0] = -1;
    v144.m128i_i64[1] = v16;
    LOWORD(v145) = v17;
    if ( v18 )
      v15 = *(_BYTE *)(a4 + 121) == 0;
    v19 = *(__m128i **)a2;
    WORD1(v145) = v15;
    v20 = *(_QWORD *)(a2 + 16);
    if ( &v144 >= v19 && &v144 < (__m128i *)((char *)v19 + 24 * v20) )
    {
      if ( !v20 )
      {
        v117 = qvector_reserve(a2, v19, 1, 24);
        *(_QWORD *)a2 = v117;
        v19 = (__m128i *)(24LL * *(_QWORD *)(a2 + 8) + v117);
      }
      v19->m128i_i64[0] = -1;
      v19->m128i_i64[1] = v16;
      v19[1].m128i_i32[0] = v17 | (v15 << 16);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  return result;
}
