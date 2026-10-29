void __fastcall sub_5743F0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __m128i a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // r10d
  _QWORD *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // r8d
  __int64 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // r8
  char v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rax
  int v28; // edx
  int v29; // r9d
  char v30; // al
  unsigned __int16 v31; // dx
  _BYTE *v32; // rax
  __m128i *v33; // rax
  unsigned __int16 v34; // ax
  char *v35; // rax
  __int64 v36; // rax
  __m128i *v37; // rcx
  unsigned __int64 v38; // rbp
  __int64 v39; // r12
  unsigned int v40; // ebp
  int v41; // r13d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // edi
  bool v45; // zf
  unsigned int v46; // r15d
  __int64 v47; // r11
  unsigned int v48; // r13d
  int v49; // ebp
  __int64 v50; // r12
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r10d
  int v54; // edi
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // r10d
  __int64 v58; // r11
  __int64 v59; // rdi
  __int64 v60; // r13
  char *v61; // r12
  unsigned int v62; // ebx
  FILE *v63; // rdx
  char v64; // al
  unsigned __int64 v65; // rax
  int v66; // edx
  __int64 v67; // rax
  unsigned int v68; // ecx
  int v69; // r8d
  unsigned __int16 *v70; // rax
  int v71; // r13d
  _WORD *v72; // rsi
  int v73; // ecx
  _WORD *v74; // rax
  _WORD *v75; // rcx
  _DWORD *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // edx
  unsigned int v79; // r14d
  unsigned int v80; // r13d
  __int64 v81; // r15
  __m128i *v82; // r12
  __int64 v83; // rax
  unsigned int v84; // esi
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rsi
  void *v88; // rdi
  volatile signed __int32 **v89; // rbx
  volatile signed __int32 **v90; // r12
  volatile signed __int32 *v91; // rsi
  FILE *v92; // rdx
  _QWORD *v93; // rax
  int v94; // edx
  volatile signed __int32 **v95; // r13
  volatile signed __int32 *v96; // r8
  unsigned int v97; // ecx
  unsigned int v98; // r12d
  __int64 v99; // r8
  unsigned __int64 v100; // r14
  __int64 v101; // rbx
  _WORD *v102; // rax
  int v103; // edx
  unsigned __int64 v104; // rax
  __int64 v105; // rdi
  __int64 v106; // rcx
  unsigned __int64 v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rbp
  volatile signed __int32 **v110; // r12
  volatile signed __int32 **v111; // rbp
  volatile signed __int32 *v112; // rdi
  int v113; // edx
  unsigned __int64 v114; // r10
  unsigned __int64 v115; // rax
  int v116; // edx
  int v117; // r9d
  char v118; // al
  __int64 v119; // rdi
  _DWORD *v120; // rdi
  unsigned int v121; // edx
  __int64 v122; // r12
  __int64 v123; // r15
  __int64 v124; // r14
  __int64 v125; // rsi
  int v126; // edx
  unsigned __int64 v127; // r10
  unsigned __int64 v128; // rax
  int v129; // edx
  int v130; // r9d
  char v131; // al
  unsigned __int64 v132; // rax
  unsigned int v133; // eax
  __int64 v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  volatile signed __int32 *v138; // rax
  _QWORD *v139; // [rsp+8h] [rbp-110h]
  char v140; // [rsp+8h] [rbp-110h]
  unsigned int v141; // [rsp+8h] [rbp-110h]
  _QWORD *v142; // [rsp+8h] [rbp-110h]
  _QWORD *v143; // [rsp+8h] [rbp-110h]
  unsigned int v144; // [rsp+10h] [rbp-108h]
  __int64 v145; // [rsp+10h] [rbp-108h]
  unsigned int v146; // [rsp+10h] [rbp-108h]
  unsigned int v147; // [rsp+10h] [rbp-108h]
  unsigned int v148; // [rsp+10h] [rbp-108h]
  __int64 v149; // [rsp+18h] [rbp-100h]
  __int64 v150; // [rsp+20h] [rbp-F8h]
  unsigned int v151; // [rsp+28h] [rbp-F0h]
  void *v152; // [rsp+38h] [rbp-E0h]
  unsigned __int64 v153; // [rsp+40h] [rbp-D8h]
  __m128i *v154; // [rsp+40h] [rbp-D8h]
  __int64 v155; // [rsp+40h] [rbp-D8h]
  __int64 v156; // [rsp+48h] [rbp-D0h]
  unsigned int v158; // [rsp+58h] [rbp-C0h]
  int v159; // [rsp+5Ch] [rbp-BCh]
  unsigned __int8 v160; // [rsp+60h] [rbp-B8h]
  int v161; // [rsp+68h] [rbp-B0h]
  int v162; // [rsp+6Ch] [rbp-ACh]
  int v163; // [rsp+70h] [rbp-A8h]
  int v164; // [rsp+74h] [rbp-A4h]
  __int64 v165; // [rsp+80h] [rbp-98h]
  unsigned int v166; // [rsp+88h] [rbp-90h]
  unsigned int v167; // [rsp+8Ch] [rbp-8Ch]
  __int64 v168; // [rsp+98h] [rbp-80h]
  int v169; // [rsp+A4h] [rbp-74h] BYREF
  unsigned __int64 v170; // [rsp+A8h] [rbp-70h]
  int v171; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v172; // [rsp+B4h] [rbp-64h]
  int v173; // [rsp+BCh] [rbp-5Ch]
  __m128 v174; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v175; // [rsp+D0h] [rbp-48h]

  v9 = a2;
  v10 = *(_QWORD *)(a1 + 1216);
  v153 = a3;
  v11 = *(_DWORD *)(v10 + 8);
  v160 = BYTE1(a3);
  if ( (unsigned int)v9 >= v11 )
    sub_55D310(v9, v10, a3, a4);
  v12 = *(_QWORD **)(a1 + 1216);
  v13 = (_DWORD *)(48LL * a2 + *(_QWORD *)v10);
  v14 = 48LL * a2;
  v15 = *(_QWORD *)v13;
  v16 = *((_QWORD *)v13 + 1);
  v17 = *(_DWORD *)(*(_QWORD *)v13 + 220LL);
  v18 = *(unsigned int *)(*(_QWORD *)v13 + 4LL);
  v161 = *(_DWORD *)(*(_QWORD *)v13 + 8LL);
  v19 = v13[4];
  if ( v17 < v19 )
  {
    v44 = *(_DWORD *)(v15 + 216);
    v45 = v13[10] == 1;
    v13[4] = v17;
    v158 = 0;
    v163 = v44;
    if ( !v45 )
      goto LABEL_4;
LABEL_33:
    v163 += 500;
    goto LABEL_6;
  }
  v158 = v17 - v19;
  v163 = *(_DWORD *)(v15 + 216);
  if ( v13[10] == 1 )
    goto LABEL_33;
