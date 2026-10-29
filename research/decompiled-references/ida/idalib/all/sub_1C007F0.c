void __fastcall sub_1C007F0(
        __int64 a1,
        __m128 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        _BYTE *a9,
        size_t a10,
        unsigned int a11)
{
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // r15
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  unsigned __int64 v27; // rsi
  int v28; // eax
  char v29; // al
  __int64 v30; // rbx
  __int64 v31; // r12
  unsigned __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // r12
  int i; // eax
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdi
  int v54; // eax
  __int64 *v55; // rsi
  unsigned int v56; // edx
  unsigned int v57; // edx
  int v58; // esi
  unsigned __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  signed __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  void *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  unsigned int v87; // ebx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r8
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  void *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  void *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  _QWORD *v117; // rax
  unsigned int v118; // [rsp+4h] [rbp-194h]
  __int64 *v119; // [rsp+10h] [rbp-188h]
  int v120; // [rsp+20h] [rbp-178h]
  char v121; // [rsp+27h] [rbp-171h]
  __int64 v124; // [rsp+48h] [rbp-150h]
  int v125; // [rsp+50h] [rbp-148h]
  __int64 v126; // [rsp+50h] [rbp-148h]
  __int64 v127; // [rsp+50h] [rbp-148h]
  int v128; // [rsp+58h] [rbp-140h]
  __int64 v129; // [rsp+58h] [rbp-140h]
  unsigned int v130; // [rsp+60h] [rbp-138h]
  __int64 v131; // [rsp+68h] [rbp-130h]
  int v132; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v133; // [rsp+74h] [rbp-124h] BYREF
  __int64 v134; // [rsp+78h] [rbp-120h] BYREF
  void *v135; // [rsp+80h] [rbp-118h] BYREF
  signed __int64 v136; // [rsp+88h] [rbp-110h]
  char v137[16]; // [rsp+90h] [rbp-108h] BYREF
  void *v138[2]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v139; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v140; // [rsp+B8h] [rbp-E0h]
  unsigned __int8 *v141[11]; // [rsp+C0h] [rbp-D8h] BYREF
  char v142; // [rsp+118h] [rbp-80h]
  unsigned int v143; // [rsp+120h] [rbp-78h]
  char v144; // [rsp+124h] [rbp-74h]
  void *ptr; // [rsp+128h] [rbp-70h]
  __int64 v146; // [rsp+130h] [rbp-68h]
  _BYTE v147[96]; // [rsp+138h] [rbp-60h] BYREF

  v14 = a2[16].m128_i64[1];
  v124 = a3;
  v15 = *(_DWORD *)(v14 + 12);
  v119 = &a5[a6];
  v120 = v15;
  v118 = 0;
  v121 = 0;
  if ( a5 == v119 )
    return;
  v16 = a5;
  v18 = *a5;
  if ( v15 )
    goto LABEL_21;
LABEL_3:
  v19 = 0x7FFFFFFF;
LABEL_4:
  LOBYTE(a3) = v120 == 1 && v19 <= v118;
  v13 = (unsigned int)a3;
  if ( (_BYTE)a3 )
  {
    if ( v118 <= 4 || (*(_DWORD *)(v14 + 16) = 4, v119 != v16) )
    {
      v45 = sub_1C00760(a1, a2, v124, a4, a7, a8);
      sub_168B9F0((__int64)v138, &a2->m128_i64[1], a11, 0x186Fu, v45);
      LODWORD(v135) = v119 - v16;
      sub_1587D10((__int64)v138, (int *)&v135);
      sub_15F7200(v138);
    }
    return;
  }
  v12 = *(_QWORD *)v18;
  v20 = ++v118;
  if ( !*(_QWORD *)v18 )
  {
    if ( (*(_BYTE *)(v18 + 104) & 4) == 0 )
    {
      if ( !v121 )
      {
        v12 = *(_QWORD *)(v18 + 48);
        v43 = v12 + 152LL * *(_QWORD *)(v18 + 56);
        if ( v12 != v43 )
        {
          for ( i = *(_DWORD *)v12 & 0x7FFFFFFF; i != 5; i = *(_DWORD *)v12 & 0x7FFFFFFF )
          {
            if ( i == 3 )
            {
              sub_168B9B0((__int64)v138, (__int64)&a2->m128_i64[1], 5771);
              sub_1BE6DB0(v12, (__int64)a2, a11, (__int64)v138);
              if ( v138[0] )
              {
                if ( v138[1] )
                  sub_1580C40((unsigned __int64)v138[1], (unsigned __int64)v138[0]);
              }
            }
            v12 += 152LL;
            if ( v43 == v12 )
              break;
          }
        }
      }
      v135 = v137;
      strcpy(v137, "operator");
      v136 = 8;
      if ( a10 <= 0x7FFFFFFFFFFFFFF7LL )
      {
        v13 = (__int64)&v135;
        sub_9EE560(&v135, a9, a10);
        if ( v136 != 0x7FFFFFFFFFFFFFFFLL )
        {
          sub_9EE560(&v135, "(", 1u);
          v11 = (__int64)v138;
          sub_F78400((__int64)v138, (__int64 *)(v18 + 16));
          sub_9EE560(&v135, (_BYTE *)v138[0], (size_t)v138[1]);
          if ( v138[0] != &v139 )
            operator delete(v138[0]);
          if ( *(_QWORD *)(v18 + 56) == 1 )
          {
            if ( v136 != 0x7FFFFFFFFFFFFFFFLL )
            {
LABEL_34:
              sub_9EE560(&v135, ")", 1u);
              sub_168B9F0((__int64)v138, &a2->m128_i64[1], a11, 0x1841u, 0);
              if ( v142 )
              {
                sub_AEC220(v141, v135, v136);
              }
              else if ( v144 )
              {
                v48 = sub_168B9E0(v138);
                v51 = v139;
                if ( v139 )
                  v51 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v139 + 32LL))(v139);
                v134 = (__int64)v51;
                v52 = sub_1587BC0(v48, &v134, v46, v47, v49, v50);
                sub_AEC220((unsigned __int8 **)(*v52 + 32LL * v143 + 8), v135, v136);
              }
              sub_15F7200(v138);
              if ( v135 != v137 )
                operator delete(v135);
              v121 = 1;
              goto LABEL_19;
            }
          }
          else if ( v136 != 0x7FFFFFFFFFFFFFFFLL && v136 != 9223372036854775806LL )
          {
            v13 = (__int64)&v135;
            sub_9EE560(&v135, ", ", 2u);
            sub_F78400((__int64)v138, (__int64 *)(v18 + 24));
            sub_9EE560(&v135, (_BYTE *)v138[0], (size_t)v138[1]);
            if ( v138[0] != &v139 )
              operator delete(v138[0]);
            if ( v136 != 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_34;
          }
        }
      }
      std::__throw_length_error("basic_string::append");
    }
    v35 = *(_QWORD *)(v18 + 40);
    if ( (*(_BYTE *)(v35 + 28) & 0x7F) == 0x25 )
    {
      if ( sub_1BC9C10(v35, v20) )
        goto LABEL_19;
      v35 = *(_QWORD *)(v18 + 40);
    }
    v134 = sub_AED600(v35, v20, a3, v14);
    v39 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *(_BYTE *)(v39 + 16);
    if ( v40 == 43 )
      goto LABEL_55;
    v36 = *(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v36 + 16) == 43 )
    {
      v39 = sub_F63050(v39, v20, v36, v37);
      if ( v39 )
      {
LABEL_55:
        v11 = 1;
        v134 = sub_9B4870(v39, v20, v36, v37, v38);
        v39 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
        v40 = *(_BYTE *)(v39 + 16);
        goto LABEL_56;
      }
      v39 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
      v40 = *(_BYTE *)(v39 + 16);
    }
    if ( v40 != 44 )
    {
      v11 = 0;
      v36 = *(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v36 + 16) != 44 )
        goto LABEL_56;
      v39 = sub_F63050(v39, v20, v36, v37);
      if ( !v39 )
      {
        v39 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
        v40 = *(_BYTE *)(v39 + 16);
        goto LABEL_56;
      }
    }
    v11 = 0;
    v13 = 1;
    v134 = sub_9B4870(v39, v20, v36, v37, v38);
    v39 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *(_BYTE *)(v39 + 16);
