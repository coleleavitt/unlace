__int64 __fastcall sub_9C8360(__int64 a1)
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
  char *v20; // r14
  unsigned __int64 v21; // rdx
  __m128i *v22; // rbx
  char v23; // al
  __int64 v24; // rsi
  __int64 *j; // r13
  __int64 *v26; // r15
  __m128i *v28; // rbx
  __int64 *v29; // r13
  _OWORD *v30; // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  __int64 *v33; // rbx
  char v34; // al
  __int64 v35; // r13
  __int64 *k; // r15
  __int64 *v37; // r14
  __int64 v39; // rax
  __m128i *v40; // r15
  char v41; // al
  __int64 *v42; // r14
  __int64 v43; // r13
  __int64 *v44; // r12
  __int64 v46; // rbx
  __int64 *v47; // r13
  __int64 v48; // r12
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __m128i *v53; // rdx
  char v54; // al
  __int64 v55; // rsi
  __int64 *i; // r15
  __int64 *v57; // r12
  __int64 *v59; // r13
  __int64 v60; // rbx
  __int64 v61; // r12
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r15
  __int64 *v66; // r14
  __int64 v67; // rdx
  __int64 *v68; // r12
  __int64 v69; // rdx
  __int64 *v70; // r12
  char v71; // r9
  __int64 v72; // rdx
  __int64 *v73; // r14
  char v74; // al
  __int64 v75; // rdx
  __int64 *v76; // rcx
  __int64 *v77; // rcx
  int v78; // r9d
  __int64 v79; // r14
  __m128i *v80; // rbp
  __m128i *v81; // rcx
  __int64 v82; // rax
  __m128i *v83; // rdi
  __m128i *m; // rax
  __m128i *v85; // rcx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rdx
  __int64 v88; // rdi
  int v89; // ecx
  __int64 v90; // rax
  __m128i *v91; // rsi
  __int8 *n; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rdi
  int v95; // ecx
  __int64 v96; // rax
  __m128i *v97; // rsi
  __int8 *jj; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  int v101; // edi
  __int64 v102; // rax
  __m128i *v103; // rsi
  __int8 *mm; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rcx
  int v107; // esi
  __int64 v108; // rax
  __m128i *v109; // rdi
  __int8 *i1; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  int v113; // ecx
  __m128i *v114; // r10
  __m128i *v115; // rax
  __int64 v116; // rdx
  const __m128i *v117; // rax
  const __m128i *v118; // r12
  unsigned __int64 v119; // rdx
  __int64 v120; // rdx
  __m128i *v121; // rsi
  __m128i *v122; // rdx
  __m128i v123; // xmm0
  __m128i *i2; // rax
  unsigned __int64 v125; // rdx
  __m128i *kk; // rax
  unsigned __int64 v127; // rdx
  __m128i *ii; // rax
  unsigned __int64 v129; // rdx
  __m128i *nn; // rax
  unsigned __int64 v131; // rdx
  __int64 *v132; // rcx
  unsigned int v133; // [rsp+8h] [rbp-D0h]
  int v134[2]; // [rsp+8h] [rbp-D0h]
  __m128i *v135; // [rsp+8h] [rbp-D0h]
  int v136[2]; // [rsp+8h] [rbp-D0h]
  char v137; // [rsp+8h] [rbp-D0h]
  int v138; // [rsp+8h] [rbp-D0h]
  int v139; // [rsp+8h] [rbp-D0h]
  int v140; // [rsp+8h] [rbp-D0h]
  size_t v141; // [rsp+8h] [rbp-D0h]
  int v142[2]; // [rsp+8h] [rbp-D0h]
  __int64 v143; // [rsp+10h] [rbp-C8h]
  char v144; // [rsp+10h] [rbp-C8h]
  int v145; // [rsp+10h] [rbp-C8h]
  __int64 *v146; // [rsp+18h] [rbp-C0h]
  char v147; // [rsp+20h] [rbp-B8h]
  __int64 *v148; // [rsp+20h] [rbp-B8h]
  __m128i *ptr; // [rsp+28h] [rbp-B0h]
  __int64 *v150; // [rsp+30h] [rbp-A8h]
  __int64 *v151; // [rsp+38h] [rbp-A0h]
  __m128i *src; // [rsp+40h] [rbp-98h]
  __int64 *v153; // [rsp+48h] [rbp-90h]
  __m128i *v154; // [rsp+50h] [rbp-88h]
  __int64 *v155; // [rsp+58h] [rbp-80h]
  __int64 v156; // [rsp+60h] [rbp-78h]
  __int64 *v157; // [rsp+68h] [rbp-70h]
  unsigned int v159; // [rsp+7Ch] [rbp-5Ch]
  int v160; // [rsp+80h] [rbp-58h]
  int v161; // [rsp+84h] [rbp-54h]
  __m128i *v162; // [rsp+98h] [rbp-40h] BYREF

  result = *(_QWORD *)(a1 + 688);
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
    v7 = *(_QWORD *)(a1 + 688);
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
          v162 = src;
          sub_98CCC0(&v162, v10);
          src = v162;
          v7 = *(_QWORD *)(a1 + 688);
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
    v11 = (__m128i **)(*(_QWORD *)(a1 + 632) + 8 * v9);
    v12 = *v11;
    v154 = *v11;
    if ( *v11 )
    {
      v13 = _mm_cvtsi32_si128(v12[-1].m128i_u32[3]);
      v14 = v12[-1].m128i_u32[2];
      v133 = v14;
      v15 = (_QWORD *)sub_186B270(8 * v14 + 8);
      v16 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v13));
      v17 = *v11;
      v154 = (__m128i *)(v15 + 1);
      *v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v133), v16).m128i_u64[0];
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
        goto LABEL_35;
      v19 = 8LL * src[-1].m128i_u32[3];
      v20 = &src->m128i_i8[v19];
      if ( &src->m128i_i8[v19] == (__int8 *)src )
        goto LABEL_35;
    }
    else
    {
      if ( !src )
        goto LABEL_26;
      v19 = 8LL * src[-1].m128i_u32[3];
      v20 = &src->m128i_i8[v19];
      if ( &src->m128i_i8[v19] == (__int8 *)src )
        goto LABEL_26;
    }
    _BitScanReverse64(&v21, v19 >> 3);
    sub_9BBDF0(src, v20, 2LL * (int)v21);
    v22 = (__m128i *)&src->m128i_u64[1];
    if ( (unsigned __int64)v19 > 0x80 )
    {
      v135 = src + 8;
      do
      {
        while ( 1 )
        {
          v54 = sub_3ED700((__int64)qword_1C7F2C0, v22->m128i_i64[0] + 56, src->m128i_i64[0] + 56);
          v55 = v22->m128i_i64[0];
          v143 = v22->m128i_i64[0];
          if ( v54 )
            break;
          for ( i = (__int64 *)v22; ; i[1] = *i )
          {
            v57 = i;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v55 + 56, *--i + 56) )
              break;
          }
          v22 = (__m128i *)((char *)v22 + 8);
          *v57 = v143;
          if ( v135 == v22 )
            goto LABEL_89;
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
        src->m128i_i64[0] = v143;
      }
      while ( v135 != v22 );
      do
      {
LABEL_89:
        v59 = (__int64 *)v135;
        v60 = v135->m128i_i64[0];
        v61 = v135->m128i_i64[0] + 56;
        while ( 1 )
        {
          v62 = *(v59 - 1);
          v64 = v62 + 56;
          if ( (*(_BYTE *)(v60 + 76) & 1) != 0
            || *(_DWORD *)(v60 + 72) != 1
            || (*(_BYTE *)(v62 + 76) & 1) != 0
            || *(_DWORD *)(v62 + 72) != 1 )
          {
            LOBYTE(v62) = sub_1848D40(qword_1C7F2C0, v61, v64);
          }
          else if ( (*(_BYTE *)(v60 + 60) & 1) != 0 || (*(_BYTE *)(v62 + 60) & 1) != 0 )
          {
            LODWORD(v62) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v61, v64) >> 31;
          }
          else
          {
            LOBYTE(v62) = *(_DWORD *)(v60 + 56) < *(_DWORD *)(v62 + 56);
          }
          if ( !(_BYTE)v62 )
            break;
          v63 = *--v59;
          v59[1] = v63;
        }
        v135 = (__m128i *)((char *)v135 + 8);
        *v59 = v60;
      }
      while ( v135 != (__m128i *)v20 );
    }
    else if ( v19 != 8 )
    {
      do
      {
        v23 = sub_3ED700((__int64)qword_1C7F2C0, v22->m128i_i64[0] + 56, src->m128i_i64[0] + 56);
        v24 = v22->m128i_i64[0];
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
          for ( j = (__int64 *)v22; ; j[1] = *j )
          {
            v26 = j;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v24 + 56, *--j + 56) )
              break;
          }
          *v26 = *(_QWORD *)v134;
        }
        v22 = (__m128i *)((char *)v22 + 8);
      }
      while ( v22 != (__m128i *)v20 );
    }
    if ( !v154 )
    {
LABEL_26:
      v154 = nullptr;
      v28 = nullptr;
      v29 = nullptr;
      v146 = nullptr;
      goto LABEL_27;
    }
    v16 = _mm_cvtsi32_si128(v154[-1].m128i_u32[3]);
