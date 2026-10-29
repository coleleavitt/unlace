__int64 __fastcall sub_9C9BA0(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r12
  _QWORD *v10; // rsi
  __m128i **v11; // rbx
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  _QWORD *v15; // rax
  __m128i v16; // xmm0
  __m128i *v17; // rsi
  size_t v18; // rdx
  __int64 v19; // rbp
  unsigned __int64 v20; // rdx
  char *v21; // rbx
  char v22; // al
  __int64 v23; // r13
  char *j; // r14
  __int64 *v25; // rbp
  char v26; // al
  __int64 v27; // rbp
  unsigned __int64 v28; // rdx
  __m128i *v29; // rbx
  char v30; // al
  __int64 v31; // r13
  __int64 *m; // r14
  __int64 *v33; // rbp
  __m128i *v35; // r14
  __int64 *v36; // r13
  __int64 *v37; // r12
  _OWORD *v38; // rax
  __int64 v39; // rax
  __m128i *v40; // rbp
  char v41; // al
  __int64 v42; // r15
  __int64 *k; // r14
  __int64 *v44; // r12
  __int64 v46; // r13
  void *v47; // rdi
  __int64 *v48; // r15
  __int64 v49; // rax
  __int64 v50; // rbx
  unsigned int v51; // eax
  __m128i *v52; // rbp
  char v53; // al
  __int64 v54; // r15
  char *i; // r14
  __int64 *v56; // r12
  char v57; // al
  __int64 v58; // r13
  void *v59; // rdi
  __int64 *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  __int64 v66; // r15
  __int64 *v67; // rbx
  char v68; // bp
  __int64 v69; // rsi
  __int64 *v70; // rbx
  __int64 v71; // rsi
  __int64 *v72; // rbx
  char v73; // r10
  __int64 v74; // rsi
  __int64 *v75; // r9
  char v76; // al
  __int64 v77; // rsi
  int v78; // r11d
  __int64 v79; // rcx
  __m128i *v80; // rbx
  __m128i *v81; // rdx
  __int64 v82; // rax
  __m128i *v83; // r9
  __m128i *n; // rax
  __m128i *v85; // rsi
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  __int64 v88; // r9
  int v89; // esi
  __int64 v90; // rax
  __m128i *v91; // rdi
  __int8 *ii; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // r9
  int v95; // esi
  __int64 v96; // rax
  __m128i *v97; // rdi
  __int8 *kk; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // r9
  int v101; // esi
  __int64 v102; // rax
  __m128i *v103; // rdi
  __int8 *nn; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rdi
  int v107; // esi
  __int64 v108; // rax
  __m128i *v109; // r9
  __int8 *i2; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  int v113; // r9d
  __m128i *v114; // r8
  __m128i *v115; // rax
  __int64 v116; // rdx
  const __m128i *v117; // rax
  const __m128i *v118; // rbp
  unsigned __int64 v119; // rdx
  __int64 v120; // rdx
  __m128i *v121; // rsi
  __m128i *v122; // rdx
  __m128i v123; // xmm0
  __m128i *i3; // rax
  unsigned __int64 v125; // rdx
  __m128i *mm; // rax
  unsigned __int64 v127; // rdx
  __m128i *jj; // rax
  unsigned __int64 v129; // rdx
  __m128i *i1; // rax
  unsigned __int64 v131; // rdx
  unsigned int v132; // [rsp+8h] [rbp-D0h]
  __int64 v133; // [rsp+8h] [rbp-D0h]
  __int64 v134; // [rsp+8h] [rbp-D0h]
  __int64 v135; // [rsp+8h] [rbp-D0h]
  int v136[2]; // [rsp+8h] [rbp-D0h]
  int v137; // [rsp+8h] [rbp-D0h]
  int v138; // [rsp+8h] [rbp-D0h]
  char *v139; // [rsp+10h] [rbp-C8h]
  int v140[2]; // [rsp+10h] [rbp-C8h]
  char v141; // [rsp+10h] [rbp-C8h]
  int v142; // [rsp+10h] [rbp-C8h]
  int v143[2]; // [rsp+10h] [rbp-C8h]
  int v144[2]; // [rsp+10h] [rbp-C8h]
  int v145[2]; // [rsp+10h] [rbp-C8h]
  __int64 *v146; // [rsp+18h] [rbp-C0h]
  __int64 *v147; // [rsp+18h] [rbp-C0h]
  char v148; // [rsp+20h] [rbp-B8h]
  void *v149; // [rsp+20h] [rbp-B8h]
  size_t v150; // [rsp+20h] [rbp-B8h]
  int v151; // [rsp+20h] [rbp-B8h]
  __m128i *ptr; // [rsp+28h] [rbp-B0h]
  __int64 *v153; // [rsp+30h] [rbp-A8h]
  __int64 *v154; // [rsp+38h] [rbp-A0h]
  __m128i *src; // [rsp+40h] [rbp-98h]
  __m128i *v156; // [rsp+48h] [rbp-90h]
  __int64 v157; // [rsp+50h] [rbp-88h]
  __int64 *v158; // [rsp+58h] [rbp-80h]
  __int64 *v159; // [rsp+60h] [rbp-78h]
  unsigned int v161; // [rsp+70h] [rbp-68h]
  size_t v162; // [rsp+70h] [rbp-68h]
  int v163; // [rsp+78h] [rbp-60h]
  int v164; // [rsp+78h] [rbp-60h]
  int v165; // [rsp+80h] [rbp-58h]
  __m128i *v166; // [rsp+98h] [rbp-40h] BYREF

  result = *(_QWORD *)(a1 + 752);
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
    v7 = *(_QWORD *)(a1 + 752);
    v8 = *(_DWORD *)(v7 - 4) - 1;
    *(_DWORD *)(v7 - 4) = v8;
    v9 = *(unsigned int *)(*(_QWORD *)(v4 + 8 + 8LL * (unsigned int)(*(_DWORD *)(v4 + 4) - 1)) + 8LL);
    if ( v8 )
    {
      do
      {
        v10 = (_QWORD *)(v7 + 8LL * v6);
        if ( (_DWORD)v9 == *(_DWORD *)(*v10 + 8LL) )
        {
          v166 = src;
          sub_98CE40(&v166, v10);
          src = v166;
          v7 = *(_QWORD *)(a1 + 752);
          v39 = (unsigned int)(*(_DWORD *)(v7 - 4) - 1);
          *(_QWORD *)(v7 + 8LL * v6) = *(_QWORD *)(v7 + 8 * v39);
          *(_DWORD *)(v7 - 4) = v39;
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
    v11 = (__m128i **)(*(_QWORD *)(a1 + 696) + 8 * v9);
    v12 = *v11;
    v156 = *v11;
    if ( *v11 )
    {
      v13 = _mm_cvtsi32_si128(v12[-1].m128i_u32[3]);
      v14 = v12[-1].m128i_u32[2];
      v132 = v14;
      v15 = (_QWORD *)sub_186B270(8 * v14 + 8);
      v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v13));
      v17 = *v11;
      v156 = (__m128i *)(v15 + 1);
      *v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v132), v16).m128i_u64[0];
      if ( v17 )
      {
        v18 = 8LL * v17[-1].m128i_u32[3];
        if ( v18 <= 8 )
        {
          if ( v18 == 8 )
            v15[1] = v17->m128i_i64[0];
        }
        else
        {
          memmove(v15 + 1, v17, v18);
          v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v16));
        }
      }
      if ( !src )
        goto LABEL_26;
      v19 = 8LL * src[-1].m128i_u32[3];
      v139 = &src->m128i_i8[v19];
      if ( &src->m128i_i8[v19] == (__int8 *)src )
        goto LABEL_26;
    }
    else
    {
      if ( !src )
        goto LABEL_47;
      v19 = 8LL * src[-1].m128i_u32[3];
      v139 = &src->m128i_i8[v19];
      if ( &src->m128i_i8[v19] == (__int8 *)src )
        goto LABEL_47;
    }
    _BitScanReverse64(&v20, v19 >> 3);
    sub_9BCE90(src, v139, 2LL * (int)v20);
    v21 = &src->m128i_i8[8];
    if ( (unsigned __int64)v19 > 0x80 )
    {
      v52 = src + 8;
      do
      {
        while ( 1 )
        {
          v53 = sub_927C80(*(_QWORD *)v21 + 88LL, src->m128i_i64[0] + 88);
          v54 = *(_QWORD *)v21;
          if ( v53 )
            break;
          for ( i = v21; ; *((_QWORD *)i + 1) = *(_QWORD *)i )
          {
            v56 = (__int64 *)i;
            v57 = sub_927C80(v54 + 88, *((_QWORD *)i - 1) + 88LL);
            i -= 8;
            if ( !v57 )
              break;
          }
          v21 += 8;
          *v56 = v54;
          if ( v52 == (__m128i *)v21 )
            goto LABEL_83;
        }
        if ( v21 - (char *)src <= 8 )
        {
          if ( v21 - (char *)src == 8 )
            *(_QWORD *)v21 = src->m128i_i64[0];
        }
        else
        {
          memmove(&src->m128i_u64[1], src, v21 - (char *)src);
        }
        v21 += 8;
        src->m128i_i64[0] = v54;
      }
      while ( v52 != (__m128i *)v21 );
LABEL_83:
      v58 = v52->m128i_i64[0];
      v59 = qword_1C7F2C0;
      v60 = (__int64 *)v52;
      v134 = v52->m128i_i64[0] + 88;
      while ( 1 )
      {
        v62 = *(v60 - 1);
        if ( (*(_BYTE *)(v58 + 108) & 1) != 0
          || *(_DWORD *)(v58 + 104) != 1
          || (*(_BYTE *)(v62 + 108) & 1) != 0
          || *(_DWORD *)(v62 + 104) != 1 )
        {
          LOBYTE(v63) = sub_1848D40(v59, v134, v62 + 88);
          v59 = qword_1C7F2C0;
        }
        else if ( (*(_BYTE *)(v58 + 92) & 1) != 0 || (*(_BYTE *)(v62 + 92) & 1) != 0 )
        {
          v64 = sub_182C7B0(v59, v134, v62 + 88);
          v59 = qword_1C7F2C0;
          v63 = v64 >> 31;
        }
        else
        {
          LOBYTE(v63) = *(_DWORD *)(v58 + 88) < *(_DWORD *)(v62 + 88);
        }
        if ( !(_BYTE)v63 )
        {
          if ( !sub_3ED680((__int64)v59, v134, v62 + 88) || !sub_3ED700((__int64)qword_1C7F2C0, v58 + 120, v62 + 120) )
          {
            *v60 = v58;
            v52 = (__m128i *)((char *)v52 + 8);
            if ( v139 == (char *)v52 )
              goto LABEL_24;
            goto LABEL_83;
          }
          v59 = qword_1C7F2C0;
        }
        v61 = *--v60;
        v60[1] = v61;
      }
    }
    if ( v19 != 8 )
    {
      do
      {
        while ( 1 )
        {
          v22 = sub_927C80(*(_QWORD *)v21 + 88LL, src->m128i_i64[0] + 88);
          v23 = *(_QWORD *)v21;
          if ( v22 )
            break;
          for ( j = v21; ; *((_QWORD *)j + 1) = *(_QWORD *)j )
          {
            v25 = (__int64 *)j;
            v26 = sub_927C80(v23 + 88, *((_QWORD *)j - 1) + 88LL);
            j -= 8;
            if ( !v26 )
              break;
          }
          *v25 = v23;
          v21 += 8;
          if ( v139 == v21 )
            goto LABEL_24;
        }
        if ( v21 - (char *)src <= 8 )
        {
          if ( v21 - (char *)src == 8 )
            *(_QWORD *)v21 = src->m128i_i64[0];
        }
        else
        {
          memmove(&src->m128i_u64[1], src, v21 - (char *)src);
        }
        v21 += 8;
        src->m128i_i64[0] = v23;
      }
      while ( v139 != v21 );
    }
