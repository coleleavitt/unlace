__int64 __fastcall sub_84FB20(__int64 a1, _DWORD *a2, __m128i *a3)
{
  unsigned __int32 v3; // r14d
  unsigned __int64 v5; // r15
  __int16 v7; // ax
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  __m128i *p_ptr; // rdi
  __int64 v11; // r9
  _BYTE *v12; // r9
  const __m128i *v13; // r10
  __int32 v14; // edx
  unsigned int v15; // r8d
  unsigned __int64 v16; // rax
  __m128i *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // r15
  void *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __m128i v25; // xmm0
  int v26; // r15d
  __int64 v27; // rbp
  void *v28; // rax
  void *v29; // rdx
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // r15
  unsigned int j; // r14d
  __int64 v34; // r13
  __int64 v35; // rdx
  unsigned int v36; // r14d
  unsigned __int64 v37; // rdi
  __int64 v38; // rbp
  char v39; // al
  __m128i *v40; // rdi
  __int64 v41; // rcx
  _QWORD *m128i_i64; // r8
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // rdi
  char v48; // al
  unsigned int v49; // ebx
  unsigned __int64 v51; // r13
  int v52; // eax
  _WORD *v53; // rbp
  _WORD *v54; // rax
  unsigned __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  int v58; // ecx
  __int64 v59; // r15
  __int64 v60; // rdx
  unsigned __int64 v61; // r12
  unsigned int v62; // ebp
  __m128i *v63; // r14
  int v64; // r13d
  __int64 *v65; // r10
  __int64 v66; // rax
  __int64 v67; // rdi
  char v68; // al
  __int64 v69; // rax
  const __m128i *v70; // rcx
  unsigned __int64 v71; // r14
  unsigned __int8 v72; // al
  __int64 v73; // rax
  _DWORD *v74; // r14
  unsigned __int8 **v75; // rax
  unsigned __int8 **v76; // rbx
  void *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rcx
  unsigned __int64 *v80; // rdx
  unsigned int v81; // ebp
  __int64 v82; // r12
  unsigned __int8 **v83; // rax
  unsigned __int8 **v84; // r13
  unsigned __int8 **v85; // rax
  __int64 v86; // rdx
  unsigned __int8 **v87; // rax
  __int64 v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // r8
  __m128i v91; // xmm0
  _QWORD *v92; // rax
  unsigned __int64 v93; // r12
  unsigned __int64 v94; // rax
  int v95; // ecx
  unsigned __int64 v96; // rbp
  unsigned __int64 v97; // r12
  unsigned __int8 **v98; // rax
  unsigned __int8 **v99; // rbx
  __int64 v100; // rax
  __int64 i; // r13
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  __int64 *v107; // rdi
  int v108; // r12d
  int v109; // eax
  unsigned __int8 **v110; // rdi
  __int64 v111; // rax
  __int64 *v112; // r10
  bool v113; // zf
  unsigned __int64 v114; // rax
  const __m128i *v115; // r11
  char v116; // al
  unsigned __int8 **v117; // rax
  __int64 v118; // r11
  unsigned __int8 **v119; // rbp
  __int64 v120; // rax
  __int64 v121; // rax
  const __m128i *v122; // r11
  const __m128i *v123; // rdx
  const __m128i *v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // r10
  unsigned __int64 v129; // r11
  int v130; // eax
  char v131; // al
  char v132; // al
  __int64 v133; // rdi
  __int64 v134; // rdi
  unsigned __int64 v135; // r14
  unsigned int v136; // eax
  __int64 v137; // rsi
  __int64 v138; // r12
  __m128i *v139; // rdi
  __int64 v140; // rax
  __int64 v141; // rbp
  __int64 v142; // rax
  __int64 v143; // r14
  __int64 v144; // rdi
  __int64 v145; // rax
  unsigned __int8 **v146; // rax
  unsigned __int8 **v147; // rbx
  __m128i v148; // [rsp+0h] [rbp-1F8h] BYREF
  char *v149; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v150; // [rsp+18h] [rbp-1E0h]
  _DWORD *v151; // [rsp+20h] [rbp-1D8h]
  void *v152; // [rsp+28h] [rbp-1D0h]
  __m128i *v153; // [rsp+30h] [rbp-1C8h]
  const __m128i *v154; // [rsp+38h] [rbp-1C0h]
  const __m128i *v155; // [rsp+40h] [rbp-1B8h]
  _BYTE *v156; // [rsp+48h] [rbp-1B0h]
  unsigned __int64 v157; // [rsp+50h] [rbp-1A8h]
  __int64 v158; // [rsp+58h] [rbp-1A0h]
  const __m128i *v159; // [rsp+60h] [rbp-198h]
  const __m128i *v160; // [rsp+68h] [rbp-190h]
  const __m128i *v161; // [rsp+70h] [rbp-188h]
  const __m128i *v162; // [rsp+78h] [rbp-180h]
  __m128i v163; // [rsp+80h] [rbp-178h] BYREF
  unsigned int *v164; // [rsp+90h] [rbp-168h]
  unsigned __int64 v165; // [rsp+98h] [rbp-160h]
  __m128i v166; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD *v167; // [rsp+B0h] [rbp-148h] BYREF
  unsigned __int64 v168; // [rsp+B8h] [rbp-140h]
  void *v169[2]; // [rsp+C0h] [rbp-138h] BYREF
  unsigned __int64 *v170; // [rsp+D0h] [rbp-128h]
  __int64 v171; // [rsp+D8h] [rbp-120h]
  void *v172; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v173; // [rsp+108h] [rbp-F0h]
  _BYTE v174[64]; // [rsp+110h] [rbp-E8h] BYREF
  unsigned int v175; // [rsp+150h] [rbp-A8h]
  __int64 v176; // [rsp+158h] [rbp-A0h] BYREF
  __int64 v177; // [rsp+160h] [rbp-98h] BYREF
  void *ptr; // [rsp+168h] [rbp-90h] BYREF
  __int64 v179; // [rsp+170h] [rbp-88h]
  char v180; // [rsp+178h] [rbp-80h] BYREF

  v3 = a3[3].m128i_u32[2];
  v151 = a2;
  v156 = v174;
  v172 = v174;
  v173 = 0x400000000LL;
  if ( !a2 )
    return 1;
  v5 = (unsigned __int64)a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)v5 & 0x1FF;
      if ( v7 != 47 )
        break;
      v8 = *(_QWORD *)(v5 + 24);
      if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 47 > 2
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 <= 1 )
      {
        goto LABEL_6;
      }
      v55 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        v55 = *(_QWORD *)v55;
      if ( (*(_BYTE *)(v55 + 8) & 0x7Fu) - 56 > 3 )
        BUG();
      --v3;
      if ( *(_BYTE *)(v55 + 9) >> 5 == 2 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              ;
              i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
        {
          if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) > 4u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
              || (v102 = sub_B0D320(i)) == 0 )
            {
              v103 = sub_B0E910(i);
              v104 = v103;
              if ( !v103
                || ((sub_8226C0((__int64 *)(*(_QWORD *)(v103 + 104) + 96LL), *(_QWORD *)(v103 + 104)),
                     (*(_BYTE *)(*(_QWORD *)(v104 + 128) + 9LL) & 1) != 0)
                 || (sub_8226C0((__int64 *)(*(_QWORD *)(v104 + 104) + 96LL), *(_QWORD *)(v104 + 104)),
                     (**(_BYTE **)(v104 + 128) & 1) == 0)
                 && (sub_8226C0((__int64 *)(*(_QWORD *)(v104 + 104) + 96LL), *(_QWORD *)(v104 + 104)),
                     v145 = *(_QWORD *)(v104 + 128),
                     (*(_BYTE *)(v145 + 9) & 1) == 0)
                 && ((*(_BYTE *)(v145 + 10) & 0x20) == 0 || (unsigned __int8)sub_7A3430(v104))
                 || (sub_8226C0((__int64 *)(*(_QWORD *)(v104 + 104) + 96LL), *(_QWORD *)(v104 + 104)),
                     (*(_BYTE *)(*(_QWORD *)(v104 + 128) + 3LL) & 8) != 0)
                 && (sub_8226C0((__int64 *)(*(_QWORD *)(v104 + 104) + 96LL), *(_QWORD *)(v104 + 104)),
                     (*(_BYTE *)(*(_QWORD *)(v104 + 128) + 9LL) & 1) == 0))
                && (sub_8226C0((__int64 *)(*(_QWORD *)(v104 + 104) + 96LL), *(_QWORD *)(v104 + 104)),
                    *(char *)(*(_QWORD *)(v104 + 128) + 4LL) < 0) )
              {
                v148.m128i_i64[1] = v8;
                v148.m128i_i64[0] = v3 | v148.m128i_i64[0] & 0xFFFFFFFF00000000LL;
                v105 = (unsigned int)v173;
                v106 = (unsigned int)v173 + 1LL;
                if ( HIDWORD(v173) < v106 )
                {
                  sub_25D6060(&v172, v156, v106, 16);
                  v105 = (unsigned int)v173;
                }
                *((__m128i *)v172 + v105) = _mm_load_si128(&v148);
                LODWORD(v173) = v173 + 1;
              }
              break;
            }
            i = v102;
          }
        }
      }
      v5 = *(_QWORD *)(v5 + 16);
