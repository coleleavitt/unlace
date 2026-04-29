unsigned __int64 __fastcall sub_31A040(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __m128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  char v11; // r13
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // esi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r8
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  int v22; // r12d
  unsigned __int64 v23; // rcx
  _DWORD *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  _DWORD *v27; // rdx
  int v28; // r15d
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  int *v32; // rax
  __int64 v33; // r8
  int *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // r9
  _DWORD *v37; // rdx
  _DWORD *v38; // r9
  __m128 *v39; // rdx
  __int64 *v40; // rcx
  __int64 v41; // r15
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  unsigned int *v47; // r12
  char v48; // r15
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // r15
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rax
  __int64 v55; // rax
  int *v56; // rsi
  int *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // r9
  __int64 v60; // r9
  _DWORD *v61; // rdx
  _DWORD *v62; // r9
  int v63; // eax
  size_t v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  __int64 v69; // r15
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // r9d
  __int64 v79; // r15
  __int64 v80; // r13
  __int64 v81; // r15
  void *v82; // rax
  int v83; // r12d
  __int64 v84; // r12
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  int v88; // r9d
  __int64 v89; // r13
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // r9d
  _QWORD *v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r15
  unsigned __int64 v97; // r12
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rdx
  char v101; // al
  __int64 v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rax
  unsigned __int64 v105; // r15
  char v106; // r15
  int v107; // edx
  void *v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rax
  __int64 v111; // [rsp+0h] [rbp-270h]
  __int64 v112; // [rsp+8h] [rbp-268h]
  unsigned __int64 **v113; // [rsp+10h] [rbp-260h]
  size_t v114; // [rsp+48h] [rbp-228h]
  size_t n; // [rsp+50h] [rbp-220h]
  __int64 nb; // [rsp+50h] [rbp-220h]
  __int64 na; // [rsp+50h] [rbp-220h]
  _QWORD *v118; // [rsp+58h] [rbp-218h]
  unsigned __int64 v119; // [rsp+58h] [rbp-218h]
  _QWORD *v120; // [rsp+60h] [rbp-210h]
  __int64 v121; // [rsp+60h] [rbp-210h]
  _QWORD *v122; // [rsp+68h] [rbp-208h]
  _QWORD *v123; // [rsp+70h] [rbp-200h]
  unsigned __int64 v124; // [rsp+78h] [rbp-1F8h]
  __int64 v125[2]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v126; // [rsp+90h] [rbp-1E0h] BYREF
  __int128 v127; // [rsp+98h] [rbp-1D8h]
  __int64 v128[2]; // [rsp+B0h] [rbp-1C0h] BYREF
  void *v129; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v130; // [rsp+C8h] [rbp-1A8h]
  __int64 v131[2]; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v132; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v133; // [rsp+F8h] [rbp-178h]
  __int64 v134[2]; // [rsp+110h] [rbp-160h] BYREF
  __int64 v135; // [rsp+120h] [rbp-150h] BYREF
  __int128 v136; // [rsp+128h] [rbp-148h]
  __int64 v137[2]; // [rsp+140h] [rbp-130h] BYREF
  __int64 v138; // [rsp+150h] [rbp-120h] BYREF
  __int128 v139; // [rsp+158h] [rbp-118h]
  __int64 v140[2]; // [rsp+170h] [rbp-100h] BYREF
  __int64 *v141; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v142; // [rsp+188h] [rbp-E8h]
  __int64 v143; // [rsp+1A0h] [rbp-D0h] BYREF
  __int128 v144; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v145; // [rsp+1B8h] [rbp-B8h]
  __int64 v146[2]; // [rsp+1D0h] [rbp-A0h] BYREF
  void *src; // [rsp+1E0h] [rbp-90h] BYREF
  __int128 v148; // [rsp+1E8h] [rbp-88h]
  _DWORD *v149; // [rsp+200h] [rbp-70h] BYREF
  __m128 v150; // [rsp+208h] [rbp-68h] BYREF
  __int128 v151; // [rsp+218h] [rbp-58h]
  __int64 v152; // [rsp+228h] [rbp-48h]
  unsigned __int64 v153; // [rsp+238h] [rbp-38h]

  v153 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v2 + 4) < 0 )
    return v153 - __readfsqword(0x28u);
  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v2, (__m128i)(unsigned __int64)a1);
  *(__m128 *)(a2 + 8) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && *(_QWORD *)(v6 + 16) != a1 )
    sub_316740(a2, 0xC698u);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 && *(_QWORD *)(v7 + 8) != a1 )
    sub_316740(a2, 0xC699u);
  v8 = *(_DWORD *)(a1 + 72);
  if ( (v6 == 0) != (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == v8) )
    sub_316740(a2, 0xC69Au);
  if ( (v7 == 0) != (v8 == 0) )
    sub_316740(a2, 0xC69Bu);
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 > 0x7FFFF )
    sub_316740(a2, 0xC69Cu);
  if ( (v9 & 0x680) == 0 )
    sub_316740(a2, 0xC69Du);
  v122 = (_QWORD *)(a1 + 120);
  v123 = (_QWORD *)(a1 + 160);
  if ( !(unsigned __int8)sub_60620((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160))
    || (v113 = (unsigned __int64 **)(a1 + 176),
        v111 = a1 + 136,
        !(unsigned __int8)sub_3131C0((__int64 *)(a1 + 176), a1 + 136)) )
  {
    sub_316740(a2, 0xC69Eu);
  }
  v120 = (_QWORD *)(a1 + 200);
  v118 = (_QWORD *)(a1 + 240);
  if ( !(unsigned __int8)sub_60620((_QWORD *)(a1 + 200), (_QWORD *)(a1 + 240))
    || (v112 = a1 + 216, (v11 = sub_3131C0((__int64 *)(a1 + 256), a1 + 216)) == 0) )
  {
    sub_316740(a2, 0xC69Fu);
  }
  v12 = *(_DWORD *)(a1 + 72);
  if ( !v12 || (v13 = *(_DWORD *)(a1 + 76), v13 == 1) || v13 == 6 )
  {
    if ( *(_QWORD *)(a1 + 48) && (**(_BYTE **)(a1 + 64) & 4) == 0 )
      sub_316740(a2, 0xCA66u);
    if ( !(unsigned __int8)sub_60680(v122)
      || *(_QWORD *)(a1 + 144)
      || !(unsigned __int8)sub_60680(v120)
      || *(_QWORD *)(a1 + 224) )
    {
      sub_316740(a2, 0xC6A0u);
    }
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( !(unsigned __int8)sub_60680(v118) || *(_QWORD *)(a1 + 264) )
        sub_316740(a2, 0xC6A2u);
    }
    else if ( !(unsigned __int8)sub_60680(v123) || *(_QWORD *)(a1 + 184) )
    {
      sub_316740(a2, 0xC6A1u);
    }
    v12 = *(_DWORD *)(a1 + 72);
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v14 + 64) <= v12 )
    sub_316740(a2, 0xC6A3u);
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8LL * v12) != a1 )
    sub_316740(a2, 0xC6A4u);
  v15 = *(_QWORD *)(a1 + 328);
  if ( v15 && v15 < *(_QWORD *)(v14 + 152) )
    sub_316740(a2, 0xC6A5u);
  v16 = *(_DWORD *)(a1 + 24);
  if ( (v16 & 0x40000) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 512);
    if ( !v17 )
      sub_316740(a2, 0xCDF9u);
    if ( v17 >= *(_QWORD *)(v14 + 1480) )
      sub_316740(a2, 0xCDFAu);
    v18 = *(_QWORD *)(a1 + 520);
    if ( v18 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v14 + 1472) + 40 * v17);
      v20 = v19[1];
      v21 = v19[2];
      if ( v18 != v21 + v20 && (v18 < v20 || !v21 || v21 + v20 - 1 < v18) )
        sub_316740(a2, 0xCDFBu);
      if ( (signed __int64)v18 < v19[3] )
        sub_316740(a2, 0xCDFCu);
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    switch ( *(_DWORD *)(a1 + 76) )
    {
      case 1:
        if ( (v16 & 0x200) != 0 )
          goto LABEL_98;
        if ( (*(_DWORD *)v14 & 0x1000) != 0 )
          sub_316740(a2, 0xC880u);
        v52 = *(_QWORD *)(a1 + 56);
        if ( v52 )
          goto LABEL_99;
        v26 = *(_QWORD *)(a1 + 376);
        v53 = v26;
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v149 = nullptr;
        v150 = 0;
LABEL_136:
        if ( !v53 )
          goto LABEL_137;
        goto LABEL_186;
      case 2:
      case 6:
LABEL_98:
        v52 = *(_QWORD *)(a1 + 56);
        if ( v52 )
        {
LABEL_99:
          if ( *(_DWORD *)v52 != 53 )
          {
            v26 = *(_QWORD *)(a1 + 376);
            v53 = v26;
            if ( !(_DWORD)v26 )
            {
LABEL_101:
              v5 = 0;
              v149 = nullptr;
              v150 = 0;
LABEL_125:
              switch ( *(_DWORD *)v52 )
              {
                case '*':
                case '+':
                case ',':
                case '-':
                case '.':
                case '/':
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                  v22 = v12 + 1;
                  v149 = (_DWORD *)qvector_reserve(&v149, 0, 1, 4);
                  v149[v150.m128_u64[0]] = v22;
                  v23 = v150.m128_u64[0];
                  v24 = v149;
                  v25 = *(_QWORD *)(a1 + 56);
                  v26 = v150.m128_u64[0] + 1;
                  v27 = &v149[++v150.m128_u64[0]];
                  v28 = *(_DWORD *)(v25 + 72);
                  if ( v149 == v27 )
                    goto LABEL_248;
                  v29 = v149;
                  while ( v28 != *v29 )
                  {
                    if ( v27 == ++v29 )
                      goto LABEL_248;
                  }
                  if ( v27 != v29 )
                    goto LABEL_52;
LABEL_248:
                  if ( v150.m128_u64[1] < v23 + 2 )
                  {
                    v149 = (_DWORD *)qvector_reserve(&v149, v149, v23 + 2, 4);
                    v27 = &v149[v150.m128_u64[0]];
                  }
                  *v27 = v28;
                  goto LABEL_185;
                case '5':
                  if ( *(_BYTE *)(v52 + 48) != 12 )
                    sub_316740(a2, 0xC6ABu);
                  v81 = *(_QWORD *)(v52 + 56);
                  v124 = *(_QWORD *)(v81 + 32);
                  if ( !v124 )
                  {
                    v149 = nullptr;
                    v5 = 0;
                    v150 = 0;
LABEL_174:
                    if ( v26 )
                      goto LABEL_138;
                    goto LABEL_59;
                  }
                  v108 = (void *)qalloc_or_throw(4 * v124);
                  v24 = memcpy(v108, *(const void **)(v81 + 24), 4 * v124);
                  v110 = *(_QWORD *)(a1 + 376);
                  v26 = v124;
                  v149 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v124, (__m128i)v124);
                  v150 = v5;
LABEL_180:
                  if ( v26 != v110 )
                    goto LABEL_138;
                  goto LABEL_54;
                case '6':
                case ':':
                  goto LABEL_174;
                case '7':
                  if ( *(_BYTE *)(v52 + 32) != 7 )
                    goto LABEL_137;
                  v83 = *(_DWORD *)(v52 + 40);
                  goto LABEL_184;
                case '>':
                  if ( !v26 )
                    goto LABEL_59;
                  v82 = (void *)qalloc_or_throw(4 * v26);
                  v24 = memcpy(v82, *(const void **)(a1 + 368), 4 * v26);
                  v110 = *(_QWORD *)(a1 + 376);
                  v149 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
                  v150 = v5;
                  goto LABEL_180;
                default:
                  goto LABEL_136;
              }
            }
LABEL_111:
            sub_316740(a2, 0xC6A8u);
          }
LABEL_128:
          sub_316740(a2, 0xC6A7u);
        }
        v26 = *(_QWORD *)(a1 + 376);
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v149 = nullptr;
        v150 = 0;