LABEL_4:
  if ( !*(_WORD *)v15 && !*(_QWORD *)(v15 + 24) )
    goto LABEL_33;
LABEL_6:
  if ( !v16 || (v153 & 1) == 0 && *(_WORD *)(v153 + 40) == 0xFFFF || !*(_DWORD *)(v16 + 8) )
  {
    v20 = v11;
    v21 = 0;
    goto LABEL_10;
  }
  v167 = v11;
  v46 = 0;
  v168 = v11;
  v47 = v16;
  v48 = *(_DWORD *)(v16 + 8);
  v49 = v18;
  v50 = 48LL * v11;
  v162 = v18 + v163;
  v156 = a1 + 1296;
  while ( 1 )
  {
    while ( 1 )
    {
      v51 = *(_QWORD *)v47 + 20LL * v46;
      v52 = *(_DWORD *)v51;
      v53 = *(_DWORD *)(v51 + 4);
      v54 = *(_DWORD *)(v51 + 12);
      v18 = *(unsigned __int16 *)(v51 + 16);
      if ( v49 != *(_DWORD *)v51 )
      {
        if ( (_WORD)v18 )
          break;
      }
LABEL_43:
      if ( ++v46 >= v48 )
        goto LABEL_44;
    }
    v159 = v54 - ((v158 == 0) - 1);
    v55 = 0;
    do
    {
      if ( 48LL * *(unsigned int *)(v10 + 8) == v55 )
LABEL_148:
        sub_55D2E0();
      v56 = *(_QWORD *)(*(_QWORD *)v10 + v55);
      if ( *(_WORD *)v56 == (_WORD)v18 && v49 == *(_DWORD *)(v56 + 4) )
        goto LABEL_43;
      v55 += 48;
    }
    while ( v50 != v55 );
    v145 = v47;
    v141 = v18;
    v64 = sub_574200(a1, a2, (unsigned int)(30 * (v161 - v53) + v162 + 100 * v54 - v52));
    v18 = v141;
    v47 = v145;
    if ( v64 )
    {
      v57 = v167;
      v14 = 48LL * a2;
      v58 = v168;
      v10 = *(_QWORD *)(a1 + 1216);
      goto LABEL_45;
    }
    v65 = v153;
    BYTE1(v65) = v160;
    v66 = v160;
    v153 = v65;
    if ( (v65 & 1) == 0 )
      v66 = *(unsigned __int16 *)(v65 + 40);
    v67 = *(_QWORD *)(a1 + 1256);
    v68 = *(_DWORD *)(v67 + 24);
    if ( (unsigned __int16)v141 >= v68 )
      break;
    if ( *(_WORD *)(*(_QWORD *)(v67 + 40) + 2LL * ((unsigned int)(unsigned __int16)v141 * *(_DWORD *)(v67 + 4) + v66)) )
      goto LABEL_74;
LABEL_67:
    v48 = *(_DWORD *)(v47 + 8);
    ++v46;
    v10 = *(_QWORD *)(a1 + 1216);
    if ( v46 >= v48 )
    {
LABEL_44:
      v57 = v167;
      v14 = 48LL * a2;
      v58 = v168;
LABEL_45:
      v21 = 0;
      goto LABEL_46;
    }
  }
  v69 = 0;
  v70 = (unsigned __int16 *)(*(_QWORD *)(v67 + 48)
                           + 2LL * *(unsigned int *)(*(_QWORD *)(v67 + 56) + 4LL * ((unsigned __int16)v141 - v68)));
  v71 = *v70;
  v72 = v70 + 1;
  if ( !(_WORD)v71 )
    goto LABEL_67;
  while ( 1 )
  {
    v73 = (unsigned __int16)v72[1];
    v74 = v72 + 2;
    if ( (_WORD)v73 )
      break;
LABEL_71:
    ++v69;
    v72 = v74;
    if ( v71 == v69 )
      goto LABEL_67;
  }
  v75 = &v72[v73 + 2];
  while ( (_WORD)v66 != *v74++ )
  {
    if ( v74 == v75 )
      goto LABEL_71;
  }
  if ( !*v72 )
    goto LABEL_67;
