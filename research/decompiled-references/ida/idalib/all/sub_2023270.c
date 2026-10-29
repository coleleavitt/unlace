std::_V2 *__fastcall sub_2023270(std::_V2 *a1, __int64 a2, int a3)
{
  std::_V2 *v3; // r13
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  _DWORD *v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // r15d
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rax
  __int64 v14; // r12
  _BYTE *v15; // rax
  __m128i v16; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // esi
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // r8d
  int v28; // eax
  __int64 v29; // r12
  __m128i *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  int v33; // r8d
  __int64 v34; // rcx
  char v35; // al
  void *v36; // rax
  void *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  unsigned int v40; // eax
  unsigned __int64 v41; // rdi
  __int64 v42; // r9
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r15
  unsigned __int64 *v45; // r10
  unsigned __int64 v46; // rsi
  int v47; // eax
  int v48; // r12d
  unsigned __int64 v49; // r12
  int v50; // ebp
  unsigned __int64 v51; // rdx
  void *v52; // rax
  __int64 v53; // r11
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r8
  void ***v56; // r10
  int v57; // edx
  unsigned int v58; // r8d
  __int64 v59; // rdx
  int v60; // eax
  __m128i si128; // xmm0
  void *v62; // r15
  std::_V2 *v63; // rdi
  __m128 v64; // xmm0
  unsigned int v65; // r15d
  __int64 v66; // rax
  __int64 v67; // rbp
  __m128i v68; // xmm0
  int v69; // eax
  void *v70; // r12
  std::_V2 *v71; // rdi
  __m128 v72; // xmm0
  __int64 v73; // rbp
  __m128i *v74; // rax
  void **v75; // rdi
  __m128i v76; // xmm0
  void *v77; // rax
  std::_V2 **v78; // r10
  int v79; // esi
  char v80; // cl
  int v81; // eax
  void *v82; // rax
  __int64 *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rax
  unsigned __int64 v88; // r10
  unsigned int v89; // r11d
  unsigned __int64 v90; // r8
  unsigned __int64 *v91; // r9
  unsigned __int64 v92; // rsi
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // rax
  std::_V2 **v98; // r9
  int v99; // edx
  int v100; // ebp
  unsigned int *v101; // r15
  unsigned int v102; // r9d
  __int64 v103; // rdx
  int v104; // eax
  __int64 *v105; // rbx
  __int64 *v106; // rsi
  __int64 v107; // rbx
  std::_V2 *v108; // rdi
  __int64 v109; // rax
  __int64 *v110; // rbx
  __int64 *v111; // rsi
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned int v114; // r8d
  __int64 v115; // rdx
  void *v116; // rax
  int v117; // [rsp+0h] [rbp-188h]
  std::_V2 *v118; // [rsp+0h] [rbp-188h]
  std::_V2 *v119; // [rsp+0h] [rbp-188h]
  char *v120; // [rsp+8h] [rbp-180h] BYREF
  unsigned __int64 v121; // [rsp+10h] [rbp-178h]
  void **v122; // [rsp+18h] [rbp-170h]
  __m128 v123; // [rsp+20h] [rbp-168h] BYREF
  __m128 v124; // [rsp+30h] [rbp-158h] BYREF
  __int64 (__fastcall **v125)(); // [rsp+40h] [rbp-148h]
  std::_V2 *v126; // [rsp+48h] [rbp-140h]
  unsigned __int64 v127; // [rsp+50h] [rbp-138h]
  __int64 *v128; // [rsp+58h] [rbp-130h]
  __int64 *v129; // [rsp+60h] [rbp-128h]
  unsigned __int64 *v130; // [rsp+68h] [rbp-120h]
  unsigned __int64 v131; // [rsp+70h] [rbp-118h]
  unsigned __int64 v132; // [rsp+78h] [rbp-110h]
  unsigned int v133; // [rsp+80h] [rbp-108h]
  int v134; // [rsp+84h] [rbp-104h]
  std::_V2 *v135; // [rsp+88h] [rbp-100h]
  unsigned __int64 v136; // [rsp+90h] [rbp-F8h]
  unsigned __int64 v137; // [rsp+98h] [rbp-F0h]
  __int64 v138; // [rsp+A0h] [rbp-E8h] BYREF
  char v139; // [rsp+A8h] [rbp-E0h]
  _DWORD *v140; // [rsp+B0h] [rbp-D8h] BYREF
  char v141; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v142; // [rsp+C0h] [rbp-C8h] BYREF
  char v143; // [rsp+C8h] [rbp-C0h]
  std::_V2 *v144[2]; // [rsp+D0h] [rbp-B8h] BYREF
  int v145; // [rsp+E0h] [rbp-A8h] BYREF
  int v146; // [rsp+E4h] [rbp-A4h]
  void *v147[2]; // [rsp+F0h] [rbp-98h] BYREF
  unsigned __int64 v148; // [rsp+100h] [rbp-88h] BYREF
  __int64 v149; // [rsp+108h] [rbp-80h]
  void *v150; // [rsp+110h] [rbp-78h] BYREF
  __int64 v151; // [rsp+118h] [rbp-70h]
  __int128 v152; // [rsp+120h] [rbp-68h] BYREF
  __int64 v153; // [rsp+130h] [rbp-58h]
  char v154; // [rsp+138h] [rbp-50h]
  int v155; // [rsp+13Ch] [rbp-4Ch]
  void *v156; // [rsp+140h] [rbp-48h]

  v3 = a1;
  if ( a3 == 3 )
  {
    v120 = (char *)&v138;
    sub_20227D0((__int64)&v138, a2);
    if ( (v139 & 1) != 0 )
    {
      v18 = v138;
      *((_BYTE *)a1 + 8) |= 1u;
      v138 = 0;
      *(_QWORD *)a1 = v18;
      goto LABEL_19;
    }
    v134 = v138;
    v129 = (__int64 *)&v140;
    sub_20227D0((__int64)&v140, a2);
    if ( (v141 & 1) != 0 )
    {
      v32 = (__int64)v140;
      *((_BYTE *)a1 + 8) |= 1u;
      v140 = nullptr;
      *(_QWORD *)a1 = v32;
      goto LABEL_34;
    }
    v133 = (unsigned int)v140;
    if ( !(_DWORD)v140 )
    {
LABEL_105:
      v81 = v134;
      *((_BYTE *)v3 + 8) &= ~1u;
      *(_DWORD *)v3 = v81;
      goto LABEL_34;
    }
    v135 = a1;
    v122 = v147;
    v117 = 0;
    v128 = (__int64 *)&v150;
    v130 = &v148;
LABEL_50:
    v41 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v41 > 5 )
    {
      v38 = *(_QWORD *)(a2 + 24);
      v143 &= ~1u;
      LODWORD(v39) = v38 & 0x3F;
      *(_QWORD *)(a2 + 24) = v38 >> 6;
      v40 = v41 - 6;
      *(_DWORD *)(a2 + 32) = v41 - 6;
      v142 = (unsigned int)v39;
LABEL_46:
      if ( (v39 & 0x20) == 0 )
      {
        LOBYTE(v151) = v151 & 0xFE;
        v150 = (void *)(unsigned int)v39;
        goto LABEL_48;
      }
      v49 = v39 & 0x1F;
      v50 = 5;
      while ( 1 )
      {
        if ( v40 > 5 )
        {
          v51 = *(_QWORD *)(a2 + 24);
          LOBYTE(v151) = v151 & 0xFE;
          *(_DWORD *)(a2 + 32) = v40 - 6;
          v150 = (void *)(v51 & 0x3F);
          *(_QWORD *)(a2 + 24) = v51 >> 6;
          goto LABEL_59;
        }
        v53 = 0;
        if ( v40 )
          v53 = *(_QWORD *)(a2 + 24);
        v54 = *(_QWORD *)(a2 + 16);
        v55 = *(_QWORD *)(a2 + 8);
        if ( v54 >= v55 )
          break;
        v56 = (void ***)(v54 + *(_QWORD *)a2);
        if ( v55 >= v54 + 8 )
        {
          v41 = (unsigned __int64)*v56;
          *(_QWORD *)(a2 + 16) = v54 + 8;
          v57 = 64;
          LOBYTE(v56) = 6 - v40;
LABEL_71:
          LOBYTE(v151) = v151 & 0xFE;
          *(_DWORD *)(a2 + 32) = v57 + v40 - 6;
          *(_QWORD *)(a2 + 24) = v41 >> (char)v56;
          v150 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v40 + 58)) & v41) << v40) | v53);
          goto LABEL_59;
        }
        *(_QWORD *)(a2 + 24) = 0;
        v58 = v55 - v54;
        if ( v58 )
        {
          v59 = 0;
          v41 = 0;
          while ( 1 )
          {
            v41 |= (unsigned __int64)*((unsigned __int8 *)v56 + v59) << (8 * (unsigned __int8)v59);
            *(_QWORD *)(a2 + 24) = v41;
            if ( v58 - 1 == v59 )
              break;
            ++v59;
          }
          v57 = 8 * v58;
          LODWORD(v56) = 6 - v40;
          *(_DWORD *)(a2 + 32) = 8 * v58;
          *(_QWORD *)(a2 + 16) = v58 + v54;
          if ( 8 * v58 >= 6 - v40 )
            goto LABEL_71;
        }
        else
        {
          *(_DWORD *)(a2 + 32) = 0;
          LODWORD(v56) = 6 - v40;
        }
        LODWORD(v125) = (_DWORD)v56;
        v123.m128_u64[0] = (unsigned __int64)off_2C02AD8;
        v124 = _mm_loadh_ps((const double *)off_2BE5CA8);
        v123.m128_u64[0] = std::_V2::generic_category((std::_V2 *)v41);
        v147[0] = v130;
        v156 = v122;
        v152 = 0;
        v150 = &off_2BEBE68;
        v147[1] = nullptr;
        LOBYTE(v148) = 0;
        LODWORD(v151) = 0;
        v154 = 0;
        v155 = 1;
        v153 = 0;
        sub_227B8B0(&v150, 0, 0, 0);
        v60 = *(_DWORD *)(a2 + 32);
        si128 = _mm_load_si128((const __m128i *)&v124);
        v145 = (int)v125;
        *(__m128i *)v144 = si128;
        v146 = v60;
        sub_227C560(&v150, v144);
        v150 = &off_2BEBE68;
        sub_227B7A0(&v150);
        LOWORD(v153) = 260;
        v150 = v122;
        v132 = v132 & 0xFFFFFFFF00000000LL | 5;
        v62 = (void *)operator new(0x40u);
        sub_2220590(v62, &v150, (unsigned int)v132, v123.m128_u64[0]);
        v63 = (std::_V2 *)v147[0];
        if ( v147[0] != v130 )
          goto LABEL_78;
