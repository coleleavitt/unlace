unsigned __int64 __fastcall sub_31EDC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __m128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // eax
  char v11; // r13
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
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
  int *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r9
  _DWORD *v36; // rdx
  _DWORD *v37; // r9
  __int64 v38; // r15
  char v39; // dl
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  unsigned int *v45; // r12
  char v46; // r15
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 v50; // rax
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // r9
  __int64 v57; // r9
  _DWORD *v58; // rdx
  _DWORD *v59; // r9
  __int64 v60; // rdx
  int v61; // eax
  size_t v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // r15
  __m128i *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // r8d
  int v86; // r9d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r15
  __m128i *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r15
  void *v96; // rax
  int v97; // r12d
  __int64 v98; // r12
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // r9d
  __m128i *v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r13
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  int v109; // r9d
  _QWORD *v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // r15
  unsigned __int64 v113; // r12
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rdx
  __int64 v116; // rdx
  char v117; // al
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rax
  int v121; // r9d
  __m128i *v122; // rdx
  __int64 v123; // rcx
  unsigned __int64 v124; // r15
  char v125; // r15
  int v126; // edx
  void *v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  int v130; // [rsp-8h] [rbp-278h]
  __int64 v131; // [rsp+0h] [rbp-270h]
  __int64 v132; // [rsp+8h] [rbp-268h]
  unsigned __int64 **v133; // [rsp+10h] [rbp-260h]
  size_t v134; // [rsp+48h] [rbp-228h]
  size_t n; // [rsp+50h] [rbp-220h]
  __int64 nb; // [rsp+50h] [rbp-220h]
  __int64 na; // [rsp+50h] [rbp-220h]
  _QWORD *v138; // [rsp+58h] [rbp-218h]
  unsigned __int64 v139; // [rsp+58h] [rbp-218h]
  _QWORD *v140; // [rsp+60h] [rbp-210h]
  __int64 v141; // [rsp+60h] [rbp-210h]
  _QWORD *v142; // [rsp+68h] [rbp-208h]
  _QWORD *v143; // [rsp+70h] [rbp-200h]
  unsigned __int64 v144; // [rsp+78h] [rbp-1F8h]
  __int64 v145[2]; // [rsp+80h] [rbp-1F0h] BYREF
  __int64 v146; // [rsp+90h] [rbp-1E0h] BYREF
  __int128 v147; // [rsp+98h] [rbp-1D8h]
  __int64 v148[2]; // [rsp+B0h] [rbp-1C0h] BYREF
  void *v149; // [rsp+C0h] [rbp-1B0h] BYREF
  __int128 v150; // [rsp+C8h] [rbp-1A8h]
  __int64 v151[2]; // [rsp+E0h] [rbp-190h] BYREF
  __int64 v152; // [rsp+F0h] [rbp-180h] BYREF
  __int128 v153; // [rsp+F8h] [rbp-178h]
  __int64 v154[2]; // [rsp+110h] [rbp-160h] BYREF
  __int64 v155; // [rsp+120h] [rbp-150h] BYREF
  __int128 v156; // [rsp+128h] [rbp-148h]
  __int64 v157[2]; // [rsp+140h] [rbp-130h] BYREF
  __int64 v158; // [rsp+150h] [rbp-120h] BYREF
  __int128 v159; // [rsp+158h] [rbp-118h]
  __int64 v160[2]; // [rsp+170h] [rbp-100h] BYREF
  __int64 *v161; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v162; // [rsp+188h] [rbp-E8h]
  __int64 v163; // [rsp+1A0h] [rbp-D0h] BYREF
  __int128 v164; // [rsp+1A8h] [rbp-C8h] BYREF
  __int64 v165; // [rsp+1B8h] [rbp-B8h]
  __int64 v166[2]; // [rsp+1D0h] [rbp-A0h] BYREF
  void *src; // [rsp+1E0h] [rbp-90h] BYREF
  __int128 v168; // [rsp+1E8h] [rbp-88h]
  _DWORD *v169; // [rsp+200h] [rbp-70h] BYREF
  __m128 v170; // [rsp+208h] [rbp-68h] BYREF
  __int128 v171; // [rsp+218h] [rbp-58h]
  __int64 v172; // [rsp+228h] [rbp-48h]
  unsigned __int64 v173; // [rsp+238h] [rbp-38h]

  v173 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v2 + 4) < 0 )
    return v173 - __readfsqword(0x28u);
  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v2, (__m128i)(unsigned __int64)a1);
  *(__m128 *)(a2 + 8) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 && *(_QWORD *)(v6 + 16) != a1 )
    sub_31B4C0(a2, 0xC698u);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 && *(_QWORD *)(v7 + 8) != a1 )
    sub_31B4C0(a2, 0xC699u);
  v8 = *(_DWORD *)(a1 + 72);
  if ( (v6 == 0) != (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 == v8) )
    sub_31B4C0(a2, 0xC69Au);
  if ( (v7 == 0) != (v8 == 0) )
    sub_31B4C0(a2, 0xC69Bu);
  v9 = *(_DWORD *)(a1 + 24);
  if ( v9 > 0x7FFFF )
    sub_31B4C0(a2, 0xC69Cu);
  if ( (v9 & 0x680) == 0 )
    sub_31B4C0(a2, 0xC69Du);
  v142 = (_QWORD *)(a1 + 120);
  v143 = (_QWORD *)(a1 + 160);
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 120), (_QWORD *)(a1 + 160))
    || (v133 = (unsigned __int64 **)(a1 + 176),
        v131 = a1 + 136,
        !(unsigned __int8)sub_317F40((__int64 *)(a1 + 176), a1 + 136)) )
  {
    sub_31B4C0(a2, 0xC69Eu);
  }
  v140 = (_QWORD *)(a1 + 200);
  v138 = (_QWORD *)(a1 + 240);
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 200), (_QWORD *)(a1 + 240))
    || (v132 = a1 + 216, (v11 = sub_317F40((__int64 *)(a1 + 256), a1 + 216)) == 0) )
  {
    sub_31B4C0(a2, 0xC69Fu);
  }
  v12 = *(unsigned int *)(a1 + 72);
  if ( !(_DWORD)v12 || (v13 = *(_DWORD *)(a1 + 76), v13 == 1) || v13 == 6 )
  {
    if ( *(_QWORD *)(a1 + 48) && (**(_BYTE **)(a1 + 64) & 4) == 0 )
      sub_31B4C0(a2, 0xCA66u);
    if ( !(unsigned __int8)sub_64880(v142)
      || *(_QWORD *)(a1 + 144)
      || !(unsigned __int8)sub_64880(v140)
      || *(_QWORD *)(a1 + 224) )
    {
      sub_31B4C0(a2, 0xC6A0u);
    }
    if ( *(_DWORD *)(a1 + 72) )
    {
      if ( !(unsigned __int8)sub_64880(v138) || *(_QWORD *)(a1 + 264) )
        sub_31B4C0(a2, 0xC6A2u);
    }
    else if ( !(unsigned __int8)sub_64880(v143) || *(_QWORD *)(a1 + 184) )
    {
      sub_31B4C0(a2, 0xC6A1u);
    }
    v12 = *(unsigned int *)(a1 + 72);
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v14 + 64) <= (int)v12 )
    sub_31B4C0(a2, 0xC6A3u);
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 528) + 8LL * (int)v12) != a1 )
    sub_31B4C0(a2, 0xC6A4u);
  v15 = *(_QWORD *)(a1 + 328);
  if ( v15 && v15 < *(_QWORD *)(v14 + 152) )
    sub_31B4C0(a2, 0xC6A5u);
  v16 = *(unsigned int *)(a1 + 24);
  if ( (v16 & 0x40000) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 512);
    if ( !v17 )
      sub_31B4C0(a2, 0xCDF9u);
    if ( v17 >= *(_QWORD *)(v14 + 1480) )
      sub_31B4C0(a2, 0xCDFAu);
    v18 = *(_QWORD *)(a1 + 520);
    if ( v18 )
    {
      v19 = (_QWORD *)(*(_QWORD *)(v14 + 1472) + 40 * v17);
      v20 = v19[1];
      v21 = v19[2];
      if ( v18 != v21 + v20 && (v18 < v20 || !v21 || v21 + v20 - 1 < v18) )
        sub_31B4C0(a2, 0xCDFBu);
      if ( (signed __int64)v18 < v19[3] )
        sub_31B4C0(a2, 0xCDFCu);
    }
  }
  if ( *(_DWORD *)(a1 + 76) )
  {
    switch ( *(_DWORD *)(a1 + 76) )
    {
      case 1:
        v16 &= 0x200u;
        if ( (_DWORD)v16 )
          goto LABEL_98;
        if ( (*(_DWORD *)v14 & 0x1000) != 0 )
          sub_31B4C0(a2, 0xC880u);
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 )
          goto LABEL_99;
        v26 = *(_QWORD *)(a1 + 376);
        v51 = v26;
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v169 = nullptr;
        v170 = 0;
LABEL_136:
        if ( !v51 )
          goto LABEL_137;
        goto LABEL_186;
      case 2:
      case 6:
LABEL_98:
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 )
        {
LABEL_99:
          if ( *(_DWORD *)v50 != 53 )
          {
            v26 = *(_QWORD *)(a1 + 376);
            v51 = v26;
            if ( !(_DWORD)v26 )
            {
LABEL_101:
              v5 = 0;
              v169 = nullptr;
              v170 = 0;
LABEL_125:
              v60 = (unsigned int)(*(_DWORD *)v50 - 42);
              switch ( *(_DWORD *)v50 )
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
                  v169 = (_DWORD *)qvector_reserve((__int64)&v169, 0, 1, 4);
                  v169[v170.m128_u64[0]] = v22;
                  v23 = v170.m128_u64[0];
                  v24 = v169;
                  v25 = *(_QWORD *)(a1 + 56);
                  v26 = v170.m128_u64[0] + 1;
                  v27 = &v169[++v170.m128_u64[0]];
                  v28 = *(_DWORD *)(v25 + 72);
                  if ( v169 == v27 )
                    goto LABEL_248;
                  v29 = v169;
                  while ( v28 != *v29 )
                  {
                    if ( v27 == ++v29 )
                      goto LABEL_248;
                  }
                  if ( v27 != v29 )
                    goto LABEL_52;
LABEL_248:
                  if ( v170.m128_u64[1] < v23 + 2 )
                  {
                    v169 = (_DWORD *)qvector_reserve((__int64)&v169, (__int64)v169, v23 + 2, 4);
                    v27 = &v169[v170.m128_u64[0]];
                  }
                  *v27 = v28;
                  goto LABEL_185;
                case '5':
                  if ( *(_BYTE *)(v50 + 48) != 12 )
                    sub_31B4C0(a2, 0xC6ABu);
                  v95 = *(_QWORD *)(v50 + 56);
                  v144 = *(_QWORD *)(v95 + 32);
                  if ( !v144 )
                  {
                    v169 = nullptr;
                    v5 = 0;
                    v170 = 0;
LABEL_174:
                    if ( v26 )
                      goto LABEL_138;
                    goto LABEL_59;
                  }
                  v127 = (void *)qalloc_or_throw(4 * v144, v16, v60, v12);
                  v24 = memcpy(v127, *(const void **)(v95 + 24), 4 * v144);
                  v129 = *(_QWORD *)(a1 + 376);
                  v26 = v144;
                  v169 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v144, (__m128i)v144);
                  v170 = v5;
LABEL_180:
                  if ( v26 != v129 )
                    goto LABEL_138;
                  goto LABEL_54;
                case '6':
                case ':':
                  goto LABEL_174;
                case '7':
                  if ( *(_BYTE *)(v50 + 32) != 7 )
                    goto LABEL_137;
                  v97 = *(_DWORD *)(v50 + 40);
                  goto LABEL_184;
                case '>':
                  if ( !v26 )
                    goto LABEL_59;
                  v96 = (void *)qalloc_or_throw(4 * v26, v16, v60, v12);
                  v24 = memcpy(v96, *(const void **)(a1 + 368), 4 * v26);
                  v129 = *(_QWORD *)(a1 + 376);
                  v169 = v24;
                  v5 = (__m128)_mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
                  v170 = v5;
                  goto LABEL_180;
                default:
                  goto LABEL_136;
              }
            }