LABEL_74:
  v76 = *(_DWORD **)(a1 + 1216);
  v150 = v145;
  v174.m128_i32[0] = v159;
  v77 = sub_56D150(v76, a2, &v174, v159, *(double *)a5.m128i_i64, a6, a7, a8);
  v47 = v145;
  v149 = v77;
  v146 = v78;
  if ( !v78 )
    goto LABEL_67;
  v79 = 0;
  v164 = v49;
  v80 = -1;
  v165 = v50;
  v166 = v46;
  v81 = a1;
  do
  {
    v82 = (__m128i *)(v149 + 24LL * v79);
    v83 = v82[1].m128i_i64[0];
    a5 = _mm_loadu_si128(v82);
    v175 = v83;
    v84 = v83;
    v174 = (__m128)a5;
    if ( (_DWORD)v83 == v80 )
    {
      sub_56D0B0(v81 + 1224, (__int64)&v174);
LABEL_85:
      memmove(v82, (const void *)(v149 + 24LL * (v79 + 1)), 24LL * (--v146 - v79));
      continue;
    }
    v85 = *(_QWORD *)(v81 + 1216);
    if ( (unsigned int)v83 >= *(_DWORD *)(v85 + 8) )
      goto LABEL_148;
    v86 = *(_QWORD *)v85 + 48LL * (unsigned int)v83;
    if ( (_WORD)v141 != **(_WORD **)v86 )
    {
      v87 = v174.m128_u32[2];
      *(_DWORD *)(v86 + 40) = 2;
      v88 = (void *)v174.m128_u64[0];
      if ( (_DWORD)v87 )
      {
        v152 = (void *)v174.m128_u64[0];
        v89 = (volatile signed __int32 **)v174.m128_u64[0];
        v90 = (volatile signed __int32 **)(v174.m128_u64[0] + 8 * v87);
        do
        {
          v91 = *v89++;
          sub_56C9A0(v81 + 1224, v91);
        }
        while ( v90 != v89 );
        v82 = (__m128i *)(v149 + 24LL * v79);
        v88 = v152;
      }
      if ( v88 )
        off_8C52A0(v88);
      goto LABEL_85;
    }
    v93 = (_QWORD *)sub_56EB60(v85, v84, *(double *)a5.m128i_i64, a6, a7, a8);
    v95 = (volatile signed __int32 **)v93;
    if ( v94 )
    {
      if ( v94 != 1 )
        __assert_fail("error_trees.size == 1", "lib/src/./parser.c", 0x4C4u, "ts_parser__recover_to_state");
      v96 = (volatile signed __int32 *)*v93;
      if ( (*v93 & 1) == 0 )
      {
        v97 = *((_DWORD *)v96 + 9);
        if ( v97 )
        {
          v109 = 8LL * v97;
          sub_55F020((char **)&v174, 0, 0, v97, (const void *)&v96[v109 / 0xFFFFFFFFFFFFFFFCLL]);
          v110 = (volatile signed __int32 **)v174.m128_u64[0];
          v111 = (volatile signed __int32 **)(v174.m128_u64[0] + v109);
          do
          {
            v112 = *v110++;
            sub_56C560(v112);
          }
          while ( v110 != v111 );
        }
      }
      sub_56C9A0(v81 + 1224, *v95);
      off_8C52A0(v95);
    }
    sub_56B3A0((__int64)&v174, v156);
    if ( v174.m128_i32[2] )
    {
      v104 = sub_56C3B0(0xFFFFu, (__int64)&v174, 0, *(_QWORD *)(v81 + 1256));
      v105 = *(_QWORD *)(v81 + 1216);
      *(_BYTE *)(v104 + 44) |= 4u;
      v80 = v175;
      sub_55FE40(v105, v175, v104, v141);
    }
    else
    {
      v80 = v175;
      if ( v174.m128_u64[0] )
        off_8C52A0((void *)v174.m128_u64[0]);
    }
    if ( *(_DWORD *)(v81 + 1304) )
    {
      v151 = v79;
      v98 = 0;
      do
      {
        while ( 1 )
        {
          v99 = *(_QWORD *)(v81 + 1216);
          v100 = *(_QWORD *)(*(_QWORD *)(v81 + 1296) + 8LL * v98);
          if ( v80 >= *(_DWORD *)(v99 + 8) )
            __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x207u, "ts_stack_push");
          v101 = 48LL * v80 + *(_QWORD *)v99;
          v102 = sub_55DDD0(*(_QWORD *)v101, v100, 0, v141, (__int64 *)(v99 + 48));
          if ( !v100 )
            break;
          *(_QWORD *)v101 = v102;
          if ( ++v98 >= *(_DWORD *)(v81 + 1304) )
            goto LABEL_105;
        }
        v103 = *((_DWORD *)v102 + 55);
        ++v98;
        *(_QWORD *)v101 = v102;
        *(_DWORD *)(v101 + 16) = v103;
      }
      while ( v98 < *(_DWORD *)(v81 + 1304) );
LABEL_105:
      v79 = v151;
    }
    ++v79;
  }
  while ( v79 < v146 );
  a1 = v81;
  v49 = v164;
  v47 = v150;
  v46 = v166;
  v50 = v165;
  if ( v80 == -1 )
    goto LABEL_67;
  v14 = 48LL * a2;
  v57 = v167;
  v58 = v168;
  if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
  {
    snprintf((char *)(a1 + 192), 0x400u, "recover_to_previous state:%u, depth:%u", (unsigned __int16)v141, v159);
    sub_55D530(a1);
    v57 = v167;
    v58 = v168;
    v92 = *(FILE **)(a1 + 1400);
    if ( v92 )
    {
      sub_56A7C0(*(_QWORD *)(a1 + 1216), *(_QWORD *)(a1 + 1256), v92);
      fwrite("\n\n", 1u, 2u, *(FILE **)(a1 + 1400));
      v57 = v167;
      v58 = v168;
    }
  }
  v10 = *(_QWORD *)(a1 + 1216);
  v21 = 1;