LABEL_79:
        LOBYTE(v151) = v151 | 1;
        v150 = v62;
LABEL_59:
        sub_A0AE70((__int64 *)&v142);
        v143 = v151 & 1 | v143 & 0xFE;
        v52 = v150;
        if ( (v151 & 1) != 0 )
          v150 = nullptr;
        v41 = (unsigned __int64)&v150;
        v142 = (unsigned __int64)v52;
        sub_A0AE70((__int64 *)&v150);
        if ( (v143 & 1) != 0 )
        {
          v77 = (void *)v142;
          LOBYTE(v151) = v151 | 1;
          v142 = 0;
          v150 = v77;
          goto LABEL_48;
        }
        v49 |= (v142 & 0x1F) << v50;
        if ( (v142 & 0x20) == 0 )
        {
          LOBYTE(v151) = v151 & 0xFE;
          v150 = (void *)v49;
          goto LABEL_48;
        }
        v50 += 5;
        if ( v50 == 65 )
        {
          v73 = std::_V2::generic_category((std::_V2 *)&v150);
          v150 = &v152;
          v136 = v136 & 0xFFFFFFFF00000000LL | 0x54;
          v74 = (__m128i *)operator new(0x11u);
          v75 = v122;
          v76 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
          v74[1].m128i_i8[0] = 0;
          v150 = v74;
          *v74 = v76;
          *(_QWORD *)&v152 = 16;
          v151 = 16;
          sub_22205D0(v75, &v150, 84, v73);
          if ( v150 != &v152 )
            operator delete(v150);
          LOBYTE(v151) = v151 | 1;
          v150 = v147[0];
LABEL_48:
          sub_A0AE70((__int64 *)&v142);
          if ( (v151 & 1) != 0 )
          {
            v3 = v135;
            v82 = v150;
            v150 = nullptr;
            v83 = v128;
            *((_BYTE *)v135 + 8) |= 1u;
            *(_QWORD *)v3 = v82;
            sub_A0AE70(v83);
LABEL_34:
            sub_A0AE90(v129);
LABEL_19:
            sub_A0AE90((__int64 *)v120);
            return v3;
          }
          sub_A0AE70((__int64 *)&v150);
          if ( v133 == ++v117 )
          {
            v3 = v135;
            goto LABEL_105;
          }
          goto LABEL_50;
        }
        v40 = *(_DWORD *)(a2 + 32);
      }
      v127 = *(_QWORD *)(a2 + 8);
      v123.m128_u64[0] = std::_V2::generic_category((std::_V2 *)v41);
      v152 = 0;
      v144[0] = (std::_V2 *)&v145;
      v126 = (std::_V2 *)&v145;
      v150 = &off_2BEBE68;
      v125 = &off_2BEBE68;
      v156 = v144;
      v144[1] = nullptr;
      LOBYTE(v145) = 0;
      LODWORD(v151) = 0;
      v154 = 0;
      v155 = 1;
      v153 = 0;
      sub_227B8B0(&v150, 0, 0, 0);
      v148 = v127;
      v124.m128_u64[0] = (unsigned __int64)"Unexpected end of file reading %u of %u bytes";
      v64 = _mm_loadh_ps((const double *)v124.m128_u64);
      v149 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v147 = v64;
      sub_227C560(&v150, v122);
      v150 = v125;
      sub_227B7A0(&v150);
      LOWORD(v153) = 260;
      v150 = v144;
      v121 = v121 & 0xFFFFFFFF00000000LL | 5;
      v62 = (void *)operator new(0x40u);
      sub_2220590(v62, &v150, (unsigned int)v121, v123.m128_u64[0]);
      v63 = v144[0];
      if ( v144[0] == v126 )
        goto LABEL_79;