LABEL_24:
    if ( v156 )
    {
      v16 = _mm_cvtsi32_si128(v156[-1].m128i_u32[3]);
LABEL_26:
      v27 = 8LL * (unsigned int)_mm_cvtsi128_si32(v16);
      *(_QWORD *)v140 = (char *)v156 + v27;
      if ( &v156->m128i_i8[v27] == (__int8 *)v156 )
      {
        v37 = (__int64 *)v156;
        v35 = v156;
        v36 = (__int64 *)v156;
      }
      else
      {
        _BitScanReverse64(&v28, v27 >> 3);
        sub_9BCE90(v156, &v156->m128i_i8[v27], 2LL * (int)v28);
        v29 = (__m128i *)&v156->m128i_u64[1];
        if ( (unsigned __int64)v27 > 0x80 )
        {
          v40 = v156 + 8;
          do
          {
            while ( 1 )
            {
              v41 = sub_927C80(v29->m128i_i64[0] + 88, v156->m128i_i64[0] + 88);
              v42 = v29->m128i_i64[0];
              if ( v41 )
                break;
              for ( k = (__int64 *)v29; ; k[1] = *k )
              {
                v44 = k;
                if ( !sub_927C80(v42 + 88, *--k + 88) )
                  break;
              }
              v29 = (__m128i *)((char *)v29 + 8);
              *v44 = v42;
              if ( v40 == v29 )
                goto LABEL_65;
            }
            if ( (char *)v29 - (char *)v156 <= 8 )
            {
              if ( (char *)v29 - (char *)v156 == 8 )
                v29->m128i_i64[0] = v156->m128i_i64[0];
            }
            else
            {
              memmove(&v156->m128i_u64[1], v156, (char *)v29 - (char *)v156);
            }
            v29 = (__m128i *)((char *)v29 + 8);
            v156->m128i_i64[0] = v42;
          }
          while ( v40 != v29 );
LABEL_65:
          v46 = v40->m128i_i64[0];
          v47 = qword_1C7F2C0;
          v48 = (__int64 *)v40;
          v133 = v40->m128i_i64[0] + 88;
          while ( 1 )
          {
            v50 = *(v48 - 1);
            if ( (*(_BYTE *)(v46 + 108) & 1) != 0
              || *(_DWORD *)(v46 + 104) != 1
              || (*(_BYTE *)(v50 + 108) & 1) != 0
              || *(_DWORD *)(v50 + 104) != 1 )
            {
              LOBYTE(v51) = sub_1848D40(v47, v133, v50 + 88);
              v47 = qword_1C7F2C0;
            }
            else if ( (*(_BYTE *)(v46 + 92) & 1) != 0 || (*(_BYTE *)(v50 + 92) & 1) != 0 )
            {
              v65 = sub_182C7B0(v47, v133, v50 + 88);
              v47 = qword_1C7F2C0;
              v51 = v65 >> 31;
            }
            else
            {
              LOBYTE(v51) = *(_DWORD *)(v46 + 88) < *(_DWORD *)(v50 + 88);
            }
            if ( !(_BYTE)v51 )
            {
              if ( !sub_3ED680((__int64)v47, v133, v50 + 88)
                || !sub_3ED700((__int64)qword_1C7F2C0, v46 + 120, v50 + 120) )
              {
                *v48 = v46;
                v40 = (__m128i *)((char *)v40 + 8);
                if ( *(__m128i **)v140 == v40 )
                  goto LABEL_38;
                goto LABEL_65;
              }
              v47 = qword_1C7F2C0;
            }
            v49 = *--v48;
            v48[1] = v49;
          }
        }
        if ( v27 != 8 )
        {
          do
          {
            while ( 1 )
            {
              v30 = sub_927C80(v29->m128i_i64[0] + 88, v156->m128i_i64[0] + 88);
              v31 = v29->m128i_i64[0];
              if ( v30 )
                break;
              for ( m = (__int64 *)v29; ; m[1] = *m )
              {
                v33 = m;
                if ( !sub_927C80(v31 + 88, *--m + 88) )
                  break;
              }
              *v33 = v31;
              v29 = (__m128i *)((char *)v29 + 8);
              if ( *(__m128i **)v140 == v29 )
                goto LABEL_38;
            }
            if ( (char *)v29 - (char *)v156 <= 8 )
            {
              if ( (char *)v29 - (char *)v156 == 8 )
                v29->m128i_i64[0] = v156->m128i_i64[0];
            }
            else
            {
              memmove(&v156->m128i_u64[1], v156, (char *)v29 - (char *)v156);
            }
            v29 = (__m128i *)((char *)v29 + 8);
            v156->m128i_i64[0] = v31;
          }
          while ( *(__m128i **)v140 != v29 );
        }
LABEL_38:
        v35 = (__m128i *)((char *)v156 + 8 * v156[-1].m128i_u32[3]);
        if ( v156 == v35 )
        {
          v37 = (__int64 *)v156;
          v36 = (__int64 *)v156;
        }
        else
        {
          v36 = (__int64 *)v156;
          do
          {
            if ( (*(_BYTE *)(*v36 + 152) & 3) == 0 )
              break;
            ++v36;
          }
          while ( v36 != (__int64 *)v35 );
          v37 = (__int64 *)v156;
          do
          {
            if ( (*(_BYTE *)(*v37 + 152) & 3) == 1 )
              break;
            ++v37;
          }
          while ( v37 != (__int64 *)v35 );
        }
      }
      goto LABEL_48;
    }