LABEL_35:
    v31 = (unsigned int)_mm_cvtsi128_si32(v16);
    v28 = v154;
    v146 = &v154->m128i_i64[v31];
    if ( v154 != (__m128i *)&v154->m128i_i8[v31 * 8] )
    {
      _BitScanReverse64(&v32, (v31 * 8) >> 3);
      sub_9BBDF0(v154, &v154->m128i_i8[v31 * 8], 2LL * (int)v32);
      v33 = &v154->m128i_i64[1];
      if ( (unsigned __int64)v31 <= 16 )
      {
        if ( v31 != 1 )
        {
          do
          {
            v34 = sub_3ED700((__int64)qword_1C7F2C0, *v33 + 56, v154->m128i_i64[0] + 56);
            v35 = *v33;
            if ( v34 )
            {
              if ( (char *)v33 - (char *)v154 <= 8 )
              {
                if ( (char *)v33 - (char *)v154 == 8 )
                  *v33 = v154->m128i_i64[0];
              }
              else
              {
                memmove(&v154->m128i_u64[1], v154, (char *)v33 - (char *)v154);
              }
              v154->m128i_i64[0] = v35;
            }
            else
            {
              for ( k = v33; ; k[1] = *k )
              {
                v37 = k;
                if ( !sub_3ED700((__int64)qword_1C7F2C0, v35 + 56, *--k + 56) )
                  break;
              }
              *v37 = v35;
            }
            ++v33;
          }
          while ( v33 != v146 );
        }
LABEL_72:
        v28 = (__m128i *)((char *)v154 + 8 * v154[-1].m128i_u32[3]);
        if ( v154 == v28 )
        {
          v146 = (__int64 *)v154;
          v29 = (__int64 *)v154;
        }
        else
        {
          v29 = (__int64 *)v154;
          do
          {
            if ( (*(_BYTE *)(*v29 + 88) & 3) == 0 )
              break;
            ++v29;
          }
          while ( v29 != (__int64 *)v28 );
          v53 = v154;
          do
          {
            if ( (*(_BYTE *)(v53->m128i_i64[0] + 88) & 3) == 1 )
              break;
            v53 = (__m128i *)((char *)v53 + 8);
          }
          while ( v53 != v28 );
          v146 = (__int64 *)v53;
        }
        goto LABEL_27;
      }
      v40 = v154 + 8;
      do
      {
        while ( 1 )
        {
          v41 = sub_3ED700((__int64)qword_1C7F2C0, *v33 + 56, v154->m128i_i64[0] + 56);
          *(_QWORD *)v136 = *v33;
          if ( v41 )
            break;
          v42 = v33;
          v43 = *v33 + 56;
          while ( 1 )
          {
            v44 = v42;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v43, *--v42 + 56) )
              break;
            v42[1] = *v42;
          }
          ++v33;
          *v44 = *(_QWORD *)v136;
          if ( v40 == (__m128i *)v33 )
            goto LABEL_60;
        }
        if ( (char *)v33 - (char *)v154 <= 8 )
        {
          if ( (char *)v33 - (char *)v154 == 8 )
            *v33 = v154->m128i_i64[0];
        }
        else
        {
          memmove(&v154->m128i_u64[1], v154, (char *)v33 - (char *)v154);
        }
        ++v33;
        v154->m128i_i64[0] = *(_QWORD *)v136;
      }
      while ( v40 != (__m128i *)v33 );