LABEL_137:
        if ( !v26 )
          goto LABEL_59;
        break;
      case 3:
        v52 = *(_QWORD *)(a1 + 56);
        if ( !v52 )
          goto LABEL_110;
        if ( (unsigned int)(*(_DWORD *)v52 - 56) <= 1 )
        {
          if ( (unsigned __int8)sub_118550(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 2) )
            sub_316740(a2, 0xCA3Eu);
          v26 = *(_QWORD *)(a1 + 376);
          if ( !(_DWORD)v26 || (v12 = *(_DWORD *)(a1 + 72), v56 = *(int **)(a1 + 368), v12 + 1 != *v56) )
            sub_316740(a2, 0xC6A6u);
          v52 = *(_QWORD *)(a1 + 56);
          v107 = *(_DWORD *)(a1 + 76);
          if ( v52 )
          {
            if ( (v107 == 5) != (*(_DWORD *)v52 == 53) )
              goto LABEL_128;
          }
          else if ( v107 == 5 )
          {
            goto LABEL_128;
          }
          v53 = *(_QWORD *)(a1 + 376);
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
        }
        else
        {
          if ( *(_DWORD *)v52 == 53 )
            goto LABEL_128;
LABEL_110:
          v26 = *(_QWORD *)(a1 + 376);
          v53 = v26;
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
LABEL_115:
          v56 = *(int **)(a1 + 368);
        }
        v57 = &v56[v53];
        do
        {
          v58 = *v56;
          if ( (int)v58 < 0 || (v59 = *(_QWORD *)(a1 + 64), *(_DWORD *)(v59 + 64) <= (int)v58) )
            sub_316740(a2, 0xC6A9u);
          v60 = *(_QWORD *)(*(_QWORD *)(v59 + 528) + 8 * v58);
          v61 = *(_DWORD **)(v60 + 344);
          v62 = &v61[*(_QWORD *)(v60 + 352)];
          if ( v61 == v62 )
LABEL_281:
            sub_316740(a2, 0xC6AAu);
          while ( *(_DWORD *)(a1 + 72) != *v61 )
          {
            if ( v62 == ++v61 )
              goto LABEL_281;
          }
          ++v56;
        }
        while ( v57 != v56 );
        v5 = 0;
        v149 = nullptr;
        v150 = 0;
        if ( v52 )
          goto LABEL_125;