LABEL_111:
            sub_31B4C0(a2, 0xC6A8u);
          }
LABEL_128:
          sub_31B4C0(a2, 0xC6A7u);
        }
        v26 = *(_QWORD *)(a1 + 376);
        if ( (_DWORD)v26 )
          goto LABEL_111;
        v5 = 0;
        v169 = nullptr;
        v170 = 0;
LABEL_137:
        if ( !v26 )
          goto LABEL_59;
        break;
      case 3:
        v50 = *(_QWORD *)(a1 + 56);
        if ( !v50 )
          goto LABEL_110;
        if ( (unsigned int)(*(_DWORD *)v50 - 56) <= 1 )
        {
          if ( (unsigned __int8)sub_11C750(*(int **)(a1 + 56), *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 2) )
            sub_31B4C0(a2, 0xCA3Eu);
          v26 = *(_QWORD *)(a1 + 376);
          if ( !(_DWORD)v26
            || (v12 = *(unsigned int *)(a1 + 72), v16 = *(_QWORD *)(a1 + 368), (_DWORD)v12 + 1 != *(_DWORD *)v16) )
          {
            sub_31B4C0(a2, 0xC6A6u);
          }
          v50 = *(_QWORD *)(a1 + 56);
          v126 = *(_DWORD *)(a1 + 76);
          if ( v50 )
          {
            if ( (v126 == 5) != (*(_DWORD *)v50 == 53) )
              goto LABEL_128;
          }
          else if ( v126 == 5 )
          {
            goto LABEL_128;
          }
          v51 = *(_QWORD *)(a1 + 376);
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
        }
        else
        {
          if ( *(_DWORD *)v50 == 53 )
            goto LABEL_128;
LABEL_110:
          v26 = *(_QWORD *)(a1 + 376);
          v51 = v26;
          if ( (_DWORD)v26 != 1 )
            goto LABEL_111;
LABEL_115:
          v16 = *(_QWORD *)(a1 + 368);
        }
        v54 = v16 + 4LL * v51;
        do
        {
          v55 = *(int *)v16;
          if ( (int)v55 < 0 || (v56 = *(_QWORD *)(a1 + 64), *(_DWORD *)(v56 + 64) <= (int)v55) )
            sub_31B4C0(a2, 0xC6A9u);
          v57 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v55);
          v58 = *(_DWORD **)(v57 + 344);
          v59 = &v58[*(_QWORD *)(v57 + 352)];
          if ( v58 == v59 )
