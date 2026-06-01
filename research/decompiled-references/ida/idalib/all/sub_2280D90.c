unsigned __int64 __fastcall sub_2280D90(__int64 a1, int a2)
{
  __int64 v4; // r12
  _BYTE *v5; // r13
  char *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 result; // rax
  char *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // al
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r13
  char *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r11
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r10d
  char v32; // si
  const unsigned __int16 **v33; // rax
  __int32 v34; // r10d
  const unsigned __int16 **v35; // rax
  int v36; // esi
  int v37; // edx
  const unsigned __int16 *v38; // rdi
  char *v39; // rsi
  int v40; // ecx
  char *v41; // rcx
  int v42; // edx
  _BYTE *v43; // rcx
  __m128i v44; // xmm0
  const unsigned __int16 **v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r14
  int v52; // eax
  int v53; // esi
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rsi
  _QWORD *v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __m128i v60; // xmm0
  __m128i v61; // xmm0
  __int64 v62; // rsi
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  int v69; // r8d
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rax
  int v92; // edi
  _QWORD *v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __m128i v99; // xmm0
  __int64 v100; // r13
  __m128i si128; // xmm3
  __int64 v102; // rcx
  unsigned __int64 v103; // rbx
  __m128i v104; // xmm1
  __int64 v105; // rcx
  unsigned __int64 v106; // rbx
  __m128i v107; // xmm0
  __int64 v108; // rsi
  unsigned __int64 v109; // rbx
  __m128i v110; // xmm0
  __int64 v111; // rsi
  unsigned __int64 v112; // r14
  __m128i v113; // xmm0
  __int64 v114; // rsi
  unsigned __int64 v115; // r14
  __m128i v116; // xmm0
  unsigned __int8 *v117; // rax
  __m128i v118; // xmm0
  __int64 v119; // rcx
  unsigned __int64 v120; // r14
  __m128i v121; // xmm0
  __int64 v122; // rdx
  int v123; // ecx
  void *v124; // rdi
  __m128i v125; // xmm0
  __m128i v126; // xmm1
  __m128i v127; // xmm0
  __m128i v128; // xmm0
  __m128i v129; // xmm0
  __int64 v130; // rax
  __int64 v131; // rdx
  __m128i v132; // xmm0
  __m128i v133; // xmm0
  __m128 v134; // [rsp+0h] [rbp-78h] BYREF
  char *v135; // [rsp+10h] [rbp-68h]
  int v136; // [rsp+1Ch] [rbp-5Ch]
  __int64 v137; // [rsp+20h] [rbp-58h]
  __int64 v138; // [rsp+28h] [rbp-50h]
  __m128i v139[4]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_BYTE **)(a1 + 8);
  v134.m128_u64[0] = (unsigned __int64)&unk_26FB347;
  v6 = *(char **)a1;
  v136 = 1;
  v137 = 0;
  v138 = 0;
  v139[0] = (__m128i)_mm_loadh_ps((const double *)v134.m128_u64);
  while ( 1 )
  {
    v7 = v4;
LABEL_3:
    result = v5 - v6;
    if ( v5 - v6 <= 0 )
      goto LABEL_27;
    result = (unsigned int)*v6;
    if ( *v6 != 124 )
      break;
    if ( v7 == v4 )
      goto LABEL_28;
    v69 = v136;
    v70 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a1 = v6 + 1;
    if ( v69 )
    {
      if ( v70 )
        goto LABEL_193;
      sub_227E170((__m128i *)a1, 2013265920, v7 - v4 + 1);
      v71 = *(_QWORD *)(a1 + 24);
      v72 = *(_QWORD *)(a1 + 72);
      v73 = *(_QWORD *)(v71 + 8 * v7);
      if ( v72 >= v4 )
        *(_QWORD *)(a1 + 72) = v72 + 1;
      v74 = *(_QWORD *)(a1 + 152);
      if ( v74 >= v4 )
        *(_QWORD *)(a1 + 152) = v74 + 1;
      v75 = *(_QWORD *)(a1 + 80);
      if ( v75 >= v4 )
        *(_QWORD *)(a1 + 80) = v75 + 1;
      v76 = *(_QWORD *)(a1 + 160);
      if ( v76 >= v4 )
        *(_QWORD *)(a1 + 160) = v76 + 1;
      v77 = *(_QWORD *)(a1 + 88);
      if ( v77 >= v4 )
        *(_QWORD *)(a1 + 88) = v77 + 1;
      v78 = *(_QWORD *)(a1 + 168);
      if ( v78 >= v4 )
        *(_QWORD *)(a1 + 168) = v78 + 1;
      v79 = *(_QWORD *)(a1 + 96);
      if ( v79 >= v4 )
        *(_QWORD *)(a1 + 96) = v79 + 1;
      v80 = *(_QWORD *)(a1 + 176);
      if ( v80 >= v4 )
        *(_QWORD *)(a1 + 176) = v80 + 1;
      v81 = *(_QWORD *)(a1 + 104);
      if ( v81 >= v4 )
        *(_QWORD *)(a1 + 104) = v81 + 1;
      v82 = *(_QWORD *)(a1 + 184);
      if ( v82 >= v4 )
        *(_QWORD *)(a1 + 184) = v82 + 1;
      v83 = *(_QWORD *)(a1 + 112);
      if ( v83 >= v4 )
        *(_QWORD *)(a1 + 112) = v83 + 1;
      v84 = *(_QWORD *)(a1 + 192);
      if ( v84 >= v4 )
        *(_QWORD *)(a1 + 192) = v84 + 1;
      v85 = *(_QWORD *)(a1 + 120);
      if ( v85 >= v4 )
        *(_QWORD *)(a1 + 120) = v85 + 1;
      v86 = *(_QWORD *)(a1 + 200);
      if ( v86 >= v4 )
        *(_QWORD *)(a1 + 200) = v86 + 1;
      v87 = *(_QWORD *)(a1 + 128);
      if ( v87 >= v4 )
        *(_QWORD *)(a1 + 128) = v87 + 1;
      v88 = *(_QWORD *)(a1 + 208);
      if ( v88 >= v4 )
        *(_QWORD *)(a1 + 208) = v88 + 1;
      v89 = *(_QWORD *)(a1 + 136);
      if ( v89 >= v4 )
        *(_QWORD *)(a1 + 136) = v89 + 1;
      v90 = *(_QWORD *)(a1 + 216);
      if ( v90 >= v4 )
        *(_QWORD *)(a1 + 216) = v90 + 1;
      memmove((void *)(v71 + 8 * v4 + 8), (const void *)(v71 + 8 * v4), 8 * (*(_QWORD *)(a1 + 40) + ~v4));
      v91 = *(_QWORD *)(a1 + 24);
      v137 = v4;
      v138 = v4;
      *(_QWORD *)(v91 + 8 * v4) = v73;
      v70 = *(_DWORD *)(a1 + 16);
      v7 = *(_QWORD *)(a1 + 40);
    }
    if ( v70 )
    {
LABEL_193:
      v138 = v7 - 1;
LABEL_194:
      v5 = *(_BYTE **)(a1 + 8);
      v6 = *(char **)a1;
      v4 = v7;
      v137 = v7;
      goto LABEL_184;
    }
    sub_227E170((__m128i *)a1, 0x80000000LL, v7 - v138);
    v7 = *(_QWORD *)(a1 + 40);
    v92 = *(_DWORD *)(a1 + 16);
    v138 = v7 - 1;
    if ( v92 )
      goto LABEL_194;
    v93 = *(_QWORD **)(a1 + 24);
    v93[v137] = (v7 - v137) | v93[v137] & 0xF8000000LL;
    v94 = *(_QWORD *)(a1 + 40);
    v95 = *(_QWORD *)(a1 + 32);
    v137 = v94;
    if ( v95 <= v94 )
    {
      v102 = (v95 + 1) / 2;
      v103 = 3 * v102;
      if ( v95 >= 3 * v102 )
      {
        v5 = *(_BYTE **)(a1 + 8);
        v6 = *(char **)a1;
        v96 = v137;
      }
      else if ( v103 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v93 = realloc(v93, 24 * v102);
        if ( v93 )
        {
          v96 = *(_QWORD *)(a1 + 40);
          v5 = *(_BYTE **)(a1 + 8);
          *(_QWORD *)(a1 + 24) = v93;
          *(_QWORD *)(a1 + 32) = v103;
          v6 = *(char **)a1;
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 16) )
            *(_DWORD *)(a1 + 16) = 12;
          v96 = *(_QWORD *)(a1 + 40);
          v134.m128_u64[0] = (unsigned __int64)byte_2D0ADA8;
          v126 = _mm_loadl_epi64((const __m128i *)&v134);
          v93 = *(_QWORD **)(a1 + 24);
          v6 = (char *)v126.m128i_i64[0];
          v5 = (_BYTE *)v126.m128i_i64[0];
          *(__m128i *)a1 = _mm_unpacklo_epi64(v126, v126);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 16) = 12;
        v96 = v137;
        v134.m128_u64[0] = (unsigned __int64)byte_2D0ADA8;
        v104 = _mm_loadl_epi64((const __m128i *)&v134);
        v6 = (char *)v104.m128i_i64[0];
        v5 = (_BYTE *)v104.m128i_i64[0];
        *(__m128i *)a1 = _mm_unpacklo_epi64(v104, v104);
      }
    }
    else
    {
      v5 = *(_BYTE **)(a1 + 8);
      v6 = *(char **)a1;
      v96 = v94;
    }
    *(_QWORD *)(a1 + 40) = v96 + 1;
    v93[v96] = 2281701376LL;
    v4 = *(_QWORD *)(a1 + 40);
