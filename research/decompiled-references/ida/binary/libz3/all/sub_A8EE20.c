__int64 __fastcall sub_A8EE20(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r13
  __int64 *v10; // r12
  __int64 v11; // rax
  __m128i **v12; // rbx
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  _QWORD *v16; // rax
  __m128i v17; // xmm0
  __m128i *v18; // rsi
  size_t v19; // rdx
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __m128i *v22; // rbx
  char v23; // al
  __int64 *v24; // r13
  __int64 v25; // r12
  __int64 *v26; // r15
  __m128i *v28; // rbx
  __int64 *v29; // r13
  _OWORD *v30; // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  char *v33; // rbx
  char v34; // al
  char *v35; // r13
  __int64 v36; // r12
  char *v37; // r15
  char v38; // al
  __int32 v39; // ecx
  __int64 v40; // rax
  __m128i *v41; // r15
  char v42; // al
  char *v43; // r14
  __int64 v44; // r13
  char *v45; // r12
  char v46; // al
  __int64 v47; // rbx
  __int64 *v48; // r13
  __int64 v49; // r12
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __m128i *v54; // rax
  char v55; // al
  __int64 v56; // r15
  __int64 *i; // r14
  __int64 *v58; // r12
  __int64 *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // r15
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 *v69; // r12
  __int64 v70; // rdx
  __int64 *v71; // r12
  char v72; // r10
  __int64 v73; // rdx
  __int64 *v74; // r15
  char v75; // al
  __int64 v76; // rdx
  __int64 *v77; // rsi
  __int64 *v78; // rcx
  int v79; // r10d
  __int64 v80; // r15
  __m128i *v81; // rbp
  __m128i *v82; // rcx
  __int64 v83; // rax
  __m128i *v84; // r8
  __m128i *j; // rax
  __m128i *v86; // rsi
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  __int64 v89; // r8
  int v90; // esi
  __int64 v91; // rax
  __m128i *v92; // rdi
  __int8 *k; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // r8
  int v96; // esi
  __int64 v97; // rax
  __m128i *v98; // rdi
  __int8 *n; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // rsi
  int v102; // r8d
  __int64 v103; // rax
  __m128i *v104; // rdi
  __int8 *jj; // rax
  unsigned __int64 v106; // rdx
  __int64 v107; // rsi
  int v108; // edi
  __int64 v109; // rax
  __m128i *v110; // r8
  __int8 *mm; // rax
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  int v114; // r8d
  __m128i *v115; // rax
  __int64 v116; // rdx
  const __m128i *v117; // rax
  const __m128i *v118; // r12
  unsigned __int64 v119; // rdx
  __int64 v120; // rdx
  __m128i *v121; // rsi
  __m128i *v122; // rdx
  __m128i v123; // xmm0
  __m128i *nn; // rax
  unsigned __int64 v125; // rdx
  __m128i *m; // rax
  unsigned __int64 v127; // rdx
  __m128i *kk; // rax
  unsigned __int64 v129; // rdx
  __m128i *ii; // rax
  unsigned __int64 v131; // rdx
  __int64 *v132; // rcx
  unsigned int v133; // [rsp+8h] [rbp-D0h]
  int v134[2]; // [rsp+8h] [rbp-D0h]
  __m128i *v135; // [rsp+8h] [rbp-D0h]
  int v136[2]; // [rsp+8h] [rbp-D0h]
  int v137[2]; // [rsp+8h] [rbp-D0h]
  char v138; // [rsp+8h] [rbp-D0h]
  int v139; // [rsp+8h] [rbp-D0h]
  int v140; // [rsp+8h] [rbp-D0h]
  int v141; // [rsp+8h] [rbp-D0h]
  size_t v142; // [rsp+8h] [rbp-D0h]
  int v143; // [rsp+8h] [rbp-D0h]
  char *v144; // [rsp+10h] [rbp-C8h]
  __m128i *v145; // [rsp+10h] [rbp-C8h]
  char v146; // [rsp+10h] [rbp-C8h]
  __m128i *v147; // [rsp+10h] [rbp-C8h]
  char v148; // [rsp+18h] [rbp-C0h]
  __int64 *v149; // [rsp+18h] [rbp-C0h]
  __m128i *ptr; // [rsp+20h] [rbp-B8h]
  __int64 *v151; // [rsp+28h] [rbp-B0h]
  __int64 *v152; // [rsp+30h] [rbp-A8h]
  __int64 *v153; // [rsp+38h] [rbp-A0h]
  __m128i *src; // [rsp+40h] [rbp-98h]
  __int64 *v155; // [rsp+48h] [rbp-90h]
  __m128i *v156; // [rsp+50h] [rbp-88h]
  __int64 v157; // [rsp+58h] [rbp-80h]
  __int64 *v158; // [rsp+60h] [rbp-78h]
  __int64 *v159; // [rsp+68h] [rbp-70h]
  unsigned int v161; // [rsp+78h] [rbp-60h]
  int v162; // [rsp+80h] [rbp-58h]
  int v163; // [rsp+84h] [rbp-54h]
  __m128i *v164; // [rsp+98h] [rbp-40h] BYREF

  result = *(_QWORD *)(a1 + 528);
  if ( !result )
    return result;
  do
  {
    v2 = *(_DWORD *)(result - 4);
    if ( !v2 )
      return result;
    v3 = (__int64 *)(result + 8LL * (unsigned int)(v2 - 1));
    v4 = sub_186B270(0x18u);
    v5 = *v3;
    v6 = 0;
    *(_QWORD *)(v4 + 8) = v5;
    src = (__m128i *)(v4 + 8);
    *(_QWORD *)v4 = 0x100000002LL;
    v7 = *(_QWORD *)(a1 + 528);
    v8 = *(_DWORD *)(v7 - 4) - 1;
    *(_DWORD *)(v7 - 4) = v8;
    v9 = *(unsigned int *)(*(_QWORD *)(v4 + 8 + 8LL * (unsigned int)(*(_DWORD *)(v4 + 4) - 1)) + 12LL);
    if ( v8 )
    {
      do
      {
        v10 = (__int64 *)(v7 + 8LL * v6);
        v11 = *v10;
        if ( (_DWORD)v9 == *(_DWORD *)(*v10 + 12) )
        {
          if ( !src || (v39 = src[-1].m128i_i32[3], v39 == src[-1].m128i_i32[2]) )
          {
            v164 = src;
            sub_A8E970((unsigned int **)&v164);
            v39 = v164[-1].m128i_i32[3];
            v7 = *(_QWORD *)(a1 + 528);
            src = v164;
            v11 = *v10;
          }
          src->m128i_i64[v39] = v11;
          src[-1].m128i_i32[3] = v39 + 1;
          v40 = (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
          *(_QWORD *)(v7 + 8LL * v6) = *(_QWORD *)(v7 + 8 * v40);
          *(_DWORD *)(v7 - 4) = v40;
        }
        else
        {
          ++v6;
          if ( !v7 )
            break;
        }
      }
      while ( v6 < *(_DWORD *)(v7 - 4) );
    }
    v12 = (__m128i **)(*(_QWORD *)(a1 + 240) + 8 * v9);
    v13 = *v12;
    v156 = *v12;
    if ( *v12 )
    {
      v14 = _mm_cvtsi32_si128(v13[-1].m128i_u32[3]);
      v15 = v13[-1].m128i_u32[2];
      v133 = v15;
      v16 = (_QWORD *)sub_186B270(8 * v15 + 8);
      v17 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v14));
      v18 = *v12;
      v156 = (__m128i *)(v16 + 1);
      *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v133), v17).m128i_u64[0];
      if ( v18 )
      {
        v19 = 8LL * v18[-1].m128i_u32[3];
        if ( v19 <= 8 )
        {
          if ( v19 == 8 )
            v16[1] = v18->m128i_i64[0];
        }
        else
        {
          memmove(v16 + 1, v18, v19);
          v17 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v17));
        }
      }
      if ( !src )
        goto LABEL_35;
      v20 = 8LL * src[-1].m128i_u32[3];
      v144 = &src->m128i_i8[v20];
      if ( src == (__m128i *)&src->m128i_i8[v20] )
        goto LABEL_35;
    }
    else
    {
      if ( !src )
        goto LABEL_26;
      v20 = 8LL * src[-1].m128i_u32[3];
      v144 = &src->m128i_i8[v20];
      if ( src == (__m128i *)&src->m128i_i8[v20] )
        goto LABEL_26;
    }
    _BitScanReverse64(&v21, v20 >> 3);
    sub_A7F100(src, v144, 2LL * (int)v21);
    v22 = (__m128i *)&src->m128i_u64[1];
    if ( (unsigned __int64)v20 > 0x80 )
    {
      v135 = src + 8;
      do
      {
        while ( 1 )
        {
          v55 = sub_3ED700((__int64)qword_1C7F2C0, v22->m128i_i64[0] + 24, src->m128i_i64[0] + 24);
          v56 = v22->m128i_i64[0];
          if ( v55 )
            break;
          for ( i = (__int64 *)v22; ; i[1] = *i )
          {
            v58 = i;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v56 + 24, *--i + 24) )
              break;
          }
          *v58 = v56;
          v22 = (__m128i *)((char *)v22 + 8);
          if ( v135 == v22 )
            goto LABEL_91;
        }
        if ( (char *)v22 - (char *)src <= 8 )
        {
          if ( (char *)v22 - (char *)src == 8 )
            v22->m128i_i64[0] = src->m128i_i64[0];
        }
        else
        {
          memmove(&src->m128i_u64[1], src, (char *)v22 - (char *)src);
        }
        v22 = (__m128i *)((char *)v22 + 8);
        src->m128i_i64[0] = v56;
      }
      while ( v135 != v22 );
      do
      {
LABEL_91:
        v60 = (__int64 *)v135;
        v61 = v135->m128i_i64[0];
        v62 = v135->m128i_i64[0] + 24;
        while ( 1 )
        {
          v63 = *(v60 - 1);
          v65 = v63 + 24;
          if ( (*(_BYTE *)(v61 + 44) & 1) != 0
            || *(_DWORD *)(v61 + 40) != 1
            || (*(_BYTE *)(v63 + 44) & 1) != 0
            || *(_DWORD *)(v63 + 40) != 1 )
          {
            LOBYTE(v63) = sub_1848D40(qword_1C7F2C0, v62, v65);
          }
          else if ( (*(_BYTE *)(v61 + 28) & 1) != 0 || (*(_BYTE *)(v63 + 28) & 1) != 0 )
          {
            LODWORD(v63) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v62, v65) >> 31;
          }
          else
          {
            LOBYTE(v63) = *(_DWORD *)(v61 + 24) < *(_DWORD *)(v63 + 24);
          }
          if ( !(_BYTE)v63 )
            break;
          v64 = *--v60;
          v60[1] = v64;
        }
        v135 = (__m128i *)((char *)v135 + 8);
        *v60 = v61;
      }
      while ( v144 != (char *)v135 );
    }
    else if ( v20 != 8 )
    {
      do
      {
        v23 = sub_3ED700((__int64)qword_1C7F2C0, v22->m128i_i64[0] + 24, src->m128i_i64[0] + 24);
        *(_QWORD *)v134 = v22->m128i_i64[0];
        if ( v23 )
        {
          if ( (char *)v22 - (char *)src <= 8 )
          {
            if ( (char *)v22 - (char *)src == 8 )
              v22->m128i_i64[0] = src->m128i_i64[0];
          }
          else
          {
            memmove(&src->m128i_u64[1], src, (char *)v22 - (char *)src);
          }
          src->m128i_i64[0] = *(_QWORD *)v134;
        }
        else
        {
          v24 = (__int64 *)v22;
          v25 = v22->m128i_i64[0] + 24;
          while ( 1 )
          {
            v26 = v24;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v25, *--v24 + 24) )
              break;
            v24[1] = *v24;
          }
          *v26 = *(_QWORD *)v134;
        }
        v22 = (__m128i *)((char *)v22 + 8);
      }
      while ( v144 != (char *)v22 );
    }
    if ( !v156 )
    {
LABEL_26:
      v153 = nullptr;
      v28 = nullptr;
      v29 = nullptr;
      v156 = nullptr;
      goto LABEL_27;
    }
    v17 = _mm_cvtsi32_si128(v156[-1].m128i_u32[3]);
