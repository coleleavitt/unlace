unsigned __int64 __fastcall sub_227FDF0(__int64 a1, int a2, __int32 a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // rcx
  char *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // ebp
  int v11; // edi
  unsigned __int64 result; // rax
  char *v13; // r12
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  char *v18; // rdx
  __m128i v19; // xmm0
  int v20; // esi
  __int64 v21; // r15
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // r9
  int v26; // eax
  int v27; // esi
  int v28; // r12d
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  int v32; // ebp
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int8 *v75; // rbp
  const unsigned __int16 **v76; // rax
  int v77; // ecx
  int v78; // edx
  __int64 v79; // rsi
  const unsigned __int16 *v80; // rdi
  int v81; // ecx
  unsigned __int8 *v82; // rax
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  __int64 v85; // rdx
  _QWORD *v86; // rax
  __int64 v87; // r10
  __m128i v88; // xmm0
  __int64 v89; // rax
  __int64 v90; // rsi
  int v91; // r11d
  __int64 v92; // r9
  _QWORD *v93; // rax
  __int64 v94; // rax
  __m128i v95; // xmm0
  __int64 v96; // rsi
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  char *v99; // rdx
  __int64 v100; // rax
  __m128i v101; // xmm0
  __m128i v102; // xmm0
  __int64 v103; // rsi
  unsigned __int64 v104; // rbx
  __m128i v105; // xmm0
  void *v106; // rdi
  __int64 v107; // rbp
  __m128i v108; // xmm1
  __m128i v109; // xmm0
  __m128i v110; // xmm0
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  __m128i v113; // [rsp+0h] [rbp-68h] BYREF
  __m128 v114; // [rsp+10h] [rbp-58h] BYREF
  __m128i v115[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_BYTE **)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 40);
  v113.m128i_i32[0] = a3;
  v7 = *(char **)a1;
  v113.m128i_i64[1] = v6;
  v8 = v6;
  v9 = v6;
  if ( v5 - v7 > 0 && *v7 == 94 )
  {
    v91 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)a1 = ++v7;
    if ( !v91 )
    {
      v92 = *(_QWORD *)(a1 + 32);
      v93 = *(_QWORD **)(a1 + 24);
      if ( v6 >= v92 )
      {
        v107 = 3 * ((v92 + 1) / 2);
        if ( v92 < v107 )
        {
          if ( (unsigned __int64)v107 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v93 = realloc(*(void **)(a1 + 24), 24 * ((v92 + 1) / 2));
            if ( v93 )
            {
              v6 = *(_QWORD *)(a1 + 40);
              v5 = *(_BYTE **)(a1 + 8);
              *(_QWORD *)(a1 + 24) = v93;
              *(_QWORD *)(a1 + 32) = v107;
              v7 = *(char **)a1;
            }
            else
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 12;
              v6 = *(_QWORD *)(a1 + 40);
              v115[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
              v112 = _mm_loadl_epi64(v115);
              v93 = *(_QWORD **)(a1 + 24);
              v7 = (char *)v112.m128i_i64[0];
              v5 = (_BYTE *)v112.m128i_i64[0];
              *(__m128i *)a1 = _mm_unpacklo_epi64(v112, v112);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 16) = 12;
            v115[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
            v108 = _mm_loadl_epi64(v115);
            v7 = (char *)v108.m128i_i64[0];
            v5 = (_BYTE *)v108.m128i_i64[0];
            *(__m128i *)a1 = _mm_unpacklo_epi64(v108, v108);
          }
        }
      }
      *(_QWORD *)(a1 + 40) = v6 + 1;
      v93[v6] = 402653184;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v8;
    }
    v94 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(v94 + 72) |= 1u;
    ++*(_DWORD *)(v94 + 76);
  }
  v10 = 0;
  v11 = 1;
  v115[0].m128i_i64[0] = (__int64)&unk_26FB347;
  result = v5 - v7;
  v114 = _mm_loadh_ps((const double *)v115[0].m128i_i64);
  if ( v5 - v7 <= 0 )
  {
LABEL_32:
    if ( v10 )
      goto LABEL_33;
    goto LABEL_37;
  }
  while ( 1 )
  {
    if ( result != 1 && *v7 == a2 )
    {
      result = (unsigned int)v7[1];
      if ( (_DWORD)result == v113.m128i_i32[0] )
        break;
    }
    v13 = v7 + 1;
    *(_QWORD *)a1 = v7 + 1;
    v14 = *v7;
    if ( v14 == 92 )
    {
      if ( v5 - v13 <= 0 )
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 5;
        v84 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        v13 = byte_2D0ADA8;
        *(__m128i *)a1 = _mm_unpacklo_epi64(v84, v84);
      }
      *(_QWORD *)a1 = v13 + 1;
      v32 = *v13++;
      v14 = v32 | 0x100;
    }
    if ( v14 == 297 )
    {
LABEL_61:
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 8;
      goto LABEL_63;
    }
    if ( v14 <= 297 )
    {
      if ( v14 == 46 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 40LL) & 8) != 0 )
        {
          v90 = *(_QWORD *)(a1 + 8);
          *(__m128i *)a1 = _mm_load_si128((const __m128i *)&v114);
          v115[0].m128i_i64[1] = v90;
          sub_227ECC0(a1);
          v5 = (_BYTE *)v115[0].m128i_i64[1];
          v7 = v13;
          v115[0].m128i_i64[0] = v115[0].m128i_i64[1];
          v25 = v115[0].m128i_i64[1] - (_QWORD)v13;
          *(__m128 *)a1 = _mm_loadh_ps((const double *)v115[0].m128i_i64);
        }
        else if ( *(_DWORD *)(a1 + 16) )
        {
          v5 = *(_BYTE **)(a1 + 8);
          v7 = v13;
          v25 = v5 - v13;
        }
        else
        {
          v85 = *(_QWORD *)(a1 + 32);
          v86 = *(_QWORD **)(a1 + 24);
          if ( v85 > v8 || (v96 = (v85 + 1) / 2, v85 >= 3 * v96) )
          {
            v5 = *(_BYTE **)(a1 + 8);
            v7 = v13;
            v87 = v8;
            v25 = v5 - v13;
          }
          else if ( (unsigned __int64)(3 * v96) <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v106 = *(void **)(a1 + 24);
            v115[0].m128i_i64[0] = 3 * v96;
            v86 = realloc(v106, 24 * v96);
            if ( v86 )
            {
              v5 = *(_BYTE **)(a1 + 8);
              v7 = *(char **)a1;
              *(_QWORD *)(a1 + 32) = v115[0].m128i_i64[0];
              *(_QWORD *)(a1 + 24) = v86;
              v87 = *(_QWORD *)(a1 + 40);
              v25 = v5 - v7;
            }
            else
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 12;
              v109 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
              v7 = byte_2D0ADA8;
              v86 = *(_QWORD **)(a1 + 24);
              v25 = 0;
              v87 = *(_QWORD *)(a1 + 40);
              v5 = byte_2D0ADA8;
              *(__m128i *)a1 = _mm_unpacklo_epi64(v109, v109);
            }
          }
          else
          {
            v97 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            v7 = byte_2D0ADA8;
            v87 = v8;
            v25 = 0;
            *(_DWORD *)(a1 + 16) = 12;
            v5 = byte_2D0ADA8;
            *(__m128i *)a1 = _mm_unpacklo_epi64(v97, v97);
          }
          *(_QWORD *)(a1 + 40) = v87 + 1;
          v86[v87] = 671088640;
        }
      }
      else
      {
        if ( v14 <= 46 )
        {
          if ( v14 == 42 && !v11 )
          {
            if ( !*(_DWORD *)(a1 + 16) )
              *(_DWORD *)(a1 + 16) = 13;
            v24 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            *(__m128i *)a1 = _mm_unpacklo_epi64(v24, v24);
          }
          goto LABEL_44;
        }
        if ( v14 == 91 )
        {
          sub_227ECC0(a1);
          v5 = *(_BYTE **)(a1 + 8);
          v7 = *(char **)a1;
          v25 = (__int64)&v5[-*(_QWORD *)a1];
        }
        else
        {
          if ( v14 != 296 )
            goto LABEL_44;
          v15 = *(_QWORD *)(a1 + 56);
          v16 = *(_QWORD *)(v15 + 112);
          v17 = v16 + 1;
          *(_QWORD *)(v15 + 112) = v16 + 1;
          if ( v16 + 1 <= 9 )
            *(_QWORD *)(a1 + 8 * v16 + 72) = v8;
          if ( !*(_DWORD *)(a1 + 16) )
          {
            v115[0].m128i_i64[0] = v16 + 1;
            sub_227E170((__m128i *)a1, 1744830464, v16 + 1);
            v13 = *(char **)a1;
            v17 = v115[0].m128i_i64[0];
          }
          if ( (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v13) > 0
            && (*(_QWORD *)(a1 + 8) - (_QWORD)v13 == 1 || *v13 != 92 || v13[1] != 41) )
          {
            v115[0].m128i_i64[0] = v17;
            sub_227FDF0(a1, 92, 41);
            v17 = v115[0].m128i_i64[0];
          }
          if ( v17 <= 9 )
            *(_QWORD *)(a1 + 8 * v17 + 144) = *(_QWORD *)(a1 + 40);
          if ( *(_DWORD *)(a1 + 16) )
          {
            v5 = *(_BYTE **)(a1 + 8);
            v18 = *(char **)a1;
            if ( (__int64)&v5[-*(_QWORD *)a1] <= 1 || *v18 != 92 )
              goto LABEL_28;
          }
          else
          {
            sub_227E170((__m128i *)a1, 1879048192, v17);
            v5 = *(_BYTE **)(a1 + 8);
            v18 = *(char **)a1;
            if ( (__int64)&v5[-*(_QWORD *)a1] <= 1 || *v18 != 92 )
            {
LABEL_26:
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 8;
LABEL_28:
              v19 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
              v8 = *(_QWORD *)(a1 + 40);
              v9 = v8;
              *(__m128i *)a1 = _mm_unpacklo_epi64(v19, v19);
              goto LABEL_29;
            }
          }
          if ( v18[1] != 41 )
            goto LABEL_26;
          v7 = v18 + 2;
          *(_QWORD *)a1 = v7;
          v25 = v5 - v7;
        }
      }