LABEL_47:
    v156 = nullptr;
    v35 = nullptr;
    v36 = nullptr;
    v37 = nullptr;
LABEL_48:
    v38 = (_OWORD *)sub_186B270(0xC0u);
    ptr = (__m128i *)v38;
    *(_OWORD *)((char *)v38 + 8) = 0;
    v38[2] = 0;
    *(_OWORD *)((char *)v38 + 56) = 0;
    v38[5] = 0;
    *(_OWORD *)((char *)v38 + 104) = 0;
    v38[8] = 0;
    *(_OWORD *)((char *)v38 + 152) = 0;
    v38[11] = 0;
    if ( !src )
    {
      sub_186B220(v38);
      if ( v156 )
        sub_186B220(&v156[-1].m128i_u64[1]);
      goto LABEL_51;
    }
    if ( !src[-1].m128i_i32[3] )
    {
      sub_186B220(v38);
      goto LABEL_304;
    }
    v158 = v37;
    v159 = v36;
    v157 = 0;
    v163 = 0;
    v165 = 0;
    v161 = 8;
    do
    {
      v66 = src->m128i_i64[v157];
      v135 = v66 + 88;
      if ( v36 == (__int64 *)v35 )
      {
        v153 = v36;
        v68 = 0;
      }
      else
      {
        v153 = (__int64 *)v35;
        v67 = v36;
        v68 = 0;
        do
        {
          while ( 1 )
          {
            v69 = *v67;
            if ( v66 != *v67 && (*(_BYTE *)(v69 + 152) & 3) == 0 )
              break;
            if ( ++v67 == (__int64 *)v35 )
              goto LABEL_118;
          }
          v68 = sub_927C80(v135, v69 + 88);
          if ( v68 )
            break;
          v153 = v67++;
          v68 = 1;
        }
        while ( v67 != (__int64 *)v35 );
      }
LABEL_118:
      if ( v37 == (__int64 *)v35 )
      {
        v154 = v37;
        v141 = 0;
      }
      else
      {
        v154 = (__int64 *)v35;
        v70 = v37;
        v141 = 0;
        do
        {
          while ( 1 )
          {
            v71 = *v70;
            if ( v66 != *v70 && (*(_BYTE *)(v71 + 152) & 3) == 1 )
              break;
            if ( ++v70 == (__int64 *)v35 )
              goto LABEL_125;
          }
          v141 = sub_927C80(v135, v71 + 88);
          if ( v141 )
            break;
          v154 = v70++;
          v141 = 1;
        }
        while ( v70 != (__int64 *)v35 );
      }
LABEL_125:
      v72 = v159;
      if ( v159 == (__int64 *)v35 )
      {
        v73 = 0;
        if ( v159 == v158 )
        {
          if ( v153 == v159 )
          {
            v75 = v153;
          }
          else
          {
            v36 = v153;
            v75 = v159;
          }
          v76 = 0;
LABEL_283:
          *(_QWORD *)v136 = v72;
          v72 = v159;
          goto LABEL_142;
        }
      }
      else
      {
        v73 = 0;
        do
        {
          while ( 1 )
          {
            v74 = *v72;
            if ( v66 != *v72 && (*(_BYTE *)(v74 + 152) & 3) == 0 )
              break;
            if ( ++v72 == (__int64 *)v35 )
              goto LABEL_132;
          }
          v73 = sub_927C80(v135, v74 + 88);
          if ( v73 )
            break;
          ++v72;
          v73 = 1;
        }
        while ( v72 != (__int64 *)v35 );
LABEL_132:
        if ( v35 == (__m128i *)v158 )
        {
          if ( v153 == (__int64 *)v35 )
          {
            if ( v72 == v153 )
            {
              if ( v72 != v154 )
                v37 = v154;
              *(_QWORD *)v136 = v72;
              v75 = v72;
              v76 = 0;
              v72 = v159;
            }
            else
            {
              v75 = v153;
              v76 = 0;
              *(_QWORD *)v136 = v72;
              if ( v153 != v154 )
                v37 = v154;
            }
          }
          else if ( v72 == (__int64 *)v35 )
          {
            if ( v72 != v154 )
              v37 = v154;
            *(_QWORD *)v136 = v72;
            v75 = v72;
            v36 = v153;
            v76 = 0;
            v72 = v159;
          }
          else
          {
            if ( v35 != (__m128i *)v154 )
              v37 = v154;
            *(_QWORD *)v136 = v72;
            v36 = v153;
            v75 = (__int64 *)v35;
            v76 = 0;
          }
LABEL_278:
          v147 = v75;
          v75 = v158;
          goto LABEL_145;
        }
      }
      v75 = v158;
      v76 = 0;
      do
      {
        while ( 1 )
        {
          v77 = *v75;
          if ( v66 != *v75 && (*(_BYTE *)(v77 + 152) & 3) == 1 )
            break;
          if ( ++v75 == (__int64 *)v35 )
            goto LABEL_139;
        }
        v148 = v73;
        v146 = v75;
        v76 = sub_927C80(v135, v77 + 88);
        v75 = v146;
        v73 = v148;
        if ( v76 )
          break;
        v75 = v146 + 1;
        v76 = 1;
      }
      while ( v146 + 1 != (__int64 *)v35 );
LABEL_139:
      *(_QWORD *)v136 = v72;
      if ( v153 != (__int64 *)v35 )
        v36 = v153;
      if ( v35 == (__m128i *)v72 )
        goto LABEL_283;
LABEL_142:
      v147 = v75;
      if ( v35 != (__m128i *)v154 )
        v37 = v154;
      if ( v75 == (__int64 *)v35 )
        goto LABEL_278;
LABEL_145:
      if ( !v68 )
        v36 = (__int64 *)v35;
      if ( !v141 )
        v37 = (__int64 *)v35;
      if ( !v73 )
        v72 = (__int64 *)v35;
      if ( !v76 )
        v75 = (__int64 *)v35;
      v159 = v72;
      v158 = v75;
      if ( 3 * v161 < 4 * (v165 + v163) )
      {
        v150 = 48LL * v161;
        v112 = sub_186B270(v150);
        v113 = 2 * v161;
        v114 = (__m128i *)v112;
        v115 = (__m128i *)(v112 + 8);
        v79 = v150;
        v116 = (__int64)&v114[v150 / 0x10].m128i_i64[1];
        if ( 2 * v161 )
        {
          if ( (((_BYTE)v116 - (_BYTE)v115) & 8) == 0
            || (v115 = v114 + 2, *(__m128i *)((char *)v114 + 8) = 0, &v114[2] != (__m128i *)v116) )
          {
            do
            {
              *v115 = 0;
              v115 += 3;
              *(__m128i *)((char *)&v115[-2] + 8) = 0;
            }
            while ( v115 != (__m128i *)v116 );
          }
          v78 = v113 - 1;
          v80 = &v114[v150 / 0x10];
          v117 = (__m128i *)((char *)ptr + 24 * v161);
        }
        else
        {
          v80 = v114;
          v78 = -1;
          v117 = (__m128i *)((char *)ptr + 24 * v161);
          if ( ptr == v117 )
          {
LABEL_233:
            if ( ptr )
            {
              v164 = 2 * v161;
              v162 = v150;
              v151 = v78;
              *(_QWORD *)v145 = v114;
              sub_186B220(ptr);
              v113 = v164;
              v79 = v162;
              v78 = v151;
              v114 = *(__m128i **)v145;
            }
            v161 = v113;
            v81 = v114;
            ptr = v114;
            v163 = 0;
            goto LABEL_155;
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
              goto LABEL_233;
          }
          v120 = 24LL * (v78 & (unsigned int)v119);
          v121 = (__m128i *)((char *)v114 + v120);
          if ( v150 == v120 )
          {
LABEL_236:
            if ( v114 == v121 )
            {
LABEL_284:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v122 = v114;
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v121 == v122 )
                goto LABEL_284;
            }
          }
          else
          {
            v122 = (__m128i *)((char *)v114 + v120);
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v122 == v80 )
                goto LABEL_236;
            }
          }
          v123 = _mm_loadu_si128(v118);
          v118 = (const __m128i *)((char *)v118 + 24);
          *v122 = v123;
          v122[1].m128i_i64[0] = v118[-1].m128i_i64[1];
        }
        while ( v117 != v118 );
        goto LABEL_233;
      }
      v78 = v161 - 1;
      v79 = 24LL * v161;
      v80 = (__m128i *)((char *)ptr + v79);
      v81 = ptr;