LABEL_35:
    v31 = 8LL * (unsigned int)_mm_cvtsi128_si32(v17);
    v28 = v156;
    v145 = (__m128i *)((char *)v156 + v31);
    if ( &v156->m128i_i8[v31] != (__int8 *)v156 )
    {
      _BitScanReverse64(&v32, v31 >> 3);
      sub_A7F100(v156, &v156->m128i_i8[v31], 2LL * (int)v32);
      v33 = &v156->m128i_i8[8];
      if ( (unsigned __int64)v31 <= 0x80 )
      {
        if ( v31 != 8 )
        {
          do
          {
            v34 = sub_3ED700((__int64)qword_1C7F2C0, *(_QWORD *)v33 + 24LL, v156->m128i_i64[0] + 24);
            *(_QWORD *)v136 = *(_QWORD *)v33;
            if ( v34 )
            {
              if ( v33 - (char *)v156 <= 8 )
              {
                if ( v33 - (char *)v156 == 8 )
                  *(_QWORD *)v33 = v156->m128i_i64[0];
              }
              else
              {
                memmove(&v156->m128i_u64[1], v156, v33 - (char *)v156);
              }
              v156->m128i_i64[0] = *(_QWORD *)v136;
            }
            else
            {
              v35 = v33;
              v36 = *(_QWORD *)v33 + 24LL;
              while ( 1 )
              {
                v37 = v35;
                v38 = sub_3ED700((__int64)qword_1C7F2C0, v36, *((_QWORD *)v35 - 1) + 24LL);
                v35 -= 8;
                if ( !v38 )
                  break;
                *((_QWORD *)v35 + 1) = *(_QWORD *)v35;
              }
              *(_QWORD *)v37 = *(_QWORD *)v136;
            }
            v33 += 8;
          }
          while ( v33 != (char *)v145 );
        }
LABEL_74:
        v28 = (__m128i *)((char *)v156 + 8 * v156[-1].m128i_u32[3]);
        if ( v156 == v28 )
        {
          v153 = (__int64 *)v156;
          v29 = (__int64 *)v156;
        }
        else
        {
          v54 = v156;
          do
          {
            if ( !*(_DWORD *)(v54->m128i_i64[0] + 56) )
              break;
            v54 = (__m128i *)((char *)v54 + 8);
          }
          while ( v54 != v28 );
          v153 = (__int64 *)v54;
          v29 = (__int64 *)v156;
          do
          {
            if ( *(_DWORD *)(*v29 + 56) == 1 )
              break;
            ++v29;
          }
          while ( v29 != (__int64 *)v28 );
        }
        goto LABEL_27;
      }
      v41 = v156 + 8;
      do
      {
        while ( 1 )
        {
          v42 = sub_3ED700((__int64)qword_1C7F2C0, *(_QWORD *)v33 + 24LL, v156->m128i_i64[0] + 24);
          *(_QWORD *)v137 = *(_QWORD *)v33;
          if ( v42 )
            break;
          v43 = v33;
          v44 = *(_QWORD *)v33 + 24LL;
          while ( 1 )
          {
            v45 = v43;
            v46 = sub_3ED700((__int64)qword_1C7F2C0, v44, *((_QWORD *)v43 - 1) + 24LL);
            v43 -= 8;
            if ( !v46 )
              break;
            *((_QWORD *)v43 + 1) = *(_QWORD *)v43;
          }
          v33 += 8;
          *(_QWORD *)v45 = *(_QWORD *)v137;
          if ( v41 == (__m128i *)v33 )
            goto LABEL_62;
        }
        if ( v33 - (char *)v156 <= 8 )
        {
          if ( v33 - (char *)v156 == 8 )
            *(_QWORD *)v33 = v156->m128i_i64[0];
        }
        else
        {
          memmove(&v156->m128i_u64[1], v156, v33 - (char *)v156);
        }
        v33 += 8;
        v156->m128i_i64[0] = *(_QWORD *)v137;
      }
      while ( v41 != (__m128i *)v33 );
LABEL_62:
      v47 = v41->m128i_i64[0];
      v48 = (__int64 *)v41;
      v49 = v41->m128i_i64[0] + 24;
      while ( 1 )
      {
        v52 = *(v48 - 1);
        v53 = v52 + 24;
        if ( (*(_BYTE *)(v47 + 44) & 1) != 0
          || *(_DWORD *)(v47 + 40) != 1
          || (*(_BYTE *)(v52 + 44) & 1) != 0
          || *(_DWORD *)(v52 + 40) != 1 )
        {
          break;
        }
        if ( (*(_BYTE *)(v47 + 28) & 1) != 0 || (*(_BYTE *)(v52 + 28) & 1) != 0 )
        {
          v50 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v49, v53) >> 31;
LABEL_64:
          if ( !(_BYTE)v50 )
            goto LABEL_73;
          goto LABEL_65;
        }
        if ( *(_DWORD *)(v47 + 24) >= *(_DWORD *)(v52 + 24) )
        {
LABEL_73:
          v41 = (__m128i *)((char *)v41 + 8);
          *v48 = v47;
          if ( v41 == v145 )
            goto LABEL_74;
          goto LABEL_62;
        }
LABEL_65:
        v51 = *--v48;
        v48[1] = v51;
      }
      LOBYTE(v50) = sub_1848D40(qword_1C7F2C0, v49, v53);
      goto LABEL_64;
    }
    v153 = (__int64 *)v156;
    v29 = (__int64 *)v156;
