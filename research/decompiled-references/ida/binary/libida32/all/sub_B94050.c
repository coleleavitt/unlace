void __fastcall sub_B94050(__int64 a1, __int64 a2)
{
  void **v2; // r14
  __int64 v3; // rbx
  char v4; // al
  void **p_src; // r15
  bool v6; // sf
  __int64 v7; // r8
  __int32 v8; // edx
  _BYTE *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _BYTE *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i *v18; // rbp
  int v19; // eax
  __int64 v20; // rax
  __m128i *v21; // rbx
  __int64 v22; // rbp
  __m128i *v23; // rax
  __m128i *v24; // rdi
  unsigned __int64 v25; // rcx
  const char *v26; // rsi
  int v27; // eax
  __int64 v28; // rdx
  __m128i v29; // xmm2
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbp
  __int64 v37; // r12
  char *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // al
  char v42; // al
  unsigned __int8 v43; // al
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int *v52; // rax
  __int64 v53; // rbx
  char v54; // al
  __int64 v55; // rax
  char v56; // al
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rbp
  const char *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  char v62; // al
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // r13
  __int64 i; // r14
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // r12
  __int64 v72; // rbp
  __int64 v73; // rax
  __int64 v74; // rdi
  char v75; // al
  __int64 v76; // rdi
  _BYTE *v77; // rax
  void *v78; // rax
  __int64 v79; // rdx
  __m128i v80; // xmm5
  void *v81; // rcx
  int v82; // eax
  __int64 v83; // r13
  int v84; // ebp
  int v85; // r15d
  const char *v86; // rsi
  __int64 (__fastcall *v87)(__int64); // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 (__fastcall *v93)(__int64); // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  int v98; // r9d
  int v99; // r10d
  int v100; // eax
  void *v101; // rdx
  __m128i v102; // xmm4
  __int64 v103; // rax
  unsigned int *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // r8
  char v108; // si
  __int64 v109; // rdi
  char v110; // al
  __int64 v111; // rax
  int v112; // r9d
  int v113; // r10d
  __int64 v114; // rax
  void *v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // rax
  int v121; // r9d
  int v122; // r10d
  __int64 v123; // rbp
  char v124; // r12
  __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rbp
  __int64 v128; // r13
  __int64 v129; // rbx
  __int64 v130; // rdi
  __int64 v131; // rbp
  __int64 v132; // rax
  __int64 v133; // rax
  void **v134; // r15
  char *v135; // rsi
  __int64 v136; // rbp
  _QWORD *v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rdi
  __int64 v140; // r8
  __int64 v141; // r9
  unsigned __int16 v142; // ax
  int v143; // r12d
  _QWORD *v144; // r15
  __int64 v145; // rax
  int v146; // ebp
  __int64 v147; // rsi
  void **v148; // rbx
  __int64 v149; // r14
  __int64 v150; // rdx
  void *v151; // r9
  __int64 v152; // rax
  int v153; // r8d
  __int64 v154; // rsi
  int v155; // r9d
  unsigned __int64 v156; // rdi
  unsigned __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rcx
  char v160; // si
  char v161; // al
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rdx
  int v176; // ecx
  __int64 v177; // r13
  __int64 v178; // r14
  __int64 v179; // rdi
  char v180; // dl
  __int64 v181; // rax
  unsigned __int64 v182; // rdx
  __int64 v183; // [rsp-10h] [rbp-178h]
  __int64 v184; // [rsp+8h] [rbp-160h]
  void **v185; // [rsp+10h] [rbp-158h] BYREF
  __int64 v186; // [rsp+18h] [rbp-150h]
  char *v187; // [rsp+20h] [rbp-148h]
  __int64 v188; // [rsp+28h] [rbp-140h]
  void **v189; // [rsp+30h] [rbp-138h]
  __int64 v190; // [rsp+38h] [rbp-130h]
  __m128i *v191; // [rsp+40h] [rbp-128h]
  void **v192; // [rsp+48h] [rbp-120h] BYREF
  void **v193; // [rsp+50h] [rbp-118h]
  __int64 v194; // [rsp+58h] [rbp-110h]
  char *v195; // [rsp+60h] [rbp-108h]
  __int64 v196; // [rsp+68h] [rbp-100h]
  __int64 v197; // [rsp+70h] [rbp-F8h]
  __int64 v198; // [rsp+78h] [rbp-F0h]
  __int64 v199; // [rsp+88h] [rbp-E0h] BYREF
  __m128i v200; // [rsp+90h] [rbp-D8h] BYREF
  void *dest; // [rsp+A0h] [rbp-C8h] BYREF
  __m128 v202; // [rsp+A8h] [rbp-C0h] BYREF
  void *v203; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v204; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v205; // [rsp+D8h] [rbp-90h]
  int v206; // [rsp+E0h] [rbp-88h]
  char v207; // [rsp+E4h] [rbp-84h]
  void *src; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE n[24]; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v210; // [rsp+110h] [rbp-58h]
  char v211; // [rsp+118h] [rbp-50h]
  int v212; // [rsp+11Ch] [rbp-4Ch]
  void **p_dest; // [rsp+120h] [rbp-48h]

  v2 = (void **)a1;
  v3 = a2;
  if ( !sub_B53CF0(a2) && !(unsigned __int8)sub_B53D40(a2) )
  {
    sub_B8EE40(a1, (const char *)a2, v162, v163, v164, v165);
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      sub_B8E960((const char **)a1, a2, 1, v166, v167, v168);
  }
  if ( (unsigned __int8)sub_B53D40(a2) )
  {
    sub_971800(*(_QWORD *)a1, "template<> ");
  }
  else if ( !sub_B53CF0(a2) )
  {
    v69 = *(_QWORD *)(a2 + 56);
    if ( (v69 & 4) != 0 )
    {
      v70 = *(_DWORD *)((v69 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( v70 )
      {
        v71 = 0;
        v72 = 8LL * (unsigned int)(v70 - 1);
        while ( 1 )
        {
          sub_B93E20(a1, *(_QWORD *)(*(_QWORD *)((v69 & 0xFFFFFFFFFFFFFFF8LL) + 24) + v71), 0);
          if ( v72 == v71 )
            break;
          v69 = *(_QWORD *)(a2 + 56);
          v71 += 8;
        }
      }
    }
  }
  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v4 == 38 )
  {
    v186 = a2;
    v190 = 0;
    v189 = nullptr;
  }
  else if ( v4 == 37 )
  {
    v190 = a2;
    v186 = 0;
    v189 = nullptr;
  }
  else
  {
    v190 = 0;
    v67 = v4 == 39;
    v68 = 0;
    v186 = 0;
    if ( v67 )
      v68 = a2;
    v189 = (void **)v68;
  }
  p_src = &src;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    v54 = *(_BYTE *)(a2 + 81) >> 5;
    switch ( v54 )
    {
      case 2:
        sub_971800(*(_QWORD *)a1, "static ");
        v55 = *(_QWORD *)(a2 + 80);
        if ( (v55 & 0x20000) != 0 )
          goto LABEL_243;
        break;
      case 3:
        sub_971800(*(_QWORD *)a1, "__private_extern__ ");
        v55 = *(_QWORD *)(a2 + 80);
        if ( (v55 & 0x20000) != 0 )
          goto LABEL_243;
        break;
      case 1:
        sub_971800(*(_QWORD *)a1, "extern ");
        v55 = *(_QWORD *)(a2 + 80);
        if ( (v55 & 0x20000) != 0 )
          goto LABEL_243;
        break;
      default:
        v55 = *(_QWORD *)(a2 + 80);
        if ( (v55 & 0x20000) == 0 )
          break;
LABEL_243:
        sub_971800(*(_QWORD *)a1, "inline ");
        if ( (*(_QWORD *)(a2 + 80) & 0x40000) == 0 )
        {
LABEL_75:
          if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
            goto LABEL_76;
          goto LABEL_259;
        }
LABEL_244:
        sub_971800(*(_QWORD *)a1, "virtual ");
        if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
        {
LABEL_76:
          v56 = *(_BYTE *)(a2 + 84) & 3;
          if ( v56 != 1 )
            goto LABEL_77;
LABEL_235:
          if ( (*(_BYTE *)(a2 + 83) & 4) != 0 )
            goto LABEL_78;
          sub_971800(*(_QWORD *)a1, "constexpr ");
          v56 = *(_BYTE *)(a2 + 84) & 3;
LABEL_77:
          if ( v56 == 2 )
          {
            sub_971800(*(_QWORD *)a1, "consteval ");
LABEL_80:
            p_src = &src;
            v57 = sub_B73930(a2);
            v58 = v57 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v57 )
            {
              v59 = *(const char **)a1;
              p_src = &src;
              v184 = *(_QWORD *)(a1 + 24);
              LODWORD(v191) = *(_DWORD *)(a1 + 32);
              v203 = &v204.m128i_u64[1];
              sub_B8EB70(&v203, "explicit", (__int64)"");
              *(_DWORD *)n = 0;
              v185 = (void **)&unk_2BC1EB8;
              v211 = 0;
              v212 = 1;
              v210 = 0;
              *(_OWORD *)&n[8] = 0;
              src = &off_2BC1EC8;
              p_dest = &v203;
              sub_2257B70(&src, 0, 0, 0);
              if ( v58 )
              {
                sub_971800((__int64)&src, "(");
                v173 = sub_B8EB60(&src, "\n", v169, v170, v171, v172);
                sub_EE3EC0(v58, (unsigned int)&src, 0, a1 + 8, (_DWORD)v191, v184, (__int64)"\n", v173);
                sub_971800((__int64)&src, ")");
              }
              sub_971800((__int64)&src, " ");
              sub_22581D0(v59, v203, v204.m128i_i64[0]);
              src = v185 + 2;
              sub_2257A60(&src);
              if ( v203 != &v204.m128i_u64[1] )
                operator delete(v203);
            }
            goto LABEL_7;
          }
LABEL_78:
          if ( (unsigned __int8)sub_B59AB0(a2) )
            sub_971800(*(_QWORD *)a1, "immediate ");
          goto LABEL_80;
        }
LABEL_259:
        sub_971800(*(_QWORD *)a1, "__module_private__ ");
        v56 = *(_BYTE *)(a2 + 84) & 3;
        if ( v56 != 1 )
          goto LABEL_77;
        goto LABEL_235;
    }
    if ( (v55 & 0x40000) == 0 )
      goto LABEL_75;
    goto LABEL_244;
  }