LABEL_155:
      v82 = 24LL * ((unsigned int)v66 & v78);
      v83 = (__m128i *)((char *)v81 + v82);
      if ( v82 == v79 )
      {
        v85 = nullptr;
LABEL_163:
        for ( n = ptr; v83 != n; n = (__m128i *)((char *)n + 24) )
        {
          while ( 1 )
          {
            v87 = n[1].m128i_u64[0];
            if ( v87 <= 1 )
              break;
            if ( (_DWORD)v66 == (_DWORD)v87 && v66 == v87 )
              goto LABEL_285;
            n = (__m128i *)((char *)n + 24);
            if ( v83 == n )
              goto LABEL_171;
          }
          if ( !v87 )
            goto LABEL_172;
          v85 = n;
        }
LABEL_171:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      n = (__m128i *)((char *)v81 + v82);
      v85 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v86 = n[1].m128i_u64[0];
          if ( v86 <= 1 )
            break;
          if ( (_DWORD)v66 == (_DWORD)v86 && v66 == v86 )
          {
LABEL_285:
            n[1].m128i_i64[0] = v66;
            goto LABEL_175;
          }
          n = (__m128i *)((char *)n + 24);
          if ( n == v80 )
            goto LABEL_163;
        }
        if ( !v86 )
          break;
        v85 = n;
        n = (__m128i *)((char *)n + 24);
        if ( n == v80 )
          goto LABEL_163;
      }