LABEL_27:
    v30 = (_OWORD *)sub_186B270(0xC0u);
    ptr = (__m128i *)v30;
    *(_OWORD *)((char *)v30 + 8) = 0;
    v30[2] = 0;
    *(_OWORD *)((char *)v30 + 56) = 0;
    v30[5] = 0;
    *(_OWORD *)((char *)v30 + 104) = 0;
    v30[8] = 0;
    *(_OWORD *)((char *)v30 + 152) = 0;
    v30[11] = 0;
    if ( !src )
    {
      sub_186B220(v30);
      if ( v156 )
        sub_186B220(&v156[-1].m128i_u64[1]);
      goto LABEL_30;
    }
    if ( !src[-1].m128i_i32[3] )
    {
      sub_186B220(v30);
      goto LABEL_301;
    }
    v158 = v29;
    v157 = 0;
    v159 = v153;
    v162 = 0;
    v163 = 0;
    v161 = 8;
    do
    {
      v66 = v153;
      v67 = src->m128i_i64[v157];
      if ( v153 == (__int64 *)v28 )
      {
        v151 = v153;
        v138 = 0;
      }
      else
      {
        v151 = (__int64 *)v28;
        v138 = 0;
        do
        {
          while ( 1 )
          {
            v68 = *v66;
            if ( v67 != *v66 && !*(_DWORD *)(v68 + 56) )
              break;
            if ( v28 == (__m128i *)++v66 )
              goto LABEL_115;
          }
          v138 = sub_3ED700((__int64)qword_1C7F2C0, v67 + 24, v68 + 24);
          if ( v138 )
            break;
          v151 = v66++;
          v138 = 1;
        }
        while ( v28 != (__m128i *)v66 );
      }
LABEL_115:
      if ( v29 == (__int64 *)v28 )
      {
        v152 = v29;
        v146 = 0;
      }
      else
      {
        v152 = (__int64 *)v28;
        v69 = v29;
        v146 = 0;
        do
        {
          while ( 1 )
          {
            v70 = *v69;
            if ( v67 != *v69 && *(_DWORD *)(v70 + 56) == 1 )
              break;
            if ( v28 == (__m128i *)++v69 )
              goto LABEL_122;
          }
          v146 = sub_3ED700((__int64)qword_1C7F2C0, v67 + 24, v70 + 24);
          if ( v146 )
            break;
          v152 = v69++;
          v146 = 1;
        }
        while ( v28 != (__m128i *)v69 );
      }
LABEL_122:
      v71 = v159;
      if ( v159 == (__int64 *)v28 )
      {
        v72 = 0;
        if ( v159 == v158 )
        {
          v132 = v153;
          v74 = v159;
          v75 = 0;
          if ( v159 != v151 )
            v132 = v151;
          v153 = v132;
LABEL_280:
          v149 = v71;
          v71 = v159;
          goto LABEL_139;
        }
      }
      else
      {
        v72 = 0;
        do
        {
          while ( 1 )
          {
            v73 = *v71;
            if ( v67 != *v71 && !*(_DWORD *)(v73 + 56) )
              break;
            if ( v28 == (__m128i *)++v71 )
              goto LABEL_129;
          }
          v72 = sub_3ED700((__int64)qword_1C7F2C0, v67 + 24, v73 + 24);
          if ( v72 )
            break;
          ++v71;
          v72 = 1;
        }
        while ( v28 != (__m128i *)v71 );
LABEL_129:
        if ( v28 == (__m128i *)v158 )
        {
          if ( v28 == (__m128i *)v151 )
          {
            if ( v28 == (__m128i *)v71 )
            {
              if ( v28 != (__m128i *)v152 )
                v29 = v152;
              v149 = (__int64 *)v28;
              v71 = v159;
              v74 = (__int64 *)v28;
              v75 = 0;
            }
            else
            {
              v75 = 0;
              v149 = v71;
              v74 = (__int64 *)v28;
              if ( v28 != (__m128i *)v152 )
                v29 = v152;
            }
          }
          else if ( v28 == (__m128i *)v71 )
          {
            if ( v28 != (__m128i *)v152 )
              v29 = v152;
            v71 = v159;
            v149 = (__int64 *)v28;
            v74 = (__int64 *)v28;
            v153 = v151;
            v75 = 0;
          }
          else
          {
            if ( v28 != (__m128i *)v152 )
              v29 = v152;
            v149 = v71;
            v74 = (__int64 *)v28;
            v153 = v151;
            v75 = 0;
          }
LABEL_275:
          v155 = v74;
          v74 = v158;
          goto LABEL_142;
        }
      }
      v74 = v158;
      v75 = 0;
      do
      {
        while ( 1 )
        {
          v76 = *v74;
          if ( v67 != *v74 && *(_DWORD *)(v76 + 56) == 1 )
            break;
          if ( v28 == (__m128i *)++v74 )
            goto LABEL_136;
        }
        v148 = v72;
        v75 = sub_3ED700((__int64)qword_1C7F2C0, v67 + 24, v76 + 24);
        v72 = v148;
        if ( v75 )
          break;
        ++v74;
        v75 = 1;
      }
      while ( v28 != (__m128i *)v74 );
LABEL_136:
      v77 = v153;
      v149 = v71;
      if ( v28 != (__m128i *)v151 )
        v77 = v151;
      v153 = v77;
      if ( v28 == (__m128i *)v71 )
        goto LABEL_280;
LABEL_139:
      v155 = v74;
      if ( v28 != (__m128i *)v152 )
        v29 = v152;
      if ( v74 == (__int64 *)v28 )
        goto LABEL_275;
LABEL_142:
      v78 = v153;
      if ( !v138 )
        v78 = (__int64 *)v28;
      if ( !v146 )
        v29 = (__int64 *)v28;
      if ( !v72 )
        v71 = (__int64 *)v28;
      v153 = v78;
      if ( !v75 )
        v74 = (__int64 *)v28;
      v159 = v71;
      v158 = v74;
      if ( 3 * v161 < 4 * (v163 + v162) )
      {
        v142 = 48LL * v161;
        v80 = v142;
        v113 = sub_186B270(v142);
        v114 = 2 * v161;
        v82 = (__m128i *)v113;
        v115 = (__m128i *)(v113 + 8);
        v116 = (__int64)&v82[v142 / 0x10].m128i_i64[1];
        if ( 2 * v161 )
        {
          if ( (((_BYTE)v116 - (_BYTE)v115) & 8) == 0
            || (v115 = v82 + 2, *(__m128i *)((char *)v82 + 8) = 0, &v82[2] != (__m128i *)v116) )
          {
            do
            {
              *v115 = 0;
              v115 += 3;
              *(__m128i *)((char *)&v115[-2] + 8) = 0;
            }
            while ( v115 != (__m128i *)v116 );
          }
          v79 = v114 - 1;
          v81 = &v82[v142 / 0x10];
          v117 = (__m128i *)((char *)ptr + 24 * v161);
        }
        else
        {
          v81 = v82;
          v79 = -1;
          v117 = (__m128i *)((char *)ptr + 24 * v161);
          if ( ptr == v117 )
          {
LABEL_230:
            if ( ptr )
            {
              v147 = v82;
              v143 = v79;
              sub_186B220(ptr);
              v114 = 2 * v161;
              v82 = v147;
              v79 = v143;
            }
            v161 = v114;
            ptr = v82;
            v162 = 0;
            goto LABEL_152;
          }
        }
        v118 = ptr;
        do
        {
          while ( 1 )
          {
            v119 = v118[1].m128i_u64[0];
            if ( v119 > 1 )
              break;
            v118 = (const __m128i *)((char *)v118 + 24);
            if ( v117 == v118 )
              goto LABEL_230;
          }
          v120 = 24LL * (v79 & (unsigned int)v119);
          v121 = (__m128i *)((char *)v82 + v120);
          if ( v142 == v120 )
          {
LABEL_233:
            if ( v82 == v121 )
            {
LABEL_281:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v122 = v82;
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v121 == v122 )
                goto LABEL_281;
            }
          }
          else
          {
            v122 = (__m128i *)((char *)v82 + v120);
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v122 == v81 )
                goto LABEL_233;
            }
          }
          v123 = _mm_loadu_si128(v118);
          v118 = (const __m128i *)((char *)v118 + 24);
          *v122 = v123;
          v122[1].m128i_i64[0] = v118[-1].m128i_i64[1];
        }
        while ( v117 != v118 );
        goto LABEL_230;
      }
      v79 = v161 - 1;
      v80 = 24LL * v161;
      v81 = (__m128i *)((char *)ptr + v80);
      v82 = ptr;