LABEL_60:
      v46 = v40->m128i_i64[0];
      v47 = (__int64 *)v40;
      v48 = v40->m128i_i64[0] + 56;
      while ( 1 )
      {
        v51 = *(v47 - 1);
        v52 = v51 + 56;
        if ( (*(_BYTE *)(v46 + 76) & 1) != 0
          || *(_DWORD *)(v46 + 72) != 1
          || (*(_BYTE *)(v51 + 76) & 1) != 0
          || *(_DWORD *)(v51 + 72) != 1 )
        {
          break;
        }
        if ( (*(_BYTE *)(v46 + 60) & 1) != 0 || (*(_BYTE *)(v51 + 60) & 1) != 0 )
        {
          v49 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v48, v52) >> 31;
LABEL_62:
          if ( !(_BYTE)v49 )
            goto LABEL_71;
          goto LABEL_63;
        }
        if ( *(_DWORD *)(v46 + 56) >= *(_DWORD *)(v51 + 56) )
        {
LABEL_71:
          v40 = (__m128i *)((char *)v40 + 8);
          *v47 = v46;
          if ( v40 == (__m128i *)v146 )
            goto LABEL_72;
          goto LABEL_60;
        }
LABEL_63:
        v50 = *--v47;
        v47[1] = v50;
      }
      LOBYTE(v49) = sub_1848D40(qword_1C7F2C0, v48, v52);
      goto LABEL_62;
    }
    v29 = (__int64 *)v154;
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
      if ( v154 )
        sub_186B220(&v154[-1].m128i_u64[1]);
      goto LABEL_30;
    }
    if ( !src[-1].m128i_i32[3] )
    {
      sub_186B220(v30);
      goto LABEL_297;
    }
    v157 = v29;
    v156 = 0;
    v155 = v146;
    v160 = 0;
    v161 = 0;
    v159 = 8;
    do
    {
      v150 = (__int64 *)v28;
      v65 = src->m128i_i64[v156];
      if ( v28 == (__m128i *)v29 )
      {
        v144 = 0;
      }
      else
      {
        v144 = 0;
        v66 = v29;
        do
        {
          while ( 1 )
          {
            v67 = *v66;
            if ( v65 != *v66 && (*(_BYTE *)(v67 + 88) & 3) == 0 )
              break;
            if ( v28 == (__m128i *)++v66 )
              goto LABEL_112;
          }
          v144 = sub_3ED700((__int64)qword_1C7F2C0, v65 + 56, v67 + 56);
          if ( v144 )
            break;
          v150 = v66++;
          v144 = 1;
        }
        while ( v28 != (__m128i *)v66 );
      }
LABEL_112:
      v68 = v146;
      if ( v146 == (__int64 *)v28 )
      {
        v151 = v146;
        v137 = 0;
      }
      else
      {
        v151 = (__int64 *)v28;
        v137 = 0;
        do
        {
          while ( 1 )
          {
            v69 = *v68;
            if ( v65 != *v68 && (*(_BYTE *)(v69 + 88) & 3) == 1 )
              break;
            if ( v28 == (__m128i *)++v68 )
              goto LABEL_119;
          }
          v137 = sub_3ED700((__int64)qword_1C7F2C0, v65 + 56, v69 + 56);
          if ( v137 )
            break;
          v151 = v68++;
          v137 = 1;
        }
        while ( v28 != (__m128i *)v68 );
      }
LABEL_119:
      v70 = v157;
      if ( v157 == (__int64 *)v28 )
      {
        v71 = 0;
        if ( v155 == v157 )
        {
          v74 = 0;
          v73 = v155;
          if ( v155 != v150 )
            v29 = v150;
LABEL_276:
          v148 = v70;
          v70 = v157;
          goto LABEL_136;
        }
      }
      else
      {
        v71 = 0;
        do
        {
          while ( 1 )
          {
            v72 = *v70;
            if ( v65 != *v70 && (*(_BYTE *)(v72 + 88) & 3) == 0 )
              break;
            if ( v28 == (__m128i *)++v70 )
              goto LABEL_126;
          }
          v71 = sub_3ED700((__int64)qword_1C7F2C0, v65 + 56, v72 + 56);
          if ( v71 )
            break;
          ++v70;
          v71 = 1;
        }
        while ( v28 != (__m128i *)v70 );
LABEL_126:
        if ( v155 == (__int64 *)v28 )
        {
          if ( v155 == v150 )
          {
            if ( v155 == v70 )
            {
              v148 = v155;
              v73 = v155;
              if ( v155 != v151 )
                v146 = v151;
              v70 = v157;
              v74 = 0;
            }
            else
            {
              v74 = 0;
              v148 = v70;
              v73 = v155;
              v132 = v146;
              if ( v155 != v151 )
                v132 = v151;
              v146 = v132;
            }
          }
          else if ( v155 == v70 )
          {
            v148 = v155;
            v73 = v155;
            if ( v155 != v151 )
              v146 = v151;
            v70 = v157;
            v29 = v150;
            v74 = 0;
          }
          else
          {
            v148 = v70;
            v73 = v155;
            v74 = 0;
            if ( v155 != v151 )
              v146 = v151;
            v29 = v150;
          }
LABEL_272:
          v153 = v73;
          v73 = v155;
          goto LABEL_139;
        }
      }
      v73 = v155;
      v74 = 0;
      do
      {
        while ( 1 )
        {
          v75 = *v73;
          if ( v65 != *v73 && (*(_BYTE *)(v75 + 88) & 3) == 1 )
            break;
          if ( v28 == (__m128i *)++v73 )
            goto LABEL_133;
        }
        v147 = v71;
        v74 = sub_3ED700((__int64)qword_1C7F2C0, v65 + 56, v75 + 56);
        v71 = v147;
        if ( v74 )
          break;
        ++v73;
        v74 = 1;
      }
      while ( v28 != (__m128i *)v73 );
LABEL_133:
      v148 = v70;
      if ( v28 != (__m128i *)v150 )
        v29 = v150;
      if ( v28 == (__m128i *)v70 )
        goto LABEL_276;
LABEL_136:
      v76 = v146;
      v153 = v73;
      if ( v28 != (__m128i *)v151 )
        v76 = v151;
      v146 = v76;
      if ( v28 == (__m128i *)v73 )
        goto LABEL_272;
LABEL_139:
      v77 = v146;
      if ( !v144 )
        v29 = (__int64 *)v28;
      if ( !v137 )
        v77 = (__int64 *)v28;
      if ( !v71 )
        v70 = (__int64 *)v28;
      if ( !v74 )
        v73 = (__int64 *)v28;
      v146 = v77;
      v157 = v70;
      v155 = v73;
      if ( 3 * v159 < 4 * (v161 + v160) )
      {
        v141 = 48LL * v159;
        v79 = v141;
        v112 = sub_186B270(v141);
        v113 = 2 * v159;
        v114 = (__m128i *)v112;
        v115 = (__m128i *)(v112 + 8);
        v116 = (__int64)&v114[v141 / 0x10].m128i_i64[1];
        if ( 2 * v159 )
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
          v80 = &v114[v141 / 0x10];
          v117 = (__m128i *)((char *)ptr + 24 * v159);
        }
        else
        {
          v80 = v114;
          v78 = -1;
          v117 = (__m128i *)((char *)ptr + 24 * v159);
          if ( ptr == v117 )
          {
LABEL_227:
            if ( ptr )
            {
              v145 = v78;
              *(_QWORD *)v142 = v114;
              sub_186B220(ptr);
              v113 = 2 * v159;
              v78 = v145;
              v114 = *(__m128i **)v142;
            }
            v159 = v113;
            v81 = v114;
            ptr = v114;
            v160 = 0;
            goto LABEL_149;
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
            if ( v118 == v117 )
              goto LABEL_227;
          }
          v120 = 24LL * (v78 & (unsigned int)v119);
          v121 = (__m128i *)((char *)v114 + v120);
          if ( v141 == v120 )
          {
LABEL_230:
            if ( v114 == v121 )
            {
LABEL_277:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v122 = v114;
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v121 == v122 )
                goto LABEL_277;
            }
          }
          else
          {
            v122 = (__m128i *)((char *)v114 + v120);
            while ( v122[1].m128i_i64[0] )
            {
              v122 = (__m128i *)((char *)v122 + 24);
              if ( v122 == v80 )
                goto LABEL_230;
            }
          }
          v123 = _mm_loadu_si128(v118);
          v118 = (const __m128i *)((char *)v118 + 24);
          *v122 = v123;
          v122[1].m128i_i64[0] = v118[-1].m128i_i64[1];
        }
        while ( v118 != v117 );
        goto LABEL_227;
      }
      v78 = v159 - 1;
      v79 = 24LL * v159;
      v80 = (__m128i *)((char *)ptr + v79);
      v81 = ptr;