LABEL_7:
  v202.m128_u64[0] = 0;
  v200 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v200.m128i_i8[1] &= ~1u;
  v6 = *(char *)(a1 + 12) < 0;
  dest = &v202.m128_u16[4];
  v202.m128_i8[8] = 0;
  if ( v6 )
  {
    sub_B53280((__int64)&src, (_QWORD *)a2);
    v9 = src;
    sub_9CA820(&dest, src, *(size_t *)n);
    if ( src != &n[8] )
      operator delete(src);
  }
  else
  {
    *(_DWORD *)n = 0;
    v185 = (void **)&unk_2BC1EB8;
    src = &off_2BC1EC8;
    v211 = 0;
    v212 = 1;
    v210 = 0;
    *(_OWORD *)&n[8] = 0;
    p_dest = &dest;
    sub_2257B70(&src, 0, 0, 0);
    if ( (*(_BYTE *)(a1 + 9) & 8) == 0 )
    {
      v73 = *(_QWORD *)(a2 + 56);
      if ( (v73 & 4) != 0 )
      {
        v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v74 )
          sub_E6C510(v74, &src, v2 + 1, 0, 1);
      }
    }
    v8 = *(_DWORD *)(a2 + 24);
    v9 = &src;
    v10 = *(_QWORD *)(v3 + 160);
    v203 = *(void **)(v3 + 40);
    v11 = (unsigned __int64)v2[2];
    v204.m128i_i32[0] = v8;
    v12 = (unsigned __int64)v2[1];
    v204.m128i_i64[1] = v10;
    sub_B61F50((__int64 *)&v203, (__int64)&src, v12, v11, v7);
    src = v185 + 2;
    sub_2257A60(&src);
  }
  if ( v189 )
  {
    if ( ((_DWORD)v189[5] & 7) != 7 || (v13 = (unsigned __int64)v189[5] & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v13) )
      BUG();
    v203 = *(void **)(*(_QWORD *)(v13 + 16) + 40LL);
    sub_B62CC0((__int64)&src, (__int64 *)&v203);
    v9 = src;
    v14 = dest;
    if ( src == &n[8] )
    {
      v157 = *(_QWORD *)n;
      if ( *(_QWORD *)n )
      {
        if ( *(_QWORD *)n == 1 )
          *(_BYTE *)dest = n[8];
        else
          memcpy(dest, src, *(size_t *)n);
        v157 = *(_QWORD *)n;
        v14 = dest;
      }
      v202.m128_u64[0] = v157;
      v14[v157] = 0;
      v14 = src;
      goto LABEL_17;
    }
    if ( dest == &v202.m128_u16[4] )
    {
      v185 = *(void ***)&n[8];
      dest = src;
      v202 = _mm_loadh_ps((const double *)&v185);
    }
    else
    {
      v185 = *(void ***)&n[8];
      v15 = v202.m128_u64[1];
      dest = src;
      v202 = _mm_loadh_ps((const double *)&v185);
      if ( v14 )
      {
        src = v14;
        *(_QWORD *)&n[8] = v15;
        goto LABEL_17;
      }
    }
    v14 = &n[8];
    src = &n[8];
LABEL_17:
    *(_QWORD *)n = 0;
    *v14 = 0;
    if ( src != &n[8] )
      operator delete(src);
  }
  if ( (unsigned __int8)sub_B53D40(v3) )
  {
    v9 = nullptr;
    *(_DWORD *)n = 0;
    v185 = (void **)&unk_2BC1EB8;
    src = &off_2BC1EC8;
    v211 = 0;
    p_dest = &dest;
    v212 = 1;
    v210 = 0;
    *(_OWORD *)&n[8] = 0;
    sub_2257B70(&src, 0, 0, 0);
    v100 = *((_DWORD *)v2 + 8);
    v101 = v2[3];
    v102 = _mm_load_si128(&v200);
    v203 = &src;
    v205 = (__int64)v101;
    v204 = v102;
    v206 = v100;
    v207 = 0;
    v103 = sub_B53E40(v3);
    if ( v103 && (*((_BYTE *)v2 + 13) & 1) == 0 )
    {
      v9 = (_BYTE *)(v103 + 16);
      sub_B8F470((__int64 *)&v203, v103 + 16, *(unsigned int *)(v103 + 8), 0);
    }
    else
    {
      v104 = (unsigned int *)sub_B53E10(v3);
      if ( v104 )
      {
        v9 = v104 + 2;
        sub_B8F320((__int64 *)&v203, (__int64)(v104 + 2), *v104, 0);
      }
    }
    src = v185 + 2;
    sub_2257A60(&src);
  }
  v199 = *(_QWORD *)(v3 + 48);
  v18 = *(__m128i **)(v199 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = v18[1].m128i_u8[0];
  if ( (_BYTE)v19 == 40 )
  {
    v185 = (void **)&v204.m128i_i64[1];
    v191 = (__m128i *)&v202.m128_u16[4];
    v20 = v3;
    v21 = v18;
    v22 = v20;
    while ( 1 )
    {
      v204.m128i_i64[0] = 0;
      v204.m128i_i8[8] = 0;
      v203 = v185;
      sub_971EF0((__int64)&v203, v202.m128_u64[0] + 1);
      sub_974FA0(&v203, v204.m128i_u64[0], 0, 1u, 40);
      sub_9CA820(&v203, dest, v202.m128_u64[0]);
      v9 = (_BYTE *)v204.m128i_i64[0];
      v23 = (__m128i *)sub_974FA0(&v203, v204.m128i_u64[0], 0, 1u, 41);
      src = &n[8];
      if ( (__m128i *)v23->m128i_i64[0] == &v23[1] )
      {
        *(__m128i *)&n[8] = _mm_loadu_si128(v23 + 1);
      }
      else
      {
        src = (void *)v23->m128i_i64[0];
        *(_QWORD *)&n[8] = v23[1].m128i_i64[0];
      }
      *(_QWORD *)n = v23->m128i_i64[1];
      v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
      v24 = (__m128i *)dest;
      v23->m128i_i64[1] = 0;
      v23[1].m128i_i8[0] = 0;
      if ( src == &n[8] )
      {
        v16 = *(_QWORD *)n;
        if ( *(_QWORD *)n )
        {
          if ( *(_QWORD *)n == 1 )
          {
            v24->m128i_i8[0] = n[8];
          }
          else
          {
            v9 = &n[8];
            memcpy(v24, &n[8], *(size_t *)n);
          }
          v16 = *(_QWORD *)n;
          v24 = (__m128i *)dest;
        }
        v202.m128_u64[0] = v16;
        v24->m128i_i8[v16] = 0;
        v24 = (__m128i *)src;
        goto LABEL_28;
      }
      v16 = *(_QWORD *)&n[8];
      if ( v24 == v191 )
        break;
      v192 = *(void ***)&n[8];
      v25 = v202.m128_u64[1];
      dest = src;
      v202 = _mm_loadh_ps((const double *)&v192);
      if ( !v24 )
        goto LABEL_183;
      src = v24;
      *(_QWORD *)&n[8] = v25;
LABEL_28:
      *(_QWORD *)n = 0;
      v24->m128i_i8[0] = 0;
      if ( src != &n[8] )
        operator delete(src);
      if ( v203 != v185 )
        operator delete(v203);
      v199 = v21[2].m128i_i64[0];
      v21 = *(__m128i **)(v199 & 0xFFFFFFFFFFFFFFF0LL);
      v19 = v21[1].m128i_u8[0];
      if ( (_BYTE)v19 != 40 )
      {
        v17 = v22;
        v18 = *(__m128i **)(v199 & 0xFFFFFFFFFFFFFFF0LL);
        v3 = v17;
        goto LABEL_34;
      }
    }
    v192 = *(void ***)&n[8];
    dest = src;
    v202 = _mm_loadh_ps((const double *)&v192);
LABEL_183:
    src = &n[8];
    v24 = (__m128i *)&n[8];
    goto LABEL_28;
  }
LABEL_34:
  if ( (unsigned int)(v19 - 25) > 1
    && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v18->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1
     || (v18 = (__m128i *)sub_F3F310(v18, v9, v16, v17)) == nullptr) )
  {
    v45 = (__int64)*v2;
    LOWORD(v210) = 260;
    src = &dest;
    sub_F50AF0(&v199, v45, v2 + 1, &src, 0);
    if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
      goto LABEL_146;
    goto LABEL_63;
  }
  if ( (*(_BYTE *)(v3 + 82) & 0x20) != 0 && v18[1].m128i_i8[0] == 26 )
  {
    sub_9CAA80(&dest, "(");
    v26 = nullptr;
    *(_DWORD *)n = 0;
    v185 = (void **)&unk_2BC1EB8;
    src = &off_2BC1EC8;
    v211 = 0;
    v212 = 1;
    v210 = 0;
    *(_OWORD *)&n[8] = 0;
    p_dest = &dest;
    sub_2257B70(&src, 0, 0, 0);
    v27 = *((_DWORD *)v2 + 8);
    v28 = (__int64)v2[3];
    v29 = _mm_load_si128(&v200);
    v203 = &src;
    v205 = v28;
    v204 = v29;
    v206 = v27;
    v207 = 0;
    v31 = sub_B52330(v3, 0, v28, v30);
    if ( v31 )
    {
      v191 = v18;
      v36 = 0;
      v37 = (unsigned int)(v31 - 1);
      while ( 1 )
      {
        v26 = *(const char **)(*(_QWORD *)(v3 + 120) + 8 * v36);
        sub_B905D0((__int64)&v203, v26, v32, v33, v34, v35);
        if ( v37 == v36 )
          break;
        if ( (_DWORD)v36 != -1 )
          sub_971800((__int64)&src, ", ");
        ++v36;
      }
      v18 = v191;
    }
    if ( v18[1].m128i_i8[3] < 0 )
    {
      if ( (unsigned int)sub_B52330(v3, (__int64)v26, v32, v33) )
        sub_971800((__int64)&src, ", ");
      sub_971800((__int64)&src, "...");
    }
    else if ( !(unsigned int)sub_B52330(v3, (__int64)v26, v32, v33)
           && (*(_BYTE *)(*((_QWORD *)v2[3] + 290) + 1LL) & 8) == 0 )
    {
      sub_971800((__int64)&src, "void");
    }
    src = v185 + 2;
    sub_2257A60(&src);
    v38 = ")";
    sub_9CAA80(&dest, ")");
    if ( v18[1].m128i_i8[0] == 26 )
      goto LABEL_47;
    if ( *(_BYTE *)(*(_QWORD *)(v18->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_53;
    if ( sub_F3F310(v18, ")", v39, v40) )
    {
LABEL_47:
      if ( (v18[1].m128i_i8[2] & 0x20) != 0 )
      {
        v38 = " const";
        sub_9CAA80(&dest, " const");
      }
    }
    if ( v18[1].m128i_i8[0] == 26 )
    {
      v41 = (unsigned __int8)v18[1].m128i_i8[2] >> 5;
      if ( (v41 & 4) == 0 )
        goto LABEL_51;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v18->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
        goto LABEL_53;
      if ( !sub_F3F310(v18, v38, v39, v40) || v18[1].m128i_i8[2] >= 0 )
        goto LABEL_250;
    }
    v38 = " volatile";
    sub_9CAA80(&dest, " volatile");
LABEL_250:
    if ( v18[1].m128i_i8[0] == 26
      || *(_BYTE *)(*(_QWORD *)(v18->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
      && sub_F3F310(v18, v38, v158, v159) )
    {
      v41 = (unsigned __int8)v18[1].m128i_i8[2] >> 5;
LABEL_51:
      if ( (v41 & 2) != 0 )
        sub_9CAA80(&dest, " restrict");
    }
LABEL_53:
    v42 = ((unsigned __int8)v18[1].m128i_i8[2] >> 3) & 3;
    if ( v42 == 1 )
    {
      sub_9CAA80(&dest, " &");
    }
    else if ( v42 == 2 )
    {
      sub_9CAA80(&dest, (char *)" &&");
    }
    v43 = ((unsigned __int8)v18[1].m128i_i8[3] >> 1) & 0xF;
    if ( (unsigned int)v43 - 1 <= 2 )
    {
      sub_9CAA80(&dest, " throw(");
      v160 = v18[1].m128i_i8[3];
      v161 = ((unsigned __int8)v160 >> 1) & 0xF;
      if ( v161 == 3 )
      {
        sub_9CAA80(&dest, "...");
      }
      else if ( v161 == 2 )
      {
        v174 = v18[1].m128i_i64[0];
        v175 = v18[1].m128i_u16[3];
        v176 = *(_WORD *)(((unsigned __int64)&v18[3].m128i_u64[v175] + ((SBYTE3(v174) >> 5) & 4) + 7)
                        & 0xFFFFFFFFFFFFFFF8LL)
             & 0x3FF;
        if ( (*(_WORD *)(((unsigned __int64)&v18[3].m128i_u64[v175] + ((SBYTE3(v174) >> 5) & 4) + 7)
                       & 0xFFFFFFFFFFFFFFF8LL)
            & 0x3FF) != 0 )
        {
          v192 = v2;
          v177 = 0;
          v178 = (unsigned int)(v176 - 1);
          v193 = (void **)v3;
          v191 = &v200;
          v185 = (void **)&n[8];
          while ( 1 )
          {
            v179 = 8 * v175 + 48;
            v180 = SBYTE3(v174) >> 5;
            v181 = (v174 & 0x40000000) != 0;
            v182 = ((unsigned __int64)v18->m128i_u64 + v179 + (v180 & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v160 & 0x40) != 0 )
              v181 += (*(_BYTE *)((((unsigned __int64)v18->m128i_u64 + ((v160 >> 5) & 4) + v179 + 7)
                                 & 0xFFFFFFFFFFFFFFF8LL)
                                + 1)
                     & 4) != 0;
            v203 = *(void **)(v182 + 8 * (v177 + v181));
            sub_F54860(&src, &v203, v191);
            sub_9CA820(&dest, src, *(size_t *)n);
            if ( src != v185 )
              operator delete(src);
            if ( v178 == v177 )
              break;
            if ( (_DWORD)v177 != -1 )
              sub_9CAA80(&dest, ", ");
            v174 = v18[1].m128i_i64[0];
            v160 = v18[1].m128i_i8[3];
            ++v177;
            v175 = v18[1].m128i_u16[3];
          }
          v2 = v192;
          v3 = (__int64)v193;
        }
      }
      sub_9CAA80(&dest, ")");
    }
    else if ( ((v43 + 12) & 0xFu) <= 4 )
    {
      sub_9CAA80(&dest, " noexcept");
      if ( (((unsigned __int8)v18[1].m128i_i8[3] >> 1) & 0xFu) - 6 <= 2 )
      {
        sub_9CAA80(&dest, "(");
        v211 = 0;
        *(_DWORD *)n = 0;
        src = v185 + 2;
        v212 = 1;
        v210 = 0;
        *(_OWORD *)&n[8] = 0;
        p_dest = &dest;
        sub_2257B70(&src, 0, 0, 0);
        v108 = v18[1].m128i_i8[3];
        v109 = ((unsigned __int8)v108 >> 1) & 0xF;
        if ( (unsigned int)(unsigned __int8)v109 - 6 <= 2 )
        {
          v106 = 8LL * v18[1].m128i_u16[3] + 48;
          v110 = BYTE3(v18[1].m128i_i64[0]);
          v105 = (v110 & 0x40) != 0;
          v107 = ((unsigned __int64)v18->m128i_u64 + v106 + ((v110 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v108 & 0x40) != 0 )
            v105 += (*(_BYTE *)((((unsigned __int64)v18->m128i_u64 + v106 + ((v108 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                              + 1)
                   & 4) != 0;
          if ( (_BYTE)v109 == 2 )
            v105 += *(_WORD *)(((unsigned __int64)v18->m128i_u64 + v106 + ((v108 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                  & 0x3FF;
        }
        v111 = sub_B8EB60(v109, "\n", v105, v106, v107, v2[3]);
        sub_EE3EC0(v113, (unsigned int)&src, 0, (unsigned int)&v200, *((_DWORD *)v2 + 8), v112, (__int64)"\n", v111);
        sub_9CAA80(&dest, ")");
        src = v185 + 2;
        sub_2257A60(&src);
        if ( !v186 )
        {
LABEL_171:
          v44 = (__int64)*v2;
          if ( !v190 && (*(_BYTE *)(v3 + 28) & 0x7F) != 0x24 )
          {
            if ( (v18[1].m128i_i8[4] & 1) != 0 )
            {
              if ( !v189 )
              {
                sub_971800(v44, "auto ");
                v44 = (__int64)*v2;
              }
              v114 = sub_22581D0(v44, dest, v202.m128_u64[0]);
              sub_971800(v114, " -> ");
              v202.m128_u64[0] = 0;
              *(_BYTE *)dest = 0;
              v44 = (__int64)*v2;
            }
            goto LABEL_177;
          }
          goto LABEL_61;
        }
        goto LABEL_59;
      }
    }
    if ( !v186 )
      goto LABEL_171;
LABEL_59:
    if ( *((char *)v2 + 11) < 0
      || (v123 = v186,
          v124 = 0,
          v125 = sub_B751E0(v186),
          v126 = v123,
          LODWORD(v185) = *(_DWORD *)(v123 + 84),
          v127 = v125 + 8LL * (unsigned __int16)((unsigned int)v185 >> 13),
          v189 = (void **)v127,
          v128 = sub_B751E0(v126),
          v127 == v128) )
    {
LABEL_60:
      v44 = (__int64)*v2;
      goto LABEL_61;
    }
    v194 = v3;
    v185 = v2 + 1;
    v193 = &v203;
    v192 = &src;
    while ( 1 )
    {
      v129 = *(_QWORD *)v128;
      if ( (**(_WORD **)(*(_QWORD *)v128 + 8LL) & 0x1FF) != 0x6F && (*(_BYTE *)(v129 + 28) & 4) != 0 )
        break;
LABEL_219:
      v128 += 8;
      if ( v189 == (void **)v128 )
      {
        v3 = v194;
        p_src = v192;
        goto LABEL_60;
      }
    }
    if ( v124 )
    {
      sub_971800((__int64)*v2, ", ");
    }
    else
    {
      sub_9CAA80(&dest, " : ");
      sub_22581D0(*v2, dest, v202.m128_u64[0]);
      v202.m128_u64[0] = 0;
      *(_BYTE *)dest = 0;
    }
    v130 = *(_QWORD *)v129;
    v131 = (__int64)*v2;
    v132 = (*(__int64 *)v129 >> 1) & 3;
    if ( v132 == 1 )
    {
      v156 = v130 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v132 != 2 )
      {
        if ( !(_DWORD)v132 && (*(_BYTE *)(v129 + 28) & 1) != 0 )
        {
          v134 = v192;
          sub_B62CC0((__int64)v192, (__int64 *)(v186 + 40));
        }
        else
        {
          v133 = sub_B74D90(v129);
          v134 = v192;
          v203 = (void *)(v133 & 0xFFFFFFFFFFFFFFF0LL);
          sub_F54860(v192, v193, v185);
        }
        v135 = (char *)src;
        sub_22581D0(v131, src, *(_QWORD *)n);
        if ( src != v134 + 2 )
          operator delete(src);
        v136 = *(_QWORD *)(v129 + 8);
        if ( v136 )
        {
LABEL_201:
          LOWORD(v191) = *(_WORD *)v136 & 0x1FF;
          if ( (_WORD)v191 != 53 )
          {
            v135 = "(";
            sub_971800((__int64)*v2, "(");
            if ( (*(_WORD *)v136 & 0x1FF) == 0x3C )
              v136 = *(_QWORD *)(v136 + 16);
          }
          v139 = sub_BD7CB0(v136);
          v142 = *(_WORD *)v139 & 0x1FF;
          if ( v142 == 19 )
          {
            v143 = *(_DWORD *)(v139 + 4);
            v144 = (_QWORD *)(v139 + 24);
          }
          else
          {
            v150 = (unsigned int)v142 - 113;
            if ( (unsigned int)v150 > 1 )
            {
              v151 = v2[3];
              v187 = "\n";
              v152 = sub_B8EB60(v139, v135, v150, v138, v140, v151);
              v153 = *((_DWORD *)v2 + 8);
              v154 = (__int64)*v2;
              v188 = v152;
              sub_EE3EC0(v139, v154, 0, (_DWORD)v185, v153, v155, (__int64)v187, v152);
LABEL_213:
              if ( (_WORD)v191 != 53 )
                sub_971800((__int64)*v2, ")");
              goto LABEL_215;
            }
            v137 = (_QWORD *)(v139 + 48);
            v143 = *(_DWORD *)(v139 + 32);
            if ( v142 != 114 )
              v137 = (_QWORD *)(v139 + 40);
            v144 = v137;
          }
          if ( v143 && (*(_WORD *)*v144 & 0x1FF) != 0x70 )
          {
            v145 = sub_B8EB60(v139, v135, v137, v138, v140, v141);
            v146 = 0;
            v198 = v129;
            v147 = (__int64)*v2;
            v190 = v145;
            v148 = v2;
            v197 = v128;
            while ( 1 )
            {
              v149 = v190;
              ++v146;
              sub_EE3EC0(
                *v144,
                v147,
                0,
                (_DWORD)v185,
                *((_DWORD *)v148 + 8),
                (unsigned int)v148[3],
                (__int64)"\n",
                v190);
              if ( v146 == v143 )
                break;
              if ( (*(_WORD *)*++v144 & 0x1FF) == 0x70 )
                break;
              sub_971800((__int64)*v148, ", ");
              v147 = (__int64)*v148;
            }
            v195 = "\n";
            v128 = v197;
            v196 = v149;
            v2 = v148;
            v129 = v198;
          }
          goto LABEL_213;
        }
LABEL_229:
        sub_971800((__int64)*v2, "()");
LABEL_215:
        v124 = 1;
        if ( (*(_BYTE *)v129 & 6) == 0 && (*(_BYTE *)(v129 + 28) & 1) == 0 && *(_DWORD *)(v129 + 16) )
          sub_971800((__int64)*v2, "...");
        goto LABEL_219;
      }
      v156 = *(_QWORD *)(*(_QWORD *)((v130 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                       + 8LL * *(unsigned int *)((v130 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                       - 8);
    }
    v135 = (char *)*v2;
    sub_B4EFB0(v156, (__int64)*v2);
    v136 = *(_QWORD *)(v129 + 8);
    if ( v136 )
      goto LABEL_201;
    goto LABEL_229;
  }
  sub_9CAA80(&dest, "(");
  v62 = *(_BYTE *)(v3 + 83);
  if ( (v62 & 8) == 0 && ((*(_BYTE *)(v3 + 128) & 1) != 0 || *(_QWORD *)(v3 + 128)) )
  {
    v63 = *(_QWORD *)(v3 + 80) >> 16;
    if ( (*(_QWORD *)(v3 + 80) & 0x200000LL) != 0 )
      goto LABEL_99;
  }
  else
  {
    if ( (v62 & 0x40) == 0 )
      goto LABEL_99;
    v63 = *(_QWORD *)(v3 + 80) >> 16;
    if ( (*(_QWORD *)(v3 + 80) & 0x200000LL) != 0 )
      goto LABEL_99;
  }
  if ( (v63 & 0x10) == 0 )
  {
    v64 = sub_B52330(v3, (__int64)"(", v60, v61);
    if ( v64 )
    {
      v65 = (unsigned int)(v64 - 1);
      v185 = (void **)v18;
      v189 = v2;
      for ( i = 0; ; ++i )
      {
        sub_B62CC0((__int64)&src, (__int64 *)(*(_QWORD *)(*(_QWORD *)(v3 + 120) + 8 * i) + 40LL));
        sub_9CA820(&dest, src, *(size_t *)n);
        if ( src != &n[8] )
          operator delete(src);
        if ( i == v65 )
          break;
        if ( (_DWORD)i != -1 )
          sub_9CAA80(&dest, ", ");
      }
      v18 = (__m128i *)v185;
      v2 = v189;
    }
  }
LABEL_99:
  sub_9CAA80(&dest, ")");
  if ( v186 )
    goto LABEL_59;
  v44 = (__int64)*v2;
  if ( !v190 && (*(_BYTE *)(v3 + 28) & 0x7F) != 0x24 )
  {
LABEL_177:
    if ( (*((_BYTE *)v2 + 9) & 0x1A) == 8 )
    {
      sub_B8EC30(v18[1].m128i_i64[1], v44);
      v44 = (__int64)*v2;
    }
    v115 = (void *)v18[1].m128i_i64[1];
    LOWORD(v210) = 260;
    v203 = v115;
    src = &dest;
    sub_F50AF0(&v203, v44, v2 + 1, &src, 0);
    v202.m128_u64[0] = 0;
    *(_BYTE *)dest = 0;
    goto LABEL_60;
  }
LABEL_61:
  v45 = (__int64)dest;
  sub_22581D0(v44, dest, v202.m128_u64[0]);
  v49 = *(_QWORD *)(v3 + 56);
  if ( (v49 & 4) != 0 && *(_QWORD *)((v49 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
  {
    v116 = (__int64)*v2;
    sub_971800((__int64)*v2, " requires ");
    v120 = sub_B8EB60(v116, "\n", v117, v118, v119, v2[3]);
    sub_EE3EC0(v122, (unsigned int)*v2, 0, (unsigned int)&v200, *((_DWORD *)v2 + 8), v121, (__int64)"\n", v120);
    v45 = v183;
  }
  if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
  {
LABEL_146:
    v45 = v3;
    sub_B8E960((const char **)v2, v3, 2, v46, v47, v48);
    v50 = *(_QWORD *)(v3 + 80);
    if ( (v50 & 0x80000) != 0 )
      goto LABEL_147;
    goto LABEL_64;
  }
LABEL_63:
  v50 = *(_QWORD *)(v3 + 80);
  if ( (v50 & 0x80000) != 0 )
  {
LABEL_147:
    sub_971800((__int64)*v2, " = 0");
    goto LABEL_148;
  }
LABEL_64:
  v51 = *(unsigned __int8 *)(v3 + 82);
  if ( (v51 & 0x40) == 0 || (v50 & 0x2000000) != 0 )
  {
    if ( (v50 & 0x4000000) != 0 )
    {
      sub_971800((__int64)*v2, " = default");
    }
    else
    {
      v75 = *(_BYTE *)(v3 + 83);
      if ( ((v75 & 8) == 0 && ((*(_BYTE *)(v3 + 128) & 1) != 0 || *(_QWORD *)(v3 + 128)) || (v75 & 0x40) != 0)
        && *((char *)v2 + 11) >= 0 )
      {
        if ( (v51 & 0x20) == 0 )
        {
          v51 &= 0x10u;
          if ( !(_DWORD)v51 )
          {
            if ( (unsigned int)sub_B52330(v3, v45, v51, v46) )
            {
              v76 = (__int64)*v2;
              v77 = *((_BYTE **)*v2 + 4);
              if ( (unsigned __int64)v77 >= *((_QWORD *)*v2 + 3) )
              {
                v45 = 10;
                sub_2257CD0(v76, 10);
              }
              else
              {
                *(_QWORD *)(v76 + 32) = v77 + 1;
                *v77 = 10;
              }
              v78 = v2[3];
              v79 = *((unsigned int *)v2 + 8);
              BYTE4(v210) = 0;
              v80 = _mm_load_si128(&v200);
              v81 = *v2;
              *(_QWORD *)&n[16] = v78;
              LODWORD(v78) = *((unsigned __int8 *)v2 + 8);
              src = v81;
              *(__m128i *)n = v80;
              *((_DWORD *)v2 + 8) = v79 + (_DWORD)v78;
              LODWORD(v210) = v79;
              v82 = sub_B52330(v3, v45, v79, (__int64)v81);
              if ( v82 )
              {
                v185 = p_src;
                v83 = 0;
                v186 = 8LL * (unsigned int)(v82 - 1) + 8;
                do
                {
                  v84 = *((_DWORD *)v2 + 8);
                  v85 = 0;
                  if ( v84 )
                  {
                    do
                    {
                      ++v85;
                      sub_971800((__int64)*v2, "  ");
                    }
                    while ( v84 != v85 );
                  }
                  v86 = *(const char **)(*(_QWORD *)(v3 + 120) + v83);
                  v83 += 8;
                  sub_B905D0((__int64)v185, v86, v51, v46, v47, v48);
                  sub_971800((__int64)*v2, ";\n");
                }
                while ( v83 != v186 );
                p_src = v185;
              }
              *((_DWORD *)v2 + 8) -= *((unsigned __int8 *)v2 + 8);
            }
          }
        }
        v87 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL);
        if ( v87 == sub_6CEBD0 )
          v88 = sub_B5BA10((_QWORD *)v3, p_src, v51, v46, v47, v48);
        else
          v88 = v87(v3);
        if ( v88 )
        {
          v93 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL);
          if ( v93 == sub_6CEBD0 )
            sub_B5BA10((_QWORD *)v3, p_src, v89, v90, v91, v92);
          else
            v93(v3);
          v97 = sub_B8EB60(v3, "\n", v94, v95, v96, v2[3]);
          sub_EE9640(v99, (unsigned int)*v2, 0, (unsigned int)&v200, *((_DWORD *)v2 + 8), v98, (__int64)"\n", v97);
        }
      }
    }
  }
  else
  {
    sub_971800((__int64)*v2, " = delete");
    if ( (*(_BYTE *)(v3 + 83) & 8) != 0 )
    {
      v52 = *(unsigned int **)(v3 + 128);
      if ( *((_BYTE *)v52 + 4) )
      {
        v53 = *(_QWORD *)&v52[2 * *v52 + 2];
        if ( v53 )
        {
          sub_971800((__int64)*v2, "(");
          sub_BD4D30(v53, *v2);
          sub_971800((__int64)*v2, ")");
        }
      }
    }
  }
LABEL_148:
  if ( dest != &v202.m128_u16[4] )
    operator delete(dest);
}