LABEL_184:
    v136 = 0;
  }
  if ( (_DWORD)result == a2 )
    goto LABEL_27;
  v9 = v6 + 1;
  *(_QWORD *)a1 = v6 + 1;
  LODWORD(v10) = *v6;
  switch ( (char)v10 )
  {
    case '$':
      if ( *(_DWORD *)(a1 + 16) )
      {
        ++v6;
        v28 = v5 - v9;
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 32);
        v27 = *(_QWORD **)(a1 + 24);
        if ( v26 > v7 || (v114 = (v26 + 1) / 2, v115 = 3 * v114, v26 >= 3 * v114) )
        {
          v6 = v9;
          v28 = v5 - v9;
          v29 = v7;
        }
        else if ( v115 <= 0x1FFFFFFFFFFFFFFFLL )
        {
          v27 = realloc(*(void **)(a1 + 24), 24 * v114);
          if ( v27 )
          {
            v5 = *(_BYTE **)(a1 + 8);
            v29 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 32) = v115;
            v6 = *(char **)a1;
            *(_QWORD *)(a1 + 24) = v27;
            v28 = v5 - v6;
          }
          else
          {
            if ( !*(_DWORD *)(a1 + 16) )
              *(_DWORD *)(a1 + 16) = 12;
            v127 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            v6 = byte_2D0ADA8;
            v27 = *(_QWORD **)(a1 + 24);
            v28 = 0;
            v29 = *(_QWORD *)(a1 + 40);
            v5 = byte_2D0ADA8;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v127, v127);
          }
        }
        else
        {
          v116 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          v5 = byte_2D0ADA8;
          v29 = v7;
          v28 = 0;
          *(_DWORD *)(a1 + 16) = 12;
          v6 = byte_2D0ADA8;
          *(__m128i *)a1 = _mm_unpacklo_epi64(v116, v116);
        }
        *(_QWORD *)(a1 + 40) = v29 + 1;
        v27[v29] = 0x20000000;
      }
      v30 = *(_QWORD *)(a1 + 56);
      v31 = 0;
      *(_DWORD *)(v30 + 72) |= 2u;
      ++*(_DWORD *)(v30 + 80);
      goto LABEL_57;
    case '(':
      v20 = *(_DWORD *)(a1 + 16);
      if ( v5 - v9 <= 0 )
      {
        if ( !v20 )
        {
          *(_DWORD *)(a1 + 16) = 8;
          v20 = 8;
        }
        v98 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v98, v98);
      }
      v21 = *(_QWORD *)(a1 + 56);
      v22 = *(_QWORD *)(v21 + 112);
      v23 = v22 + 1;
      *(_QWORD *)(v21 + 112) = v22 + 1;
      if ( v22 + 1 <= 9 )
        *(_QWORD *)(a1 + 8 * v22 + 72) = v7;
      if ( !v20 )
        sub_227E170((__m128i *)a1, 1744830464, v22 + 1);
      if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) <= 0 || **(_BYTE **)a1 != 41 )
        sub_2280D90(a1, 41);
      if ( v23 <= 9 )
        *(_QWORD *)(a1 + 8 * v23 + 144) = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(a1 + 16) )
      {
        v5 = *(_BYTE **)(a1 + 8);
        v24 = *(char **)a1;
        if ( (__int64)&v5[-*(_QWORD *)a1] <= 0 )
          goto LABEL_51;
      }
      else
      {
        sub_227E170((__m128i *)a1, 1879048192, v23);
        v5 = *(_BYTE **)(a1 + 8);
        v24 = *(char **)a1;
        if ( (__int64)&v5[-*(_QWORD *)a1] <= 0 )
          goto LABEL_49;
      }
      v6 = v24 + 1;
      *(_QWORD *)a1 = v24 + 1;
      if ( *v24 == 41 )
        goto LABEL_89;