LABEL_149:
      v82 = 24LL * ((unsigned int)v65 & v78);
      v83 = (__m128i *)((char *)v81 + v82);
      if ( v82 == v79 )
      {
        v85 = nullptr;
LABEL_157:
        for ( m = ptr; v83 != m; m = (__m128i *)((char *)m + 24) )
        {
          while ( 1 )
          {
            v87 = m[1].m128i_u64[0];
            if ( v87 <= 1 )
              break;
            if ( (_DWORD)v65 == (_DWORD)v87 && v65 == v87 )
              goto LABEL_278;
            m = (__m128i *)((char *)m + 24);
            if ( v83 == m )
              goto LABEL_165;
          }
          if ( !v87 )
            goto LABEL_166;
          v85 = m;
        }
LABEL_165:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      m = (__m128i *)((char *)v81 + v82);
      v85 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v86 = m[1].m128i_u64[0];
          if ( v86 <= 1 )
            break;
          if ( (_DWORD)v65 == (_DWORD)v86 && v65 == v86 )
          {
LABEL_278:
            m[1].m128i_i64[0] = v65;
            goto LABEL_169;
          }
          m = (__m128i *)((char *)m + 24);
          if ( m == v80 )
            goto LABEL_157;
        }
        if ( !v86 )
          break;
        v85 = m;
        m = (__m128i *)((char *)m + 24);
        if ( m == v80 )
          goto LABEL_157;
      }