LABEL_172:
      if ( v85 )
        --v163;
      else
        v85 = n;
      v85[1].m128i_i64[0] = v66;
      ++v165;
LABEL_175:
      if ( v153 != (__int64 *)v35 && v36 != (__int64 *)v35 )
      {
        v88 = *v36;
        v89 = *v36;
        v90 = 24LL * (v89 & (unsigned int)v78);
        v91 = (__m128i *)((char *)ptr + v90);
        if ( v90 != v79 )
        {
          for ( ii = &ptr->m128i_i8[v90]; ii != (__int8 *)v80; ii += 24 )
          {
            v93 = *((_QWORD *)ii + 2);
            if ( v93 > 1 )
            {
              if ( v89 == (_DWORD)v93 && v88 == v93 )
                goto LABEL_185;
            }
            else if ( !v93 )
            {
              goto LABEL_184;
            }
          }
        }
        for ( jj = ptr; v91 != jj; jj = (__m128i *)((char *)jj + 24) )
        {
          v129 = jj[1].m128i_u64[0];
          if ( v129 > 1 )
          {
            if ( v89 == (_DWORD)v129 && v88 == v129 )
              goto LABEL_185;
          }
          else if ( !v129 )
          {
            break;
          }
        }
LABEL_184:
        v149 = (void *)v79;
        v142 = v78;
        sub_9B3B50(a1, v66, *v36);
        v79 = (__int64)v149;
        v78 = v142;
      }