LABEL_152:
      v83 = 24LL * ((unsigned int)v67 & v79);
      v84 = (__m128i *)((char *)v82 + v83);
      if ( v83 == v80 )
      {
        v86 = nullptr;
LABEL_160:
        for ( j = ptr; v84 != j; j = (__m128i *)((char *)j + 24) )
        {
          while ( 1 )
          {
            v88 = j[1].m128i_u64[0];
            if ( v88 <= 1 )
              break;
            if ( (_DWORD)v67 == (_DWORD)v88 && v67 == v88 )
              goto LABEL_282;
            j = (__m128i *)((char *)j + 24);
            if ( v84 == j )
              goto LABEL_168;
          }
          if ( !v88 )
            goto LABEL_169;
          v86 = j;
        }
LABEL_168:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      j = (__m128i *)((char *)v82 + v83);
      v86 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v87 = j[1].m128i_u64[0];
          if ( v87 <= 1 )
            break;
          if ( (_DWORD)v67 == (_DWORD)v87 && v67 == v87 )
          {
LABEL_282:
            j[1].m128i_i64[0] = v67;
            goto LABEL_172;
          }
          j = (__m128i *)((char *)j + 24);
          if ( j == v81 )
            goto LABEL_160;
        }
        if ( !v87 )
          break;
        v86 = j;
        j = (__m128i *)((char *)j + 24);
        if ( j == v81 )
          goto LABEL_160;
      }