LABEL_56:
    if ( v40 == 42 || (v39 = sub_1BC7590(v39, v20, v36, v37)) != 0 )
    {
      v134 = *(_QWORD *)(v39 + 32);
      v41 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
      v42 = *(unsigned __int8 *)(v41 + 16);
      if ( v42 == 25 || v42 == 26 )
      {
        v134 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      {
        v134 = 0;
      }
      else
      {
        v134 = sub_F63050(v41, v20, v36, v37) & 0xFFFFFFFFFFFFFFF0LL;
      }
      v134 = sub_A70010(a2[15].m128_i64[1], v134);
      if ( !(_BYTE)v13 )
      {
LABEL_94:
        if ( !(_BYTE)v11 )
        {
LABEL_95:
          v55 = &a2->m128_i64[1];
          v56 = *(_DWORD *)(*(_QWORD *)(v18 + 40) + 24LL);
          if ( (*(_DWORD *)(v18 + 104) & 0x3FC01) == 0x3C00 )
          {
            sub_168B9F0((__int64)v138, v55, v56, 0x186Eu, 0);
            if ( v142 )
            {
              sub_AE9DF0(v141, *(_QWORD *)(v18 + 40), 0xAu);
            }
            else if ( v144 )
            {
              v13 = sub_168B9E0(v138);
              v81 = v139;
              if ( v139 )
                v81 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v139 + 32LL))(v139);
              v135 = v81;
              v82 = sub_1587BC0(v13, (__int64 *)&v135, v77, v78, v79, v80);
              sub_AE9DF0((unsigned __int8 **)(*v82 + 32LL * v143 + 8), *(_QWORD *)(v18 + 40), 0xAu);
            }
            sub_15F7200(v138);
            a7 = 0;
            v139 = v141;
            LOWORD(v143) = 0;
            ptr = v147;
            *(_OWORD *)v138 = 0;
            v140 = 0x400000000LL;
            v146 = 0x400000000LL;
            if ( (unsigned __int8)sub_17516B0((__int64)a2, *(_QWORD *)(v18 + 40), (__int64)v138, 0, 0, 0.0) )
              sub_174DC50((__int64)a2, (__int64)v138, 1u, 0.0);
            if ( ptr != v147 )
              free(ptr);
            v11 = (__int64)v141;
            if ( v139 != v141 )
              free(v139);
          }
          else
          {
            sub_168B9F0((__int64)v138, v55, v56, 0x186Du, 0);
            sub_1605D30((__int64)v138, &v134);
            sub_15F7200(v138);
          }
          goto LABEL_19;
        }
LABEL_63:
        v134 = sub_A73030(a2[15].m128_i64[1], v134, 1u);
        goto LABEL_95;
      }
    }
    else
    {
      v53 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
      v54 = *(unsigned __int8 *)(v53 + 16);
      if ( v54 == 25 || v54 == 26 )
      {
        v134 = v53 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
      {
        v134 = sub_F63050(v53, v20, v36, v37) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v134 = 0;
      }
      if ( !(_BYTE)v13 )
        goto LABEL_94;
    }
    v134 = sub_A72DD0(a2[15].m128_i64[1], v134);
    if ( !(_BYTE)v11 )
      goto LABEL_95;
    goto LABEL_63;
  }
  v13 = *(unsigned int *)(a1 + 7856);
  v11 = *(unsigned int *)(a1 + 2972);
  if ( ((*(_BYTE *)(v12 + 28) & 0x7F) != 0x25 || !sub_1BC9C10(v12, v20))
    && ((*(_BYTE *)(a2[14].m128_u64[1] + 47) & 0x20) == 0
     || (*(_BYTE *)(v12 + 29) & 2) == 0
     || (*(_DWORD *)(v18 + 104) & 0x3FC00) == 0x800) )
  {
    v21 = *(unsigned __int8 *)(v18 + 104);
    if ( (v21 & 0x10) != 0 )
    {
      if ( !(unsigned __int8)sub_B771C0(v12, v20, v21, v14) && *(_BYTE *)(v12 + 81) >> 5 != 2 )
        goto LABEL_19;
      v21 = *(unsigned __int8 *)(v18 + 104);
    }
    if ( (v21 & 1) != 0 )
    {
      if ( (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 32LL))(v12) + 82) & 0x40) != 0 )
      {
        v137[0] = 0;
        v11 = (__int64)v138;
        v135 = v137;
        v136 = 0;
        v22 = sub_1BC9950(
                (__int64)a2,
                (_BYTE *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
                v12,
                *(_BYTE *)(v18 + 105) & 3,
                &v135);
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v12 + 24), 0x1857u, 0);
        LODWORD(v134) = v22;
        v23 = sub_16CF160((__int64)v138, (unsigned int *)&v134);
        v133 = HIDWORD(v22);
        v24 = sub_16CF160(v23, &v133);
        v13 = sub_1682A40(v24, (__int64)&v135);
        v25 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 32LL))(v12);
        v26 = 0;
        if ( (*(_BYTE *)(v25 + 82) & 0x40) != 0 )
        {
          if ( (*(_BYTE *)(v12 + 82) & 0x40) == 0 || (*(_BYTE *)(v12 + 83) & 2) != 0 )
            v26 = 2;
          else
            v26 = 1;
        }
        v132 = v26;
        sub_1587D10(v13, &v132);
        sub_15F7200(v138);
        v27 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v27 + 28) & 0x7F) == 0x36 )
          sub_1BDB4F0((__int64)a2, v27);
        if ( v135 != v137 )
          operator delete(v135);
      }
      else
      {
        sub_1BE6900(
          (__int64)a2,
          (char *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          v12,
          *(_BYTE *)(v18 + 105) & 3,
          0,
          0);
      }
      goto LABEL_19;
    }
    v28 = *(_DWORD *)(v18 + 104) >> 10;
    v11 = (_DWORD)v11 == 4;
    switch ( (char)v28 )
    {
      case 0:
      case 1:
        v11 = *(_QWORD *)v18;
        sub_B77230(*(_QWORD *)v18, (unsigned __int8)v28);
        if ( *(char *)(v11 + 28) >= 0 || (*(_DWORD *)(v11 + 40) & 7) != 6 )
          sub_1BDF420(
            (__int64)a2,
            (_BYTE *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
            v11,
            (unsigned int)a4,
            (*(_BYTE *)(v18 + 104) & 0x10) != 0);
        goto LABEL_50;
      case 2:
        v57 = (v21 & 8) != 0;
        v58 = *(_QWORD *)(v18 + 56);
        if ( v57 == v58 )
          goto LABEL_111;
        break;
      case 3:
        v13 = *(_QWORD *)v18;
        if ( (unsigned int)*(unsigned __int8 *)(v18 + 112) - 11 <= 1 )
        {
          sub_B77230(*(_QWORD *)v18, (unsigned __int8)v28);
          if ( *(char *)(v13 + 28) < 0 && (*(_DWORD *)(v13 + 40) & 7) == 6 )
            goto LABEL_50;
        }
        sub_1BE0570(
          (__int64 *)a2,
          (_BYTE *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          v13,
          (unsigned __int8 *)(v18 + 112),
          a4,
          (unsigned int)v11);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      case 4:
      case 6:
      case 7:
        goto LABEL_111;
      case 5:
        v11 = (__int64)v138;
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v12 + 24), 0x185Fu, 0);
        LODWORD(v135) = sub_B77AF0(v12) != 0;
        sub_1587D10((__int64)v138, (int *)&v135);
        goto LABEL_130;
      case 8:
        v11 = (__int64)v138;
        v59 = sub_15F1640((__int64)a2, 1);
        v13 = *(_QWORD *)v18;
        v125 = sub_178EA20(a2[41].m128_i64[1], v59, nullptr, v60, v61, v62);
        v128 = sub_178EA20(a2[41].m128_i64[1], v13, nullptr, v63, v64, v65);
        v136 = 0;
        v135 = v137;
        v137[0] = 0;
        v130 = sub_1BC9950(
                 (__int64)a2,
                 (_BYTE *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
                 v13,
                 *(_BYTE *)(v18 + 105) & 3,
                 &v135);
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v13 + 24), 0x1853u, 0);
        v133 = v130;
        v66 = sub_16CF160((__int64)v138, &v133);
        v132 = 0;
        v67 = sub_16CF160(v66, (unsigned int *)&v132);
        v68 = (__int64)&v135;
        v69 = sub_1682A40(v67, (__int64)&v135);
        v70 = v69;
        if ( *(_BYTE *)(v69 + 120) )
        {
          v68 = v128;
          sub_AE9DF0((unsigned __int8 **)(v69 + 32), v128, 2u);
        }
        else
        {
          if ( !*(_BYTE *)(v69 + 132) )
            goto LABEL_124;
          v106 = sub_168B9E0((_QWORD *)v69);
          v110 = *(_QWORD *)(v70 + 16);
          if ( v110 )
          {
            v131 = v106;
            v110 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
            v106 = v131;
          }
          v134 = v110;
          v111 = sub_1587BC0(v106, &v134, v106, v107, v108, v109);
          v68 = v128;
          sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * *(unsigned int *)(v70 + 128) + 8), v128, 2u);
        }
        if ( *(_BYTE *)(v70 + 120) )
        {
          v68 = v125;
          sub_AE9DF0((unsigned __int8 **)(v70 + 32), v125, 2u);
        }
        else if ( *(_BYTE *)(v70 + 132) )
        {
          v112 = sub_168B9E0((_QWORD *)v70);
          v116 = *(_QWORD *)(v70 + 16);
          if ( v116 )
          {
            v129 = v112;
            v116 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v116 + 32LL))(v116);
            v112 = v129;
          }
          v134 = v116;
          v117 = sub_1587BC0(v112, &v134, v112, v113, v114, v115);
          v68 = v125;
          sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * *(unsigned int *)(v70 + 128) + 8), v125, 2u);
        }