LABEL_185:
      if ( *(__m128i **)v136 != v35 && v159 != (__int64 *)v35 )
      {
        v94 = *v159;
        v95 = *v159;
        v96 = 24LL * (v95 & (unsigned int)v78);
        v97 = (__m128i *)((char *)ptr + v96);
        if ( v96 != v79 )
        {
          for ( kk = &ptr->m128i_i8[v96]; kk != (__int8 *)v80; kk += 24 )
          {
            v99 = *((_QWORD *)kk + 2);
            if ( v99 > 1 )
            {
              if ( v95 == (_DWORD)v99 && v94 == v99 )
                goto LABEL_195;
            }
            else if ( !v99 )
            {
              goto LABEL_194;
            }
          }
        }
        for ( mm = ptr; v97 != mm; mm = (__m128i *)((char *)mm + 24) )
        {
          v127 = mm[1].m128i_u64[0];
          if ( v127 > 1 )
          {
            if ( v95 == (_DWORD)v127 && v94 == v127 )
              goto LABEL_195;
          }
          else if ( !v127 )
          {
            break;
          }
        }
LABEL_194:
        *(_QWORD *)v143 = v79;
        v137 = v78;
        sub_9B3B50(a1, v66, v94);
        v79 = *(_QWORD *)v143;
        v78 = v137;
      }