LABEL_166:
      if ( v85 )
        --v160;
      else
        v85 = m;
      v85[1].m128i_i64[0] = v65;
      ++v161;
LABEL_169:
      if ( v28 != (__m128i *)v150 && v29 != (__int64 *)v28 )
      {
        v88 = *v29;
        v89 = *v29;
        v90 = 24LL * (v89 & (unsigned int)v78);
        v91 = (__m128i *)((char *)ptr + v90);
        if ( v90 != v79 )
        {
          for ( n = &ptr->m128i_i8[v90]; n != (__int8 *)v80; n += 24 )
          {
            v93 = *((_QWORD *)n + 2);
            if ( v93 > 1 )
            {
              if ( v89 == (_DWORD)v93 && v88 == v93 )
                goto LABEL_179;
            }
            else if ( !v93 )
            {
              goto LABEL_178;
            }
          }
        }
        for ( ii = ptr; v91 != ii; ii = (__m128i *)((char *)ii + 24) )
        {
          v129 = ii[1].m128i_u64[0];
          if ( v129 > 1 )
          {
            if ( v89 == (_DWORD)v129 && v88 == v129 )
              goto LABEL_179;
          }
          else if ( !v129 )
          {
            break;
          }
        }
LABEL_178:
        v138 = v78;
        sub_9B5EF0(a1, v65, *v29);
        v78 = v138;
      }