LABEL_49:
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 8;
LABEL_51:
      v25 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
      v7 = *(_QWORD *)(a1 + 40);
      *(__m128i *)a1 = _mm_unpacklo_epi64(v25, v25);
      goto LABEL_26;
    case ')':
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 8;
      goto LABEL_25;
    case '*':
    case '+':
    case '?':
      goto LABEL_23;
    case '.':
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 40LL) & 8) != 0 )
      {
        v134.m128_u64[0] = (unsigned __int64)v5;
        si128 = _mm_load_si128(v139);
        v135 = v6 + 1;
        *(__m128i *)a1 = si128;
        v134 = _mm_loadh_ps((const double *)v134.m128_u64);
        sub_227ECC0(a1);
        v31 = 0;
        v28 = v5 - v135;
        v6 = v135;
        *(__m128i *)a1 = _mm_load_si128((const __m128i *)&v134);
      }
      else
      {
        v31 = *(_DWORD *)(a1 + 16);
        if ( v31 )
        {
          ++v6;
          v31 = 0;
          v28 = v5 - v9;
        }
        else
        {
          v56 = *(_QWORD *)(a1 + 32);
          v57 = *(_QWORD **)(a1 + 24);
          if ( v56 > v7 || (v119 = (v56 + 1) / 2, v120 = 3 * v119, v56 >= 3 * v119) )
          {
            v6 = v9;
            v28 = v5 - v9;
            v58 = v7;
          }
          else if ( v120 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v124 = *(void **)(a1 + 24);
            v134.m128_i32[0] = *(_DWORD *)(a1 + 16);
            v57 = realloc(v124, 24 * v119);
            v31 = v134.m128_i32[0];
            if ( v57 )
            {
              v5 = *(_BYTE **)(a1 + 8);
              v58 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 32) = v120;
              v6 = *(char **)a1;
              *(_QWORD *)(a1 + 24) = v57;
              v28 = v5 - v6;
            }
            else
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 12;
              v133 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
              v6 = byte_2D0ADA8;
              v57 = *(_QWORD **)(a1 + 24);
              v28 = 0;
              v58 = *(_QWORD *)(a1 + 40);
              v5 = byte_2D0ADA8;
              *(__m128i *)a1 = _mm_unpacklo_epi64(v133, v133);
            }
          }
          else
          {
            v121 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            v5 = byte_2D0ADA8;
            v58 = v7;
            v28 = 0;
            *(_DWORD *)(a1 + 16) = 12;
            v6 = byte_2D0ADA8;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v121, v121);
          }
          *(_QWORD *)(a1 + 40) = v58 + 1;
          v57[v58] = 671088640;
        }
      }
      goto LABEL_57;
    case '[':
      sub_227ECC0(a1);
      goto LABEL_88;
    case '\\':
      if ( v5 - v9 <= 0 )
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 5;
        v99 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        v9 = byte_2D0ADA8;
        *(__m128i *)a1 = _mm_unpacklo_epi64(v99, v99);
      }
      *(_QWORD *)a1 = v9 + 1;
      v10 = *v9;
      if ( (unsigned __int8)(v10 - 49) > 8u )
        goto LABEL_87;
      v51 = a1 + 8 * v10;
      v52 = (char)v10;
      v53 = *(_DWORD *)(a1 + 16);
      v54 = *(_QWORD *)(v51 - 240);
      v55 = v52 - 48;
      if ( v54 )
      {
        v100 = v55;
        if ( !v53 )
        {
          sub_227E170((__m128i *)a1, 939524096, v55);
          v54 = *(_QWORD *)(v51 - 240);
        }
        sub_227E280(a1, *(_QWORD *)(v51 - 320) + 1LL, v54);
        if ( !*(_DWORD *)(a1 + 16) )
          sub_227E170((__m128i *)a1, 0x40000000, v100);
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 120LL) = 1;
LABEL_88:
        v5 = *(_BYTE **)(a1 + 8);
        v6 = *(char **)a1;