LABEL_169:
      if ( v86 )
        --v162;
      else
        v86 = j;
      v86[1].m128i_i64[0] = v67;
      ++v163;
LABEL_172:
      if ( v28 != (__m128i *)v151 && v153 != (__int64 *)v28 )
      {
        v89 = *v153;
        v90 = *v153;
        v91 = 24LL * (v90 & (unsigned int)v79);
        v92 = (__m128i *)((char *)ptr + v91);
        if ( v91 != v80 )
        {
          for ( k = &ptr->m128i_i8[v91]; k != (__int8 *)v81; k += 24 )
          {
            v94 = *((_QWORD *)k + 2);
            if ( v94 > 1 )
            {
              if ( v90 == (_DWORD)v94 && v89 == v94 )
                goto LABEL_182;
            }
            else if ( !v94 )
            {
              goto LABEL_181;
            }
          }
        }
        for ( m = ptr; v92 != m; m = (__m128i *)((char *)m + 24) )
        {
          v127 = m[1].m128i_u64[0];
          if ( v127 > 1 )
          {
            if ( v90 == (_DWORD)v127 && v89 == v127 )
              goto LABEL_182;
          }
          else if ( !v127 )
          {
            break;
          }
        }
LABEL_181:
        v139 = v79;
        sub_A7EB10(a1, v67, v89);
        v79 = v139;
      }