LABEL_124:
        sub_15F7200(v138);
        if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 35 <= 3 && (*(_BYTE *)(v13 + 29) & 2) != 0 )
        {
          v11 = sub_B72690(v13 + 72);
          if ( v11 )
            v11 -= 64;
          v86 = v130 - 4;
          if ( (unsigned int)v86 <= 4 )
          {
            v87 = dword_265F640[v86];
            if ( (unsigned int)sub_B76070(v13, v68, v84, v85)
              && ((v91 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
                   (unsigned int)*(unsigned __int8 *)(v91 + 16) - 43 <= 1)
               || (v91 = sub_1BC7530(v91, v68, v88, v89)) != 0) )
            {
              v92 = sub_9B4870(v91, v68, v88, v89, v90);
              LOBYTE(v93) = 1;
              if ( (v92 & 1) == 0 )
                v93 = *(_QWORD *)&byte_8[v92 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
            }
            else
            {
              LOBYTE(v93) = 0;
            }
            sub_17974D0((__int64 *)a2[41].m128_u64[1], v11, v87, (_BYTE *)v13, v93, 1);
          }
        }
LABEL_126:
        if ( v135 == v137 )
          goto LABEL_50;
        operator delete(v135);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      case 9:
        v11 = *(_QWORD *)(v18 + 120);
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(*(_QWORD *)v18 + 24LL), 0x1859u, 0);
        v134 = sub_EEC8C0(*(_QWORD *)(v11 + 40), (__int64)&a2->m128_i64[1], *(double *)a7.m128_u64);
        v75 = sub_1587DB0((__int64)v138, &v134);
        v76 = *(unsigned int *)(v11 + 48);
        v135 = *(void **)(v11 + 56);
        v136 = v76;
        sub_166BAF0(v75, (__int64)&v135);
        sub_15F7200(v138);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      case 10:
        v11 = *(_QWORD *)v18;
        v13 = sub_B97670(*(_QWORD *)v18);
        v29 = *(_BYTE *)(v11 + 80) & 0x7F;
        if ( v29 == 38 )
        {
          v30 = 0;
        }
        else
        {
          if ( v29 != 39 )
            goto LABEL_147;
          v30 = 2LL * ((*(_BYTE *)(v11 + 29) & 2) == 0);
        }
        goto LABEL_43;
      case 11:
        sub_1BDFA80((__int64)a2, (__int128 *)v12, 1, 1, 0, a6);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      case 12:
        v11 = (__int64)v138;
        if ( (unsigned __int8)sub_B990E0(v12, v138, v21, v14) )
          goto LABEL_50;
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v12 + 24), 0x1866u, 0);
        LODWORD(v135) = sub_B77AF0(v12) != 0;
        v72 = sub_1587D10((__int64)v138, (int *)&v135);
        LOBYTE(v134) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 120) + 48LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) == 44;
        sub_1588420(v72, (unsigned __int8 *)&v134);
        goto LABEL_130;
      case 14:
        v11 = (__int64)v138;
        v13 = (unsigned int)((_DWORD)v13 << 9);
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v12 + 24), 0x1860u, 0);
        if ( v142 )
        {
          sub_AE9DF0(v141, (unsigned int)v13, 7u);
        }
        else if ( v144 )
        {
          v94 = sub_168B9E0(v138);
          v98 = v139;
          if ( v139 )
          {
            v126 = v94;
            v98 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v139 + 32LL))(v139);
            v94 = v126;
          }
          v135 = v98;
          v99 = sub_1587BC0(v94, (__int64 *)&v135, v94, v95, v96, v97);
          sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * v143 + 8), (unsigned int)v13, 7u);
        }