LABEL_186:
        v83 = v12 + 1;
LABEL_184:
        v149 = (_DWORD *)qvector_reserve(&v149, 0, 1, 4);
        v149[v150.m128_u64[0]] = v83;
LABEL_185:
        v24 = v149;
        v26 = ++v150.m128_u64[0];
LABEL_52:
        if ( *(_QWORD *)(a1 + 376) == v26 )
        {
          if ( !v26 )
          {
LABEL_57:
            if ( v24 )
            {
              v150.m128_u64[0] = 0;
              qfree(v24);
            }
            goto LABEL_59;
          }
LABEL_54:
          v30 = 0;
          while ( v24[v30] == *(_DWORD *)(*(_QWORD *)(a1 + 368) + 4 * v30) )
          {
            if ( ++v30 == v26 )
              goto LABEL_57;
          }
        }
        break;
      case 4:
        v52 = *(_QWORD *)(a1 + 56);
        if ( v52 && *(_DWORD *)v52 == 53 )
          goto LABEL_128;
        v26 = *(_QWORD *)(a1 + 376);
        v53 = v26;
        if ( (_DWORD)v26 != 2 )
          goto LABEL_111;
        goto LABEL_115;
      case 5:
        v26 = *(_QWORD *)(a1 + 376);
        v52 = *(_QWORD *)(a1 + 56);
        v53 = v26;
        if ( !v52 || *(_DWORD *)v52 != 53 )
          goto LABEL_128;
        if ( (int)v26 > 0 )
          goto LABEL_115;
        goto LABEL_101;
      default:
        sub_316740(a2, 0xCA67u);
    }
