__int64 __fastcall sub_82AC10(__int64 a1)
{
  char **exception; // rbp
  __int64 result; // rax
  int v3; // edx
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r13
  __int64 *v11; // r12
  __int64 v12; // rax
  __m128i **v13; // rbx
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  _QWORD *v17; // rax
  __m128i v18; // xmm0
  __m128i *v19; // rsi
  size_t v20; // rdx
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  char *v23; // rbx
  char v24; // al
  __int64 *v25; // r13
  __int64 v26; // r12
  __int64 *v27; // r15
  __m128i *v29; // rbx
  __m128i *v30; // r13
  _OWORD *v31; // rax
  int v32; // r8d
  __int64 v33; // rbp
  unsigned __int64 v34; // rdx
  __m128i *v35; // rbx
  __m128i *v36; // r15
  char v37; // al
  __int64 *v38; // r14
  __int64 v39; // r13
  __int64 *v40; // r12
  __int64 v42; // rbx
  __int64 *v43; // r13
  __int64 v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __m128i *v49; // rax
  unsigned int v50; // ecx
  __int64 v51; // rsi
  int v52; // ecx
  __m128i *v53; // rsi
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // r15
  char *j; // r14
  __int64 *v58; // r12
  char v59; // al
  _QWORD *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // r12
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  char v66; // al
  __int64 v67; // r13
  __int64 *i; // r15
  __int64 *v69; // r14
  unsigned int v71; // r15d
  unsigned int v72; // eax
  unsigned int *v73; // rax
  __m128i *v74; // rsi
  __int64 v75; // rax
  int v76; // ecx
  __int64 v77; // r15
  __m128i *v78; // r14
  __int64 v79; // rdx
  __m128i *v80; // r12
  __int64 v81; // rdx
  __m128i *v82; // r12
  char v83; // r9
  __int64 v84; // rdx
  __m128i *v85; // r14
  char v86; // al
  __int64 v87; // rdx
  __int64 *v88; // rsi
  __int64 *v89; // rcx
  int v90; // r9d
  __int64 v91; // r14
  __m128i *v92; // rbp
  __m128i *v93; // rcx
  __int64 v94; // rax
  __m128i *v95; // rdi
  __m128i *k; // rax
  __m128i *v97; // rcx
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  __int64 v100; // rdi
  int v101; // ecx
  __int64 v102; // rax
  __m128i *v103; // rsi
  __int8 *m; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rdi
  int v107; // ecx
  __int64 v108; // rax
  __m128i *v109; // rsi
  __int8 *ii; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // rdi
  int v113; // ecx
  __int64 v114; // rax
  __m128i *v115; // rsi
  __int8 *kk; // rax
  unsigned __int64 v117; // rdx
  __int64 v118; // rcx
  int v119; // esi
  __int64 v120; // rax
  __m128i *v121; // rdi
  __int8 *nn; // rax
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  int v125; // ecx
  __m128i *v126; // r10
  __m128i *v127; // rax
  __int64 v128; // rdx
  const __m128i *v129; // rax
  const __m128i *v130; // r12
  unsigned __int64 v131; // rdx
  __int64 v132; // rdx
  __m128i *v133; // rsi
  __m128i *v134; // rdx
  __m128i v135; // xmm0
  __m128i *i1; // rax
  unsigned __int64 v137; // rdx
  __m128i *jj; // rax
  unsigned __int64 v139; // rdx
  __m128i *n; // rax
  unsigned __int64 v141; // rdx
  __m128i *mm; // rax
  unsigned __int64 v143; // rdx
  _QWORD *v144; // rax
  int v145; // [rsp+0h] [rbp-F8h]
  __int64 m128i_i64; // [rsp+8h] [rbp-F0h]
  char *v147; // [rsp+10h] [rbp-E8h]
  __int64 *v148; // [rsp+18h] [rbp-E0h]
  char v149; // [rsp+20h] [rbp-D8h]
  __m128i *v150; // [rsp+20h] [rbp-D8h]
  __m128i *v151; // [rsp+28h] [rbp-D0h]
  __m128i *v152; // [rsp+30h] [rbp-C8h]
  __m128i *v153; // [rsp+38h] [rbp-C0h]
  __m128i *src; // [rsp+40h] [rbp-B8h]
  __m128i *v155; // [rsp+48h] [rbp-B0h]
  __m128i *v156; // [rsp+50h] [rbp-A8h]
  __m128i *v157; // [rsp+58h] [rbp-A0h]
  __int64 v158; // [rsp+60h] [rbp-98h]
  __m128i *v159; // [rsp+68h] [rbp-90h]
  unsigned int v161; // [rsp+7Ch] [rbp-7Ch]
  int v162; // [rsp+80h] [rbp-78h]
  int v163; // [rsp+84h] [rbp-74h]
  __int64 v164[11]; // [rsp+A0h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 520);
  if ( !result )
    return result;
  do
  {
    v3 = *(_DWORD *)(result - 4);
    if ( !v3 )
      return result;
    v4 = (__int64 *)(result + 8LL * (unsigned int)(v3 - 1));
    v5 = sub_186B270(0x18u);
    v6 = *v4;
    v7 = 0;
    *(_QWORD *)(v5 + 8) = v6;
    src = (__m128i *)(v5 + 8);
    *(_QWORD *)v5 = 0x100000002LL;
    v8 = *(_QWORD *)(a1 + 520);
    v9 = *(_DWORD *)(v8 - 4) - 1;
    *(_DWORD *)(v8 - 4) = v9;
    v10 = *(unsigned int *)(*(_QWORD *)(v5 + 8 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 4) - 1)) + 12LL);
    if ( v9 )
    {
      do
      {
        v11 = (__int64 *)(v8 + 8LL * v7);
        v12 = *v11;
        if ( (_DWORD)v10 == *(_DWORD *)(*v11 + 12) )
        {
          if ( src )
          {
            v50 = src[-1].m128i_u32[3];
            if ( v50 == src[-1].m128i_i32[2] )
            {
              v71 = (3 * v50 + 1) >> 1;
              v72 = 8 * v71 + 8;
              if ( 8 * v50 + 8 >= v72 || v50 >= v71 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v164, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v164);
                sub_233E40((__int64)v164);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v73 = (unsigned int *)sub_186B300(&src[-1].m128i_u64[1], v72);
              v74 = (__m128i *)(v73 + 2);
              *v73 = v71;
              v75 = v73[1];
              src = v74;
              v76 = v75;
              v53 = (__m128i *)((char *)v74 + 8 * v75);
              v12 = *v11;
              v8 = *(_QWORD *)(a1 + 520);
              v52 = v76 + 1;
            }
            else
            {
              v51 = v50;
              v52 = v50 + 1;
              v53 = (__m128i *)((char *)src + 8 * v51);
            }
          }
          else
          {
            v144 = (_QWORD *)sub_186B270(0x18u);
            v52 = 1;
            v53 = (__m128i *)(v144 + 1);
            *v144 = 2;
            v12 = *v11;
            src = v53;
            v8 = *(_QWORD *)(a1 + 520);
          }
          v53->m128i_i64[0] = v12;
          src[-1].m128i_i32[3] = v52;
          v54 = (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
          *(_QWORD *)(v8 + 8LL * v7) = *(_QWORD *)(v8 + 8 * v54);
          *(_DWORD *)(v8 - 4) = v54;
        }
        else
        {
          ++v7;
          if ( !v8 )
            break;
        }
      }
      while ( v7 < *(_DWORD *)(v8 - 4) );
    }
    v13 = (__m128i **)(*(_QWORD *)(a1 + 320) + 8 * v10);
    v14 = *v13;
    v156 = *v13;
    if ( *v13 )
    {
      v15 = _mm_cvtsi32_si128(v14[-1].m128i_u32[3]);
      v16 = v14[-1].m128i_u32[2];
      LODWORD(m128i_i64) = v16;
      LODWORD(v147) = _mm_cvtsi128_si32(v15);
      v17 = (_QWORD *)sub_186B270(8 * v16 + 8);
      v18 = _mm_cvtsi32_si128((unsigned int)v147);
      v19 = *v13;
      v156 = (__m128i *)(v17 + 1);
      *v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(m128i_i64), v18).m128i_u64[0];
      if ( v19 )
      {
        v20 = 8LL * v19[-1].m128i_u32[3];
        if ( v20 <= 8 )
        {
          if ( v20 == 8 )
            v17[1] = v19->m128i_i64[0];
          if ( !src )
          {
LABEL_301:
            src = nullptr;
LABEL_34:
            v33 = (unsigned int)_mm_cvtsi128_si32(v18);
            v29 = v156;
            v148 = &v156->m128i_i64[v33];
            if ( v156 == (__m128i *)&v156->m128i_i8[v33 * 8] )
            {
              v30 = v156;
            }
            else
            {
              _BitScanReverse64(&v34, (v33 * 8) >> 3);
              sub_82A500(v156, &v156->m128i_i8[v33 * 8], 2LL * (int)v34);
              v35 = (__m128i *)&v156->m128i_u64[1];
              if ( (unsigned __int64)v33 > 16 )
              {
                v36 = v156 + 8;
                do
                {
                  while ( 1 )
                  {
                    v37 = sub_3ED700((__int64)qword_1C7F2C0, v35->m128i_i64[0] + 24, v156->m128i_i64[0] + 24);
                    m128i_i64 = v35->m128i_i64[0];
                    if ( v37 )
                      break;
                    v38 = (__int64 *)v35;
                    v39 = v35->m128i_i64[0] + 24;
                    while ( 1 )
                    {
                      v40 = v38;
                      if ( !sub_3ED700((__int64)qword_1C7F2C0, v39, *--v38 + 24) )
                        break;
                      v38[1] = *v38;
                    }
                    v35 = (__m128i *)((char *)v35 + 8);
                    *v40 = m128i_i64;
                    if ( v36 == v35 )
                      goto LABEL_45;
                  }
                  if ( (char *)v35 - (char *)v156 <= 8 )
                  {
                    if ( (char *)v35 - (char *)v156 == 8 )
                      v35->m128i_i64[0] = v156->m128i_i64[0];
                  }
                  else
                  {
                    memmove(&v156->m128i_u64[1], v156, (char *)v35 - (char *)v156);
                  }
                  v35 = (__m128i *)((char *)v35 + 8);
                  v156->m128i_i64[0] = m128i_i64;
                }
                while ( v36 != v35 );
LABEL_45:
                v42 = v36->m128i_i64[0];
                v43 = (__int64 *)v36;
                v44 = v36->m128i_i64[0] + 24;
                while ( 1 )
                {
                  v47 = *(v43 - 1);
                  v48 = v47 + 24;
                  if ( (*(_BYTE *)(v42 + 44) & 1) != 0
                    || *(_DWORD *)(v42 + 40) != 1
                    || (*(_BYTE *)(v47 + 44) & 1) != 0
                    || *(_DWORD *)(v47 + 40) != 1 )
                  {
                    break;
                  }
                  if ( (*(_BYTE *)(v42 + 28) & 1) != 0 || (*(_BYTE *)(v47 + 28) & 1) != 0 )
                  {
                    v45 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v44, v48) >> 31;
LABEL_47:
                    if ( !(_BYTE)v45 )
                      goto LABEL_56;
                    goto LABEL_48;
                  }
                  if ( *(_DWORD *)(v42 + 24) >= *(_DWORD *)(v47 + 24) )
                  {
LABEL_56:
                    v36 = (__m128i *)((char *)v36 + 8);
                    *v43 = v42;
                    if ( v36 == (__m128i *)v148 )
                      goto LABEL_57;
                    goto LABEL_45;
                  }
LABEL_48:
                  v46 = *--v43;
                  v43[1] = v46;
                }
                LOBYTE(v45) = sub_1848D40(qword_1C7F2C0, v44, v48);
                goto LABEL_47;
              }
              if ( v33 != 1 )
              {
                do
                {
                  m128i_i64 = v156->m128i_i64[0];
                  v66 = sub_3ED700((__int64)qword_1C7F2C0, v35->m128i_i64[0] + 24, v156->m128i_i64[0] + 24);
                  v67 = v35->m128i_i64[0];
                  if ( v66 )
                  {
                    if ( (char *)v35 - (char *)v156 <= 8 )
                    {
                      if ( (char *)v35 - (char *)v156 == 8 )
                        v35->m128i_i64[0] = v156->m128i_i64[0];
                    }
                    else
                    {
                      memmove(&v156->m128i_u64[1], v156, (char *)v35 - (char *)v156);
                    }
                    v156->m128i_i64[0] = v67;
                  }
                  else
                  {
                    for ( i = (__int64 *)v35; ; i[1] = *i )
                    {
                      v69 = i;
                      if ( !sub_3ED700((__int64)qword_1C7F2C0, v67 + 24, *--i + 24) )
                        break;
                    }
                    *v69 = v67;
                  }
                  v35 = (__m128i *)((char *)v35 + 8);
                }
                while ( v35 != (__m128i *)v148 );
              }
LABEL_57:
              v29 = (__m128i *)((char *)v156 + 8 * v156[-1].m128i_u32[3]);
              if ( v156 == v29 )
              {
                v148 = (__int64 *)v156;
                v30 = v156;
              }
              else
              {
                v30 = v156;
                do
                {
                  if ( !*(_DWORD *)(v30->m128i_i64[0] + 56) )
                    break;
                  v30 = (__m128i *)((char *)v30 + 8);
                }
                while ( v30 != v29 );
                v49 = v156;
                do
                {
                  if ( *(_DWORD *)(v49->m128i_i64[0] + 56) == 1 )
                    break;
                  v49 = (__m128i *)((char *)v49 + 8);
                }
                while ( v49 != v29 );
                v148 = (__int64 *)v49;
              }
            }
            goto LABEL_26;
          }
          v21 = 8LL * src[-1].m128i_u32[3];
          v147 = &src->m128i_i8[v21];
          if ( &src->m128i_i8[v21] == (__int8 *)src )
            goto LABEL_33;
        }
        else
        {
          LODWORD(m128i_i64) = _mm_cvtsi128_si32(v18);
          memmove(v17 + 1, v19, v20);
          v18 = _mm_cvtsi32_si128(m128i_i64);
          if ( !src )
            goto LABEL_301;
          v21 = 8LL * src[-1].m128i_u32[3];
          v147 = &src->m128i_i8[v21];
          if ( src == (__m128i *)&src->m128i_i8[v21] )
          {
LABEL_33:
            v18 = _mm_cvtsi32_si128(v156[-1].m128i_u32[3]);
            goto LABEL_34;
          }
        }
      }
      else
      {
        if ( !src )
          goto LABEL_34;
        v21 = 8LL * src[-1].m128i_u32[3];
        v147 = &src->m128i_i8[v21];
        if ( &src->m128i_i8[v21] == (__int8 *)src )
          goto LABEL_34;
      }
    }
    else
    {
      if ( !src )
        goto LABEL_25;
      v21 = 8LL * src[-1].m128i_u32[3];
      v147 = &src->m128i_i8[v21];
      if ( &src->m128i_i8[v21] == (__int8 *)src )
        goto LABEL_25;
    }
    _BitScanReverse64(&v22, v21 >> 3);
    sub_82A500(src, v147, 2LL * (int)v22);
    v23 = &src->m128i_i8[8];
    if ( (unsigned __int64)v21 > 0x80 )
    {
      m128i_i64 = (__int64)src[8].m128i_i64;
      do
      {
        while ( 1 )
        {
          v55 = sub_3ED700((__int64)qword_1C7F2C0, *(_QWORD *)v23 + 24LL, src->m128i_i64[0] + 24);
          v56 = *(_QWORD *)v23;
          if ( v55 )
            break;
          for ( j = v23; ; *((_QWORD *)j + 1) = *(_QWORD *)j )
          {
            v58 = (__int64 *)j;
            v59 = sub_3ED700((__int64)qword_1C7F2C0, v56 + 24, *((_QWORD *)j - 1) + 24LL);
            j -= 8;
            if ( !v59 )
              break;
          }
          *v58 = v56;
          v23 += 8;
          if ( (char *)m128i_i64 == v23 )
            goto LABEL_78;
        }
        if ( v23 - (char *)src <= 8 )
        {
          if ( v23 - (char *)src == 8 )
            *(_QWORD *)v23 = src->m128i_i64[0];
        }
        else
        {
          memmove(&src->m128i_u64[1], src, v23 - (char *)src);
        }
        v23 += 8;
        src->m128i_i64[0] = v56;
      }
      while ( (char *)m128i_i64 != v23 );
      do
      {
LABEL_78:
        v60 = (_QWORD *)m128i_i64;
        v61 = *(_QWORD *)m128i_i64;
        v62 = *(_QWORD *)m128i_i64 + 24LL;
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
        m128i_i64 += 8;
        *v60 = v61;
      }
      while ( (char *)m128i_i64 != v147 );
    }
    else if ( v21 != 8 )
    {
      do
      {
        v24 = sub_3ED700((__int64)qword_1C7F2C0, *(_QWORD *)v23 + 24LL, src->m128i_i64[0] + 24);
        m128i_i64 = *(_QWORD *)v23;
        if ( v24 )
        {
          if ( v23 - (char *)src <= 8 )
          {
            if ( v23 - (char *)src == 8 )
              *(_QWORD *)v23 = src->m128i_i64[0];
          }
          else
          {
            memmove(&src->m128i_u64[1], src, v23 - (char *)src);
          }
          src->m128i_i64[0] = m128i_i64;
        }
        else
        {
          v25 = (__int64 *)v23;
          v26 = *(_QWORD *)v23 + 24LL;
          while ( 1 )
          {
            v27 = v25;
            if ( !sub_3ED700((__int64)qword_1C7F2C0, v26, *--v25 + 24) )
              break;
            v25[1] = *v25;
          }
          *v27 = m128i_i64;
        }
        v23 += 8;
      }
      while ( v23 != v147 );
    }
    if ( v156 )
      goto LABEL_33;