LABEL_130:
        sub_15F7200(v138);
        v71 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v71 + 28) & 0x7F) != 0x36 )
          goto LABEL_50;
        sub_1BDB4F0((__int64)a2, v71);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      case 15:
        v13 = (__int64)&v135;
        v136 = 0;
        v135 = v137;
        v137[0] = 0;
        v11 = sub_1BC9950(
                (__int64)a2,
                (_BYTE *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
                v12,
                *(_BYTE *)(v18 + 105) & 3,
                &v135);
        sub_168B9F0((__int64)v138, &a2->m128_i64[1], *(_DWORD *)(v12 + 24), 0x1855u, 0);
        LODWORD(v134) = v11;
        v73 = sub_16CF160((__int64)v138, (unsigned int *)&v134);
        v133 = 0;
        v74 = sub_16CF160(v73, &v133);
        sub_1682A40(v74, (__int64)&v135);
        sub_15F7200(v138);
        a7 = 0;
        v139 = v141;
        LOWORD(v143) = 0;
        ptr = v147;
        *(_OWORD *)v138 = 0;
        v140 = 0x400000000LL;
        v146 = 0x400000000LL;
        if ( !(unsigned __int8)sub_17516B0((__int64)a2, v12, (__int64)v138, 0, 0, 0.0) )
          sub_174DC50((__int64)a2, (__int64)v138, 1u, 0.0);
        sub_1BCD1D0(v138);
        goto LABEL_126;
      default:
        goto LABEL_50;
    }
    while ( (*(_DWORD *)(*(_QWORD *)(v18 + 48) + 152LL * v57) & 0x7FFFFFFF) != 5 )
    {
      if ( v58 == ++v57 )
      {
LABEL_111:
        sub_1BE6900(
          (__int64)a2,
          (char *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL),
          v12,
          *(_BYTE *)(v18 + 105) & 3,
          0,
          0);
        sub_1BDB830((__int64)a2, v12);
        goto LABEL_19;
      }
    }
    sub_1BE1FE0((__int64 *)a2, v18, v57, v11, *(double *)a7.m128_u64);
    goto LABEL_50;
  }