LABEL_182:
      if ( v28 != (__m128i *)v149 && v159 != (__int64 *)v28 )
      {
        v95 = *v159;
        v96 = *v159;
        v97 = 24LL * (v96 & (unsigned int)v79);
        v98 = (__m128i *)((char *)ptr + v97);
        if ( v97 != v80 )
        {
          for ( n = &ptr->m128i_i8[v97]; n != (__int8 *)v81; n += 24 )
          {
            v100 = *((_QWORD *)n + 2);
            if ( v100 > 1 )
            {
              if ( v96 == (_DWORD)v100 && v95 == v100 )
                goto LABEL_192;
            }
            else if ( !v100 )
            {
              goto LABEL_191;
            }
          }
        }
        for ( ii = ptr; v98 != ii; ii = (__m128i *)((char *)ii + 24) )
        {
          v131 = ii[1].m128i_u64[0];
          if ( v131 > 1 )
          {
            if ( v96 == (_DWORD)v131 && v95 == v131 )
              goto LABEL_192;
          }
          else if ( !v131 )
          {
            break;
          }
        }
LABEL_191:
        v140 = v79;
        sub_A7EB10(a1, v67, v95);
        v79 = v140;
      }
LABEL_192:
      if ( v28 != (__m128i *)v152 && v29 != (__int64 *)v28 )
      {
        v101 = *v29;
        v102 = *v29;
        v103 = 24LL * (v102 & (unsigned int)v79);
        v104 = (__m128i *)((char *)ptr + v103);
        if ( v103 != v80 )
        {
          for ( jj = &ptr->m128i_i8[v103]; jj != (__int8 *)v81; jj += 24 )
          {
            v106 = *((_QWORD *)jj + 2);
            if ( v106 > 1 )
            {
              if ( v101 == v106 && v102 == (_DWORD)v106 )
                goto LABEL_202;
            }
            else if ( !v106 )
            {
              goto LABEL_201;
            }
          }
        }
        for ( kk = ptr; v104 != kk; kk = (__m128i *)((char *)kk + 24) )
        {
          v129 = kk[1].m128i_u64[0];
          if ( v129 > 1 )
          {
            if ( v102 == (_DWORD)v129 && v101 == v129 )
              goto LABEL_202;
          }
          else if ( !v129 )
          {
            break;
          }
        }
LABEL_201:
        v141 = v79;
        sub_A7EB10(a1, v67, *v29);
        v79 = v141;
      }