LABEL_25:
    v156 = nullptr;
    v29 = nullptr;
    v30 = nullptr;
    v148 = nullptr;
LABEL_26:
    v31 = (_OWORD *)sub_186B270(0xC0u);
    v151 = (__m128i *)v31;
    *(_OWORD *)((char *)v31 + 8) = 0;
    v31[2] = 0;
    *(_OWORD *)((char *)v31 + 56) = 0;
    v31[5] = 0;
    *(_OWORD *)((char *)v31 + 104) = 0;
    v31[8] = 0;
    *(_OWORD *)((char *)v31 + 152) = 0;
    v31[11] = 0;
    if ( !src )
    {
      sub_186B220(v31);
      if ( v156 )
        sub_186B220(&v156[-1].m128i_u64[1]);
      goto LABEL_29;
    }
    if ( !src[-1].m128i_i32[3] )
    {
      sub_186B220(v31);
      goto LABEL_306;
    }
    v159 = v30;
    v158 = 0;
    v157 = (__m128i *)v148;
    v162 = 0;
    v163 = 0;
    v161 = 8;
    do
    {
      v77 = src->m128i_i64[v158];
      if ( v30 == v29 )
      {
        v152 = v30;
        LOBYTE(m128i_i64) = 0;
      }
      else
      {
        v152 = v29;
        v78 = v30;
        LOBYTE(m128i_i64) = 0;
        do
        {
          while ( 1 )
          {
            v79 = v78->m128i_i64[0];
            if ( v77 != v78->m128i_i64[0] && !*(_DWORD *)(v79 + 56) )
              break;
            v78 = (__m128i *)((char *)v78 + 8);
            if ( v78 == v29 )
              goto LABEL_117;
          }
          LOBYTE(m128i_i64) = sub_3ED700((__int64)qword_1C7F2C0, v77 + 24, v79 + 24);
          if ( (_BYTE)m128i_i64 )
            break;
          v152 = v78;
          v78 = (__m128i *)((char *)v78 + 8);
          LOBYTE(m128i_i64) = 1;
        }
        while ( v78 != v29 );
      }
LABEL_117:
      v80 = (__m128i *)v148;
      if ( v148 == (__int64 *)v29 )
      {
        v153 = (__m128i *)v148;
        LOBYTE(v147) = 0;
      }
      else
      {
        v153 = v29;
        LOBYTE(v147) = 0;
        do
        {
          while ( 1 )
          {
            v81 = v80->m128i_i64[0];
            if ( v77 != v80->m128i_i64[0] && *(_DWORD *)(v81 + 56) == 1 )
              break;
            v80 = (__m128i *)((char *)v80 + 8);
            if ( v80 == v29 )
              goto LABEL_124;
          }
          LOBYTE(v147) = sub_3ED700((__int64)qword_1C7F2C0, v77 + 24, v81 + 24);
          if ( (_BYTE)v147 )
            break;
          v153 = v80;
          v80 = (__m128i *)((char *)v80 + 8);
          LOBYTE(v147) = 1;
        }
        while ( v80 != v29 );
      }
LABEL_124:
      v82 = v159;
      if ( v159 == v29 )
      {
        v83 = 0;
        if ( v157 == v159 )
        {
          if ( v152 == v157 )
          {
            v85 = v152;
          }
          else
          {
            v30 = v152;
            v85 = v157;
          }
          v86 = 0;
LABEL_281:
          v150 = v82;
          v82 = v159;
          goto LABEL_141;
        }
      }
      else
      {
        v83 = 0;
        do
        {
          while ( 1 )
          {
            v84 = v82->m128i_i64[0];
            if ( v77 != v82->m128i_i64[0] && !*(_DWORD *)(v84 + 56) )
              break;
            v82 = (__m128i *)((char *)v82 + 8);
            if ( v82 == v29 )
              goto LABEL_131;
          }
          v83 = sub_3ED700((__int64)qword_1C7F2C0, v77 + 24, v84 + 24);
          if ( v83 )
            break;
          v82 = (__m128i *)((char *)v82 + 8);
          v83 = 1;
        }
        while ( v82 != v29 );
LABEL_131:
        if ( v157 == v29 )
        {
          if ( v152 == v157 )
          {
            if ( v82 == v152 )
            {
              if ( v153 == v82 )
              {
                v82 = v159;
                v150 = v153;
                v85 = v153;
              }
              else
              {
                v150 = v82;
                v85 = v82;
                v82 = v159;
                v148 = (__int64 *)v153;
              }
              v86 = 0;
            }
            else
            {
              if ( v153 == v152 )
              {
                v150 = v82;
                v85 = v153;
              }
              else
              {
                v85 = v152;
                v150 = v82;
                v148 = (__int64 *)v153;
              }
              v86 = 0;
            }
          }
          else if ( v82 == v157 )
          {
            if ( v153 == v82 )
            {
              v82 = v159;
              v30 = v152;
              v150 = v153;
              v85 = v153;
            }
            else
            {
              v150 = v82;
              v85 = v82;
              v30 = v152;
              v82 = v159;
              v148 = (__int64 *)v153;
            }
            v86 = 0;
          }
          else if ( v153 == v157 )
          {
            v150 = v82;
            v85 = v153;
            v86 = 0;
            v30 = v152;
          }
          else
          {
            v30 = v152;
            v150 = v82;
            v85 = v157;
            v148 = (__int64 *)v153;
            v86 = 0;
          }
LABEL_276:
          v155 = v85;
          v85 = v157;
          goto LABEL_144;
        }
      }
      v85 = v157;
      v86 = 0;
      do
      {
        while ( 1 )
        {
          v87 = v85->m128i_i64[0];
          if ( v77 != v85->m128i_i64[0] && *(_DWORD *)(v87 + 56) == 1 )
            break;
          v85 = (__m128i *)((char *)v85 + 8);
          if ( v85 == v29 )
            goto LABEL_138;
        }
        v149 = v83;
        v86 = sub_3ED700((__int64)qword_1C7F2C0, v77 + 24, v87 + 24);
        v83 = v149;
        if ( v86 )
          break;
        v85 = (__m128i *)((char *)v85 + 8);
        v86 = 1;
      }
      while ( v85 != v29 );
LABEL_138:
      v150 = v82;
      if ( v152 != v29 )
        v30 = v152;
      if ( v82 == v29 )
        goto LABEL_281;
LABEL_141:
      v88 = v148;
      v155 = v85;
      if ( v153 != v29 )
        v88 = (__int64 *)v153;
      v148 = v88;
      if ( v85 == v29 )
        goto LABEL_276;
LABEL_144:
      v89 = v148;
      if ( !(_BYTE)m128i_i64 )
        v30 = v29;
      if ( !(_BYTE)v147 )
        v89 = (__int64 *)v29;
      if ( !v83 )
        v82 = v29;
      v148 = v89;
      if ( !v86 )
        v85 = v29;
      v159 = v82;
      v157 = v85;
      if ( 3 * v161 < 4 * (v163 + v162) )
      {
        LODWORD(v147) = 2 * v161;
        m128i_i64 = 48LL * v161;
        v91 = m128i_i64;
        v124 = sub_186B270(m128i_i64);
        v32 = m128i_i64;
        v125 = 2 * v161;
        v126 = (__m128i *)v124;
        v127 = (__m128i *)(v124 + 8);
        v128 = (__int64)&v126->m128i_i64[1] + m128i_i64;
        if ( 2 * v161 )
        {
          if ( (((_BYTE)v128 - (_BYTE)v127) & 8) == 0
            || (v127 = v126 + 2, *(__m128i *)((char *)v126 + 8) = 0, &v126[2] != (__m128i *)v128) )
          {
            do
            {
              *v127 = 0;
              v127 += 3;
              *(__m128i *)((char *)&v127[-2] + 8) = 0;
            }
            while ( v127 != (__m128i *)v128 );
          }
          v90 = v125 - 1;
          v92 = (__m128i *)((char *)v126 + m128i_i64);
          v129 = (__m128i *)((char *)v151 + 24 * v161);
        }
        else
        {
          v92 = v126;
          v90 = -1;
          v129 = (__m128i *)((char *)v151 + 24 * v161);
          if ( v151 == v129 )
          {
LABEL_232:
            if ( v151 )
            {
              LODWORD(v147) = v90;
              m128i_i64 = (__int64)v126;
              sub_186B220(v151);
              v125 = 2 * v161;
              v90 = (int)v147;
              v126 = (__m128i *)m128i_i64;
            }
            v161 = v125;
            v93 = v126;
            v151 = v126;
            v162 = 0;
            goto LABEL_154;
          }
        }
        v130 = v151;
        do
        {
          while ( 1 )
          {
            v131 = v130[1].m128i_u64[0];
            if ( v131 > 1 )
              break;
            v130 = (const __m128i *)((char *)v130 + 24);
            if ( v130 == v129 )
              goto LABEL_232;
          }
          v132 = 24LL * (v90 & (unsigned int)v131);
          v133 = (__m128i *)((char *)v126 + v132);
          if ( m128i_i64 == v132 )
          {
LABEL_235:
            if ( v126 == v133 )
            {
LABEL_282:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v134 = v126;
            while ( v134[1].m128i_i64[0] )
            {
              v134 = (__m128i *)((char *)v134 + 24);
              if ( v133 == v134 )
                goto LABEL_282;
            }
          }
          else
          {
            v134 = (__m128i *)((char *)v126 + v132);
            while ( v134[1].m128i_i64[0] )
            {
              v134 = (__m128i *)((char *)v134 + 24);
              if ( v134 == v92 )
                goto LABEL_235;
            }
          }
          v135 = _mm_loadu_si128(v130);
          v130 = (const __m128i *)((char *)v130 + 24);
          *v134 = v135;
          v134[1].m128i_i64[0] = v130[-1].m128i_i64[1];
        }
        while ( v130 != v129 );
        goto LABEL_232;
      }
      v90 = v161 - 1;
      v91 = 24LL * v161;
      v92 = (__m128i *)((char *)v151 + v91);
      v93 = v151;
LABEL_154:
      v94 = 24LL * ((unsigned int)v77 & v90);
      v95 = (__m128i *)((char *)v93 + v94);
      if ( v94 == v91 )
      {
        v97 = nullptr;
LABEL_162:
        for ( k = v151; v95 != k; k = (__m128i *)((char *)k + 24) )
        {
          while ( 1 )
          {
            v99 = k[1].m128i_u64[0];
            if ( v99 <= 1 )
              break;
            if ( (_DWORD)v77 == (_DWORD)v99 && v77 == v99 )
              goto LABEL_283;
            k = (__m128i *)((char *)k + 24);
            if ( v95 == k )
              goto LABEL_170;
          }
          if ( !v99 )
            goto LABEL_171;
          v97 = k;
        }
LABEL_170:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      k = (__m128i *)((char *)v93 + v94);
      v97 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v98 = k[1].m128i_u64[0];
          if ( v98 <= 1 )
            break;
          if ( (_DWORD)v77 == (_DWORD)v98 && v77 == v98 )
          {
LABEL_283:
            k[1].m128i_i64[0] = v77;
            goto LABEL_174;
          }
          k = (__m128i *)((char *)k + 24);
          if ( k == v92 )
            goto LABEL_162;
        }
        if ( !v98 )
          break;
        v97 = k;
        k = (__m128i *)((char *)k + 24);
        if ( k == v92 )
          goto LABEL_162;
      }
LABEL_171:
      if ( v97 )
        --v162;
      else
        v97 = k;
      v97[1].m128i_i64[0] = v77;
      ++v163;
LABEL_174:
      if ( v152 != v29 && v30 != v29 )
      {
        v100 = v30->m128i_i64[0];
        v101 = v30->m128i_i64[0];
        v102 = 24LL * (v101 & (unsigned int)v90);
        v103 = (__m128i *)((char *)v151 + v102);
        if ( v102 != v91 )
        {
          for ( m = &v151->m128i_i8[v102]; m != (__int8 *)v92; m += 24 )
          {
            v105 = *((_QWORD *)m + 2);
            if ( v105 > 1 )
            {
              if ( v101 == (_DWORD)v105 && v100 == v105 )
                goto LABEL_184;
            }
            else if ( !v105 )
            {
              goto LABEL_183;
            }
          }
        }
        for ( n = v151; v103 != n; n = (__m128i *)((char *)n + 24) )
        {
          v141 = n[1].m128i_u64[0];
          if ( v141 > 1 )
          {
            if ( v101 == (_DWORD)v141 && v100 == v141 )
              goto LABEL_184;
          }
          else if ( !v141 )
          {
            break;
          }
        }
LABEL_183:
        sub_88D020(
          a1,
          v77,
          v30->m128i_i64[0],
          v101,
          v32,
          v90,
          v145,
          v90,
          (_DWORD)v147,
          (_DWORD)v148,
          (_DWORD)v150,
          (char)v151);
        v90 = m128i_i64;
      }
LABEL_184:
      if ( v29 != v150 && v159 != v29 )
      {
        v106 = v159->m128i_i64[0];
        v107 = v159->m128i_i64[0];
        v108 = 24LL * (v107 & (unsigned int)v90);
        v109 = (__m128i *)((char *)v151 + v108);
        if ( v108 != v91 )
        {
          for ( ii = &v151->m128i_i8[v108]; ii != (__int8 *)v92; ii += 24 )
          {
            v111 = *((_QWORD *)ii + 2);
            if ( v111 > 1 )
            {
              if ( v107 == (_DWORD)v111 && v106 == v111 )
                goto LABEL_194;
            }
            else if ( !v111 )
            {
              goto LABEL_193;
            }
          }
        }
        for ( jj = v151; v109 != jj; jj = (__m128i *)((char *)jj + 24) )
        {
          v139 = jj[1].m128i_u64[0];
          if ( v139 > 1 )
          {
            if ( v107 == (_DWORD)v139 && v106 == v139 )
              goto LABEL_194;
          }
          else if ( !v139 )
          {
            break;
          }
        }
LABEL_193:
        sub_88D020(a1, v77, v106, v107, v32, v90, v145, v90, (_DWORD)v147, (_DWORD)v148, (_DWORD)v150, (char)v151);
        v90 = m128i_i64;
      }
LABEL_194:
      if ( v153 != v29 && v148 != (__int64 *)v29 )
      {
        v112 = *v148;
        v113 = *v148;
        v114 = 24LL * (v113 & (unsigned int)v90);
        v115 = (__m128i *)((char *)v151 + v114);
        if ( v114 != v91 )
        {
          for ( kk = &v151->m128i_i8[v114]; kk != (__int8 *)v92; kk += 24 )
          {
            v117 = *((_QWORD *)kk + 2);
            if ( v117 > 1 )
            {
              if ( v113 == (_DWORD)v117 && v112 == v117 )
                goto LABEL_204;
            }
            else if ( !v117 )
            {
              goto LABEL_203;
            }
          }
        }
        for ( mm = v151; v115 != mm; mm = (__m128i *)((char *)mm + 24) )
        {
          v143 = mm[1].m128i_u64[0];
          if ( v143 > 1 )
          {
            if ( v113 == (_DWORD)v143 && v112 == v143 )
              goto LABEL_204;
          }
          else if ( !v143 )
          {
            break;
          }
        }
LABEL_203:
        sub_88D020(a1, v77, v112, v113, v32, v90, v145, v90, (_DWORD)v147, (_DWORD)v148, (_DWORD)v150, (char)v151);
        v90 = m128i_i64;
      }
LABEL_204:
      if ( v29 != v155 && v157 != v29 )
      {
        v118 = v157->m128i_i64[0];
        v119 = v157->m128i_i64[0];
        v120 = 24LL * (v119 & (unsigned int)v90);
        v121 = (__m128i *)((char *)v151 + v120);
        if ( v120 != v91 )
        {
          for ( nn = &v151->m128i_i8[v120]; nn != (__int8 *)v92; nn += 24 )
          {
            v123 = *((_QWORD *)nn + 2);
            if ( v123 > 1 )
            {
              if ( v118 == v123 && v119 == (_DWORD)v123 )
                goto LABEL_214;
            }
            else if ( !v123 )
            {
              goto LABEL_213;
            }
          }
        }
        for ( i1 = v151; v121 != i1; i1 = (__m128i *)((char *)i1 + 24) )
        {
          v137 = i1[1].m128i_u64[0];
          if ( v137 > 1 )
          {
            if ( v119 == (_DWORD)v137 && v118 == v137 )
              goto LABEL_214;
          }
          else if ( !v137 )
          {
            break;
          }
        }
LABEL_213:
        sub_88D020(a1, v77, v118, v118, v32, v90, v145, m128i_i64, (_DWORD)v147, (_DWORD)v148, (_DWORD)v150, (char)v151);
      }
LABEL_214:
      ++v158;
    }
    while ( (unsigned int)v158 < src[-1].m128i_i32[3] );
    if ( v151 )
    {
      sub_186B220(v151);
      if ( v156 )
        goto LABEL_217;
      goto LABEL_218;
    }
LABEL_306:
    if ( v156 )
LABEL_217:
      sub_186B220(&v156[-1].m128i_u64[1]);
LABEL_218:
    sub_186B220(&src[-1].m128i_u64[1]);
LABEL_29:
    result = *(_QWORD *)(a1 + 520);
  }
  while ( result );
  return result;
}