LABEL_89:
        v31 = 0;
        v28 = v5 - v6;
LABEL_57:
        if ( v28 <= 0 )
          goto LABEL_106;
        v32 = *v6;
        if ( (unsigned __int8)(*v6 - 42) <= 1u || v32 == 63 )
        {
          *(_QWORD *)a1 = ++v6;
          if ( !v31 )
          {
            if ( v32 == 43 )
            {
              v11 = *(_QWORD *)(a1 + 40);
              if ( *(_DWORD *)(a1 + 16) )
                goto LABEL_272;
              sub_227E390((__m128i *)a1, 1207959552, v11 - v7 + 1, v7);
              v13 = *(_QWORD *)(a1 + 40);
              v14 = v13 - v7;
              if ( !*(_DWORD *)(a1 + 16) )
              {
                v15 = 1342177280;
                goto LABEL_16;
              }
            }
            else
            {
              if ( v32 > 43 )
              {
                if ( v32 == 63 )
                {
                  v59 = *(_DWORD *)(a1 + 16);
                  goto LABEL_121;
                }
                if ( v32 == 123 )
                {
LABEL_64:
                  if ( v5 - v6 <= 0 )
                  {
                    v37 = 0;
LABEL_113:
                    if ( !*(_DWORD *)(a1 + 16) )
                      *(_DWORD *)(a1 + 16) = 10;
                    v61 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                    v40 = v37;
                    *(__m128i *)a1 = _mm_unpacklo_epi64(v61, v61);
                  }
                  else
                  {
                    v35 = __ctype_b_loc();
                    v36 = 0;
                    v37 = 0;
                    v38 = *v35;
                    while ( (v38[(unsigned __int8)*v6] & 0x800) != 0 )
                    {
                      if ( v37 > 255 )
                        goto LABEL_113;
                      ++v6;
                      ++v36;
                      *(_QWORD *)a1 = v6;
                      v37 = *(v6 - 1) + 10 * v37 - 48;
                      if ( v5 - v6 <= 0 )
                      {
                        if ( v37 > 255 )
                          goto LABEL_113;
                        v40 = v37;
                        goto LABEL_73;
                      }
                    }
                    if ( v36 <= 0 || v37 > 255 )
                      goto LABEL_113;
                    v39 = *(char **)a1;
                    v40 = v37;
                    if ( (__int64)&v5[-*(_QWORD *)a1] > 0 && *v39 == 44 )
                    {
                      v117 = (unsigned __int8 *)(v39 + 1);
                      v40 = 256;
                      *(_QWORD *)a1 = v39 + 1;
                      if ( (v38[(unsigned __int8)v39[1]] & 0x800) != 0 )
                      {
                        v40 = 0;
                        if ( v5 - v117 <= 0 )
                          goto LABEL_254;
                        while ( 1 )
                        {
                          *(_QWORD *)a1 = ++v117;
                          v40 = (char)*(v117 - 1) + 10 * v40 - 48;
                          if ( v5 - v117 <= 0 || (v38[*v117] & 0x800) == 0 )
                            break;
                          if ( v40 > 255 )
                            goto LABEL_254;
                        }
                        if ( v40 > 255 )
                        {
LABEL_254:
                          if ( !*(_DWORD *)(a1 + 16) )
                            *(_DWORD *)(a1 + 16) = 10;
                          v125 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                          *(__m128i *)a1 = _mm_unpacklo_epi64(v125, v125);
                        }
                        if ( v40 < v37 )
                        {
                          if ( !*(_DWORD *)(a1 + 16) )
                            *(_DWORD *)(a1 + 16) = 10;
                          v118 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                          *(__m128i *)a1 = _mm_unpacklo_epi64(v118, v118);
                        }
                      }
                    }
                  }
LABEL_73:
                  sub_227E650((__m128i *)a1, v7, v37, v40);
                  v5 = *(_BYTE **)(a1 + 8);
                  v41 = *(char **)a1;
                  if ( (__int64)&v5[-*(_QWORD *)a1] <= 0 )
                  {
                    v7 = *(_QWORD *)(a1 + 40);
                    if ( *(_DWORD *)(a1 + 16) )
                    {
LABEL_186:
                      v97 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                      *(__m128i *)a1 = _mm_unpacklo_epi64(v97, v97);
                      goto LABEL_25;
                    }
LABEL_79:
                    v44 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                    *(_DWORD *)(a1 + 16) = 9;
                    *(__m128i *)a1 = _mm_unpacklo_epi64(v44, v44);
                    goto LABEL_25;
                  }
                  v7 = *(_QWORD *)(a1 + 40);
                  if ( *v41 != 125 )
                  {
                    v42 = *(_DWORD *)(a1 + 16);
                    v43 = v41 + 1;
                    while ( 1 )
                    {
                      *(_QWORD *)a1 = v43;
                      if ( v5 - v43 <= 0 )
                        break;
                      if ( *v43++ == 125 )
                      {
                        if ( !v42 )
                          *(_DWORD *)(a1 + 16) = 10;
                        goto LABEL_25;
                      }
                    }
                    if ( v42 )
                      goto LABEL_186;
                    goto LABEL_79;
                  }
                  v6 = v41 + 1;
                  *(_QWORD *)a1 = v41 + 1;
                  v16 = v5 - (v41 + 1);
                  goto LABEL_17;
                }
LABEL_124:
                v7 = *(_QWORD *)(a1 + 40);
LABEL_118:
                v16 = v5 - v6;
                goto LABEL_17;
              }
              if ( v32 != 42 )
                goto LABEL_124;
              v11 = *(_QWORD *)(a1 + 40);
              if ( *(_DWORD *)(a1 + 16) )
              {
LABEL_272:
                v7 = v11;
                goto LABEL_118;
              }
              sub_227E390((__m128i *)a1, 1207959552, v11 - v7 + 1, v7);
              v12 = *(_QWORD *)(a1 + 40);
              if ( *(_DWORD *)(a1 + 16)
                || (sub_227E170((__m128i *)a1, 1342177280, *(_QWORD *)(a1 + 40) - v7),
                    v12 = *(_QWORD *)(a1 + 40),
                    *(_DWORD *)(a1 + 16)) )
              {
                v5 = *(_BYTE **)(a1 + 8);
                v6 = *(char **)a1;
                v7 = v12;
                goto LABEL_118;
              }
              sub_227E390((__m128i *)a1, 1476395008, *(_QWORD *)(a1 + 40) - v7 + 1, v7);
              v13 = *(_QWORD *)(a1 + 40);
              v14 = v13 - v7;
              if ( !*(_DWORD *)(a1 + 16) )
              {
                v15 = 1610612736;
LABEL_16:
                sub_227E170((__m128i *)a1, v15, v14);
                v5 = *(_BYTE **)(a1 + 8);
                v6 = *(char **)a1;
                v7 = *(_QWORD *)(a1 + 40);
                v16 = (__int64)&v5[-*(_QWORD *)a1];
                goto LABEL_17;
              }
            }
            v5 = *(_BYTE **)(a1 + 8);
            v6 = *(char **)a1;
            v7 = v13;
            v16 = (__int64)&v5[-*(_QWORD *)a1];
            goto LABEL_17;
          }
LABEL_107:
          v59 = *(_DWORD *)(a1 + 16);
          if ( !v59 )
          {
            *(_DWORD *)(a1 + 16) = 13;
            v59 = 13;
          }
          v60 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(__m128i *)a1 = _mm_unpacklo_epi64(v60, v60);
          if ( v32 == 43 )
          {
LABEL_117:
            v6 = byte_2D0ADA8;
            v7 = *(_QWORD *)(a1 + 40);
            v5 = byte_2D0ADA8;
            goto LABEL_118;
          }
          if ( v32 <= 43 )
          {
            if ( v32 == 42 )
              goto LABEL_117;
            goto LABEL_133;
          }
          if ( v32 == 63 )
          {
LABEL_121:
            v62 = *(_QWORD *)(a1 + 40);
            if ( v59
              || (sub_227E390((__m128i *)a1, 2013265920, *(_QWORD *)(a1 + 40) - v7 + 1, v7),
                  v62 = *(_QWORD *)(a1 + 40),
                  *(_DWORD *)(a1 + 16))
              || (sub_227E170((__m128i *)a1, 0x80000000LL, *(_QWORD *)(a1 + 40) - v7),
                  v62 = *(_QWORD *)(a1 + 40),
                  *(_DWORD *)(a1 + 16)) )
            {
              v5 = *(_BYTE **)(a1 + 8);
              v6 = *(char **)a1;
              v7 = v62;
              v16 = (__int64)&v5[-*(_QWORD *)a1];
              goto LABEL_17;
            }
            v63 = *(_QWORD **)(a1 + 24);
            v63[v7] = (*(_QWORD *)(a1 + 40) - v7) | v63[v7] & 0xF8000000LL;
            v64 = *(_QWORD *)(a1 + 40);
            v65 = *(_QWORD *)(a1 + 32);
            if ( v64 < v65 || (v108 = (v65 + 1) / 2, v109 = 3 * v108, v65 >= 3 * v108) )
            {
              *(_QWORD *)(a1 + 40) = v64 + 1;
              v63[v64] = 2281701376LL;
              v66 = *(_QWORD *)(a1 + 40) - 1LL;
LABEL_130:
              v63[v66] = v63[v66] & 0xF8000000LL | 1;
              v67 = *(_QWORD *)(a1 + 40);
              v68 = *(_QWORD *)(a1 + 32);
              if ( v67 >= v68 )
              {
                v105 = (v68 + 1) / 2;
                v106 = 3 * v105;
                if ( v68 < 3 * v105 )
                {
                  if ( v106 > 0x1FFFFFFFFFFFFFFFLL )
                  {
                    v107 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                    v6 = byte_2D0ADA8;
                    *(_DWORD *)(a1 + 16) = 12;
                    v16 = 0;
                    v5 = byte_2D0ADA8;
                    *(__m128i *)a1 = _mm_unpacklo_epi64(v107, v107);
                    goto LABEL_132;
                  }
                  v63 = realloc(v63, 24 * v105);
                  if ( !v63 )
                  {
                    if ( !*(_DWORD *)(a1 + 16) )
                      *(_DWORD *)(a1 + 16) = 12;
                    v128 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                    v6 = byte_2D0ADA8;
                    v63 = *(_QWORD **)(a1 + 24);
                    v16 = 0;
                    v67 = *(_QWORD *)(a1 + 40);
                    v5 = byte_2D0ADA8;
                    *(__m128i *)a1 = _mm_unpacklo_epi64(v128, v128);
                    goto LABEL_132;
                  }
                  *(_QWORD *)(a1 + 24) = v63;
                  v67 = *(_QWORD *)(a1 + 40);
                  *(_QWORD *)(a1 + 32) = v106;
                }
              }
              v5 = *(_BYTE **)(a1 + 8);
              v6 = *(char **)a1;
              v16 = (__int64)&v5[-*(_QWORD *)a1];
LABEL_132:
              *(_QWORD *)(a1 + 40) = v67 + 1;
              v63[v67] = 2415919106LL;
              v7 = *(_QWORD *)(a1 + 40);
              goto LABEL_17;
            }
            if ( v109 <= 0x1FFFFFFFFFFFFFFFLL )
            {
              v63 = realloc(v63, 24 * v108);
              if ( v63 )
              {
                v122 = *(_QWORD *)(a1 + 40);
                v123 = *(_DWORD *)(a1 + 16);
                *(_QWORD *)(a1 + 32) = v109;
                *(_QWORD *)(a1 + 24) = v63;
                *(_QWORD *)(a1 + 40) = v122 + 1;
                v63[v122] = 2281701376LL;
                v7 = *(_QWORD *)(a1 + 40);
                v66 = v7 - 1;
                if ( !v123 )
                  goto LABEL_130;
              }
              else
              {
                if ( !*(_DWORD *)(a1 + 16) )
                  *(_DWORD *)(a1 + 16) = 12;
                v130 = *(_QWORD *)(a1 + 40);
                v131 = *(_QWORD *)(a1 + 24);
                v132 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
                *(_QWORD *)(a1 + 40) = v130 + 1;
                *(__m128i *)a1 = _mm_unpacklo_epi64(v132, v132);
                *(_QWORD *)(v131 + 8 * v130) = 2281701376LL;
                v7 = *(_QWORD *)(a1 + 40);
              }
            }
            else
            {
              v110 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
              *(_DWORD *)(a1 + 16) = 12;
              *(_QWORD *)(a1 + 40) = v64 + 1;
              *(__m128i *)a1 = _mm_unpacklo_epi64(v110, v110);
              v63[v64] = 2281701376LL;
              v7 = *(_QWORD *)(a1 + 40);
            }
            v5 = *(_BYTE **)(a1 + 8);
            v6 = *(char **)a1;
            v16 = (__int64)&v5[-*(_QWORD *)a1];
LABEL_17:
            if ( v16 > 0 )
            {
              v17 = *v6;
              if ( (unsigned __int8)(*v6 - 42) <= 1u
                || v17 == 63
                || v16 != 1 && v17 == 123 && ((*__ctype_b_loc())[(unsigned __int8)v6[1]] & 0x800) != 0 )
              {
LABEL_23:
                if ( !*(_DWORD *)(a1 + 16) )
                  *(_DWORD *)(a1 + 16) = 13;
                goto LABEL_25;
              }
            }
          }
          else
          {
            v37 = 0;
            if ( v32 == 123 )
              goto LABEL_113;
LABEL_133:
            v6 = byte_2D0ADA8;
            v7 = *(_QWORD *)(a1 + 40);
            v5 = byte_2D0ADA8;
          }
        }
        else
        {
          if ( v32 == 123 && v28 != 1 )
          {
            LOBYTE(v135) = *v6;
            v134.m128_i32[0] = v31;
            v33 = __ctype_b_loc();
            v34 = v134.m128_i32[0];
            v32 = (char)v135;
            if ( ((*v33)[(unsigned __int8)v6[1]] & 0x800) != 0 )
            {
              *(_QWORD *)a1 = ++v6;
              if ( !v34 )
                goto LABEL_64;
              goto LABEL_107;
            }
          }
LABEL_106:
          v7 = *(_QWORD *)(a1 + 40);
        }
        goto LABEL_3;
      }
      if ( !v53 )
        *(_DWORD *)(a1 + 16) = 6;