LABEL_179:
      if ( v148 != (__int64 *)v28 && v157 != (__int64 *)v28 )
      {
        v94 = *v157;
        v95 = *v157;
        v96 = 24LL * (v95 & (unsigned int)v78);
        v97 = (__m128i *)((char *)ptr + v96);
        if ( v96 != v79 )
        {
          for ( jj = &ptr->m128i_i8[v96]; jj != (__int8 *)v80; jj += 24 )
          {
            v99 = *((_QWORD *)jj + 2);
            if ( v99 > 1 )
            {
              if ( v95 == (_DWORD)v99 && v94 == v99 )
                goto LABEL_189;
            }
            else if ( !v99 )
            {
              goto LABEL_188;
            }
          }
        }
        for ( kk = ptr; v97 != kk; kk = (__m128i *)((char *)kk + 24) )
        {
          v127 = kk[1].m128i_u64[0];
          if ( v127 > 1 )
          {
            if ( v95 == (_DWORD)v127 && v94 == v127 )
              goto LABEL_189;
          }
          else if ( !v127 )
          {
            break;
          }
        }
LABEL_188:
        v139 = v78;
        sub_9B5EF0(a1, v65, v94);
        v78 = v139;
      }
LABEL_189:
      if ( v28 != (__m128i *)v151 && v146 != (__int64 *)v28 )
      {
        v100 = *v146;
        v101 = *v146;
        v102 = 24LL * (v101 & (unsigned int)v78);
        v103 = (__m128i *)((char *)ptr + v102);
        if ( v102 != v79 )
        {
          for ( mm = &ptr->m128i_i8[v102]; mm != (__int8 *)v80; mm += 24 )
          {
            v105 = *((_QWORD *)mm + 2);
            if ( v105 > 1 )
            {
              if ( v100 == v105 && v101 == (_DWORD)v105 )
                goto LABEL_199;
            }
            else if ( !v105 )
            {
              goto LABEL_198;
            }
          }
        }
        for ( nn = ptr; v103 != nn; nn = (__m128i *)((char *)nn + 24) )
        {
          v131 = nn[1].m128i_u64[0];
          if ( v131 > 1 )
          {
            if ( v101 == (_DWORD)v131 && v100 == v131 )
              goto LABEL_199;
          }
          else if ( !v131 )
          {
            break;
          }
        }
LABEL_198:
        v140 = v78;
        sub_9B5EF0(a1, v65, v100);
        v78 = v140;
      }