LABEL_19:
  while ( 1 )
  {
    ++v16;
    v14 = a2[16].m128_i64[1];
    if ( v119 == v16 )
      break;
    v15 = *(_DWORD *)(v14 + 12);
    v18 = *v16;
    if ( !v15 )
      goto LABEL_3;
LABEL_21:
    if ( v15 == 1 )
    {
      v19 = *(_DWORD *)(v14 + 16);
      goto LABEL_4;
    }
LABEL_147:
    v30 = 1;
LABEL_43:
    v31 = *(_QWORD *)(v11 + 112);
    v32 = sub_B7D580(v31, 1, a3, v14);
    if ( v32 )
      v31 = *(_QWORD *)(v32 + 112);
    v33 = *(_DWORD *)(v31 + 24);
    v11 = (__int64)v138;
    sub_168B9F0((__int64)v138, &a2->m128_i64[1], v33, 0x185Bu, 0);
    if ( v142 )
    {
      sub_AE9DF0(v141, v30, 3u);
    }
    else if ( v144 )
    {
      v100 = sub_168B9E0(v138);
      v104 = v139;
      if ( v139 )
      {
        v127 = v100;
        v104 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v139 + 32LL))(v139);
        v100 = v127;
      }
      v135 = v104;
      v105 = sub_1587BC0(v100, (__int64 *)&v135, v100, v101, v102, v103);
      sub_AE9DF0((unsigned __int8 **)(*v105 + 32LL * v143 + 8), v30, 3u);
    }
    v13 &= 0xFFFFFFFFFFFFFFFCLL;
    if ( v13 )
    {
      LODWORD(v134) = 1;
      v34 = sub_1587D10((__int64)v138, (int *)&v134);
      v135 = (void *)sub_EEC8C0(v13, (__int64)&v134, *(double *)a7.m128_u64);
    }
    else
    {
      LODWORD(v134) = 0;
      v83 = sub_1587D10((__int64)v138, (int *)&v134);
      v135 = nullptr;
      v34 = v83;
    }
    sub_1587DB0(v34, (__int64 *)&v135);
    sub_15F7200(v138);
LABEL_50:
    sub_1BDB830((__int64)a2, v12);
  }
  if ( v118 > 4 )
    *(_DWORD *)(v14 + 16) = 4;
}