LABEL_195:
      if ( v35 != (__m128i *)v154 && v37 != (__int64 *)v35 )
      {
        v100 = *v37;
        v101 = *v37;
        v102 = 24LL * (v101 & (unsigned int)v78);
        v103 = (__m128i *)((char *)ptr + v102);
        if ( v102 != v79 )
        {
          for ( nn = &ptr->m128i_i8[v102]; nn != (__int8 *)v80; nn += 24 )
          {
            v105 = *((_QWORD *)nn + 2);
            if ( v105 > 1 )
            {
              if ( v101 == (_DWORD)v105 && v100 == v105 )
                goto LABEL_205;
            }
            else if ( !v105 )
            {
              goto LABEL_204;
            }
          }
        }
        for ( i1 = ptr; v103 != i1; i1 = (__m128i *)((char *)i1 + 24) )
        {
          v131 = i1[1].m128i_u64[0];
          if ( v131 > 1 )
          {
            if ( v101 == (_DWORD)v131 && v100 == v131 )
              goto LABEL_205;
          }
          else if ( !v131 )
          {
            break;
          }
        }
LABEL_204:
        *(_QWORD *)v144 = v79;
        v138 = v78;
        sub_9B3B50(a1, v66, *v37);
        v79 = *(_QWORD *)v144;
        v78 = v138;
      }