LABEL_78:
      operator delete(v63);
      goto LABEL_79;
    }
    v42 = 0;
    if ( (_DWORD)v41 )
      v42 = *(_QWORD *)(a2 + 24);
    v43 = *(_QWORD *)(a2 + 16);
    v44 = *(_QWORD *)(a2 + 8);
    if ( v43 >= v44 )
    {
      v123.m128_u64[0] = std::_V2::generic_category((std::_V2 *)v41);
      v152 = 0;
      v156 = v144;
      v150 = &off_2BEBE68;
      v125 = &off_2BEBE68;
      v144[0] = (std::_V2 *)&v145;
      v144[1] = nullptr;
      LOBYTE(v145) = 0;
      LODWORD(v151) = 0;
      v154 = 0;
      v155 = 1;
      v153 = 0;
      sub_227B8B0(&v150, 0, 0, 0);
      v148 = v44;
      v124.m128_u64[0] = (unsigned __int64)"Unexpected end of file reading %u of %u bytes";
      v72 = _mm_loadh_ps((const double *)v124.m128_u64);
      v149 = *(_QWORD *)(a2 + 16);
      *(__m128 *)v147 = v72;
      sub_227C560(&v150, v122);
      v150 = v125;
      sub_227B7A0(&v150);
      LOWORD(v153) = 260;
      v150 = v144;
      v131 = v131 & 0xFFFFFFFF00000000LL | 5;
      v70 = (void *)operator new(0x40u);
      sub_2220590(v70, &v150, 5, v123.m128_u64[0]);
      v71 = v144[0];
      if ( (int *)v144[0] == &v145 )
        goto LABEL_89;
    }
    else
    {
      v45 = (unsigned __int64 *)(v43 + *(_QWORD *)a2);
      if ( v44 >= v43 + 8 )
      {
        v46 = *v45;
        *(_QWORD *)(a2 + 16) = v43 + 8;
        v47 = 64;
        LOBYTE(v48) = 6 - v41;
LABEL_56:
        v143 &= ~1u;
        v40 = v47 + v41 - 6;
        *(_QWORD *)(a2 + 24) = v46 >> v48;
        *(_DWORD *)(a2 + 32) = v40;
        v39 = v42 | (((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v41 + 58)) & v46) << v41);
        v142 = v39;
        goto LABEL_46;
      }
      *(_QWORD *)(a2 + 24) = 0;
      v65 = v44 - v43;
      if ( v65 )
      {
        v66 = 0;
        v46 = 0;
        while ( 1 )
        {
          v46 |= (unsigned __int64)*((unsigned __int8 *)v45 + v66) << (8 * (unsigned __int8)v66);
          *(_QWORD *)(a2 + 24) = v46;
          if ( v65 - 1 == v66 )
            break;
          ++v66;
        }
        v47 = 8 * v65;
        v48 = 6 - v41;
        *(_DWORD *)(a2 + 32) = 8 * v65;
        *(_QWORD *)(a2 + 16) = v65 + v43;
        if ( 8 * v65 < 6 - (int)v41 )
          goto LABEL_87;
        goto LABEL_56;
      }
      *(_DWORD *)(a2 + 32) = 0;
      v48 = 6 - v41;