LABEL_138:
    sub_316740(a2, 0xC6ACu);
  }
LABEL_59:
  v31 = *(_QWORD *)(a1 + 352);
  if ( (int)v31 <= 0 )
  {
    v150.m128_i32[0] = 0;
    v42 = nullptr;
    v150.m128_u64[1] = 0;
    *(_QWORD *)&v151 = &v150;
    *((_QWORD *)&v151 + 1) = &v150;
    v152 = 0;
  }
  else
  {
    v32 = *(int **)(a1 + 344);
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 528LL);
    v34 = v32;
    v35 = (__int64)&v32[(unsigned int)(v31 - 1) + 1];
    do
    {
      v36 = *(_QWORD *)(v33 + 8LL * *v34);
      v37 = *(_DWORD **)(v36 + 368);
      v38 = &v37[*(_QWORD *)(v36 + 376)];
      if ( v37 == v38 )
LABEL_273:
        sub_316740(a2, 0xC6ADu);
      while ( *(_DWORD *)(a1 + 72) != *v37 )
      {
        if ( v38 == ++v37 )
          goto LABEL_273;
      }
      ++v34;
    }
    while ( (int *)v35 != v34 );
    v39 = &v150;
    v40 = (__int64 *)&v149;
    v150.m128_i32[0] = 0;
    v41 = 0;
    v150.m128_u64[1] = 0;
    *(_QWORD *)&v151 = &v150;
    *((_QWORD *)&v151 + 1) = &v150;
    v152 = 0;
    while ( 1 )
    {
      LODWORD(v146[0]) = v32[v41];
      sub_BF9C0(&v149, (int *)v146, (__int64)v39, (__int64)v40, v33);
      if ( !(_BYTE)v39 )
        sub_316740(a2, 0xC6AEu);
      if ( *(_DWORD *)(a1 + 352) <= (int)++v41 )
        break;
      v32 = *(int **)(a1 + 344);
    }
    v42 = (_QWORD *)v150.m128_u64[1];
  }
  sub_316460(v42);
  v47 = *(unsigned int **)(a1 + 48);
  if ( !v47 )
    goto LABEL_291;
  v48 = 0;
  do
  {
    *(_QWORD *)(a2 + 24) = v47;
    sub_319510(v47, (_QWORD *)a2, 1, v5, v44, v45, v46);
    if ( *(unsigned int **)(a1 + 56) == v47 )
    {
      v48 = v11;
    }
    else if ( (unsigned __int8)sub_329E00(*v47, *((_BYTE *)v47 + 64) == 0) )
    {
      sub_316740(a2, 0xC6B0u);
    }
    v49 = *(_DWORD *)(a1 + 24);
    if ( (v49 & 0x10) == 0 )
    {
      v44 = *v47;
      if ( (unsigned int)(v44 - 59) <= 1 )
        sub_316740(a2, 0xC6B1u);
    }
    v47 = *((unsigned int **)v47 + 1);
  }
  while ( v47 );
  v43 = *(_QWORD *)(a1 + 48);
  if ( !v43 )
  {
LABEL_291:
    if ( *(_QWORD *)(a1 + 56) )
      sub_316740(a2, 0xC6B8u);
    goto LABEL_130;
  }
  if ( !v48 )
    sub_316740(a2, 0xC6B2u);
  if ( *(_QWORD *)(v43 + 16) )
    sub_316740(a2, 0xC6B3u);
  v44 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v44 + 8) )
    sub_316740(a2, 0xC6B4u);
  v50 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)v50 & 2) == 0 )
  {
    v44 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 32) >= v44 && (v49 & 2) == 0 )
      sub_316740(a2, 0xC6B5u);
    if ( v44 != -1 )
    {
      v54 = sub_11E7A0(*(_QWORD *)(a1 + 48));
      v50 = *(_QWORD *)(a1 + 64);
      if ( !v54 || (*(_BYTE *)(v50 + 1) & 4) == 0 || (*(_BYTE *)(v50 + 755) & 0x20) != 0 )
        goto LABEL_131;
      v55 = sub_32BF20(v50, *(_QWORD *)(a1 + 40));
      if ( !(unsigned __int8)sub_32D8E0(*(_QWORD *)(a1 + 64) + 8LL, v55 - 1) )
        sub_316740(a2, 0xC6B6u);
LABEL_130:
      v50 = *(_QWORD *)(a1 + 64);
LABEL_131:
      v49 = *(_DWORD *)(a1 + 24);
    }
  }
  if ( (v49 & 0x600) == 0x200 && (*(_BYTE *)(v50 + 2) & 0x18) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v63 = *(_DWORD *)(a1 + 76);
      if ( v63 != 6 && v63 != 1 )
      {
        v64 = *(_QWORD *)(a1 + 48);
        v125[0] = 0;
        v125[1] = 0;
        v114 = v64;
        v126 = 0;
        v128[0] = 0;
        v128[1] = 0;
        v129 = nullptr;
        v131[0] = 0;
        v131[1] = 0;
        v132 = 0;
        v134[0] = 0;
        v134[1] = 0;
        v135 = 0;
        v137[0] = 0;
        v137[1] = 0;
        v138 = 0;
        v127 = 0;
        v130 = 0;
        v133 = 0;
        v136 = 0;
        v139 = 0;
        if ( v64 )
        {
          do
          {
            if ( *(char *)(v114 + 4) >= 0 )
            {
              sub_120480((__int64)v140, a1, v114, 1u);
              if ( !(unsigned __int8)sub_60680(v140) || v142 )
              {
                sub_60440(v137, v140, v65, v66, v67, v68);
                sub_312EE0(&v138, (__int64)&v141);
                v69 = *(_QWORD *)(a1 + 64);
                sub_5FE00((__int64 *)&v149, (__int64)v128);
                v70 = v130;
                v150.m128_u64[1] = 0;
                v151 = 0;
                if ( (_QWORD)v130 )
                {
                  na = 16 * v130;
                  v150.m128_u64[1] = qalloc_or_throw(16 * v130);
                  *((_QWORD *)&v151 + 1) = v70;
                  memcpy((void *)v150.m128_u64[1], v129, na);
                  *(_QWORD *)&v151 = v70;
                }
                sub_313340(&v150.m128_i64[1], (__m128i **)(v69 + 208));
                sub_60440(v140, (__int64 *)&v149, v71, v72, v73, v74);
                sub_312EE0((__int64 *)&v141, (__int64)&v150.m128_i64[1]);
                if ( v150.m128_u64[1] )
                {
                  *(_QWORD *)&v151 = 0;
                  qfree(v150.m128_u64[1]);
                }
                qfree(v149);
                sub_60080(v125, v140);
                sub_311F30(&v126, &v141);
                sub_120480((__int64)&v149, a1, v114, 0);
                sub_60440((__int64 *)&v149, v128, v75, v76, v77, v78);
                sub_312EE0(&v150.m128_i64[1], (__int64)&v129);
                sub_60080(v131, (__int64 *)&v149);
                sub_311F30(&v132, (__int64 **)&v150.m128_u64[1]);
                if ( v150.m128_u64[1] )
                {
                  *(_QWORD *)&v151 = 0;
                  qfree(v150.m128_u64[1]);
                }
                qfree(v149);
              }
              sub_123820((__int64)&v143, a1, v114, 1u);
              if ( !(unsigned __int8)sub_60680(&v143) || v145 )
              {
                sub_60080(v128, &v143);
                sub_311F30((__int64 *)&v129, (__int64 **)&v144 + 1);
                sub_123820((__int64)v146, a1, v114, 0);
                sub_60080(v134, v146);
                sub_311F30(&v135, (__int64 **)&src);
                v79 = *(_QWORD *)(a1 + 64);
                sub_5FE00((__int64 *)&v149, (__int64)v146);
                v80 = v148;
                v150.m128_u64[1] = 0;
                v151 = 0;
                if ( (_QWORD)v148 )
                {
                  nb = 16 * v148;
                  v150.m128_u64[1] = qalloc_or_throw(16 * v148);
                  *((_QWORD *)&v151 + 1) = v80;
                  memcpy((void *)v150.m128_u64[1], src, nb);
                  *(_QWORD *)&v151 = v80;
                }
                sub_313340(&v150.m128_i64[1], (__m128i **)(v79 + 208));
                sub_60080(v137, (__int64 *)&v149);
                sub_311F30(&v138, (__int64 **)&v150.m128_u64[1]);
                if ( v150.m128_u64[1] )
                {
                  *(_QWORD *)&v151 = 0;
                  qfree(v150.m128_u64[1]);
                }
                qfree(v149);
                if ( src )
                {
                  *(_QWORD *)&v148 = 0;
                  qfree(src);
                }
                qfree(v146[0]);
              }
              if ( *((_QWORD *)&v144 + 1) )
              {
                v145 = 0;
                qfree(*((_QWORD *)&v144 + 1));
              }
              qfree(v143);
              if ( v141 )
              {
                v142 = 0;
                qfree(v141);
              }
              qfree(v140[0]);
            }
            v114 = *(_QWORD *)(v114 + 8);
          }
          while ( v114 );
          v50 = *(_QWORD *)(a1 + 64);
        }
        v84 = *(_QWORD *)(v50 + 1504);
        sub_60440(v134, (__int64 *)(v84 + 104), v43, v44, v45, v46);
        sub_312EE0(&v135, v84 + 120);
        sub_60440(v128, (__int64 *)(v84 + 104), v85, v86, v87, v88);
        sub_312EE0((__int64 *)&v129, v84 + 120);
        n = *(_QWORD *)(a1 + 64);
        sub_5FE00((__int64 *)&v149, v84 + 104);
        v150.m128_u64[1] = 0;
        v151 = 0;
        v89 = *(_QWORD *)(v84 + 128);
        if ( v89 )
        {
          v150.m128_u64[1] = qalloc_or_throw(16 * v89);
          *((_QWORD *)&v151 + 1) = v89;
          memcpy((void *)v150.m128_u64[1], *(const void **)(v84 + 120), 16 * v89);
          *(_QWORD *)&v151 = v89;
        }
        sub_313340(&v150.m128_i64[1], (__m128i **)(n + 208));
        sub_60440(v137, (__int64 *)&v149, v90, v91, v92, v93);
        sub_312EE0(&v138, (__int64)&v150.m128_i64[1]);
        if ( v150.m128_u64[1] )
        {
          *(_QWORD *)&v151 = 0;
          qfree(v150.m128_u64[1]);
        }
        qfree(v149);
        if ( sub_11EA30((__int64)v125, (__int64)v123) )
          sub_316740(a2, 0xC6B9u);
        if ( sub_11EA30((__int64)v128, (__int64)v118) )
          sub_316740(a2, 0xC6BAu);
        if ( sub_11EA30((__int64)v131, (__int64)v122) )
          sub_316740(a2, 0xC6BBu);
        if ( sub_11EA30((__int64)v134, (__int64)v120) )
          sub_316740(a2, 0xC6BCu);
        if ( sub_11EA30((__int64)v137, a1 + 280) )
          sub_316740(a2, 0xC6BDu);
        v94 = *(_QWORD **)(a1 + 64);
        v95 = v94[184];
        v96 = v94[180];
        v97 = *(_QWORD *)(v95 + 8);
        v148 = 0;
        v146[0] = 0;
        v146[1] = 0;
        src = nullptr;
        if ( v97 + v96 - 1 >= v96 )
        {
          src = (void *)qvector_reserve(&src, 0, 1, 16);
          *((__m128i *)src + v148) = _mm_unpacklo_epi64((__m128i)v96, (__m128i)v97);
          v94 = *(_QWORD **)(a1 + 64);
          *(_QWORD *)&v148 = v148 + 1;
          v95 = v94[184];
        }
        v121 = v95 + 40LL * *(_QWORD *)(a1 + 512);
        if ( v94[185] > 1u )
        {
          v98 = *(int *)(v94[188] + 80LL);
          v99 = v96 + *(_QWORD *)(v121 + 8);
          if ( v98 > v99 )
            v98 = v96 + *(_QWORD *)(v121 + 8);
          v150.m128_u64[0] = v98 + *(_QWORD *)(v121 + 16);
          v149 = (_DWORD *)(v99 - v98);
          sub_312E50((__int64 *)&src, (__m128i *)&v149);
        }
        if ( (unsigned __int8)sub_3136F0((unsigned __int64 **)&src, v111)
          && !(unsigned __int8)sub_F44C0(*(_QWORD *)(a1 + 64)) )
        {
          sub_316740(a2, 0xCDF4u);
        }
        if ( !(unsigned __int8)sub_3136F0((unsigned __int64 **)&src, v112) )
          goto LABEL_226;
        v100 = *(_QWORD *)(a1 + 56);
        if ( !v100 )
          sub_316740(a2, 0xCE75u);
        v119 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL);
        if ( *(_QWORD *)(v121 + 8) >= v119 && *(_DWORD *)v100 == 55 )
        {
          v101 = *(_BYTE *)(v100 + 32);
          if ( v101 != 7 )
          {
            if ( v101 != 6 )
              goto LABEL_279;
            v102 = *(_QWORD *)(a1 + 64);
            v103 = *(_QWORD *)(v100 + 40);
            if ( v103 == *(_QWORD *)(v102 + 40) || !(unsigned __int8)sub_32D8E0(v102 + 8, v103) )
              goto LABEL_279;
            v100 = *(_QWORD *)(a1 + 56);
          }
          v104 = sub_124F50(a1, v146, v100, 0, nullptr, 0, 0x101u);
          if ( v104 && *(_QWORD *)(v104 + 24) == *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) )
          {
            sub_123820((__int64)&v149, a1, v104, 0);
            sub_313340(&v150.m128_i64[1], (__m128i **)&src);
            v105 = *(_QWORD *)(v121 + 8) + v96;
            v143 = 0;
            v144 = 0;
            if ( v105 - 1 >= v105 - v119 )
            {
              v143 = qvector_reserve(&v143, 0, 1, 16);
              v109 = (_QWORD *)(16 * v144 + v143);
              *v109 = v105 - v119;
              v109[1] = v119;
              *(_QWORD *)&v144 = v144 + 1;
            }
            sub_312EE0((__int64 *)&src, (__int64)&v143);
            v106 = 0;
            if ( !(unsigned __int8)sub_3136F0((unsigned __int64 **)&src, v112) )
              v106 = sub_3131C0(&v143, (__int64)&v150.m128_i64[1]);
            if ( v143 )
            {
              *(_QWORD *)&v144 = 0;
              qfree(v143);
            }
            if ( v150.m128_u64[1] )
            {
              *(_QWORD *)&v151 = 0;
              qfree(v150.m128_u64[1]);
            }
            qfree(v149);
            if ( v106 )
            {
LABEL_226:
              if ( src )
              {
                *(_QWORD *)&v148 = 0;
                qfree(src);
              }
              qfree(v146[0]);
              if ( v138 )
              {
                *(_QWORD *)&v139 = 0;
                qfree(v138);
              }
              qfree(v137[0]);
              if ( v135 )
              {
                *(_QWORD *)&v136 = 0;
                qfree(v135);
              }
              qfree(v134[0]);
              if ( v132 )
              {
                *(_QWORD *)&v133 = 0;
                qfree(v132);
              }
              qfree(v131[0]);
              if ( v129 )
              {
                *(_QWORD *)&v130 = 0;
                qfree(v129);
              }
              qfree(v128[0]);
              if ( v126 )
              {
                *(_QWORD *)&v127 = 0;
                qfree(v126);
              }
              qfree(v125[0]);
              v50 = *(_QWORD *)(a1 + 64);
              goto LABEL_89;
            }
          }
        }
LABEL_279:
        sub_316740(a2, 0xCDFDu);
      }
    }
  }
LABEL_89:
  v51 = *(_QWORD *)(v50 + 1504);
  if ( (unsigned __int8)sub_60580(v123, (_QWORD *)(v51 + 104)) || (unsigned __int8)sub_3136F0(v113, v51 + 120) )
    sub_316740(a2, 0xC6E8u);
  return v153 - __readfsqword(0x28u);
}