LABEL_25:
      v18 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
      *(__m128i *)a1 = _mm_unpacklo_epi64(v18, v18);
LABEL_26:
      result = 0;
LABEL_27:
      if ( v7 == v4 )
      {
LABEL_28:
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 14;
        result = (unsigned __int64)byte_2D0ADA8;
        v134.m128_u64[0] = (unsigned __int64)byte_2D0ADA8;
        v19 = _mm_loadl_epi64((const __m128i *)&v134);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v19, v19);
      }
      if ( !v136 )
      {
        result = *(unsigned int *)(a1 + 16);
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v137) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v137) & 0xF8000000LL
                                                       | (v7 - v137);
          return (unsigned __int64)sub_227E170((__m128i *)a1, 2415919104LL, *(_QWORD *)(a1 + 40) - v138);
        }
      }
      return result;
    case '^':
      if ( *(_DWORD *)(a1 + 16) )
      {
        ++v6;
        v28 = v5 - v9;
      }
      else
      {
        v47 = *(_QWORD *)(a1 + 32);
        v48 = *(_QWORD **)(a1 + 24);
        if ( v47 > v7 || (v111 = (v47 + 1) / 2, v112 = 3 * v111, v47 >= 3 * v111) )
        {
          v6 = v9;
          v28 = v5 - v9;
          v49 = v7;
        }
        else if ( v112 <= 0x1FFFFFFFFFFFFFFFLL )
        {
          v48 = realloc(*(void **)(a1 + 24), 24 * v111);
          if ( v48 )
          {
            v5 = *(_BYTE **)(a1 + 8);
            v49 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 32) = v112;
            v6 = *(char **)a1;
            *(_QWORD *)(a1 + 24) = v48;
            v28 = v5 - v6;
          }
          else
          {
            if ( !*(_DWORD *)(a1 + 16) )
              *(_DWORD *)(a1 + 16) = 12;
            v129 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            v6 = byte_2D0ADA8;
            v48 = *(_QWORD **)(a1 + 24);
            v28 = 0;
            v49 = *(_QWORD *)(a1 + 40);
            v5 = byte_2D0ADA8;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v129, v129);
          }
        }
        else
        {
          v113 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          v5 = byte_2D0ADA8;
          v49 = v7;
          v28 = 0;
          *(_DWORD *)(a1 + 16) = 12;
          v6 = byte_2D0ADA8;
          *(__m128i *)a1 = _mm_unpacklo_epi64(v113, v113);
        }
        *(_QWORD *)(a1 + 40) = v49 + 1;
        v48[v49] = 402653184;
      }
      v50 = *(_QWORD *)(a1 + 56);
      v31 = 1;
      *(_DWORD *)(v50 + 72) |= 1u;
      ++*(_DWORD *)(v50 + 76);
      goto LABEL_57;
    case '{':
      if ( v5 - v9 > 0 )
      {
        v134.m128_i8[0] = *v6;
        v45 = __ctype_b_loc();
        LODWORD(v10) = v134.m128_i8[0];
        if ( ((*v45)[(unsigned __int8)v6[1]] & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 16) )
            *(_DWORD *)(a1 + 16) = 13;
          v46 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(__m128i *)a1 = _mm_unpacklo_epi64(v46, v46);
        }
      }
      goto LABEL_87;
    case '|':
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 14;
      goto LABEL_25;
    default:
LABEL_87:
      sub_227FC30(a1, v10);
      goto LABEL_88;
  }
}