LABEL_62:
      if ( !v5 )
        goto LABEL_6;
    }
    if ( v7 != 124 )
      break;
    v37 = *(_QWORD *)(v5 + 24);
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v39 = *(_BYTE *)(v38 + 16);
    if ( v39 == 13 )
    {
      if ( (((*(_WORD *)(v38 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        goto LABEL_31;
LABEL_66:
      v37 = *(_QWORD *)(v5 + 16);
      goto LABEL_31;
    }
    if ( v39 != 46 )
    {
      if ( v39 != 10 )
        goto LABEL_31;
      goto LABEL_66;
    }
    v100 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL));
    if ( ((*(_BYTE *)(v100 + 74) & 1) != 0 || *(_QWORD *)(v100 + 128) > 7u) && *(char *)(sub_B14A40(v38) + 76) >= 0 )
      goto LABEL_66;
    v37 = *(_QWORD *)(v5 + 24);
LABEL_31:
    v5 = sub_80F120(v37);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
      goto LABEL_6;
    --v3;
  }
  if ( v7 != 80 )
    goto LABEL_6;
  v51 = *(_QWORD *)(v5 + 16);
  v52 = (*(_WORD *)(v5 + 2) >> 3) & 0x7F;
  if ( v52 == 5 )
    goto LABEL_171;
  if ( (unsigned int)(v52 - 7) > 1 )
    goto LABEL_6;
  v53 = &sub_80C750((_WORD *)v5)[4 * *(unsigned int *)(v5 + 4)];
  v54 = sub_80C750((_WORD *)v5);
  if ( v53 == v54 )
  {
LABEL_171:
    v5 = v51;
    goto LABEL_62;
  }
  while ( (*(_BYTE *)(*((_QWORD *)v53 - 1) + 12LL) & 1) == 0 )
  {
    v53 -= 4;
    --v3;
    if ( v53 == v54 )
      goto LABEL_171;
  }
LABEL_6:
  if ( !(_DWORD)v173 )
    goto LABEL_45;
  v9 = a1;
  p_ptr = &v163;
  v150 = (unsigned __int64)a3;
  v11 = *((_QWORD *)v151 + 1);
  v160 = &v163;
  sub_83CB20(&v163, a1, v151, 2u, a3, v11);
  v12 = v172;
  v157 = v165;
  if ( (v165 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v49 = 0;
    goto LABEL_46;
  }
  v148.m128i_i64[0] = (__int64)v172 + 16 * (unsigned int)v173;
  if ( (void *)v148.m128i_i64[0] == v172 )
  {
    v49 = 1;
    goto LABEL_46;
  }
  v13 = (const __m128i *)v150;
  v152 = v172;
  v158 = v163.m128i_i64[0];
  v149 = &v180;
  while ( 2 )
  {
    v14 = v13[3].m128i_i32[2];
    v15 = *(_DWORD *)(v148.m128i_i64[0] - 16);
    v153 = *(__m128i **)(v148.m128i_i64[0] - 8);
    v175 = v13[1].m128i_u32[2];
    v176 = v13[2].m128i_i64[0];
    v177 = v13[2].m128i_i64[1];
    ptr = v149;
    v179 = 0x800000000LL;
    v16 = 0;
    if ( v14 )
    {
      v9 = (unsigned __int64)&v13[3];
      p_ptr = (__m128i *)&ptr;
      LODWORD(v154) = v15;
      v150 = (unsigned __int64)v13;
      sub_820650((__int64)&ptr, (__int64)v13[3].m128i_i64);
      v15 = (unsigned int)v154;
      v13 = (const __m128i *)v150;
      v16 = (unsigned int)v179;
      v14 = v179;
    }
    v17 = *(__m128i **)(a1 + 16);
    v18 = v13->m128i_i64[0];
    v19 = v13->m128i_i64[1];
    if ( (v175 & 1) != 0 || v15 == v14 )
      goto LABEL_22;
    v20 = v15;
    if ( v15 == v16 )
    {
LABEL_110:
      v21 = ptr;
      goto LABEL_21;
    }
    if ( v15 < v16 )
    {
      LODWORD(v179) = v15;
      goto LABEL_110;
    }
    if ( HIDWORD(v179) < (unsigned __int64)v15 )
    {
      v154 = v13;
      LODWORD(v150) = v15;
      sub_25D6060(&ptr, v149, v15, 8);
      v13 = v154;
      v15 = v150;
      v16 = (unsigned int)v179;
    }
    v21 = ptr;
    v22 = 8 * v16;
    if ( v22 != 8 * v20 )
    {
      v154 = v13;
      LODWORD(v150) = v15;
      memset((char *)ptr + v22, 0, 8 * v20 - v22);
      v13 = v154;
      v15 = v150;
      v21 = ptr;
    }
    LODWORD(v179) = v15;
LABEL_21:
    v150 = (unsigned __int64)v13;
    v166.m128i_i8[0] = 0;
    v9 = v18;
    p_ptr = v17;
    LOBYTE(v169[0]) = 0;
    v23 = sub_824B30(v17, v18, v19, (__int64)v21, v20, &v176, &v177, &v166, v169);
    v24 = v175 & 3 | (16 * v23) | (4 * LOBYTE(v169[0])) | (8 * v166.m128i_u8[0]);
    v16 = (unsigned int)v179;
    v175 = v24;
    v13 = (const __m128i *)v150;
LABEL_22:
    v25 = _mm_loadu_si128(v13);
    v168 = v16;
    v26 = *(_DWORD *)(a1 + 888);
    v167 = ptr;
    v166 = v25;
    if ( v26 )
    {
      v150 = (unsigned __int64)v13;
      v27 = *(_QWORD *)(a1 + 872);
      v28 = (void *)sub_69F620(p_ptr, v9);
      v170 = nullptr;
      v169[0] = v28;
      v169[1] = v29;
      v171 = 0;
      v30 = sub_84A6B0(v166.m128i_i64, (__int64)&v167);
      v31 = v26 - 1;
      LODWORD(v154) = 1;
      v32 = v150;
      LODWORD(v155) = v31;
      for ( j = v31 & v30; ; j = (unsigned int)v155 & v36 )
      {
        v34 = v27 + 40LL * j;
        if ( (unsigned __int8)sub_69F550(&v166, (_QWORD *)v34) && v168 == *(_QWORD *)(v34 + 24) )
        {
          v56 = v167;
          v9 = (unsigned __int64)&v167[v168];
          if ( v167 == (_QWORD *)v9 )
          {
LABEL_72:
            v58 = *(_DWORD *)(v34 + 32);
            v13 = (const __m128i *)v32;
            goto LABEL_73;
          }
          v57 = *(_QWORD **)(v34 + 16);
          while ( *v56 == *v57 )
          {
            ++v56;
            ++v57;
            if ( (_QWORD *)v9 == v56 )
              goto LABEL_72;
          }
        }
        v9 = (unsigned __int64)v169;
        if ( (unsigned __int8)sub_69F550((_QWORD *)(v27 + 40LL * j), v169) )
        {
          v35 = *(_QWORD *)(v34 + 24);
          if ( v35 == v171 )
          {
            v78 = *(_QWORD **)(v34 + 16);
            v79 = &v78[v35];
            if ( v78 == v79 )
            {
LABEL_107:
              v13 = (const __m128i *)v32;
              break;
            }
            v80 = v170;
            while ( 1 )
            {
              v9 = *v80;
              if ( *v78 != *v80 )
                break;
              ++v78;
              ++v80;
              if ( v79 == v78 )
                goto LABEL_107;
            }
          }
        }
        v36 = (_DWORD)v154 + j;
        LODWORD(v154) = (_DWORD)v154 + 1;
      }
    }
    v58 = 0;
LABEL_73:
    if ( (v175 & 1) != 0 )
    {
LABEL_74:
      if ( ptr != v149 )
        free(ptr);
      v12 = v172;
      v49 = 0;
      goto LABEL_46;
    }
    if ( (v175 & 2) != 0
      || (_DWORD)v179 == 1 && (v175 & 4) != 0
      || (v175 & 8) != 0 && (v9 = (unsigned __int64)ptr, *((_QWORD *)ptr + (int)((v175 >> 4) - 1)) == v176) )
    {
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      {
        v86 = 2169;
        if ( (v175 & 2) == 0 )
        {
          if ( (_DWORD)v179 != 1 || (v86 = 2173, (v175 & 4) == 0) )
          {
            v86 = 2173;
            if ( (v175 & 8) != 0 )
            {
              v86 = 2169;
              if ( *((_QWORD *)ptr + (int)((v175 >> 4) - 1)) != v176 )
                v86 = 2173;
            }
          }
        }
        v87 = (unsigned __int8 **)sub_A2E130(a1, v151, v86, 0);
        if ( v87 )
          sub_823450(v87, 2);
      }
      else
      {
LABEL_214:
        sub_A2E130(a1, v151, 110, 0);
      }
      goto LABEL_74;
    }
    v59 = (__int64)v164;
    v60 = *v164;
    if ( (v164[1] & 1) != 0 )
    {
      if ( (unsigned int)v60 <= 1 )
        goto LABEL_74;
    }
    else if ( !(_DWORD)v60 )
    {
LABEL_100:
      if ( !*(_BYTE *)(a1 + 962) )
      {
        v74 = v151;
        v75 = (unsigned __int8 **)sub_A2E130(a1, v151, 2171, 0);
        v76 = v75;
        if ( v75 )
        {
          sub_823450(v75, 2);
          sub_823450(v76, *(_DWORD *)v59 == 1);
          v77 = (void *)sub_AC7B80(v74);
          LOBYTE(v169[1]) = 1;
          v169[0] = v77;
          sub_839C90((__int64 *)v76, (__int64 *)v169);
        }
      }
      goto LABEL_74;
    }
    LODWORD(v155) = v58;
    v61 = v157;
    v62 = 0;
    v150 = 0;
    v63 = nullptr;
    v64 = v179;
    v159 = v13;
    while ( 2 )
    {
      v65 = (__int64 *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v61 & 1) != 0
        || (v66 = *(_QWORD *)&byte_8[v61 & 0xFFFFFFFFFFFFFFF0LL], (v66 & 1) != 0)
        || (v60 = ((unsigned __int8)v66 | (unsigned __int8)v61) & 4,
            (((unsigned __int8)v66 | (unsigned __int8)v61) & 4) != 0) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47
          && (v9 = (unsigned __int64)v169,
              v154 = (const __m128i *)(v61 & 0xFFFFFFFFFFFFFFF0LL),
              v163.m128i_i64[0] = v158,
              v91 = _mm_load_si128(&v163),
              v170 = (unsigned __int64 *)ptr,
              v171 = v62,
              *(__m128i *)v169 = v91,
              v92 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)v169),
              v65 = (__int64 *)v154,
              v92)
          && (v60 = *((unsigned int *)v92 + 8), (_DWORD)v60) )
        {
          v93 = v154->m128i_i64[1] | v61 & 7;
          v94 = v93 & 0xFFFFFFFFFFFFFFF0LL;
          v61 = v93 & 0xFFFFFFFFFFFFFFFALL;
          v65 = (__int64 *)v94;
          if ( v62 == v64 )
            goto LABEL_141;
LABEL_89:
          v67 = *v65;
          v60 = (unsigned int)(v64 - 1);
          v68 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v62 != (_DWORD)v60 )
          {
            if ( (unsigned __int8)(v68 - 2) <= 4u )
            {
LABEL_91:
              v69 = sub_6D9A50(*(_QWORD **)(a1 + 16), v61);
              v70 = (const __m128i *)v69;
              if ( !v69 || (unsigned int)*(unsigned __int8 *)(v69 + 16) - 2 > 1 )
                BUG();
              v71 = *((_QWORD *)ptr + v62);
              v72 = *(_BYTE *)(v69 + 19);
              v9 = v70[2].m128i_u64[1];
              if ( (v72 & 2) != 0 )
              {
                LODWORD(v169[1]) = *(_DWORD *)(v9 + 8);
                if ( LODWORD(v169[1]) <= 0x40 )
                {
                  v169[0] = *(void **)v9;
LABEL_96:
                  if ( (void *)v71 >= v169[0] )
                    goto LABEL_180;
LABEL_97:
                  v61 = v70[2].m128i_u64[0];
                  if ( v71 >= *(unsigned int *)(v59 + 16) )
                  {
                    v154 = v70;
                    v89 = sub_8124E0((__int64)v151);
                    if ( !(unsigned __int8)sub_838500(a1, (__int64)v154, v89) )
                      goto LABEL_74;
                    v9 = (unsigned int)v71;
                    sub_81FAA0(v59, v71);
                    v90 = (unsigned int)v71;
                    v60 = *(_QWORD *)(v59 + 8);
                    v63 = nullptr;
                    v59 = v60 + 56 * v90;
                  }
                  else
                  {
                    v60 = *(_QWORD *)(v59 + 8);
                    v73 = 7 * v71;
                    v63 = nullptr;
                    v59 = v60 + 8 * v73;
                  }
LABEL_99:
                  ++v62;
                  if ( !*(_DWORD *)v59 )
                    goto LABEL_100;
                  continue;
                }
                v161 = v70;
                v154 = (const __m128i *)v169;
                sub_2585B30(v169);
                v107 = (__int64 *)v154;
                v70 = v161;
              }
              else
              {
                LODWORD(v169[1]) = 8 * ((v72 >> 2) & 0x1F);
                if ( SLODWORD(v169[1]) <= 64 )
                {
                  v169[0] = (void *)v9;
                  goto LABEL_96;
                }
                v161 = v70;
                v154 = (const __m128i *)v169;
                sub_2585A50(v169, v9, 0);
                v70 = v161;
                v107 = (__int64 *)v154;
              }
              v108 = (int)v169[1];
              if ( LODWORD(v169[1]) <= 0x40 )
                goto LABEL_96;
              v154 = v70;
              v109 = sub_2587400(v107);
              v70 = v154;
              if ( (unsigned int)(v108 - v109) > 0x40 )
              {
                if ( !v169[0] )
                  goto LABEL_97;
LABEL_176:
                operator delete[](v169[0]);
                v70 = v154;
                goto LABEL_97;
              }
              if ( v71 < *(_QWORD *)v169[0] )
                goto LABEL_176;
              if ( v169[0] )
                operator delete[](v169[0]);
LABEL_180:
              if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
                goto LABEL_214;
              v110 = (unsigned __int8 **)sub_A2E130(a1, v151, 2169, 0);
              if ( v110 )
                sub_823450(v110, 2);
              goto LABEL_74;
            }
LABEL_146:
            v88 = 8LL * v62;
            if ( v68 == 14 )
            {
              if ( *((_QWORD *)ptr + v62) <= 1u )
              {
                sub_B0D320(v67);
                BUG();
              }
              goto LABEL_180;
            }
LABEL_147:
            if ( (unsigned int)*(unsigned __int8 *)(v67 + 16) - 56 > 1 )
            {
              v161 = (const __m128i *)v88;
              v154 = (const __m128i *)v65;
              v111 = sub_820370(v67);
              v88 = (__int64)v161;
              v112 = (__int64 *)v154;
              v67 = v111;
              v9 = (unsigned __int64)ptr;
              v113 = v111 == 0;
              v114 = *(unsigned __int64 *)((char *)v161->m128i_u64 + (_QWORD)ptr);
              if ( v113 )
              {
                v115 = (const __m128i *)(v114 & 0xFFFFFFFFFFFFFFF8LL);
                v63 = (__m128i *)(v114 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v114 <= 7 || (v115[1].m128i_i8[12] & 0x7Fu) - 47 > 2 )
                {
                  v133 = v154->m128i_i64[0];
                  v154 = v161;
                  v134 = sub_B0E910(v133);
                  v135 = *(__int64 *)((_BYTE *)v154->m128i_i64 + (_QWORD)ptr) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( *(__int64 *)((char *)v154->m128i_i64 + (_QWORD)ptr) <= 7uLL )
                  {
                    v135 = 0;
                  }
                  else if ( (*(_BYTE *)(v135 + 28) & 0x7Fu) - 57 >= 3 )
                  {
                    v135 = 0;
                  }
                  v136 = sub_84C340(v134, v135);
                  v137 = v135;
                  v63 = nullptr;
                  v59 = *(_QWORD *)(v59 + 8) + 56LL * v136;
                  v9 = sub_6E8B00(*(_QWORD *)(a1 + 16), v137);
                  v61 = sub_81F6C0(v61, v9, 0);
                }
                else
                {
                  if ( (v115[4].m128i_i8[4] & 2) != 0 )
                  {
                    v161 = (const __m128i *)(v114 & 0xFFFFFFFFFFFFFFF8LL);
                    v163.m128i_i64[0] = v158;
                    v116 = sub_82E820(v160, a1, 2u);
                    v112 = (__int64 *)v154;
                    v115 = v161;
                    if ( !v116 )
                    {
                      v148.m128i_i64[0] = (__int64)v161;
                      v117 = (unsigned __int8 **)sub_A2E130(a1, v151, 2167, 1);
                      v118 = v148.m128i_i64[0];
                      v119 = v117;
                      if ( v117 )
                      {
                        sub_823450(v117, 2);
                        sub_8356A0(v119, v148.m128i_i64[0], 0xAu);
                        v118 = v148.m128i_i64[0];
                      }
                      sub_A2DD70(a1, *(unsigned int *)(v118 + 24), 105);
                      goto LABEL_74;
                    }
                  }
                  v120 = *v112;
                  v154 = v115;
                  v121 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF0LL));
                  v122 = v154;
                  if ( *(_BYTE *)(v121 + 73) >> 5 == 2 )
                  {
                    v123 = *(const __m128i **)(v59 + 8);
                    if ( !v123 )
                      goto LABEL_249;
                    v124 = *(const __m128i **)(v59 + 8);
                    if ( v123[1].m128i_i8[13] < 0 )
                    {
                      v125 = *(_QWORD *)(v59 + 8);
                      v161 = v154;
                      v154 = v123;
                      v126 = sub_77A0C0(v125);
                      v122 = v161;
                      v123 = v154;
                      v124 = (const __m128i *)v126;
                    }
                    v127 = (__int64)v122;
                    if ( v122[1].m128i_i8[13] < 0 )
                    {
                      v162 = v123;
                      v161 = v124;
                      v154 = v122;
                      v127 = sub_77A0C0((__int64)v122);
                      v123 = v162;
                      v124 = v161;
                      v122 = v154;
                    }
                    if ( (const __m128i *)v127 != v124 )
                    {
LABEL_249:
                      v148.m128i_i64[0] = (__int64)v123;
                      v150 = (unsigned __int64)v122;
                      v146 = (unsigned __int8 **)sub_A2E130(a1, v151, 2166, 0);
                      v147 = v146;
                      if ( v146 )
                      {
                        sub_823450(v146, 2);
                        sub_8356A0(v147, v150, 0xAu);
                        sub_823450(v147, v148.m128i_i64[0] == 0);
                        sub_8356A0(v147, v148.m128i_i64[0], 0xAu);
                      }
                      goto LABEL_74;
                    }
                    v59 = *(_QWORD *)(v59 + 16);
                  }
                  else
                  {
                    v130 = sub_83D880((__int64)v154);
                    v122 = v154;
                    v59 = *(_QWORD *)(v59 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v59 + 16) + v130);
                  }
                  v9 = v122[3].m128i_u64[0];
                  v61 = sub_81F6C0(v61, v9, (v122[4].m128i_i8[4] & 2) != 0);
                  if ( (v128 & 4) != 0 )
                  {
                    v150 = v129;
                  }
                  else
                  {
                    if ( (byte_8[v128 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
                      v129 = v150;
                    v150 = v129;
                  }
                }
                goto LABEL_99;
              }
              v95 = (int)v155;
              v13 = v159;
            }
            else
            {
              v95 = (int)v155;
              v13 = v159;
              v9 = (unsigned __int64)ptr;
            }
            v96 = *(_QWORD *)(v9 + v88);
            v97 = *(unsigned int *)(v67 + 20);
            if ( v96 == v97 )
              goto LABEL_180;
            if ( v97 < v96 )
            {
              v98 = (unsigned __int8 **)sub_A2E240(a1, v151, 2179, 0);
              v99 = v98;
              if ( v98 )
              {
                sub_8356A0(v98, v96, 3u);
                sub_823450(v99, 0);
                sub_8356A0(v99, v97, 3u);
              }
              goto LABEL_74;
            }
            v138 = *(_QWORD *)(v59 + 8) + 56 * v96;
            v139 = *(__m128i **)(v138 + 8);
            if ( v139 )
            {
              if ( v153 )
              {
                if ( v153 == v139
                  || (v140 = v139->m128i_i64[0],
                      v154 = v13,
                      LODWORD(v150) = v95,
                      v141 = (*(__int64 (__fastcall **)(__m128i *))(v140 + 32))(v139),
                      v142 = (*(__int64 (__fastcall **)(__m128i *))(v153->m128i_i64[0] + 32))(v153),
                      v95 = v150,
                      v13 = v154,
                      v141 == v142) )
                {
                  if ( **(_DWORD **)(v138 + 16) > 1u )
                    goto LABEL_43;
LABEL_230:
                  v143 = (__int64)v153;
                  BYTE4(v169[0]) &= ~1u;
                  LODWORD(v169[0]) = 0;
                  v144 = v153[3].m128i_i64[0];
                  v150 = (unsigned __int64)v13;
                  sub_8312C0(v144, (__int64)v169);
                  v9 = v143;
                  sub_6A6470(v138, v143, (__int64)v169);
                  v13 = (const __m128i *)v150;
                  if ( LODWORD(v169[0]) > 1 )
                  {
                    sub_69F740((__int64)v169);
                    v13 = (const __m128i *)v150;
                  }
                  goto LABEL_43;
                }
              }
            }
            if ( v95 != 2 )
              goto LABEL_230;
LABEL_242:
            sub_A2E130(a1, v151, 2290, 0);
            goto LABEL_74;
          }
          if ( v68 != 14 )
          {
            if ( (unsigned __int8)(v68 - 2) <= 4u )
              goto LABEL_91;
            v88 = 8LL * v62;
            goto LABEL_147;
          }
        }
        else if ( v62 != v64 )
        {
          goto LABEL_89;
        }
        if ( (v61 & 4) != 0 )
          goto LABEL_112;
LABEL_141:
        v66 = v65[1];
      }
      else if ( v62 != v64 )
      {
        goto LABEL_89;
      }
      break;
    }
    if ( (v66 & 4) != 0 )
    {
LABEL_112:
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
        goto LABEL_214;
      v81 = 0;
      if ( v150 )
      {
        v81 = *(_DWORD *)(v150 + 24);
        v82 = 2;
      }
      else
      {
        if ( v158 )
        {
          if ( (v158 & 3) == 0 )
          {
            v82 = 1;
            v150 = v158 & 0xFFFFFFFFFFFFFFFCLL;
            v81 = *(_DWORD *)((v158 & 0xFFFFFFFFFFFFFFFCLL) + 24);
            goto LABEL_115;
          }
          if ( (v158 & 3) == 1 && (v158 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            v81 = sub_8124E0(v158 & 0xFFFFFFFFFFFFFFFCLL);
        }
        v82 = 0;
      }
LABEL_115:
      v83 = (unsigned __int8 **)sub_A2E130(a1, v151, 2174, 1);
      v84 = v83;
      if ( v83 )
      {
        sub_823450(v83, 2);
        sub_823450(v84, v82);
        sub_8356A0(v84, v150, 0xAu);
      }
      v85 = (unsigned __int8 **)sub_A2DD70(a1, v81, 2304);
      if ( v85 )
        sub_823450(v85, v82);
      goto LABEL_74;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v9 = a1;
      v154 = (const __m128i *)v65;
      v163.m128i_i64[0] = v158;
      v131 = sub_82E820(v160, a1, 2u);
      v65 = (__int64 *)v154;
      if ( !v131 )
      {
        v9 = (unsigned __int64)v151;
        v132 = sub_836740(a1, (__int64)v151, 2u, v61);
        v65 = (__int64 *)v154;
        if ( v132 )
          goto LABEL_74;
      }
    }
    if ( v62 != v64 )
    {
      v67 = *v65;
      v68 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned __int8)(v68 - 2) <= 4u )
        goto LABEL_91;
      goto LABEL_146;
    }
    v40 = *(__m128i **)(v59 + 8);
    v41 = (unsigned int)v155;
    m128i_i64 = v63->m128i_i64;
    v13 = v159;
    if ( !v40
      || !v153
      || v153 != v40
      && (v43 = v40->m128i_i64[0],
          v155 = v159,
          LODWORD(v150) = v41,
          v154 = v63,
          v44 = (*(__int64 (__fastcall **)(__m128i *, unsigned __int64, __int64, __int64, __m128i *))(v43 + 32))(
                  v40,
                  v9,
                  v60,
                  v41,
                  v63),
          v45 = (*(__int64 (__fastcall **)(__m128i *))(v153->m128i_i64[0] + 32))(v153),
          LODWORD(v41) = v150,
          m128i_i64 = v154->m128i_i64,
          v13 = v155,
          v44 != v45) )
    {
      if ( (_DWORD)v41 != 2 )
        goto LABEL_38;
      goto LABEL_242;
    }
    if ( **(_DWORD **)(v59 + 16) <= 1u )
    {
LABEL_38:
      v46 = (__int64)v153;
      BYTE4(v169[0]) &= ~1u;
      LODWORD(v169[0]) = 0;
      v47 = v153[3].m128i_i64[0];
      v154 = v13;
      v150 = (unsigned __int64)m128i_i64;
      sub_8312C0(v47, (__int64)v169);
      v9 = v46;
      sub_6A6470(v59, v46, (__int64)v169);
      m128i_i64 = (_QWORD *)v150;
      v13 = v154;
      if ( LODWORD(v169[0]) > 1 )
      {
        v153 = (__m128i *)v154;
        sub_69F740((__int64)v169);
        v13 = v153;
        m128i_i64 = (_QWORD *)v150;
      }
    }
    if ( m128i_i64 )
    {
      if ( (*((_BYTE *)m128i_i64 + 68) & 1) != 0 )
      {
        v9 = (unsigned __int64)v151;
        v150 = (unsigned __int64)v13;
        v48 = sub_824FF0(a1, (__int64)v151, v59, (__int64)m128i_i64);
        v13 = (const __m128i *)v150;
        if ( !v48 )
          goto LABEL_74;
      }
    }
LABEL_43:
    p_ptr = (__m128i *)ptr;
    if ( ptr == v149 )
    {
      v148.m128i_i64[0] -= 16;
      if ( (void *)v148.m128i_i64[0] != v152 )
        continue;
    }
    else
    {
      v150 = (unsigned __int64)v13;
      free(ptr);
      v148.m128i_i64[0] -= 16;
      v9 = (unsigned __int64)v152;
      v13 = (const __m128i *)v150;
      if ( (void *)v148.m128i_i64[0] != v152 )
        continue;
    }
    break;
  }
LABEL_45:
  v12 = v172;
  v49 = 1;
LABEL_46:
  if ( v12 != v156 )
    free(v12);
  return v49;
}