LABEL_205:
      if ( v35 != (__m128i *)v147 && v158 != (__int64 *)v35 )
      {
        v106 = *v158;
        v107 = *v158;
        v108 = 24LL * (v107 & (unsigned int)v78);
        v109 = (__m128i *)((char *)ptr + v108);
        if ( v108 != v79 )
        {
          for ( i2 = &ptr->m128i_i8[v108]; i2 != (__int8 *)v80; i2 += 24 )
          {
            v111 = *((_QWORD *)i2 + 2);
            if ( v111 > 1 )
            {
              if ( v107 == (_DWORD)v111 && v106 == v111 )
                goto LABEL_215;
            }
            else if ( !v111 )
            {
              goto LABEL_214;
            }
          }
        }
        for ( i3 = ptr; v109 != i3; i3 = (__m128i *)((char *)i3 + 24) )
        {
          v125 = i3[1].m128i_u64[0];
          if ( v125 > 1 )
          {
            if ( v107 == (_DWORD)v125 && v106 == v125 )
              goto LABEL_215;
          }
          else if ( !v125 )
          {
            break;
          }
        }
LABEL_214:
        sub_9B3B50(a1, v66, v106);
      }
LABEL_215:
      ++v157;
    }
    while ( (unsigned int)v157 < src[-1].m128i_i32[3] );
    if ( ptr )
    {
      sub_186B220(ptr);
      if ( v156 )
        goto LABEL_218;
      goto LABEL_219;
    }
LABEL_304:
    if ( v156 )
LABEL_218:
      sub_186B220(&v156[-1].m128i_u64[1]);
LABEL_219:
    sub_186B220(&src[-1].m128i_u64[1]);
LABEL_51:
    result = *(_QWORD *)(a1 + 752);
  }
  while ( result );
  return result;
}