LABEL_45:
      if ( v25 <= 0 )
        goto LABEL_59;
      goto LABEL_46;
    }
    if ( v14 == 379 )
    {
      if ( !*(_DWORD *)(a1 + 16) )
        *(_DWORD *)(a1 + 16) = 13;
LABEL_63:
      v31 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
      *(__m128i *)a1 = _mm_unpacklo_epi64(v31, v31);
LABEL_29:
      v7 = byte_2D0ADA8;
      v5 = byte_2D0ADA8;
LABEL_30:
      v11 = 0;
      v10 = v14 == 36;
      goto LABEL_31;
    }
    if ( v14 > 379 )
    {
      if ( v14 == 381 )
        goto LABEL_61;
LABEL_44:
      sub_227FC30(a1, (char)v14);
      v5 = *(_BYTE **)(a1 + 8);
      v7 = *(char **)a1;
      v25 = (__int64)&v5[-*(_QWORD *)a1];
      goto LABEL_45;
    }
    if ( (unsigned int)(v14 - 305) > 8 )
      goto LABEL_44;
    v26 = v14;
    v27 = *(_DWORD *)(a1 + 16);
    BYTE1(v26) = BYTE1(v14) & 0xFE;
    v28 = v26 - 48;
    v29 = a1 + 8LL * v26;
    v30 = *(_QWORD *)(v29 - 240);
    if ( !v30 )
    {
      if ( !v27 )
        *(_DWORD *)(a1 + 16) = 6;
      v88 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
      v89 = *(_QWORD *)(a1 + 56);
      v7 = byte_2D0ADA8;
      v5 = byte_2D0ADA8;
      *(__m128i *)a1 = _mm_unpacklo_epi64(v88, v88);
      *(_DWORD *)(v89 + 120) = 1;
LABEL_183:
      v9 = v8;
      goto LABEL_30;
    }
    if ( !v27 )
    {
      v115[0].m128i_i64[0] = v29;
      sub_227E170((__m128i *)a1, 939524096, v28);
      v29 = v115[0].m128i_i64[0];
      v30 = *(_QWORD *)(v115[0].m128i_i64[0] - 240);
    }
    sub_227E280(a1, *(_QWORD *)(v29 - 320) + 1LL, v30);
    if ( !*(_DWORD *)(a1 + 16) )
      sub_227E170((__m128i *)a1, 0x40000000, v28);
    v5 = *(_BYTE **)(a1 + 8);
    v7 = *(char **)a1;
    v25 = (__int64)&v5[-*(_QWORD *)a1];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 120LL) = 1;
    if ( v25 <= 0 )
    {
LABEL_59:
      v8 = *(_QWORD *)(a1 + 40);
      goto LABEL_183;
    }