LABEL_87:
      v123 = _mm_loadh_ps((const double *)off_2BE5CA8);
      v67 = std::_V2::generic_category((std::_V2 *)v41);
      v156 = v122;
      v147[0] = v130;
      v152 = 0;
      v147[1] = nullptr;
      v150 = &off_2BEBE68;
      LOBYTE(v148) = 0;
      LODWORD(v151) = 0;
      v154 = 0;
      v155 = 1;
      v153 = 0;
      sub_227B8B0(&v150, 0, 0, 0);
      v68 = _mm_load_si128((const __m128i *)&v123);
      v69 = *(_DWORD *)(a2 + 32);
      v145 = v48;
      *(__m128i *)v144 = v68;
      v146 = v69;
      sub_227C560(&v150, v144);
      v150 = &off_2BEBE68;
      sub_227B7A0(&v150);
      LOWORD(v153) = 260;
      v150 = v122;
      v137 = v137 & 0xFFFFFFFF00000000LL | 5;
      v70 = (void *)operator new(0x40u);
      sub_2220590(v70, &v150, 5, v67);
      v71 = (std::_V2 *)v147[0];
      if ( v147[0] == v130 )
      {
LABEL_89:
        v143 |= 1u;
        LOBYTE(v151) = v151 | 1;
        v142 = 0;
        v150 = v70;
        goto LABEL_48;
      }
    }
    operator delete(v71);
    goto LABEL_89;
  }
  v5 = *(_QWORD *)(a2 + 40);
  v6 = (unsigned int)(a3 - 4);
  if ( v6 >= (*(_QWORD *)(a2 + 48) - v5) >> 4 )
  {
    v14 = std::_V2::generic_category(a1);
    v15 = (_BYTE *)operator new(0x16u);
    v16 = _mm_load_si128((const __m128i *)&xmmword_23AAF70);
    v15[20] = 114;
    *((_DWORD *)v15 + 4) = 1700949365;
    v15[21] = 0;
    *(__m128i *)v15 = v16;
    v150 = v15;
    *(_QWORD *)&v152 = 21;
    v151 = 21;
    sub_22205D0(v147, &v150, 84, v14);
    if ( v150 != &v152 )
      operator delete(v150);
    *((_BYTE *)a1 + 8) |= 1u;
    v141 |= 1u;
    v140 = nullptr;
    *(void **)a1 = v147[0];
    goto LABEL_15;
  }
  v7 = *(_DWORD **)(v5 + 16 * v6);
  v141 &= ~1u;
  v140 = v7;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(*(_QWORD *)v7 + 8LL) & 1) != 0 )
  {
    LODWORD(v120) = *(_DWORD *)v8;
  }
  else
  {
    if ( (((*(_BYTE *)(v8 + 8) >> 1) + 5) & 5) == 0 )
    {
      v29 = std::_V2::generic_category(a1);
      v150 = &v152;
      v30 = (__m128i *)operator new(0x2Cu);
      *v30 = _mm_load_si128((const __m128i *)&xmmword_23AAF80);
      v31 = _mm_load_si128((const __m128i *)&xmmword_23AAF90);
      strcpy(v30[2].m128i_i8, "y or a Blob");
      v30[1] = v31;
      v150 = v30;
      *(_QWORD *)&v152 = 43;
      v151 = 43;
      sub_22205D0(v147, &v150, 84, v29);
      if ( v150 != &v152 )
        operator delete(v150);
      *((_BYTE *)a1 + 8) |= 1u;
      *(void **)a1 = v147[0];
      goto LABEL_15;
    }
    v128 = (__int64 *)&v150;
    sub_2021430((unsigned __int64)&v150, a2, (__int64 *)v8);
    if ( (v151 & 1) != 0 )
    {
      v37 = v150;
      *((_BYTE *)a1 + 8) |= 1u;
      v150 = nullptr;
      *(_QWORD *)a1 = v37;
      sub_A0AE70((__int64 *)&v150);
      goto LABEL_15;
    }
    LODWORD(v120) = (_DWORD)v150;
    sub_A0AE70(v128);
  }
  v9 = v7[2];
  if ( v9 <= 1 )
    goto LABEL_27;
  LODWORD(v10) = 1;
  while ( 1 )
  {
    v11 = *(_QWORD *)v7 + 16LL * (unsigned int)v10;
    if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
      goto LABEL_26;
    v12 = (*(_BYTE *)(v11 + 8) >> 1) & 7;
    if ( v12 == 3 )
    {
      v19 = (unsigned __int64)&v142;
      sub_20227D0((__int64)&v142, a2);
      if ( (v143 & 1) != 0 )
      {
LABEL_136:
        v112 = v142;
        v142 = 0;
        *((_BYTE *)v3 + 8) |= 1u;
        *(_QWORD *)v3 = v112;
        goto LABEL_40;
      }
      v33 = v142;
      v10 = (unsigned int)(v10 + 1);
      v34 = *(_QWORD *)v7 + 16 * v10;
      v35 = (*(_BYTE *)(v34 + 8) >> 1) & 7;
      switch ( v35 )
      {
        case 2:
          if ( !(_DWORD)v142 )
            goto LABEL_25;
          LODWORD(v121) = v10;
          v100 = v142;
          v133 = v9;
          v101 = (unsigned int *)v34;
          while ( 1 )
          {
            sub_2020960((unsigned __int64)&v150, a2, *v101);
            if ( (v151 & 1) != 0 )
              break;
            sub_A0AE70((__int64 *)&v150);
            if ( !--v100 )
            {
              LODWORD(v10) = v121;
              v9 = v133;
              goto LABEL_25;
            }
          }
          v116 = v150;
          *((_BYTE *)v3 + 8) |= 1u;
          v150 = nullptr;
          *(_QWORD *)v3 = v116;
          sub_A0AE70((__int64 *)&v150);
LABEL_40:
          sub_A0AE90((__int64 *)&v142);
          goto LABEL_15;
        case 4:
          v94 = *(_QWORD *)(a2 + 16);
          v95 = *(unsigned int *)(a2 + 32);
          *(_DWORD *)(a2 + 32) = 0;
          v96 = (unsigned int)(6 * v33) + 8 * v94 - v95;
          v97 = (v96 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(a2 + 16) = v97;
          v89 = v96 & 0x3F;
          if ( (v96 & 0x3F) == 0 )
            goto LABEL_25;
          v90 = *(_QWORD *)(a2 + 8);
          if ( v97 < v90 )
          {
            v98 = (std::_V2 **)(v97 + *(_QWORD *)a2);
            if ( v90 < v97 + 8 )
            {
              *(_QWORD *)(a2 + 24) = 0;
              v114 = v90 - v97;
              if ( !v114 )
                goto LABEL_144;
              v115 = 0;
              v19 = 0;
              while ( 1 )
              {
                v19 |= (unsigned __int64)*((unsigned __int8 *)v98 + v115) << (8 * (unsigned __int8)v115);
                *(_QWORD *)(a2 + 24) = v19;
                if ( v114 - 1 == v115 )
                  break;
                ++v115;
              }
              v99 = 8 * v114;
              *(_DWORD *)(a2 + 32) = 8 * v114;
              *(_QWORD *)(a2 + 16) = v114 + v97;
              if ( v89 > 8 * v114 )
                goto LABEL_144;
            }
            else
            {
              v19 = (unsigned __int64)*v98;
              *(_QWORD *)(a2 + 16) = v97 + 8;
              v99 = 64;
            }
            LOBYTE(v151) = v151 & 0xFE;
            *(_DWORD *)(a2 + 32) = v99 - v89;
            *(_QWORD *)(a2 + 24) = v19 >> v89;
            v80 = 64 - v89;
            goto LABEL_103;
          }
LABEL_138:
          v121 = v90;
          v119 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)&v142);
          v152 = 0;
          v128 = (__int64 *)&v150;
          v144[0] = (std::_V2 *)&v145;
          v144[1] = nullptr;
          LOBYTE(v145) = 0;
          LODWORD(v151) = 0;
          v154 = 0;
          v155 = 1;
          v153 = 0;
          v150 = &off_2BEBE68;
          v156 = v144;
          sub_227B8B0(&v150, 0, 0, 0);
          v148 = v121;
          v120 = "Unexpected end of file reading %u of %u bytes";
          *(__m128 *)v147 = _mm_loadh_ps((const double *)&v120);
LABEL_133:
          v109 = *(_QWORD *)(a2 + 16);
          v110 = v128;
          v149 = v109;
          sub_227C560(v128, v147);
          v150 = &off_2BEBE68;
          sub_227B7A0(v110);
          v150 = v144;
          LOWORD(v153) = 260;
          v111 = v110;
          v107 = operator new(0x40u);
          sub_2220590(v107, v111, 5, v119);
          v108 = v144[0];
          if ( (int *)v144[0] == &v145 )
            goto LABEL_131;
          break;
        case 1:
          v84 = *(_QWORD *)(a2 + 16);
          v85 = *(_QWORD *)v34 * (unsigned int)v142;
          v86 = *(unsigned int *)(a2 + 32);
          *(_DWORD *)(a2 + 32) = 0;
          v87 = 8 * v84 - v86;
          v88 = ((unsigned __int64)(v87 + v85) >> 3) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(a2 + 16) = v88;
          v89 = ((_BYTE)v87 + (_BYTE)v85) & 0x3F;
          if ( (((_BYTE)v87 + (_BYTE)v85) & 0x3F) == 0 )
            goto LABEL_25;
          v90 = *(_QWORD *)(a2 + 8);
          if ( v88 >= v90 )
            goto LABEL_138;
          v91 = (unsigned __int64 *)(v88 + *(_QWORD *)a2);
          if ( v90 >= v88 + 8 )
          {
            v92 = *v91;
            *(_QWORD *)(a2 + 16) = v88 + 8;
            v93 = 64;
LABEL_111:
            *(_DWORD *)(a2 + 32) = v93 - v89;
            *(_QWORD *)(a2 + 24) = v92 >> v89;
            LOBYTE(v151) = v151 & 0xFE;
            v150 = (void *)((0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v89)) & v92);
            sub_A0AE70((__int64 *)&v150);
            goto LABEL_25;
          }
          *(_QWORD *)(a2 + 24) = 0;
          v19 = (unsigned int)(v90 - v88);
          if ( (_DWORD)v90 != (_DWORD)v88 )
          {
            v113 = 0;
            v92 = 0;
            while ( 1 )
            {
              v92 |= (unsigned __int64)*((unsigned __int8 *)v91 + v113) << (8 * (unsigned __int8)v113);
              *(_QWORD *)(a2 + 24) = v92;
              if ( (_DWORD)v19 - 1 == v113 )
                break;
              ++v113;
            }
            v93 = 8 * v19;
            v19 = (unsigned int)v19;
            *(_DWORD *)(a2 + 32) = 8 * v19;
            *(_QWORD *)(a2 + 16) = (unsigned int)v19 + v88;
            if ( v89 > 8 * (int)v19 )
              goto LABEL_144;
            goto LABEL_111;
          }
          *(_QWORD *)(a2 + 16) = v88;
          *(_DWORD *)(a2 + 32) = 0;
LABEL_144:
          LODWORD(v121) = v89;
          v118 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)v19);
          v152 = 0;
          v128 = (__int64 *)&v150;
          v147[0] = &v148;
          v147[1] = nullptr;
          LOBYTE(v148) = 0;
          LODWORD(v151) = 0;
          v154 = 0;
          v155 = 1;
          v153 = 0;
          v150 = &off_2BEBE68;
          v156 = v147;
          sub_227B8B0(&v150, 0, 0, 0);
          v145 = v121;
          v120 = "Unexpected end of file reading %u of %u bits";
          *(__m128 *)v144 = _mm_loadh_ps((const double *)&v120);