LABEL_46:
  v20 = *(unsigned int *)(v10 + 8);
  v12 = (_QWORD *)v10;
  if ( v57 >= (unsigned int)v20 )
    goto LABEL_10;
  v140 = v21;
  v59 = v10;
  v60 = a1;
  v61 = (char *)(a1 + 192);
  v62 = v57;
  while ( 2 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)v59 + 48 * v58 + 40) )
    {
      if ( ++v62 >= (unsigned int)v20 )
        break;
      goto LABEL_49;
    }
    if ( *(_QWORD *)(v60 + 152) || *(_QWORD *)(v60 + 1400) )
    {
      snprintf(v61, 0x400u, "removed paused version:%u", v62);
      sub_55D530(v60);
      v59 = *(_QWORD *)(v60 + 1216);
    }
    v10 = v62;
    sub_56E7E0((__int64 *)v59, v62);
    v63 = *(FILE **)(v60 + 1400);
    if ( v63 )
    {
      sub_56A7C0(*(_QWORD *)(v60 + 1216), *(_QWORD *)(v60 + 1256), v63);
      v10 = 1;
      fwrite("\n\n", 1u, 2u, *(FILE **)(v60 + 1400));
    }
    v59 = *(_QWORD *)(v60 + 1216);
    v20 = *(unsigned int *)(v59 + 8);
    if ( v62 < (unsigned int)v20 )
    {
LABEL_49:
      v58 = v62;
      continue;
    }
    break;
  }
  a1 = v60;
  v12 = (_QWORD *)v59;
  v21 = v140;