LABEL_281:
            sub_31B4C0(a2, 0xC6AAu);
          while ( *(_DWORD *)(a1 + 72) != *v58 )
          {
            if ( v59 == ++v58 )
              goto LABEL_281;
          }
          v16 += 4;
        }
        while ( v54 != v16 );
        v5 = 0;
        v169 = nullptr;
        v170 = 0;
        if ( v50 )
          goto LABEL_125;
LABEL_186:
        v97 = v12 + 1;
LABEL_184:
        v169 = (_DWORD *)qvector_reserve((__int64)&v169, 0, 1, 4);
        v169[v170.m128_u64[0]] = v97;
LABEL_185:
        v24 = v169;
        v26 = ++v170.m128_u64[0];
LABEL_52:
        if ( *(_QWORD *)(a1 + 376) == v26 )
        {
          if ( !v26 )
          {
LABEL_57:
            if ( v24 )
            {
              v170.m128_u64[0] = 0;
              qfree((__int64)v24);
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
        v50 = *(_QWORD *)(a1 + 56);
        if ( v50 && *(_DWORD *)v50 == 53 )
          goto LABEL_128;
        v26 = *(_QWORD *)(a1 + 376);
        v51 = v26;
        if ( (_DWORD)v26 != 2 )
          goto LABEL_111;
        goto LABEL_115;
      case 5:
        v26 = *(_QWORD *)(a1 + 376);
        v50 = *(_QWORD *)(a1 + 56);
        v51 = v26;
        if ( !v50 || *(_DWORD *)v50 != 53 )
          goto LABEL_128;
        if ( (int)v26 > 0 )
          goto LABEL_115;
        goto LABEL_101;
      default:
        sub_31B4C0(a2, 0xCA67u);
    }
LABEL_138:
    sub_31B4C0(a2, 0xC6ACu);
  }
LABEL_59:
  v31 = *(_QWORD *)(a1 + 352);
  if ( (int)v31 <= 0 )
  {
    v170.m128_i32[0] = 0;
    v40 = nullptr;
    v170.m128_u64[1] = 0;
    *(_QWORD *)&v171 = &v170;
    *((_QWORD *)&v171 + 1) = &v170;
    v172 = 0;
  }
  else
  {
    v32 = *(int **)(a1 + 344);
    v33 = v32;
    v34 = (__int64)&v32[(unsigned int)(v31 - 1) + 1];
    do
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 528LL) + 8LL * *v33);
      v36 = *(_DWORD **)(v35 + 368);
      v37 = &v36[*(_QWORD *)(v35 + 376)];
      if ( v36 == v37 )