LABEL_129:
          v104 = *(_DWORD *)(a2 + 32);
          v105 = v128;
          v146 = v104;
          sub_227C560(v128, v144);
          v150 = &off_2BEBE68;
          sub_227B7A0(v105);
          v150 = v147;
          LOWORD(v153) = 260;
          v106 = v105;
          v107 = operator new(0x40u);
          sub_2220590(v107, v106, 5, v118);
          v108 = (std::_V2 *)v147[0];
          if ( v147[0] == &v148 )
          {
LABEL_131:
            LOBYTE(v151) = v151 | 1;
            v150 = nullptr;
            sub_A0AE70(v128);
            *((_BYTE *)v3 + 8) |= 1u;
            *(_QWORD *)v3 = v107;
            goto LABEL_40;
          }
          break;
        default:
          sub_2020880((std::_V2 *)&v150, "Array element type can't be an Array or a Blob");
          v36 = v150;
          *((_BYTE *)v3 + 8) |= 1u;
          *(_QWORD *)v3 = v36;
          goto LABEL_40;
      }
      operator delete(v108);
      goto LABEL_131;
    }
    if ( v12 == 5 )
      break;
    sub_2021430((unsigned __int64)&v150, a2, (__int64 *)v11);
    if ( (v151 & 1) != 0 )
    {
      v13 = v150;
      *((_BYTE *)v3 + 8) |= 1u;
      v150 = nullptr;
      *(_QWORD *)v3 = v13;
      sub_A0AE70((__int64 *)&v150);
      goto LABEL_15;
    }
    sub_A0AE70((__int64 *)&v150);