LABEL_202:
      if ( v28 != (__m128i *)v155 && v158 != (__int64 *)v28 )
      {
        v107 = *v158;
        v108 = *v158;
        v109 = 24LL * (v108 & (unsigned int)v79);
        v110 = (__m128i *)((char *)ptr + v109);
        if ( v109 != v80 )
        {
          for ( mm = &ptr->m128i_i8[v109]; mm != (__int8 *)v81; mm += 24 )
          {
            v112 = *((_QWORD *)mm + 2);
            if ( v112 > 1 )
            {
              if ( v108 == (_DWORD)v112 && v107 == v112 )
                goto LABEL_212;
            }
            else if ( !v112 )
            {
              goto LABEL_211;
            }
          }
        }
        for ( nn = ptr; v110 != nn; nn = (__m128i *)((char *)nn + 24) )
        {
          v125 = nn[1].m128i_u64[0];
          if ( v125 > 1 )
          {
            if ( v107 == v125 && v108 == (_DWORD)v125 )
              goto LABEL_212;
          }
          else if ( !v125 )
          {
            break;
          }
        }
LABEL_211:
        sub_A7EB10(a1, v67, v107);
      }
LABEL_212:
      ++v157;
    }
    while ( (unsigned int)v157 < src[-1].m128i_i32[3] );
    if ( ptr )
    {
      sub_186B220(ptr);
      if ( v156 )
        goto LABEL_215;
      goto LABEL_216;
    }
LABEL_301:
    if ( v156 )
LABEL_215:
      sub_186B220(&v156[-1].m128i_u64[1]);
LABEL_216:
    sub_186B220(&src[-1].m128i_u64[1]);
LABEL_30:
    result = *(_QWORD *)(a1 + 528);
  }
  while ( result );
  return result;
}