LABEL_273:
        sub_31B4C0(a2, 0xC6ADu);
      while ( *(_DWORD *)(a1 + 72) != *v36 )
      {
        if ( v37 == ++v36 )
          goto LABEL_273;
      }
      ++v33;
    }
    while ( (int *)v34 != v33 );
    v170.m128_i32[0] = 0;
    v38 = 0;
    v170.m128_u64[1] = 0;
    *(_QWORD *)&v171 = &v170;
    *((_QWORD *)&v171 + 1) = &v170;
    v172 = 0;
    while ( 1 )
    {
      LODWORD(v166[0]) = v32[v38];
      sub_C3BC0(&v169, (int *)v166);
      if ( !v39 )
        sub_31B4C0(a2, 0xC6AEu);
      if ( *(_DWORD *)(a1 + 352) <= (int)++v38 )
        break;
      v32 = *(int **)(a1 + 344);
    }
    v40 = (_QWORD *)v170.m128_u64[1];
  }
  sub_31B1E0(v40);
  v45 = *(unsigned int **)(a1 + 48);
  if ( !v45 )
    goto LABEL_291;
  v46 = 0;
  do
  {
    *(_QWORD *)(a2 + 24) = v45;
    sub_31E290(v45, (_QWORD *)a2, 1, v5, v42, v43, v44);
    if ( *(unsigned int **)(a1 + 56) == v45 )
    {
      v46 = v11;
    }
    else if ( (unsigned __int8)sub_32ED40(*v45, *((_BYTE *)v45 + 64) == 0) )
    {
      sub_31B4C0(a2, 0xC6B0u);
    }
    v47 = *(_DWORD *)(a1 + 24);
    if ( (v47 & 0x10) == 0 )
    {
      v42 = *v45;
      if ( (unsigned int)(v42 - 59) <= 1 )
        sub_31B4C0(a2, 0xC6B1u);
    }
    v45 = *((unsigned int **)v45 + 1);
  }
  while ( v45 );
  v41 = *(_QWORD *)(a1 + 48);
  if ( !v41 )
  {
LABEL_291:
    if ( *(_QWORD *)(a1 + 56) )
      sub_31B4C0(a2, 0xC6B8u);
    goto LABEL_130;
  }
  if ( !v46 )
    sub_31B4C0(a2, 0xC6B2u);
  if ( *(_QWORD *)(v41 + 16) )
    sub_31B4C0(a2, 0xC6B3u);
  v42 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v42 + 8) )
    sub_31B4C0(a2, 0xC6B4u);
  v48 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)v48 & 2) == 0 )
  {
    v42 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 32) >= v42 && (v47 & 2) == 0 )
      sub_31B4C0(a2, 0xC6B5u);
    if ( v42 != -1 )
    {
      v52 = sub_1229A0(*(_QWORD *)(a1 + 48));
      v48 = *(_QWORD *)(a1 + 64);
      if ( !v52 || (*(_BYTE *)(v48 + 1) & 4) == 0 || (*(_BYTE *)(v48 + 755) & 0x20) != 0 )
        goto LABEL_131;
      v53 = sub_330F80(v48);
      if ( !(unsigned __int8)sub_332920(*(_QWORD *)(a1 + 64) + 8LL, v53 - 1) )
        sub_31B4C0(a2, 0xC6B6u);
LABEL_130:
      v48 = *(_QWORD *)(a1 + 64);
LABEL_131:
      v47 = *(_DWORD *)(a1 + 24);
    }
  }
  if ( (v47 & 0x600) == 0x200 && (*(_BYTE *)(v48 + 2) & 0x18) == 0 )
  {
    if ( *(_DWORD *)(a1 + 72) )
    {
      v61 = *(_DWORD *)(a1 + 76);
      if ( v61 != 6 && v61 != 1 )
      {
        v62 = *(_QWORD *)(a1 + 48);
        v145[0] = 0;
        v145[1] = 0;
        v134 = v62;
        v146 = 0;
        v148[0] = 0;
        v148[1] = 0;
        v149 = nullptr;
        v151[0] = 0;
        v151[1] = 0;
        v152 = 0;
        v154[0] = 0;
        v154[1] = 0;
        v155 = 0;
        v157[0] = 0;
        v157[1] = 0;
        v158 = 0;
        v147 = 0;
        v150 = 0;
        v153 = 0;
        v156 = 0;
        v159 = 0;
        if ( v62 )
        {
          do
          {
            if ( *(char *)(v134 + 4) >= 0 )
            {
              sub_124680((__int64)v160, a1, v134, 1u);
              if ( !(unsigned __int8)sub_64880(v160) || v162 )
              {
                sub_64640(v157, v160, v63, v64, v65, v66);
                sub_317C60(&v158, (__int64)&v161);
                v67 = *(_QWORD *)(a1 + 64);
                sub_64000((__int64 *)&v169, (__int64)v148);
                v70 = v150;
                v170.m128_u64[1] = 0;
                v171 = 0;
                if ( (_QWORD)v150 )
                {
                  na = 16 * v150;
                  v170.m128_u64[1] = qalloc_or_throw(16 * v150, (__int64)v148, 16 * v150, v69);
                  *((_QWORD *)&v171 + 1) = v70;
                  memcpy((void *)v170.m128_u64[1], v149, na);
                  *(_QWORD *)&v171 = v70;
                }
                sub_3180C0(&v170.m128_i64[1], v67 + 208, v68, v69);
                sub_64640(v160, (__int64 *)&v169, v71, v72, v73, v74);
                sub_317C60((__int64 *)&v161, (__int64)&v170.m128_i64[1]);
                if ( v170.m128_u64[1] )
                {
                  *(_QWORD *)&v171 = 0;
                  qfree(v170.m128_i64[1]);
                }
                qfree((__int64)v169);
                sub_64280(v145, v160);
                sub_316CB0(&v146, &v161, v75, v76);
                sub_124680((__int64)&v169, a1, v134, 0);
                sub_64640((__int64 *)&v169, v148, v77, v78, v79, v80);
                sub_317C60(&v170.m128_i64[1], (__int64)&v149);
                sub_64280(v151, (__int64 *)&v169);
                sub_316CB0(&v152, (__int64 **)&v170.m128_u64[1], v81, v82);
                if ( v170.m128_u64[1] )
                {
                  *(_QWORD *)&v171 = 0;
                  qfree(v170.m128_i64[1]);
                }
                qfree((__int64)v169);
              }
              sub_127A20((__int64)&v163, a1, v134, 1, v65, v66);
              if ( !(unsigned __int8)sub_64880(&v163) || v165 )
              {
                sub_64280(v148, &v163);
                sub_316CB0((__int64 *)&v149, (__int64 **)&v164 + 1, v83, v84);
                sub_127A20((__int64)v166, a1, v134, 0, v85, v86);
                sub_64280(v154, v166);
                sub_316CB0(&v155, (__int64 **)&src, v87, v88);
                v89 = *(_QWORD *)(a1 + 64);
                sub_64000((__int64 *)&v169, (__int64)v166);
                v92 = v168;
                v170.m128_u64[1] = 0;
                v171 = 0;
                if ( (_QWORD)v168 )
                {
                  nb = 16 * v168;
                  v170.m128_u64[1] = qalloc_or_throw(16 * v168, (__int64)v166, 16 * v168, v91);
                  *((_QWORD *)&v171 + 1) = v92;
                  memcpy((void *)v170.m128_u64[1], src, nb);
                  *(_QWORD *)&v171 = v92;
                }
                sub_3180C0(&v170.m128_i64[1], v89 + 208, v90, v91);
                sub_64280(v157, (__int64 *)&v169);
                sub_316CB0(&v158, (__int64 **)&v170.m128_u64[1], v93, v94);
                if ( v170.m128_u64[1] )
                {
                  *(_QWORD *)&v171 = 0;
                  qfree(v170.m128_i64[1]);
                }
                qfree((__int64)v169);
                if ( src )
                {
                  *(_QWORD *)&v168 = 0;
                  qfree((__int64)src);
                }
                qfree(v166[0]);
              }
              if ( *((_QWORD *)&v164 + 1) )
              {
                v165 = 0;
                qfree(*((__int64 *)&v164 + 1));
              }
              qfree(v163);
              if ( v161 )
              {
                v162 = 0;
                qfree((__int64)v161);
              }
              qfree(v160[0]);
            }
            v134 = *(_QWORD *)(v134 + 8);
          }
          while ( v134 );
          v48 = *(_QWORD *)(a1 + 64);
        }
        v98 = *(_QWORD *)(v48 + 1504);
        sub_64640(v154, (__int64 *)(v98 + 104), v41, v42, v43, v44);
        sub_317C60(&v155, v98 + 120);
        sub_64640(v148, (__int64 *)(v98 + 104), v99, v100, v101, v102);
        sub_317C60((__int64 *)&v149, v98 + 120);
        n = *(_QWORD *)(a1 + 64);
        sub_64000((__int64 *)&v169, v98 + 104);
        v170.m128_u64[1] = 0;
        v171 = 0;
        v105 = *(_QWORD *)(v98 + 128);
        if ( v105 )
        {
          v170.m128_u64[1] = qalloc_or_throw(16 * v105, v98 + 104, 16 * v105, v104);
          *((_QWORD *)&v171 + 1) = v105;
          memcpy((void *)v170.m128_u64[1], *(const void **)(v98 + 120), 16 * v105);
          *(_QWORD *)&v171 = v105;
        }
        sub_3180C0(&v170.m128_i64[1], n + 208, v103, v104);
        sub_64640(v157, (__int64 *)&v169, v106, v107, v108, v109);
        sub_317C60(&v158, (__int64)&v170.m128_i64[1]);
        if ( v170.m128_u64[1] )
        {
          *(_QWORD *)&v171 = 0;
          qfree(v170.m128_i64[1]);
        }
        qfree((__int64)v169);
        if ( sub_122C30((__int64)v145, (__int64)v143) )
          sub_31B4C0(a2, 0xC6B9u);
        if ( sub_122C30((__int64)v148, (__int64)v138) )
          sub_31B4C0(a2, 0xC6BAu);
        if ( sub_122C30((__int64)v151, (__int64)v142) )
          sub_31B4C0(a2, 0xC6BBu);
        if ( sub_122C30((__int64)v154, (__int64)v140) )
          sub_31B4C0(a2, 0xC6BCu);
        if ( sub_122C30((__int64)v157, a1 + 280) )
          sub_31B4C0(a2, 0xC6BDu);
        v110 = *(_QWORD **)(a1 + 64);
        v111 = v110[184];
        v112 = v110[180];
        v113 = *(_QWORD *)(v111 + 8);
        v168 = 0;
        v166[0] = 0;
        v166[1] = 0;
        src = nullptr;
        if ( v113 + v112 - 1 >= v112 )
        {
          src = (void *)qvector_reserve((__int64)&src, 0, 1, 16);
          *((__m128i *)src + v168) = _mm_unpacklo_epi64((__m128i)v112, (__m128i)v113);
          v110 = *(_QWORD **)(a1 + 64);
          *(_QWORD *)&v168 = v168 + 1;
          v111 = v110[184];
        }
        v141 = v111 + 40LL * *(_QWORD *)(a1 + 512);
        if ( v110[185] > 1u )
        {
          v114 = *(int *)(v110[188] + 80LL);
          v115 = v112 + *(_QWORD *)(v141 + 8);
          if ( v114 > v115 )
            v114 = v112 + *(_QWORD *)(v141 + 8);
          v170.m128_u64[0] = v114 + *(_QWORD *)(v141 + 16);
          v169 = (_DWORD *)(v115 - v114);
          sub_317BD0((__int64 *)&src, (__m128i *)&v169);
        }
        if ( (unsigned __int8)sub_318470((unsigned __int64 **)&src, v131)
          && !(unsigned __int8)sub_F86C0(*(_QWORD *)(a1 + 64)) )
        {
          sub_31B4C0(a2, 0xCDF4u);
        }
        if ( !(unsigned __int8)sub_318470((unsigned __int64 **)&src, v132) )
          goto LABEL_226;
        v116 = *(_QWORD *)(a1 + 56);
        if ( !v116 )
          sub_31B4C0(a2, 0xCE75u);
        v139 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 84LL);
        if ( *(_QWORD *)(v141 + 8) >= v139 && *(_DWORD *)v116 == 55 )
        {
          v117 = *(_BYTE *)(v116 + 32);
          if ( v117 != 7 )
          {
            if ( v117 != 6 )
              goto LABEL_279;
            v118 = *(_QWORD *)(a1 + 64);
            v119 = *(_QWORD *)(v116 + 40);
            if ( v119 == *(_QWORD *)(v118 + 40) || !(unsigned __int8)sub_332920(v118 + 8, v119) )
              goto LABEL_279;
            v116 = *(_QWORD *)(a1 + 56);
          }
          v120 = sub_129150(a1, v166, v116, 0, 0, 0, 0x101u);
          if ( v120 && *(_QWORD *)(v120 + 24) == *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL) )
          {
            sub_127A20((__int64)&v169, a1, v120, 0, v130, v121);
            sub_3180C0(&v170.m128_i64[1], (__int64)&src, v122, v123);
            v124 = *(_QWORD *)(v141 + 8) + v112;
            v163 = 0;
            v164 = 0;
            if ( v124 - 1 >= v124 - v139 )
            {
              v163 = qvector_reserve((__int64)&v163, 0, 1, 16);
              v128 = (_QWORD *)(16 * v164 + v163);
              *v128 = v124 - v139;
              v128[1] = v139;
              *(_QWORD *)&v164 = v164 + 1;
            }
            sub_317C60((__int64 *)&src, (__int64)&v163);
            v125 = 0;
            if ( !(unsigned __int8)sub_318470((unsigned __int64 **)&src, v132) )
              v125 = sub_317F40(&v163, (__int64)&v170.m128_i64[1]);
            if ( v163 )
            {
              *(_QWORD *)&v164 = 0;
              qfree(v163);
            }
            if ( v170.m128_u64[1] )
            {
              *(_QWORD *)&v171 = 0;
              qfree(v170.m128_i64[1]);
            }
            qfree((__int64)v169);
            if ( v125 )
            {
LABEL_226:
              if ( src )
              {
                *(_QWORD *)&v168 = 0;
                qfree((__int64)src);
              }
              qfree(v166[0]);
              if ( v158 )
              {
                *(_QWORD *)&v159 = 0;
                qfree(v158);
              }
              qfree(v157[0]);
              if ( v155 )
              {
                *(_QWORD *)&v156 = 0;
                qfree(v155);
              }
              qfree(v154[0]);
              if ( v152 )
              {
                *(_QWORD *)&v153 = 0;
                qfree(v152);
              }
              qfree(v151[0]);
              if ( v149 )
              {
                *(_QWORD *)&v150 = 0;
                qfree((__int64)v149);
              }
              qfree(v148[0]);
              if ( v146 )
              {
                *(_QWORD *)&v147 = 0;
                qfree(v146);
              }
              qfree(v145[0]);
              v48 = *(_QWORD *)(a1 + 64);
              goto LABEL_89;
            }
          }
        }
LABEL_279:
        sub_31B4C0(a2, 0xCDFDu);
      }
    }
  }
LABEL_89:
  v49 = *(_QWORD *)(v48 + 1504);
  if ( (unsigned __int8)sub_64780(v143, (_QWORD *)(v49 + 104)) || (unsigned __int8)sub_318470(v133, v49 + 120) )
    sub_31B4C0(a2, 0xC6E8u);
  return v173 - __readfsqword(0x28u);
}