LABEL_26:
    LODWORD(v10) = v10 + 1;
    if ( (unsigned int)v10 >= v9 )
      goto LABEL_27;
  }
  v19 = (unsigned __int64)&v142;
  sub_20227D0((__int64)&v142, a2);
  if ( (v143 & 1) != 0 )
    goto LABEL_136;
  v20 = *(_DWORD *)(a2 + 32);
  v21 = v142;
  v22 = 0;
  v23 = 0;
  if ( v20 > 0x1F )
  {
    v22 = 32;
    *(_QWORD *)(a2 + 24) >>= (unsigned __int8)v20 - 32;
    v23 = 32;
  }
  v24 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 32) = v23;
  v25 = 32 * ((v21 != 0) + ((v21 - (unsigned int)(v21 != 0)) >> 2)) + 8LL * *(_QWORD *)(a2 + 16) - v22;
  if ( v25 >> 3 <= v24 )
  {
    v26 = (v25 >> 3) & 0xFFFFFFFFFFFFFFF8LL;
    *(_DWORD *)(a2 + 32) = 0;
    *(_QWORD *)(a2 + 16) = v26;
    v27 = v25 & 0x3F;
    if ( (v25 & 0x3F) == 0 )
    {
LABEL_25:
      sub_A0AE90((__int64 *)&v142);
      goto LABEL_26;
    }
    if ( v24 > v26 )
    {
      v78 = (std::_V2 **)(v26 + *(_QWORD *)a2);
      if ( v24 >= v26 + 8 )
      {
        v19 = (unsigned __int64)*v78;
        *(_QWORD *)(a2 + 16) = v26 + 8;
        v79 = 64;
        goto LABEL_102;
      }
      *(_QWORD *)(a2 + 24) = 0;
      v102 = v24 - v26;
      if ( !v102 )
        goto LABEL_128;
      v103 = 0;
      v19 = 0;
      while ( 1 )
      {
        v19 |= (unsigned __int64)*((unsigned __int8 *)v78 + v103) << (8 * (unsigned __int8)v103);
        *(_QWORD *)(a2 + 24) = v19;
        if ( v102 - 1 == v103 )
          break;
        ++v103;
      }
      v79 = 8 * v102;
      *(_DWORD *)(a2 + 32) = 8 * v102;
      *(_QWORD *)(a2 + 16) = v102 + v26;
      if ( v27 > 8 * v102 )
      {
LABEL_128:
        LODWORD(v121) = v25 & 0x3F;
        v118 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)v19);
        v152 = 0;
        v147[0] = &v148;
        v147[1] = nullptr;
        LOBYTE(v148) = 0;
        LODWORD(v151) = 0;
        v154 = 0;
        v155 = 1;
        v153 = 0;
        v150 = &off_2BEBE68;
        v156 = v147;
        v128 = (__int64 *)&v150;
        sub_227B8B0(&v150, 0, 0, 0);
        v145 = v121;
        v120 = "Unexpected end of file reading %u of %u bits";
        *(__m128 *)v144 = _mm_loadh_ps((const double *)&v120);
        goto LABEL_129;
      }