LABEL_199:
      if ( v28 != (__m128i *)v153 && v155 != (__int64 *)v28 )
      {
        v106 = *v155;
        v107 = *v155;
        v108 = 24LL * (v107 & (unsigned int)v78);
        v109 = (__m128i *)((char *)ptr + v108);
        if ( v108 != v79 )
        {
          for ( i1 = &ptr->m128i_i8[v108]; i1 != (__int8 *)v80; i1 += 24 )
          {
            v111 = *((_QWORD *)i1 + 2);
            if ( v111 > 1 )
            {
              if ( v107 == (_DWORD)v111 && v106 == v111 )
                goto LABEL_209;
            }
            else if ( !v111 )
            {
              goto LABEL_208;
            }
          }
        }
        for ( i2 = ptr; v109 != i2; i2 = (__m128i *)((char *)i2 + 24) )
        {
          v125 = i2[1].m128i_u64[0];
          if ( v125 > 1 )
          {
            if ( v106 == v125 && v107 == (_DWORD)v125 )
              goto LABEL_209;
          }
          else if ( !v125 )
          {
            break;
          }
        }
LABEL_208:
        sub_9B5EF0(a1, v65, v106);
      }
LABEL_209:
      ++v156;
    }
    while ( (unsigned int)v156 < src[-1].m128i_i32[3] );
    if ( ptr )
    {
      sub_186B220(ptr);
      if ( v154 )
        goto LABEL_212;
      goto LABEL_213;
    }
LABEL_297:
    if ( v154 )
LABEL_212:
      sub_186B220(&v154[-1].m128i_u64[1]);
LABEL_213:
    sub_186B220(&src[-1].m128i_u64[1]);
LABEL_30:
    result = *(_QWORD *)(a1 + 688);
  }
  while ( result );
  return result;
}

