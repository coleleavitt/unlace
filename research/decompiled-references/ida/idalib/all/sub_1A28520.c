void __fastcall sub_1A28520(
        _QWORD **a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 a9,
        unsigned __int8 a10,
        unsigned int *a11,
        _QWORD *a12,
        unsigned int *a13,
        unsigned int a14)
{
  unsigned __int64 v17; // rsi
  unsigned int *v18; // r12
  __int64 v19; // rdi
  char v20; // al
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  _WORD *v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int32 v32; // r14d
  __int64 v33; // r13
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 *v38; // r14
  __int64 v39; // rdx
  _QWORD *v40; // r12
  unsigned __int64 v41; // rax
  __int64 v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r9
  char v58; // al
  __int64 v59; // r15
  unsigned __int64 i; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // edx
  __int64 v65; // rsi
  __int64 v66; // rax
  char v67; // r15
  unsigned __int64 v68; // rdx
  __int64 v69; // r13
  unsigned __int64 v70; // r14
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // r13
  void *v74; // rcx
  __int64 *v75; // rdx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  __int64 v79; // r13
  char v80; // al
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned __int64 v86; // rax
  void *v87; // rcx
  __int64 v88; // rdi
  unsigned __int64 *v89; // rdx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rdx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  char v100; // al
  char v101; // r13
  __int64 v102; // r14
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  __int64 v107; // rdx
  bool v108; // al
  unsigned __int64 v109; // rdx
  unsigned __int64 v110; // rdx
  __int64 v111; // r12
  unsigned __int64 v112; // rax
  unsigned __int32 v113; // eax
  bool v114; // zf
  unsigned __int64 v115; // rdx
  char v116; // al
  unsigned __int32 v117; // eax
  unsigned __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // r14
  unsigned __int64 v121; // rax
  _QWORD *v122; // r15
  __int64 v123; // r13
  unsigned int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // rdx
  bool v131; // r13
  unsigned __int64 v132; // r14
  char v133; // al
  unsigned __int64 v134; // rax
  __int32 v135; // r13d
  _QWORD *v136; // rax
  _QWORD *v137; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  unsigned __int64 v142; // r13
  unsigned __int64 v143; // rax
  _QWORD *v144; // r14
  __int64 v145; // r12
  unsigned int v146; // eax
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned __int64 v150; // rax
  _QWORD *v151; // rax
  __int64 *v152; // r15
  unsigned int v153; // rax^4
  __int64 v154; // [rsp-8h] [rbp-180h]
  unsigned int v156; // [rsp+0h] [rbp-178h]
  __int64 v158; // [rsp+10h] [rbp-168h]
  char v159; // [rsp+20h] [rbp-158h]
  __int64 v160; // [rsp+20h] [rbp-158h]
  char v161; // [rsp+20h] [rbp-158h]
  unsigned __int8 v162; // [rsp+2Fh] [rbp-149h]
  char v163; // [rsp+30h] [rbp-148h]
  unsigned __int64 v164; // [rsp+30h] [rbp-148h]
  unsigned __int8 v165; // [rsp+48h] [rbp-130h]
  char v166; // [rsp+4Ch] [rbp-12Ch]
  __int64 v167; // [rsp+50h] [rbp-128h]
  __int64 v168; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 v169; // [rsp+68h] [rbp-110h] BYREF
  void *ptr; // [rsp+70h] [rbp-108h] BYREF
  __int64 v171; // [rsp+78h] [rbp-100h]
  int v172; // [rsp+80h] [rbp-F8h]
  char v173; // [rsp+84h] [rbp-F4h]
  char v174; // [rsp+88h] [rbp-F0h] BYREF
  __m128i v175; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v176; // [rsp+C0h] [rbp-B8h]
  int v177; // [rsp+C8h] [rbp-B0h]
  unsigned __int64 v178; // [rsp+D0h] [rbp-A8h]
  __int16 v179; // [rsp+D8h] [rbp-A0h]

  v168 = a4;
  v17 = a14;
  v18 = a11;
  v162 = a10;
  v166 = a14;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v165 = a14;
  v20 = *(_BYTE *)(v19 + 16);
  if ( v20 != 48 )
  {
    if ( v20 != 29 )
      BUG();
    v21 = (char *)sub_F61460(v19, a14, a3, a10, a5, a6);
    v158 = (__int64)v21;
    if ( v21[28] >= 0 )
      goto LABEL_3;
LABEL_52:
    ++*v18;
    *((_BYTE *)a1 + 8) = 1;
    return;
  }
  v21 = (char *)sub_F60F10(v19, a14, a3, a10, a5, a6);
  v158 = (__int64)v21;
  if ( v21[28] < 0 )
    goto LABEL_52;
LABEL_3:
  if ( (unsigned __int8)v21[73] >> 5 == 2
    && !(unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) )
  {
    if ( !*((_BYTE *)a1 + 9) )
    {
      v142 = sub_B7E900(v158, v17, v22, v23, v24, v25);
      if ( v142 )
      {
LABEL_240:
        v143 = sub_A71450((*a1)[31], *(_QWORD *)(v142 + 48));
        v144 = *a1;
        v145 = v143;
        v146 = sub_BFB220(a3);
        if ( (unsigned __int8)sub_1A0B010(v145, v146, v144, v147, v148, v149, a7, a8) )
        {
LABEL_28:
          *((_BYTE *)a1 + 8) = 1;
          return;
        }
        while ( 1 )
        {
          v150 = *(_QWORD *)(v142 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v142 = v150;
          if ( !v150 )
            break;
          if ( (*(_BYTE *)(v150 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_240;
        }
      }
    }
    if ( (*(_BYTE *)(v158 + 28) & 0x7Fu) - 59 > 2
      || (v51 = *(_QWORD *)(v158 + 104),
          sub_7052B0((__int64 *)(v51 + 96), v51, v22, v23, v24, v25),
          *(char *)(*(_QWORD *)(v158 + 128) + 2LL) >= 0) )
    {
      v111 = a9;
      if ( a9 )
      {
        if ( (*(_BYTE *)(a9 + 68) & 1) == 0 || *(_QWORD *)(a9 + 40) )
        {
LABEL_169:
          v113 = sub_BFB220(a3);
          v175.m128i_i32[0] = 6;
          v114 = a1[2] == nullptr;
          v175.m128i_i64[1] = (__int64)a2;
          v115 = *(_QWORD *)(v111 + 48);
          v177 = 0;
          v176 = v115;
          v178 = v111;
          v179 = 0;
          if ( v114 )
            sub_1A19410(a1, v113, (__int64)&v175, a7, a8);
          if ( a12 )
            a12[7] = a9 | 2;
        }
        else
        {
          while ( 1 )
          {
            v112 = *(_QWORD *)(v111 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v111 = v112;
            if ( !v112 )
              break;
            if ( (*(_BYTE *)(v112 + 28) & 0x7Fu) - 49 <= 2
              && ((*(_BYTE *)(v112 + 68) & 1) == 0 || *(_QWORD *)(v112 + 40)) )
            {
              a9 = v112;
              goto LABEL_169;
            }
          }
        }
      }
    }
    else
    {
      v54 = a9;
      if ( a12 )
      {
        while ( 1 )
        {
          v55 = *(_BYTE *)(v54 + 68) & 0xC;
          if ( (_BYTE)v55 != 12 && (*(_BYTE *)(v54 + 68) & 0xC) != 0 )
            break;
          if ( (unsigned __int8)sub_B78060(v54, v51, v55, v52, v53) )
          {
            v136 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a9 + 48) & 0xFFFFFFFFFFFFFFF0LL), v51, v56, v52, v53, v57);
            v51 = v136[13];
            v137 = v136;
            sub_7052B0((__int64 *)(v51 + 96), v51, v138, v139, v140, v141);
            if ( *(char *)(v137[16] + 2LL) < 0 )
            {
              v54 = a9;
              break;
            }
          }
          v54 = *(_QWORD *)(a9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v58 = *(_BYTE *)(v54 + 28);
          a9 = v54;
          if ( (v58 & 0x7Fu) - 49 > 2 )
          {
            do
              v54 = *(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            while ( (*(_BYTE *)(v54 + 28) & 0x7Fu) - 49 > 2 );
            a9 = v54;
          }
        }
        a12[7] = v54 | 2;
      }
    }
    return;
  }
  if ( a5 != a6 )
  {
    v159 = 0;
    v26 = a5 + 24;
    a11 = v18;
    while ( 1 )
    {
      v28 = *(_QWORD *)(a3 + 16);
      v38 = a1[4];
      v39 = *a11;
      if ( (unsigned int)v39 >= (unsigned int)((*(_QWORD *)(a3 + 24) - v28) >> 3)
        || (v27 = *(_WORD **)(v28 + 8 * v39)) == nullptr
        || (*v27 & 0x1FF) == 0x44 )
      {
        if ( v38 )
        {
          v17 = *(unsigned int *)(v26 - 16);
          if ( (_DWORD)v17 )
            goto LABEL_30;
        }
        v27 = nullptr;
        v32 = sub_BFB220(a3);
      }
      else
      {
        if ( v38 )
        {
          v28 = *(unsigned int *)(v26 - 16);
          if ( (_DWORD)v28 )
          {
LABEL_30:
            v33 = v26;
            v42 = (*a1)[31];
            v43 = **(_QWORD **)(v26 - 8) & 0xFFFFFFFFFFFFFFF0LL;
            v44 = *(_QWORD *)v43;
            if ( (*(_BYTE *)(*(_QWORD *)v43 + 8LL) & 0xF) != 0 )
              v45 = sub_F64F00(**(_QWORD **)(v26 - 8), v44, v39, v28, v24) & 0xFFFFFFFFFFFFFFF0LL;
            else
              v45 = v44 & 0xFFFFFFFFFFFFFFF0LL;
            v46 = sub_A781D0(v42, v45, 0);
            v48 = *((unsigned int *)v38 + 2);
            v17 = *((unsigned int *)v38 + 3);
            if ( v48 + 1 > v17 )
            {
              v17 = (unsigned __int64)(v38 + 2);
              v164 = v46;
              sub_2237220(v38, v38 + 2, v48 + 1, 8);
              v48 = *((unsigned int *)v38 + 2);
              v46 = v164;
            }
            v49 = *v38;
            *(_QWORD *)(*v38 + 8 * v48) = v46;
            ++*((_DWORD *)v38 + 2);
            if ( a6 == v26 && !sub_B7E900(v158, v17, v49, v48, v24, v47) )
            {
              v50 = (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3;
              if ( *a11 < (unsigned int)v50 )
                *a11 = v50;
              return;
            }
            goto LABEL_18;
          }
        }
        v32 = sub_EEB7E0((unsigned __int64)v27, v17, *(double *)a7.m128_u64);
      }
      v33 = v26;
      v177 = 0;
      v175.m128i_i32[0] = 10;
      v175.m128i_i64[1] = (__int64)a2;
      v178 = (v26 - 24) & 0xFFFFFFFFFFFFFFFBLL;
      v34 = *(_QWORD *)(**(_QWORD **)(v26 - 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v34 + 8) & 0xF) != 0 )
        v34 = sub_F64F00(**(_QWORD **)(v26 - 8), v17, v29, v30, v24);
      v176 = v34 & 0xFFFFFFFFFFFFFFF0LL;
      if ( v27 )
        break;
      if ( a1[2] )
        goto LABEL_17;
      v17 = v32;
      sub_1A19410(a1, v32, (__int64)&v175, a7, a8);
      if ( !*((_BYTE *)a1 + 9) )
      {
LABEL_25:
        v40 = *a1;
        v41 = *(_QWORD *)(**(_QWORD **)(v26 - 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v41 + 8) & 0xF) != 0 )
          v41 = sub_F64F00(**(_QWORD **)(v26 - 8), v17, v29, v30, v24);
        v17 = v32;
        if ( (unsigned __int8)sub_1A0B010(v41 & 0xFFFFFFFFFFFFFFF0LL, v32, v40, v30, v24, v31, a7, a8) )
          goto LABEL_28;
      }
LABEL_18:
      v26 += 24;
      if ( a6 == v33 )
      {
        v18 = a11;
        goto LABEL_54;
      }
    }
    v35 = **(_QWORD **)(v26 - 8) & 0xFFFFFFFFFFFFFFF0LL;
    v36 = *(_QWORD *)v35;
    if ( (*(_BYTE *)(*(_QWORD *)v35 + 8LL) & 0xF) != 0 )
      v37 = sub_F64F00(**(_QWORD **)(v26 - 8), v17, v29, v36, v24) & 0xFFFFFFFFFFFFFFF0LL;
    else
      v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = (unsigned __int64)&v175;
    sub_1A27C60((__int64)a1, &v175, a3, v37, a11, (__int64)a12, a7, a8, a13, 0);
    v29 = v154;
    v159 = 1;
LABEL_17:
    if ( !*((_BYTE *)a1 + 9) )
      goto LABEL_25;
    goto LABEL_18;
  }
  v159 = 0;
LABEL_54:
  v59 = 0;
  for ( i = sub_B8E970(v158 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    v64 = *(_BYTE *)(i + 28) & 0x7F;
    v61 = (unsigned int)(v64 - 49);
    if ( (unsigned int)v61 <= 2 || (unsigned int)(v64 - 58) <= 3 )
      ++v59;
  }
  v171 = 4;
  v65 = v165;
  v172 = 0;
  v173 = 1;
  v163 = 0;
  ptr = &v174;
  v66 = *v18;
  v167 = v59;
  v67 = v159;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_60:
      v68 = *(_QWORD *)(a3 + 16);
      v69 = (__int64)(*(_QWORD *)(a3 + 24) - v68) >> 3;
      if ( (unsigned int)v69 <= (unsigned int)v66 )
      {
LABEL_213:
        v161 = v67;
        v100 = *((_BYTE *)a1 + 9);
        goto LABEL_128;
      }
      v70 = *(_QWORD *)(v68 + 8 * v66);
      v156 = sub_EEB7E0(v70, v65, *(double *)a7.m128_u64);
      v71 = *(_WORD *)v70 & 0x1FF;
      if ( v71 != 68 )
        break;
      if ( !v162 )
        goto LABEL_149;
      v65 = (__int64)a2;
      v67 = sub_1A299A0(
              (_DWORD)a1,
              (_DWORD)a2,
              a3,
              v70,
              0,
              (unsigned int)&v168,
              (__int64)&a9,
              0,
              (__int64)v18,
              (_DWORD)a12,
              (__int64)a13,
              1,
              v165);
      if ( v67 )
        *((_BYTE *)a1 + 8) = 1;
      if ( *((_BYTE *)a1 + 9) )
        goto LABEL_121;
      v72 = *(_QWORD *)(v70 + 24);
      if ( *(_DWORD *)v72 )
        goto LABEL_121;
      v73 = *(_QWORD *)(v72 + 8);
      if ( (v73 & 1) != 0 )
        v73 = 0;
      if ( !v173 )
        goto LABEL_76;
      v74 = ptr;
      v65 = 8LL * HIDWORD(v171);
      v75 = (__int64 *)((char *)ptr + v65);
      if ( ptr != (char *)ptr + v65 )
      {
        v76 = ptr;
        if ( *(_QWORD *)ptr == v73 )
          goto LABEL_147;
        do
        {
          if ( v75 == ++v76 )
            break;
        }
        while ( *v76 != v73 );
      }
      if ( HIDWORD(v171) < (unsigned int)v171 )
      {
        ++HIDWORD(v171);
        *v75 = v73;
        v74 = ptr;
        v76 = (char *)ptr + v65;
      }
      else
      {
LABEL_76:
        v65 = v73;
        v76 = (_QWORD *)sub_2236760(&ptr, v73);
        v74 = ptr;
        if ( !v173 )
        {
          v61 = (__int64)ptr + 8 * (unsigned int)v171;
          goto LABEL_78;
        }
      }
LABEL_147:
      v61 = (__int64)v74 + 8 * HIDWORD(v171);
LABEL_78:
      if ( (_QWORD *)v61 != v76 && *v76 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v77 = v76 + 1;
        do
        {
          v78 = v77;
          if ( (_QWORD *)v61 == v77 )
            break;
          ++v77;
        }
        while ( *v78 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v67 )
      {
        v66 = *v18;
        v163 = v67;
      }
      else
      {
        v96 = sub_A71450((*a1)[31], *(_QWORD *)(v73 + 48));
        v65 = v156;
        if ( (unsigned __int8)sub_1A0B010(v96, v156, *a1, v97, v98, v99, a7, a8) )
          goto LABEL_148;
LABEL_121:
        v67 = v162;
        v66 = *v18;
        v163 = v162;
      }
    }
    v65 = v158;
    if ( (*(_BYTE *)(v158 + 76) & 0x40) == 0 )
      goto LABEL_86;
    if ( (_DWORD)v69 != 1 )
      break;
    if ( v167 == 1 )
      goto LABEL_86;
    if ( v71 != 52 )
      break;
    v61 = *(_QWORD *)(v70 + 16);
    v65 = *(unsigned int *)(v70 + 24);
    v68 = (unsigned __int64)(v65 + 63) >> 6;
    if ( v68 > 1 )
    {
      sub_2205610(&v175, v65, v68, v61);
    }
    else
    {
      v175.m128i_i32[2] = *(_DWORD *)(v70 + 24);
      if ( (unsigned int)v65 <= 0x40 )
      {
        v175.m128i_i64[0] = v61;
LABEL_209:
        v131 = v175.m128i_i64[0] == 0;
        goto LABEL_210;
      }
      v65 = v61;
      sub_2205470(&v175, v61, 0);
    }
    v135 = v175.m128i_i32[2];
    if ( v175.m128i_i32[2] <= 0x40u )
      goto LABEL_209;
    v131 = v135 == (unsigned int)sub_2206780(&v175);
    if ( v175.m128i_i64[0] )
      operator delete[]((void *)v175.m128i_i64[0]);
LABEL_210:
    if ( !v131 )
      break;
LABEL_86:
    v79 = a9;
    if ( !a9 )
      goto LABEL_213;
    if ( v67 && *(_BYTE *)(v158 + 73) >> 5 == 2 )
      goto LABEL_149;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a9 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 5 )
      goto LABEL_213;
    if ( (*(_BYTE *)(a9 + 68) & 1) != 0 && !*(_QWORD *)(a9 + 40) )
    {
      v66 = *v18;
      v129 = *(_QWORD *)(a9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v61 = v129;
      a9 = v129;
      if ( v129 && (*(_BYTE *)(v129 + 28) & 0x7Fu) - 49 > 2 )
      {
        do
        {
          v130 = *(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v61 = v130;
          if ( !v130 )
          {
            a9 = 0;
            goto LABEL_60;
          }
        }
        while ( (*(_BYTE *)(v130 + 28) & 0x7Fu) - 49 > 2 );
        a9 = v130;
      }
    }
    else if ( *((_BYTE *)a1 + 9) )
    {
      v65 = a9;
      v108 = sub_18C0C50((__int64)*a1, a9, *((_BYTE *)a1 + 10), v61, v62, v63);
      v81 = a9;
      if ( v108 )
        goto LABEL_94;
LABEL_152:
      v66 = *v18 + 1;
      *v18 = v66;
      v109 = *(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v61 = v109;
      a9 = v109;
      if ( v109 && (*(_BYTE *)(v109 + 28) & 0x7Fu) - 49 > 2 )
      {
        do
        {
          v110 = *(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v61 = v110;
          if ( !v110 )
          {
            a9 = 0;
            goto LABEL_158;
          }
        }
        while ( (*(_BYTE *)(v110 + 28) & 0x7Fu) - 49 > 2 );
        a9 = v110;
      }
LABEL_158:
      *((_BYTE *)a1 + 8) = 1;
    }
    else
    {
      v160 = (__int64)*a1;
      v175.m128i_i32[0] = sub_EEB7E0(*(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *v18), v65, *(double *)a7.m128_u64);
      v65 = v79;
      v80 = sub_18F5260(v160, v79, v175.m128i_i32, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
      v81 = a9;
      if ( v80 )
        goto LABEL_152;
LABEL_94:
      if ( !*((_BYTE *)a1 + 9) )
      {
        v82 = sub_A71450((*a1)[31], *(_QWORD *)(v81 + 48));
        if ( (unsigned __int8)sub_1A0B010(v82, v156, *a1, v83, v84, v85, a7, a8) )
          goto LABEL_148;
        v81 = a9;
      }
      v175.m128i_i32[0] = 6;
      v175.m128i_i64[1] = (__int64)a2;
      v86 = *(_QWORD *)(v81 + 48);
      v178 = v81;
      v179 = 0;
      v176 = v86;
      v177 = 0;
      sub_1A27C60((__int64)a1, &v175, a3, *(_QWORD *)(v81 + 48), v18, (__int64)a12, a7, a8, a13, 0);
      v65 = a9;
      if ( v173 )
      {
        v87 = ptr;
        v62 = HIDWORD(v171);
        v88 = 8LL * HIDWORD(v171);
        v89 = (unsigned __int64 *)((char *)ptr + v88);
        if ( ptr != (char *)ptr + v88 )
        {
          v90 = ptr;
          if ( a9 == *(_QWORD *)ptr )
            goto LABEL_123;
          while ( v89 != ++v90 )
          {
            if ( a9 == *v90 )
              goto LABEL_123;
          }
        }
        if ( HIDWORD(v171) < (unsigned int)v171 )
        {
          v62 = (unsigned int)++HIDWORD(v171);
          *v89 = a9;
          v87 = ptr;
          v65 = a9;
          v90 = (char *)ptr + v88;
LABEL_123:
          v61 = (__int64)v87 + 8 * HIDWORD(v171);
          goto LABEL_106;
        }
      }
      v90 = (_QWORD *)sub_2236760(&ptr, a9);
      v87 = ptr;
      v65 = a9;
      if ( v173 )
        goto LABEL_123;
      v61 = (__int64)ptr + 8 * (unsigned int)v171;
LABEL_106:
      if ( (_QWORD *)v61 != v90 && *v90 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v91 = v90 + 1;
        do
        {
          v92 = v91;
          if ( v91 == (_QWORD *)v61 )
            break;
          ++v91;
        }
        while ( *v92 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( *(_BYTE *)(v158 + 73) >> 5 == 2 )
      {
        if ( a12 )
        {
          v61 = (__int64)a12;
          if ( (unsigned int)((__int64)(a12[3] - a12[2]) >> 3) == 1 )
            a12[7] = v65 | 2;
        }
      }
      v93 = *(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v94 = v93;
      a9 = v93;
      if ( v93 && (*(_BYTE *)(v93 + 28) & 0x7Fu) - 49 > 2 )
      {
        do
        {
          v95 = *(_QWORD *)(v94 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v94 = v95;
          if ( !v95 )
          {
            a9 = 0;
            goto LABEL_119;
          }
        }
        while ( (*(_BYTE *)(v95 + 28) & 0x7Fu) - 49 > 2 );
        a9 = v95;
      }
LABEL_119:
      v66 = *v18;
      v67 = 1;
    }
  }
  v100 = *((_BYTE *)a1 + 9);
  v161 = v67;
  if ( !v100 )
  {
    v65 = (__int64)(*a1 + 1);
    sub_168B9F0((__int64)&v175, (__int64 *)v65, v156, 0x10C8u, 0);
    sub_15F7200(&v175);
    v100 = *((_BYTE *)a1 + 9);
  }
  *((_BYTE *)a1 + 8) = 1;
LABEL_128:
  v101 = 0;
  if ( v163 )
  {
    v68 = (*a1)[29];
    v101 = ((*(_BYTE *)(v68 + 1) >> 3) ^ 1) & 1;
  }
  if ( v100 != 1 && v161 )
  {
    if ( *(_BYTE *)(v158 + 73) >> 5 != 2 )
    {
      v65 = (*a1)[29];
      if ( !sub_BFB050(a3, v65) && !v101 )
      {
        v132 = a9;
        if ( v163 )
          v132 = sub_B7E900(v158, v65, v68, v61, v62, v63);
        if ( v132 )
        {
LABEL_222:
          if ( v163 )
          {
            if ( v173 )
            {
              v151 = ptr;
              v68 = (unsigned __int64)ptr + 8 * HIDWORD(v171);
              if ( ptr != (void *)v68 )
              {
                do
                {
                  if ( *v151 == v132 )
                    goto LABEL_230;
                  ++v151;
                }
                while ( (_QWORD *)v68 != v151 );
              }
            }
            else
            {
              v65 = v132;
              if ( sub_2236570(&ptr, v132) )
                goto LABEL_230;
            }
          }
          v133 = *(_BYTE *)(v132 + 68);
          if ( (v133 & 1) != 0 && !*(_QWORD *)(v132 + 40)
            || (v68 = v133 & 0xC, (_BYTE)v68 != 12) && (v133 & 0xC) != 0
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v132 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 5 )
          {
LABEL_230:
            while ( 1 )
            {
              v134 = *(_QWORD *)(v132 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v132 = v134;
              if ( !v134 )
                break;
              if ( (*(_BYTE *)(v134 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_222;
            }
          }
          else
          {
            v152 = *a1 + 1;
            v153 = (unsigned __int64)sub_EEC8C0(a3, v65, *(double *)a7.m128_u64) >> 32;
            sub_168B9F0((__int64)&v175, v152, v153, v163 == 0 ? 7106 : 7104, 0);
            v65 = (__int64)&v169;
            v169 = v132;
            sub_1A0FAB0((__int64)&v175, (__int64 *)&v169);
            sub_15F7200(&v175);
          }
        }
      }
      goto LABEL_132;
    }
    if ( a12 )
      goto LABEL_190;
    v102 = a9;
    if ( a9 )
      goto LABEL_249;
LABEL_189:
    if ( !*((_BYTE *)a1 + 9) )
      goto LABEL_190;
    goto LABEL_149;
  }
LABEL_132:
  if ( a12 )
  {
    if ( *((_BYTE *)a1 + 9) )
      goto LABEL_134;
    goto LABEL_190;
  }
  v102 = a9;
  if ( !a9 )
    goto LABEL_189;
  if ( *(_BYTE *)(v158 + 73) >> 5 != 2
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a9 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 5 )
  {
    while ( !*((_BYTE *)a1 + 8) )
    {
      v116 = *(_BYTE *)(v102 + 68);
      if ( (v116 & 1) == 0 || *(_QWORD *)(v102 + 40) )
      {
        v68 = v116 & 0xC;
        if ( (_BYTE)v68 == 12 || (v116 & 0xC) == 0 )
        {
          v117 = sub_BFB220(a3);
          v65 = (__int64)a2;
          v62 = 0;
          v175.m128i_i32[0] = 6;
          v114 = a1[2] == nullptr;
          v175.m128i_i64[1] = (__int64)a2;
          v68 = *(_QWORD *)(v102 + 48);
          v177 = 0;
          v176 = v68;
          v178 = v102;
          v179 = 0;
          if ( v114 )
          {
            v65 = v117;
            sub_1A19410(a1, v117, (__int64)&v175, a7, a8);
            v102 = a9;
          }
        }
      }
      v118 = *(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v102 = v118;
      a9 = v118;
      if ( !v118 )
        goto LABEL_189;
      if ( (*(_BYTE *)(v118 + 28) & 0x7Fu) - 49 > 2 )
      {
        do
        {
          v119 = *(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v102 = v119;
          if ( !v119 )
          {
            a9 = 0;
            goto LABEL_189;
          }
        }
        while ( (*(_BYTE *)(v119 + 28) & 0x7Fu) - 49 > 2 );
        a9 = v119;
      }
    }
  }
LABEL_249:
  if ( !*((_BYTE *)a1 + 9) )
  {
LABEL_190:
    v120 = a9;
    if ( v163 )
      v120 = sub_B7E900(v158, v65, v68, v61, v62, v63);
    if ( v120 )
    {
LABEL_193:
      v121 = sub_A71450((*a1)[31], *(_QWORD *)(v120 + 48));
      v122 = *a1;
      v123 = v121;
      v124 = sub_BFB220(a3);
      if ( (unsigned __int8)sub_1A0B010(v123, v124, v122, v125, v126, v127, a7, a8) )
      {
LABEL_148:
        *((_BYTE *)a1 + 8) = 1;
        goto LABEL_149;
      }
      while ( 1 )
      {
        v128 = *(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v120 = v128;
        if ( !v128 )
          break;
        if ( (*(_BYTE *)(v128 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_193;
      }
    }
LABEL_134:
    v102 = a9;
    if ( !a9 )
      goto LABEL_149;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 5 )
  {
    v103 = *(_QWORD *)(a3 + 16);
    v104 = *v18;
    if ( (unsigned int)v104 < (unsigned int)((*(_QWORD *)(a3 + 24) - v103) >> 3) )
    {
      if ( (unsigned __int8)sub_1A12E60(a1, a2, *(_QWORD *)(v103 + 8 * v104), v102, v166, *(double *)a7.m128_u64) )
      {
        *((_BYTE *)a1 + 8) = 1;
        ++*v18;
      }
      else
      {
        v175.m128i_i32[0] = 6;
        v105 = *v18;
        v175.m128i_i64[1] = (__int64)a2;
        v106 = *(_QWORD *)(a9 + 48);
        v177 = 0;
        v176 = v106;
        v107 = *(_QWORD *)(a3 + 16);
        v178 = a9;
        v179 = 0;
        if ( (**(_WORD **)(v107 + 8 * v105) & 0x1FF) == 0x35 || a1[4] )
          sub_1A27C60((__int64)a1, &v175, a3, *(_QWORD *)(a9 + 48), v18, (__int64)a12, a7, a8, a13, 0);
        else
          sub_1A27710(
            (unsigned int *)a1,
            v175.m128i_i64,
            a3,
            *(_QWORD *)(a9 + 48),
            (int *)v18,
            (__int64)a12,
            a7,
            a8,
            a13);
        if ( *(_BYTE *)(v158 + 73) >> 5 == 2 && a12 && (unsigned int)((__int64)(a12[3] - a12[2]) >> 3) == 1 )
          a12[7] = a9 | 2;
      }
    }
  }
LABEL_149:
  if ( !v173 )
    free(ptr);
}