LABEL_102:
      LOBYTE(v151) = v151 & 0xFE;
      *(_DWORD *)(a2 + 32) = v79 - v27;
      *(_QWORD *)(a2 + 24) = v19 >> v27;
      v80 = 64 - v27;
LABEL_103:
      v150 = (void *)((0xFFFFFFFFFFFFFFFFLL >> v80) & v19);
      sub_A0AE70((__int64 *)&v150);
      goto LABEL_25;
    }
    v121 = v24;
    v119 = (std::_V2 *)std::_V2::generic_category((std::_V2 *)&v142);
    v152 = 0;
    v144[0] = (std::_V2 *)&v145;
    v144[1] = nullptr;
    LOBYTE(v145) = 0;
    LODWORD(v151) = 0;
    v154 = 0;
    v155 = 1;
    v153 = 0;
    v150 = &off_2BEBE68;
    v156 = v144;
    v128 = (__int64 *)&v150;
    sub_227B8B0(&v150, 0, 0, 0);
    v148 = v121;
    v120 = "Unexpected end of file reading %u of %u bytes";
    *(__m128 *)v147 = _mm_loadh_ps((const double *)&v120);
    goto LABEL_133;
  }
  *(_QWORD *)(a2 + 16) = v24;
  sub_A0AE90((__int64 *)&v142);
LABEL_27:
  v28 = (int)v120;
  *((_BYTE *)v3 + 8) &= ~1u;
  *(_DWORD *)v3 = v28;
LABEL_15:
  sub_201FFA0((__int64 *)&v140);
  return v3;
}