LABEL_46:
    if ( *v7 == 42 )
    {
      v33 = *(_DWORD *)(a1 + 16);
      ++v7;
      v8 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)a1 = v7;
      if ( v33 )
        goto LABEL_179;
      sub_227E170((__m128i *)a1, 1207959552, v8 - v9 + 1);
      v34 = *(_QWORD *)(a1 + 24);
      v35 = *(_QWORD *)(a1 + 72);
      v36 = *(_QWORD *)(v34 + 8 * v8);
      if ( v35 >= v9 )
        *(_QWORD *)(a1 + 72) = v35 + 1;
      v37 = *(_QWORD *)(a1 + 152);
      if ( v37 >= v9 )
        *(_QWORD *)(a1 + 152) = v37 + 1;
      v38 = *(_QWORD *)(a1 + 80);
      if ( v38 >= v9 )
        *(_QWORD *)(a1 + 80) = v38 + 1;
      v39 = *(_QWORD *)(a1 + 160);
      if ( v39 >= v9 )
        *(_QWORD *)(a1 + 160) = v39 + 1;
      v40 = *(_QWORD *)(a1 + 88);
      if ( v40 >= v9 )
        *(_QWORD *)(a1 + 88) = v40 + 1;
      v41 = *(_QWORD *)(a1 + 168);
      if ( v41 >= v9 )
        *(_QWORD *)(a1 + 168) = v41 + 1;
      v42 = *(_QWORD *)(a1 + 96);
      if ( v42 >= v9 )
        *(_QWORD *)(a1 + 96) = v42 + 1;
      v43 = *(_QWORD *)(a1 + 176);
      if ( v43 >= v9 )
        *(_QWORD *)(a1 + 176) = v43 + 1;
      v44 = *(_QWORD *)(a1 + 104);
      if ( v44 >= v9 )
        *(_QWORD *)(a1 + 104) = v44 + 1;
      v45 = *(_QWORD *)(a1 + 184);
      if ( v45 >= v9 )
        *(_QWORD *)(a1 + 184) = v45 + 1;
      v46 = *(_QWORD *)(a1 + 112);
      if ( v46 >= v9 )
        *(_QWORD *)(a1 + 112) = v46 + 1;
      v47 = *(_QWORD *)(a1 + 192);
      if ( v47 >= v9 )
        *(_QWORD *)(a1 + 192) = v47 + 1;
      v48 = *(_QWORD *)(a1 + 120);
      if ( v48 >= v9 )
        *(_QWORD *)(a1 + 120) = v48 + 1;
      v49 = *(_QWORD *)(a1 + 200);
      if ( v49 >= v9 )
        *(_QWORD *)(a1 + 200) = v49 + 1;
      v50 = *(_QWORD *)(a1 + 128);
      if ( v50 >= v9 )
        *(_QWORD *)(a1 + 128) = v50 + 1;
      v51 = *(_QWORD *)(a1 + 208);
      if ( v51 >= v9 )
        *(_QWORD *)(a1 + 208) = v51 + 1;
      v52 = *(_QWORD *)(a1 + 136);
      if ( v52 >= v9 )
        *(_QWORD *)(a1 + 136) = v52 + 1;
      v53 = *(_QWORD *)(a1 + 216);
      if ( v53 >= v9 )
        *(_QWORD *)(a1 + 216) = v53 + 1;
      v54 = 8 * v9 + 8;
      memmove((void *)(v54 + v34), (const void *)(v34 + 8 * v9), 8 * (*(_QWORD *)(a1 + 40) + ~v9));
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v9) = v36;
      v8 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(a1 + 16) )
        goto LABEL_178;
      sub_227E170((__m128i *)a1, 1342177280, *(_QWORD *)(a1 + 40) - v9);
      v8 = *(_QWORD *)(a1 + 40);
      if ( *(_DWORD *)(a1 + 16) )
        goto LABEL_178;
      sub_227E170((__m128i *)a1, 1476395008, v8 - v9 + 1);
      v55 = *(_QWORD *)(a1 + 24);
      v56 = *(_QWORD *)(a1 + 72);
      v57 = *(_QWORD *)(v55 + 8 * v8);
      if ( v56 >= v9 )
        *(_QWORD *)(a1 + 72) = v56 + 1;
      v58 = *(_QWORD *)(a1 + 152);
      if ( v58 >= v9 )
        *(_QWORD *)(a1 + 152) = v58 + 1;
      v59 = *(_QWORD *)(a1 + 80);
      if ( v59 >= v9 )
        *(_QWORD *)(a1 + 80) = v59 + 1;
      v60 = *(_QWORD *)(a1 + 160);
      if ( v60 >= v9 )
        *(_QWORD *)(a1 + 160) = v60 + 1;
      v61 = *(_QWORD *)(a1 + 88);
      if ( v61 >= v9 )
        *(_QWORD *)(a1 + 88) = v61 + 1;
      v62 = *(_QWORD *)(a1 + 168);
      if ( v62 >= v9 )
        *(_QWORD *)(a1 + 168) = v62 + 1;
      v63 = *(_QWORD *)(a1 + 96);
      if ( v63 >= v9 )
        *(_QWORD *)(a1 + 96) = v63 + 1;
      v64 = *(_QWORD *)(a1 + 176);
      if ( v64 >= v9 )
        *(_QWORD *)(a1 + 176) = v64 + 1;
      v65 = *(_QWORD *)(a1 + 104);
      if ( v65 >= v9 )
        *(_QWORD *)(a1 + 104) = v65 + 1;
      v66 = *(_QWORD *)(a1 + 184);
      if ( v66 >= v9 )
        *(_QWORD *)(a1 + 184) = v66 + 1;
      v67 = *(_QWORD *)(a1 + 112);
      if ( v67 >= v9 )
        *(_QWORD *)(a1 + 112) = v67 + 1;
      v68 = *(_QWORD *)(a1 + 192);
      if ( v68 >= v9 )
        *(_QWORD *)(a1 + 192) = v68 + 1;
      v69 = *(_QWORD *)(a1 + 120);
      if ( v69 >= v9 )
        *(_QWORD *)(a1 + 120) = v69 + 1;
      v70 = *(_QWORD *)(a1 + 200);
      if ( v70 >= v9 )
        *(_QWORD *)(a1 + 200) = v70 + 1;
      v71 = *(_QWORD *)(a1 + 128);
      if ( v71 >= v9 )
        *(_QWORD *)(a1 + 128) = v71 + 1;
      v72 = *(_QWORD *)(a1 + 208);
      if ( v72 >= v9 )
        *(_QWORD *)(a1 + 208) = v72 + 1;
      v73 = *(_QWORD *)(a1 + 136);
      if ( v73 >= v9 )
        *(_QWORD *)(a1 + 136) = v73 + 1;
      v74 = *(_QWORD *)(a1 + 216);
      if ( v74 >= v9 )
        *(_QWORD *)(a1 + 216) = v74 + 1;
      memmove((void *)(v54 + v55), (const void *)(v55 + 8 * v9), 8 * (*(_QWORD *)(a1 + 40) + ~v9));
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v9) = v57;
      v8 = *(_QWORD *)(a1 + 40);
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 )
      {
LABEL_178:
        v5 = *(_BYTE **)(a1 + 8);
        v7 = *(char **)a1;
LABEL_179:
        v9 = v8;
        v10 = 0;
        v11 = 0;
        goto LABEL_31;
      }
      sub_227E170((__m128i *)a1, 1610612736, *(_QWORD *)(a1 + 40) - v9);
      v9 = *(_QWORD *)(a1 + 40);
      v5 = *(_BYTE **)(a1 + 8);
      v11 = 0;
      v7 = *(char **)a1;
      v8 = v9;
    }
    else
    {
      if ( v25 == 1 || *v7 != 92 || v7[1] != 123 )
      {
        v8 = *(_QWORD *)(a1 + 40);
        v9 = v8;
        goto LABEL_30;
      }
      v75 = (unsigned __int8 *)(v7 + 2);
      v115[0].m128i_i64[0] = (__int64)v5;
      *(_QWORD *)a1 = v7 + 2;
      if ( v5 - (v7 + 2) <= 0 )
      {
        v78 = 0;
LABEL_203:
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 10;
        v98 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        v81 = v78;
        *(__m128i *)a1 = _mm_unpacklo_epi64(v98, v98);
      }
      else
      {
        v76 = __ctype_b_loc();
        v77 = 0;
        v78 = 0;
        v79 = v115[0].m128i_i64[0];
        v80 = *v76;
        while ( (v80[*v75] & 0x800) != 0 )
        {
          if ( v78 > 255 )
            goto LABEL_203;
          ++v75;
          ++v77;
          *(_QWORD *)a1 = v75;
          v78 = (char)*(v75 - 1) + 10 * v78 - 48;
          if ( v79 - (__int64)v75 <= 0 )
          {
            if ( v78 > 255 )
              goto LABEL_203;
            v81 = v78;
            goto LABEL_206;
          }
        }
        if ( v77 <= 0 || v78 > 255 )
          goto LABEL_203;
        v81 = v78;
        if ( v79 - (__int64)v75 > 0 && *v75 == 44 )
        {
          v82 = v75 + 1;
          v81 = 256;
          *(_QWORD *)a1 = v75 + 1;
          if ( v79 - (__int64)(v75 + 1) > 0 && (v80[v75[1]] & 0x800) != 0 )
          {
            v81 = 0;
            while ( 1 )
            {
              *(_QWORD *)a1 = ++v82;
              v81 = (char)*(v82 - 1) + 10 * v81 - 48;
              if ( v79 - (__int64)v82 <= 0 || (v80[*v82] & 0x800) == 0 )
                break;
              if ( v81 > 255 )
                goto LABEL_241;
            }
            if ( v81 <= 255 )
              goto LABEL_163;
LABEL_241:
            if ( !*(_DWORD *)(a1 + 16) )
              *(_DWORD *)(a1 + 16) = 10;
            v110 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
            *(__m128i *)a1 = _mm_unpacklo_epi64(v110, v110);
LABEL_163:
            if ( v81 < v78 )
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 10;
              v83 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
              *(__m128i *)a1 = _mm_unpacklo_epi64(v83, v83);
            }
          }
        }
      }
