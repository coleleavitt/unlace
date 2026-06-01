__int64 __fastcall sub_1FF1C20(__int64 a1, __m128i **a2, __int64 *a3)
{
  __m128i *v5; // rax
  signed __int64 v6; // rbp
  __m128i *v7; // r14
  __m128i v8; // xmm0
  __int64 v9; // r13
  __int64 v10; // r12
  _BYTE *v11; // r15
  signed __int64 v12; // rbp
  __int64 v13; // r12
  _BYTE *v14; // rax
  __int64 *v15; // rax
  const __m128i *v16; // r13
  __int64 m128i_i64; // r15
  char *v18; // r12
  __int64 v19; // rbp
  __int64 v20; // r10
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  const __m128i *v23; // rax
  __m128i *v24; // rdx
  const __m128i *v25; // rsi
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  bool v28; // cf
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r14
  __m128i *v31; // rax
  const __m128i *v32; // rax
  __m128i *v33; // rdx
  unsigned __int64 v34; // r13
  __m128i *v35; // rsi
  const __m128i *v36; // rcx
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // rdx
  _QWORD *v40; // rdi
  char *v41; // r11
  void **v42; // r12
  unsigned __int64 v43; // r11
  __int64 v44; // rbp
  const __m128i *v45; // rax
  __m128i *v46; // rdx
  __m128i *v47; // rdi
  const __m128i *v48; // rsi
  unsigned __int64 v49; // rcx
  void **v50; // r13
  __int64 v52; // rax
  __int64 *v53; // r9
  _BYTE *v54; // rsi
  __int64 v55; // rdx
  __m128i *v56; // rax
  __m128i *v57; // r12
  const __m128i *v58; // rax
  unsigned __int64 v59; // rcx
  const __m128i *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rdi
  __m128i *v64; // r13
  __int64 *v65; // r12
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  _BYTE *v69; // rax
  __int64 *v70; // r14
  __m128i *v71; // rdi
  size_t v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // r15
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 *v79; // rax
  __m128i *v80; // [rsp+0h] [rbp-60h] BYREF
  __m128i v81; // [rsp+8h] [rbp-58h] BYREF
  __int8 *v82; // [rsp+18h] [rbp-48h]
  unsigned __int64 v83; // [rsp+20h] [rbp-40h]

  v5 = *a2;
  v6 = a3[1] - *a3;
  *(_OWORD *)a1 = 0;
  v80 = v5;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v6 >> 5 )
  {
    if ( (unsigned __int64)(v6 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v7 = (__m128i *)operator new(v6);
  }
  else
  {
    v7 = nullptr;
  }
  v81.m128i_i64[0] = (__int64)v7;
  v8 = _mm_loadl_epi64(&v81);
  *(_QWORD *)(a1 + 16) = (char *)v7 + v6;
  *(__m128i *)a1 = _mm_unpacklo_epi64(v8, v8);
  v9 = a3[1];
  v10 = *a3;
  if ( v9 == v10 )
  {
    v79 = (__int64 *)v80;
    *(_QWORD *)(a1 + 8) = v7;
    v16 = v7;
    if ( *((_DWORD *)v79 + 6) != 1 )
    {
LABEL_21:
      m128i_i64 = (__int64)v16[2].m128i_i64;
      goto LABEL_22;
    }
    goto LABEL_108;
  }
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  v11 = *(_BYTE **)v10;
  v12 = *(_QWORD *)(v10 + 8);
  if ( v12 + *(_QWORD *)v10 && !v11 )
LABEL_14:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v13 = v10 + 32;
  while ( 1 )
  {
    if ( (unsigned __int64)v12 > 0xF )
    {
      if ( v12 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v14 = (_BYTE *)operator new(v12 + 1);
      v7[1].m128i_i64[0] = v12;
      v7->m128i_i64[0] = (__int64)v14;
LABEL_17:
      memcpy(v14, v11, v12);
      v14 = (_BYTE *)v7->m128i_i64[0];
      goto LABEL_11;
    }
    v14 = (_BYTE *)v7->m128i_i64[0];
    if ( v12 == 1 )
    {
      *v14 = *v11;
      v14 = (_BYTE *)v7->m128i_i64[0];
      goto LABEL_11;
    }
    if ( v12 )
      goto LABEL_17;
LABEL_11:
    v7->m128i_i64[1] = v12;
    v7 += 2;
    v14[v12] = 0;
    if ( v9 == v13 )
      break;
    v13 += 32;
    v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
    v11 = *(_BYTE **)(v13 - 32);
    v12 = *(_QWORD *)(v13 - 24);
    if ( &v11[v12] && !v11 )
      goto LABEL_14;
  }
  v15 = (__int64 *)v80;
  v16 = *(const __m128i **)a1;
  *(_QWORD *)(a1 + 8) = v7;
  if ( *((_DWORD *)v15 + 6) != 1 )
    goto LABEL_21;
  v75 = ((char *)v7 - (char *)v16) >> 7;
  v76 = ((char *)v7 - (char *)v16) >> 5;
  if ( v75 <= 0 )
  {
    m128i_i64 = (__int64)v16;
LABEL_105:
    if ( v76 != 2 )
    {
      if ( v76 != 3 )
      {
        if ( v76 != 1 )
        {
LABEL_108:
          m128i_i64 = (__int64)v7;
          goto LABEL_22;
        }
LABEL_118:
        if ( sub_9B4AA0(m128i_i64, "--") )
          m128i_i64 = (__int64)v7;
        goto LABEL_22;
      }
      if ( !sub_9B4AA0(m128i_i64, "--") )
        goto LABEL_22;
      m128i_i64 += 32;
    }
    if ( !sub_9B4AA0(m128i_i64, "--") )
      goto LABEL_22;
    m128i_i64 += 32;
    goto LABEL_118;
  }
  v77 = (__int64)v16[8 * v75].m128i_i64;
  m128i_i64 = (__int64)v16;
  v81.m128i_i64[0] = v77;
  while ( sub_9B4AA0(m128i_i64, "--") )
  {
    v78 = m128i_i64;
    m128i_i64 += 32;
    if ( !sub_9B4AA0(m128i_i64, "--") )
      break;
    m128i_i64 = v78 + 64;
    if ( !sub_9B4AA0(v78 + 64, "--") )
      break;
    m128i_i64 = v78 + 96;
    if ( !sub_9B4AA0(v78 + 96, "--") )
      break;
    m128i_i64 = v78 + 128;
    if ( v78 + 128 == v81.m128i_i64[0] )
    {
      v76 = ((__int64)v7->m128i_i64 - m128i_i64) >> 5;
      goto LABEL_105;
    }
  }
LABEL_22:
  v18 = (char *)v80->m128i_i64[1];
  v19 = v80->m128i_i64[0];
  if ( v18 == (char *)v80->m128i_i64[0] )
    return a1;
  v20 = (__int64)&v18[-v19];
  v81.m128i_i64[1] = (__int64)&v18[-v19] >> 5;
  v21 = v81.m128i_i64[1];
  if ( v81.m128i_i64[1] > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v7) >> 5) )
  {
    v26 = ((char *)v7 - (char *)v16) >> 5;
    if ( v81.m128i_i64[1] > 0x7FFFFFFFFFFFFFFLL - v26 )
      std::__throw_length_error("vector::_M_range_insert");
    v27 = v81.m128i_i64[1];
    if ( v81.m128i_i64[1] < v26 )
      v27 = ((char *)v7 - (char *)v16) >> 5;
    v28 = __CFADD__(v26, v27);
    v29 = v26 + v27;
    if ( v28 || v29 > 0x7FFFFFFFFFFFFFFLL )
    {
      v30 = 0xFFFFFFFFFFFFFFELL;
    }
    else
    {
      if ( !v29 )
      {
        v81.m128i_i64[1] = 0;
        v80 = nullptr;
        goto LABEL_38;
      }
      v30 = 2 * v29;
    }
    v31 = (__m128i *)operator new(v30 * 16);
    v16 = *(const __m128i **)a1;
    v80 = v31;
    v81.m128i_i64[1] = (__int64)v31[v30].m128i_i64;
LABEL_38:
    if ( (const __m128i *)m128i_i64 == v16 )
    {
      v81.m128i_i64[0] = (__int64)v80;
      v37 = (__int64)v80;
    }
    else
    {
      v32 = v16 + 1;
      v33 = v80;
      v34 = ((unsigned __int64)(m128i_i64 - 32 - (_QWORD)v16) >> 5) + 1;
      v35 = &v80[2 * v34];
      do
      {
        while ( 1 )
        {
          v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
          v36 = (const __m128i *)v32[-1].m128i_i64[0];
          if ( v36 == v32 )
            break;
          v33->m128i_i64[0] = (__int64)v36;
          v33 += 2;
          v33[-1].m128i_i64[0] = v32->m128i_i64[0];
          v33[-2].m128i_i64[1] = v32[-1].m128i_i64[1];
          v32[-1].m128i_i64[0] = (__int64)v32;
          v32 += 2;
          v32[-3].m128i_i64[1] = 0;
          v32[-2].m128i_i8[0] = 0;
          if ( v33 == v35 )
            goto LABEL_42;
        }
        v33 += 2;
        v33[-1] = _mm_loadu_si128(v32);
        v33[-2].m128i_i64[1] = v32[-1].m128i_i64[1];
        v32[-1].m128i_i64[0] = (__int64)v32;
        v32 += 2;
        v32[-3].m128i_i64[1] = 0;
        v32[-2].m128i_i8[0] = 0;
      }
      while ( v35 != v33 );
LABEL_42:
      v81.m128i_i64[0] = (__int64)v80[2 * v34].m128i_i64;
      v37 = v81.m128i_i64[0];
    }
    v38 = v19;
    do
    {
      v39 = v37 + 16;
      v40 = (_QWORD *)v37;
      v38 += 32;
      v37 += 32;
      *(_QWORD *)(v37 - 32) = v39;
      sub_1FF0D10(v40, *(_BYTE **)(v38 - 32), *(_QWORD *)(v38 - 32) + *(_QWORD *)(v38 - 24));
    }
    while ( v18 != (char *)v38 );
    v41 = v18 - 32;
    v42 = *(void ***)(a1 + 8);
    v43 = (unsigned __int64)&v41[-v19] & 0xFFFFFFFFFFFFFFE0LL;
    v44 = v81.m128i_i64[0] + v43 + 32;
    if ( (void **)m128i_i64 != v42 )
    {
      v45 = (const __m128i *)(m128i_i64 + 16);
      v46 = (__m128i *)(v81.m128i_i64[0] + v43 + 32);
      v47 = (__m128i *)(v44 + 32 * ((((unsigned __int64)v42 - m128i_i64 - 32) >> 5) + 1));
      do
      {
        while ( 1 )
        {
          v46->m128i_i64[0] = (__int64)v46[1].m128i_i64;
          v48 = (const __m128i *)v45[-1].m128i_i64[0];
          if ( v48 == v45 )
            break;
          v46->m128i_i64[0] = (__int64)v48;
          v46 += 2;
          v46[-1].m128i_i64[0] = v45->m128i_i64[0];
          v46[-2].m128i_i64[1] = v45[-1].m128i_i64[1];
          v45[-1].m128i_i64[0] = (__int64)v45;
          v45 += 2;
          v45[-3].m128i_i64[1] = 0;
          v45[-2].m128i_i8[0] = 0;
          if ( v46 == v47 )
            goto LABEL_49;
        }
        v46 += 2;
        v46[-1] = _mm_loadu_si128(v45);
        v46[-2].m128i_i64[1] = v45[-1].m128i_i64[1];
        v45[-1].m128i_i64[0] = (__int64)v45;
        v45 += 2;
        v45[-3].m128i_i64[1] = 0;
        v45[-2].m128i_i8[0] = 0;
      }
      while ( v47 != v46 );
LABEL_49:
      v49 = 32 * ((((unsigned __int64)v42 - m128i_i64 - 32) >> 5) + 1);
      v42 = *(void ***)(a1 + 8);
      v44 += v49;
    }
    v50 = *(void ***)a1;
    if ( v42 != *(void ***)a1 )
    {
      do
      {
        while ( *v50 != v50 + 2 )
        {
          operator delete(*v50);
          v50 += 4;
          if ( v42 == v50 )
            goto LABEL_53;
        }
        v50 += 4;
      }
      while ( v42 != v50 );
LABEL_53:
      v50 = *(void ***)a1;
    }
    if ( v50 )
      operator delete(v50);
    v80 = (__m128i *)v44;
    *(_QWORD *)(a1 + 16) = v81.m128i_i64[1];
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&v80);
    return a1;
  }
  v82 = &v7->m128i_i8[-m128i_i64];
  v83 = ((__int64)v7->m128i_i64 - m128i_i64) >> 5;
  v22 = v83;
  if ( v81.m128i_i64[1] < v83 )
  {
    v23 = (__m128i *)((char *)v7 - v20 + 16);
    v24 = v7;
    do
    {
      v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
      v25 = (const __m128i *)v23[-1].m128i_i64[0];
      if ( v23 == v25 )
      {
        v24[1] = _mm_loadu_si128(v23);
      }
      else
      {
        v24->m128i_i64[0] = (__int64)v25;
        v24[1].m128i_i64[0] = v23->m128i_i64[0];
      }
      v24 += 2;
      v24[-2].m128i_i64[1] = v23[-1].m128i_i64[1];
      v23[-1].m128i_i64[0] = (__int64)v23;
      v23 += 2;
      v23[-3].m128i_i64[1] = 0;
      v23[-2].m128i_i8[0] = 0;
    }
    while ( v24 != (__m128i *)&v7[2].m128i_i8[(v20 - 32) & 0xFFFFFFFFFFFFFFE0LL] );
    v64 = v7 - 1;
    *(_QWORD *)(a1 + 8) = (char *)v7 + v20;
    v65 = (__int64 *)((char *)v7[-1].m128i_i64 - v20);
    v66 = (__int64)v7->m128i_i64 - v20 - m128i_i64;
    v67 = v66 >> 5;
    if ( v66 <= 0 )
    {
LABEL_86:
      if ( v20 > 0 )
      {
        do
        {
          v74 = v19;
          v80 = (__m128i *)v21;
          v19 += 32;
          sub_9EE8A0(m128i_i64, v74);
          m128i_i64 += 32;
          v21 = (__int64)&v80[-1].m128i_i64[1] + 7;
        }
        while ( v80 != (__m128i *)((char *)&dword_0 + 1) );
      }
      return a1;
    }
    while ( 2 )
    {
      v70 = (__int64 *)*(v65 - 2);
      v71 = (__m128i *)v64[-1].m128i_i64[0];
      if ( v65 == v70 )
      {
        v72 = *(v65 - 1);
        if ( v72 )
        {
          if ( v72 == 1 )
          {
            v71->m128i_i8[0] = *(_BYTE *)v65;
            v71 = (__m128i *)v64[-1].m128i_i64[0];
          }
          else
          {
            v81.m128i_i64[1] = v21;
            v81.m128i_i64[0] = v67;
            v80 = (__m128i *)v20;
            memcpy(v71, v65, v72);
            v71 = (__m128i *)v64[-1].m128i_i64[0];
            v21 = v81.m128i_i64[1];
            v67 = v81.m128i_i64[0];
            v20 = (__int64)v80;
          }
        }
        v73 = *(v70 - 1);
        v64[-1].m128i_i64[1] = v73;
        v71->m128i_i8[v73] = 0;
      }
      else
      {
        if ( v64 == v71 )
        {
          v64[-1].m128i_i64[0] = (__int64)v70;
          v64[-1].m128i_i64[1] = *(v65 - 1);
          v64->m128i_i64[0] = *v65;
        }
        else
        {
          v64[-1].m128i_i64[0] = (__int64)v70;
          v68 = v64->m128i_i64[0];
          v64[-1].m128i_i64[1] = *(v65 - 1);
          v64->m128i_i64[0] = *v65;
          if ( v71 )
          {
            *(v65 - 2) = (__int64)v71;
            *v65 = v68;
            goto LABEL_78;
          }
        }
        *(v65 - 2) = (__int64)v65;
      }
LABEL_78:
      v69 = (_BYTE *)*(v65 - 2);
      v64 -= 2;
      v65 -= 4;
      v65[3] = 0;
      *v69 = 0;
      if ( !--v67 )
        goto LABEL_86;
      continue;
    }
  }
  v52 = (__int64)&v82[v19];
  if ( v18 == &v82[v19] )
  {
    v56 = v7;
  }
  else
  {
    v53 = (__int64 *)v7;
    do
    {
      v81.m128i_i64[0] = v52;
      *v53 = (__int64)(v53 + 2);
      v54 = *(_BYTE **)v52;
      v55 = *(_QWORD *)(v52 + 8);
      v80 = (__m128i *)v53;
      sub_1FF0D10(v53, v54, (__int64)&v54[v55]);
      v52 = v81.m128i_i64[0] + 32;
      v53 = v80[2].m128i_i64;
    }
    while ( v18 != (char *)(v81.m128i_i64[0] + 32) );
    v56 = *(__m128i **)(a1 + 8);
  }
  v57 = &v56[2 * (v81.m128i_i64[1] - v83)];
  *(_QWORD *)(a1 + 8) = v57;
  if ( (__m128i *)m128i_i64 != v7 )
  {
    v58 = (const __m128i *)(m128i_i64 + 16);
    v59 = (unsigned __int64)v57[2].m128i_u64 + (((unsigned __int64)&v7[-2] - m128i_i64) & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      while ( 1 )
      {
        v57->m128i_i64[0] = (__int64)v57[1].m128i_i64;
        v60 = (const __m128i *)v58[-1].m128i_i64[0];
        if ( v60 == v58 )
          break;
        v57->m128i_i64[0] = (__int64)v60;
        v57 += 2;
        v57[-1].m128i_i64[0] = v58->m128i_i64[0];
        v57[-2].m128i_i64[1] = v58[-1].m128i_i64[1];
        v58[-1].m128i_i64[0] = (__int64)v58;
        v58 += 2;
        v58[-3].m128i_i64[1] = 0;
        v58[-2].m128i_i8[0] = 0;
        if ( v57 == (__m128i *)v59 )
          goto LABEL_67;
      }
      v57 += 2;
      v57[-1] = _mm_loadu_si128(v58);
      v57[-2].m128i_i64[1] = v58[-1].m128i_i64[1];
      v58[-1].m128i_i64[0] = (__int64)v58;
      v58 += 2;
      v58[-3].m128i_i64[1] = 0;
      v58[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v59 != v57 );
LABEL_67:
    v57 = *(__m128i **)(a1 + 8);
  }
  v61 = (__int64)v82;
  *(_QWORD *)(a1 + 8) = (char *)v57 + (_QWORD)v82;
  if ( v61 > 0 )
  {
    do
    {
      v62 = v19;
      v63 = m128i_i64;
      v19 += 32;
      m128i_i64 += 32;
      sub_9EE8A0(v63, v62);
      --v22;
    }
    while ( v22 );
  }
  return a1;
}