LABEL_10:
  v22 = v160;
  v24 = v153;
  v23 = v160;
  BYTE1(v24) = v160;
  v154 = (__m128i *)v24;
  if ( (v24 & 1) == 0 )
  {
    if ( !*(_WORD *)(v24 + 40) )
      goto LABEL_112;
LABEL_12:
    if ( v21 )
    {
      if ( (unsigned int)v20 > 6 )
        goto LABEL_119;
      v10 = v24;
      if ( (v24 & 1) != 0 )
      {
        v144 = v20;
        v139 = v12;
        v172 = sub_55C590(v24);
        v173 = v25;
        v27 = sub_55C590(v26);
        v10 = a2;
        v22 = a1;
        v171 = v28;
        v170 = v27;
        v30 = sub_574200(a1, a2, (unsigned int)(v163 + 30 * HIDWORD(v27) + v29 + 100));
        v12 = v139;
        v20 = v144;
        if ( !v30 )
        {
LABEL_16:
          v31 = v160;
          goto LABEL_17;
        }
        goto LABEL_119;
      }
      if ( *(char *)(v24 + 44) < 0 )
      {
        if ( a2 < (unsigned int)v20 )
        {
          v119 = a1 + 1224;
          *(_DWORD *)(*v12 + v14 + 40) = 2;
          goto LABEL_121;
        }
LABEL_155:
        sub_55D3D0(v22, v10, v23, v12, v20, v18);
      }
      v148 = v20;
      v143 = v12;
      v172 = sub_55C590(v24);
      v173 = v126;
      v128 = sub_55C590(v127);
      v10 = a2;
      v22 = a1;
      v171 = v129;
      v170 = v128;
      v131 = sub_574200(a1, a2, (unsigned int)(v163 + 30 * HIDWORD(v128) + v130 + 100));
      v12 = v143;
      v20 = v148;
      if ( v131 )
      {
LABEL_119:
        if ( a2 < (unsigned int)v20 )
        {
          v10 = (__int64)v154;
          v119 = a1 + 1224;
          *(_DWORD *)(*v12 + v14 + 40) = 2;
LABEL_121:
          sub_56C9A0(v119, (volatile signed __int32 *)v10);
          return;
        }
        goto LABEL_155;
      }
    }
    else
    {
      v147 = v20;
      v142 = v12;
      v172 = sub_55C590(v24);
      v173 = v113;
      v115 = sub_55C590(v114);
      v10 = a2;
      v22 = a1;
      v171 = v116;
      v170 = v115;
      v118 = sub_574200(a1, a2, (unsigned int)(v163 + 30 * HIDWORD(v115) + v117 + 100));
      v12 = v142;
      v20 = v147;
      if ( v118 )
        goto LABEL_119;
      if ( ((unsigned __int8)v154 & 1) != 0 )
        goto LABEL_16;
    }
    v31 = v154[2].m128i_u16[4];
LABEL_17:
    sub_562CE0(*(_QWORD *)(a1 + 1256), 1u, v31, (__int64)&v174);
    if ( v174.m128_i32[2] )
    {
      v32 = (_BYTE *)(v174.m128_u64[0] + 8LL * (unsigned int)(v174.m128_i32[2] - 1));
      if ( !*v32 )
      {
        if ( v32[4] )
        {
          v132 = (unsigned __int64)sub_56D110(a1 + 1224, v154);
          if ( (v132 & 1) != 0 )
            v132 |= 8u;
          else
            *(_BYTE *)(v132 + 44) |= 4u;
          v154 = (__m128i *)v132;
          v160 = BYTE1(v132);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
    {
      v33 = v154;
      BYTE1(v33) = v160;
      v154 = v33;
      if ( ((unsigned __int8)v33 & 1) != 0 )
        v34 = v160;
      else
        v34 = v33[2].m128i_u16[4];
      v35 = sub_563060(*(_QWORD *)(a1 + 1256), v34);
      snprintf((char *)(a1 + 192), 0x400u, "skip_token symbol:%s", v35);
      sub_55D530(a1);
    }
    v174.m128_u64[0] = (unsigned __int64)off_8C52B8(8u);
    v174.m128_u64[1] = 0x100000000LL;
    sub_55ECB0((__int64)&v174, 8);
    v36 = v174.m128_u32[2];
    v37 = v154;
    ++v174.m128_i32[2];
    BYTE1(v37) = v160;
    v155 = (__int64)v37;
    *(_QWORD *)(v174.m128_u64[0] + 8 * v36) = v37;
    v38 = sub_56C3B0(0xFFFEu, (__int64)&v174, 0, *(_QWORD *)(a1 + 1256));
    if ( v158 )
    {
      v120 = *(_DWORD **)(a1 + 1216);
      v169 = 1;
      v122 = sub_56D150(v120, a2, &v169, 1, *(double *)a5.m128i_i64, a6, a7, a8);
      if ( v121 <= 1 )
      {
        v133 = *(_DWORD *)(v122 + 16);
        v134 = *(_QWORD *)(a1 + 1216);
      }
      else
      {
        v123 = v122 + 24;
        v124 = v122 + 24LL * (v121 - 2) + 48;
        do
        {
          v125 = v123;
          v123 += 24;
          sub_56D0B0(a1 + 1224, v125);
        }
        while ( v123 != v124 );
        while ( 1 )
        {
          v133 = *(_DWORD *)(v122 + 16);
          v134 = *(_QWORD *)(a1 + 1216);
          if ( v133 + 1 >= *(_DWORD *)(v134 + 8) )
            break;
          sub_56E7E0((__int64 *)v134, v133 + 1);
        }
      }
      sub_56E900(v134, v133, a2);
      sub_55ECB0(v122, 8);
      v135 = *(unsigned int *)(v122 + 8);
      v136 = *(_QWORD *)v122;
      *(_DWORD *)(v122 + 8) = v135 + 1;
      v137 = *(_QWORD *)(a1 + 1256);
      *(_QWORD *)(v136 + 8 * v135) = v38;
      v38 = sub_56C3B0(0xFFFEu, v122, 0, v137);
    }
    sub_55FE40(*(_QWORD *)(a1 + 1216), a2, v38, 0);
    if ( (v155 & 1) == 0 && (*(_BYTE *)(v155 + 44) & 0x40) != 0 )
    {
      v138 = (volatile signed __int32 *)sub_570DF0(v155);
      sub_56D000(*(_QWORD *)(a1 + 1216), a2, v138);
    }
    v39 = *(_QWORD *)(a1 + 1216);
    v40 = 0;
    v41 = *(_DWORD *)(v39 + 8);
    if ( v41 )
    {
      while ( 1 )
      {
        sub_55E200(v39, v40);
        v43 = HIDWORD(v42);
        if ( !(_BYTE)v43 )
          break;
        if ( ++v40 == v41 )
          goto LABEL_129;
      }
    }
    else
    {
LABEL_129:
      LOBYTE(v43) = 1;
    }
    *(_BYTE *)(a1 + 1510) = v43;
    return;
  }
  if ( v160 )
    goto LABEL_12;
LABEL_112:
  if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
  {
    *(_DWORD *)(a1 + 200) = (_DWORD)"\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\"\r\n"
                                    "\t viewBox=\"0 0 32 32\" style=\"enable-background:new 0 0 32 32;\" xml:space=\"pres"
                                    "erve\">\r\n"
                                    "<style type=\"text/css\">\r\n"
                                    "\t.st0{fill:#212121;}\r\n"
                                    "\t.st1{fill:#F0F0F0;}\r\n"
                                    "</style>\r\n"
                                    "<g>\r\n"
                                    "\t<g>\r\n"
                                    "\t\t<path class=\"st0\" d=\"M16,31.5c-6.5,0-11.9-5.3-11.9-11.9V0.5H11v19.1c0,1.3,0.5"
                                    ",2.6,1.5,3.6c0.9,0.9,2.2,1.5,3.6,1.5\r\n"
                                    "\t\t\tc1.4,0,2.6-0.5,3.5-1.5c0.9-0.9,1.5-2.2,1.5-3.5l0-19.1h6.9l0,19.1C27.9,26.2,22."
                                    "6,31.5,16,31.5z\"/>\r\n"
                                    "\t\t<path class=\"st1\" d=\"M27.4,1l0,18.6C27.4,25.9,22.3,31,16,31C9.7,31,4.6,25.9,4"
                                    ".6,19.6V1h5.9v18.6c0,1.5,0.6,2.9,1.6,3.9\r\n"
                                    "\t\t\tc1.1,1.1,2.4,1.6,3.9,1.6c1.5,0,2.8-0.5,3.9-1.6c1.1-1.1,1.6-2.4,1.6-3.9l0-18.6H"
                                    "27.4 M28.4,0h-1h-5.9h-1l0,1l0,18.6\r\n"
                                    "\t\t\tc0,1.2-0.5,2.3-1.3,3.2c-0.9,0.9-1.9,1.3-3.2,1.3c-1.2,0-2.4-0.5-3.2-1.3c-0.9-0."
                                    "9-1.3-2-1.3-3.2V1V0h-1H4.6h-1v1v18.6\r\n"
                                    "\t\t\tC3.6,26.5,9.2,32,16,32c6.8,0,12.4-5.6,12.4-12.4l0-18.6L28.4,0L28.4,0z\"/>\r\n"
                                    "\t</g>\r\n"
                                    "</g>\r\n"
                                    "</svg>\r\n";
    *(_QWORD *)(a1 + 192) = 0x5F7265766F636572LL;
    sub_55D530(a1);
  }
  v106 = *(_QWORD *)(a1 + 1256);
  v174 = 0u;
  v107 = sub_56C3B0(0xFFFFu, (__int64)&v174, 0, v106);
  v108 = *(_QWORD *)(a1 + 1216);
  *(_BYTE *)(v107 + 44) &= ~4u;
  sub_55FE40(v108, a2, v107, 1);
  sub_56FE70(a1, a2, (unsigned __int64)v154, *(double *)a5.m128i_i64, a6, a7, a8);
}