LABEL_206:
      sub_227E650((__m128i *)a1, v8, v78, v81);
      v5 = *(_BYTE **)(a1 + 8);
      v99 = *(char **)a1;
      v8 = *(_QWORD *)(a1 + 40);
      v100 = (__int64)&v5[-*(_QWORD *)a1];
      v9 = v8;
      if ( v100 <= 1 )
      {
        if ( v100 == 1 )
          goto LABEL_212;
LABEL_219:
        v102 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 9;
        *(__m128i *)a1 = _mm_unpacklo_epi64(v102, v102);
LABEL_217:
        v101 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        v7 = byte_2D0ADA8;
        v10 = 0;
        v11 = 0;
        v5 = byte_2D0ADA8;
        *(__m128i *)a1 = _mm_unpacklo_epi64(v101, v101);
        goto LABEL_31;
      }
      if ( *v99 != 92 || v99[1] != 125 )
      {
LABEL_212:
        while ( v100 == 1 || *v99 != 92 || v99[1] != 125 )
        {
          ++v99;
          v100 = v5 - v99;
          *(_QWORD *)a1 = v99;
          if ( v5 - v99 <= 0 )
            goto LABEL_219;
        }
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 10;
        goto LABEL_217;
      }
      v7 = v99 + 2;
      v10 = 0;
      v11 = 0;
      *(_QWORD *)a1 = v7;
    }
LABEL_31:
    result = v5 - v7;
    if ( v5 - v7 <= 0 )
      goto LABEL_32;
  }
  if ( v10 )
  {
LABEL_33:
    v20 = *(_DWORD *)(a1 + 16);
    v21 = v8 - 1;
    *(_QWORD *)(a1 + 40) = v21;
    if ( v20 )
    {
      v9 = v21;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 32);
      v23 = *(_QWORD **)(a1 + 24);
      if ( v21 >= v22 )
      {
        v103 = (v22 + 1) / 2;
        v104 = 3 * v103;
        if ( v22 < 3 * v103 )
        {
          if ( v104 <= 0x1FFFFFFFFFFFFFFFLL )
          {
            v23 = realloc(*(void **)(a1 + 24), 24 * v103);
            if ( v23 )
            {
              v21 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 24) = v23;
              *(_QWORD *)(a1 + 32) = v104;
              v9 = v21 + 1;
            }
            else
            {
              if ( !*(_DWORD *)(a1 + 16) )
                *(_DWORD *)(a1 + 16) = 12;
              v21 = *(_QWORD *)(a1 + 40);
              v113.m128i_i64[0] = (__int64)byte_2D0ADA8;
              v111 = _mm_loadl_epi64(&v113);
              v23 = *(_QWORD **)(a1 + 24);
              v9 = v21 + 1;
              *(__m128i *)a1 = _mm_unpacklo_epi64(v111, v111);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 16) = 12;
            v113.m128i_i64[0] = (__int64)byte_2D0ADA8;
            v105 = _mm_loadl_epi64(&v113);
            *(__m128i *)a1 = _mm_unpacklo_epi64(v105, v105);
          }
        }
      }
      *(_QWORD *)(a1 + 40) = v9;
      v23[v21] = 0x20000000;
      v9 = *(_QWORD *)(a1 + 40);
    }
    result = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(result + 72) |= 2u;
    ++*(_DWORD *)(result + 80);
  }
LABEL_37:
  if ( v113.m128i_i64[1] == v9 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 16) = 14;
    v113.m128i_i64[0] = (__int64)byte_2D0ADA8;
    v95 = _mm_loadl_epi64(&v113);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v95, v95);
    return (unsigned __int64)byte_2D0ADA8;
  }
  return result;
}
