void __fastcall sub_1084820(void ***a1, __int64 a2, char *a3, char *a4)
{
  __int64 v4; // r15
  __int64 v5; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  void **v11; // rdi
  void **v12; // rax
  __m128i *v13; // rbx
  __int64 v14; // r12
  const __m128i *v15; // rax
  unsigned __int64 v16; // rdi
  __m128i *v17; // rdx
  const __m128i *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r12
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rax
  _BYTE *v26; // rax
  _QWORD *v27; // r14
  __int64 *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  void **v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  bool v34; // cf
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __m128i *v38; // r15
  const __m128i *v39; // rax
  unsigned __int64 v40; // rbx
  __m128i *v41; // rdx
  __int64 v42; // rbx
  __m128i *v43; // rsi
  const __m128i *v44; // rcx
  __int64 *v45; // rbp
  char *v46; // rbx
  _BYTE *v47; // rsi
  __int64 *v48; // rdi
  signed __int64 v49; // r12
  void **v50; // r14
  unsigned __int64 v51; // r12
  __int64 v52; // rbx
  char *v53; // r14
  const __m128i *v54; // rax
  __m128i *v55; // rdx
  __m128i *v56; // rsi
  const __m128i *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned __int64 v60; // rdi
  void **v61; // r12
  _QWORD *v62; // r14
  char *v63; // rbx
  _QWORD *v64; // rdx
  _QWORD *v65; // rdi
  void **v66; // rax
  const __m128i *v67; // rsi
  const __m128i *v68; // rbx
  __m128i *v69; // rdx
  const __m128i *v70; // rax
  unsigned __int64 v71; // rsi
  const __m128i *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rsi
  __m128i v77; // xmm4
  __int64 v78; // rcx
  __int64 *m128i_i64; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v80; // [rsp+8h] [rbp-60h]
  const __m128i *v81; // [rsp+10h] [rbp-58h]
  unsigned __int64 v82; // [rsp+18h] [rbp-50h]
  __int64 v83; // [rsp+20h] [rbp-48h]
  unsigned __int64 v84; // [rsp+28h] [rbp-40h]

  if ( a3 == a4 )
    return;
  v4 = (__int64)a3;
  v5 = a4 - a3;
  v9 = (a4 - a3) >> 5;
  v10 = a2;
  v11 = a1[1];
  v82 = v9;
  v12 = a1[2];
  v81 = (const __m128i *)a2;
  v80 = (unsigned __int64)v11;
  if ( v9 > ((char *)v12 - (char *)v11) >> 5 )
  {
    v31 = *a1;
    v32 = ((char *)v11 - (char *)*a1) >> 5;
    if ( v82 > 0x7FFFFFFFFFFFFFFLL - v32 )
      std::__throw_length_error("vector::_M_range_insert");
    v33 = v82;
    if ( v82 < v32 )
      v33 = ((char *)v11 - (char *)*a1) >> 5;
    v34 = __CFADD__(v33, v32);
    v35 = v33 + v32;
    if ( v34 || v35 > 0x7FFFFFFFFFFFFFFLL )
    {
      v36 = -32;
    }
    else
    {
      if ( !v35 )
      {
        v80 = 0;
        v38 = nullptr;
        goto LABEL_26;
      }
      v36 = 32 * v35;
    }
    v37 = operator new(v36);
    v31 = *a1;
    v38 = (__m128i *)v37;
    v80 = v37 + v36;
LABEL_26:
    if ( v81 == (const __m128i *)v31 )
    {
      m128i_i64 = (__int64 *)v38;
      v45 = (__int64 *)v38;
    }
    else
    {
      v39 = (const __m128i *)(v31 + 2);
      v40 = (char *)&v81[-2] - (char *)v31;
      v41 = v38;
      v42 = (v40 >> 5) + 1;
      v43 = &v38[2 * v42];
      do
      {
        while ( 1 )
        {
          v41->m128i_i64[0] = (__int64)v41[1].m128i_i64;
          v44 = (const __m128i *)v39[-1].m128i_i64[0];
          if ( v44 == v39 )
            break;
          v41->m128i_i64[0] = (__int64)v44;
          v41 += 2;
          v41[-1].m128i_i64[0] = v39->m128i_i64[0];
          v41[-2].m128i_i64[1] = v39[-1].m128i_i64[1];
          v39[-1].m128i_i64[0] = (__int64)v39;
          v39 += 2;
          v39[-3].m128i_i64[1] = 0;
          v39[-2].m128i_i8[0] = 0;
          if ( v41 == v43 )
            goto LABEL_30;
        }
        v41 += 2;
        v41[-1] = _mm_loadu_si128(v39);
        v41[-2].m128i_i64[1] = v39[-1].m128i_i64[1];
        v39[-1].m128i_i64[0] = (__int64)v39;
        v39 += 2;
        v39[-3].m128i_i64[1] = 0;
        v39[-2].m128i_i8[0] = 0;
      }
      while ( v43 != v41 );
LABEL_30:
      m128i_i64 = v38[2 * v42].m128i_i64;
      v45 = m128i_i64;
    }
    v46 = a3;
    do
    {
      v47 = *(_BYTE **)v46;
      v48 = v45;
      v46 += 32;
      *v45 = (__int64)(v45 + 2);
      v45 += 4;
      sub_1081180(v48, v47, (__int64)&v47[*((_QWORD *)v46 - 3)]);
    }
    while ( a4 != v46 );
    v49 = a4 - 32 - a3;
    v50 = a1[1];
    v51 = v49 & 0xFFFFFFFFFFFFFFE0LL;
    v52 = (__int64)m128i_i64 + v51 + 32;
    if ( v81 != (const __m128i *)v50 )
    {
      v53 = (char *)((char *)v50 - (char *)v81);
      v54 = v81 + 1;
      v55 = (__m128i *)((char *)m128i_i64 + v51 + 32);
      v56 = (__m128i *)(v52 + 32 * (((unsigned __int64)(v53 - 32) >> 5) + 1));
      do
      {
        while ( 1 )
        {
          v55->m128i_i64[0] = (__int64)v55[1].m128i_i64;
          v57 = (const __m128i *)v54[-1].m128i_i64[0];
          if ( v57 == v54 )
            break;
          v55->m128i_i64[0] = (__int64)v57;
          v58 = v54->m128i_i64[0];
          v55 += 2;
          v54[-1].m128i_i64[0] = (__int64)v54;
          v54 += 2;
          v55[-1].m128i_i64[0] = v58;
          v59 = v54[-3].m128i_i64[1];
          v54[-2].m128i_i8[0] = 0;
          v55[-2].m128i_i64[1] = v59;
          v54[-3].m128i_i64[1] = 0;
          if ( v55 == v56 )
            goto LABEL_37;
        }
        v77 = _mm_loadu_si128(v54);
        v78 = v54[-1].m128i_i64[1];
        v55 += 2;
        v54->m128i_i8[0] = 0;
        v54[-1].m128i_i64[1] = 0;
        v54 += 2;
        v55[-1] = v77;
        v55[-2].m128i_i64[1] = v78;
      }
      while ( v56 != v55 );
LABEL_37:
      v60 = 32 * (((unsigned __int64)(v53 - 32) >> 5) + 1);
      v50 = a1[1];
      v52 += v60;
    }
    v61 = *a1;
    if ( *a1 != v50 )
    {
      do
      {
        while ( *v61 != v61 + 2 )
        {
          operator delete(*v61);
          v61 += 4;
          if ( v50 == v61 )
            goto LABEL_41;
        }
        v61 += 4;
      }
      while ( v61 != v50 );
LABEL_41:
      v50 = *a1;
    }
    if ( v50 )
      operator delete(v50);
    m128i_i64 = (__int64 *)v52;
    a1[2] = (void **)v80;
    *(__m128 *)a1 = _mm_loadh_ps((const double *)&m128i_i64);
    return;
  }
  v83 = (__int64)v11 - a2;
  v84 = ((__int64)v11 - a2) >> 5;
  m128i_i64 = (__int64 *)v84;
  if ( v9 < v84 )
  {
    v13 = (__m128i *)v11;
    v14 = (__int64)v11 - v5;
    v15 = (const __m128i *)((char *)v11 - v5 + 16);
    v16 = (unsigned __int64)v11 + ((v5 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    v17 = v13;
    do
    {
      while ( 1 )
      {
        v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
        v18 = (const __m128i *)v15[-1].m128i_i64[0];
        if ( v18 == v15 )
          break;
        v17->m128i_i64[0] = (__int64)v18;
        v17 += 2;
        v17[-1].m128i_i64[0] = v15->m128i_i64[0];
        v17[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
        v15[-1].m128i_i64[0] = (__int64)v15;
        v15 += 2;
        v15[-3].m128i_i64[1] = 0;
        v15[-2].m128i_i8[0] = 0;
        if ( v17 == (__m128i *)v16 )
          goto LABEL_7;
      }
      v17 += 2;
      v17[-1] = _mm_loadu_si128(v15);
      v17[-2].m128i_i64[1] = v15[-1].m128i_i64[1];
      v15[-1].m128i_i64[0] = (__int64)v15;
      v15 += 2;
      v15[-3].m128i_i64[1] = 0;
      v15[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v16 != v17 );
LABEL_7:
    v19 = v14;
    v20 = v80;
    a1[1] = (void **)((char *)a1[1] + v5);
    v21 = (_QWORD *)(v14 - 16);
    v22 = v19 - (_QWORD)v81;
    v23 = (__int64 *)(v20 - 16);
    v24 = v22 >> 5;
    if ( v22 <= 0 )
    {
LABEL_65:
      if ( v5 > 0 )
      {
        do
        {
          v76 = v4;
          m128i_i64 = (__int64 *)v9;
          v4 += 32;
          sub_9CAB60(v10, v76);
          v10 += 32;
          v9 = (unsigned __int64)m128i_i64 - 1;
        }
        while ( m128i_i64 != (__int64 *)((char *)&dword_0 + 1) );
      }
      return;
    }
    while ( 1 )
    {
      v27 = (_QWORD *)*(v21 - 2);
      v28 = (__int64 *)*(v23 - 2);
      if ( v21 == v27 )
      {
        v29 = *(v21 - 1);
        if ( v29 )
        {
          if ( v29 == 1 )
          {
            *(_BYTE *)v28 = *(_BYTE *)v21;
            v28 = (__int64 *)*(v23 - 2);
          }
          else
          {
            v80 = v9;
            m128i_i64 = (__int64 *)v5;
            memcpy(v28, v21, v29);
            v28 = (__int64 *)*(v23 - 2);
            v9 = v80;
            v5 = (__int64)m128i_i64;
          }
        }
        v30 = *(v27 - 1);
        *(v23 - 1) = v30;
        *((_BYTE *)v28 + v30) = 0;
        goto LABEL_12;
      }
      if ( v23 == v28 )
        break;
      *(v23 - 2) = (__int64)v27;
      v25 = *v23;
      *(v23 - 1) = *(v21 - 1);
      *v23 = *v21;
      if ( !v28 )
        goto LABEL_49;
      *(v21 - 2) = v28;
      *v21 = v25;
LABEL_12:
      v26 = (_BYTE *)*(v21 - 2);
      v23 -= 4;
      v21 -= 4;
      v21[3] = 0;
      *v26 = 0;
      if ( !--v24 )
        goto LABEL_65;
    }
    *(v23 - 2) = (__int64)v27;
    *(v23 - 1) = *(v21 - 1);
    *v23 = *v21;
LABEL_49:
    *(v21 - 2) = v21;
    goto LABEL_12;
  }
  if ( a4 == &a3[v83] )
  {
    v66 = (void **)v80;
  }
  else
  {
    v62 = (_QWORD *)v80;
    v63 = &a3[v83];
    do
    {
      v64 = v62 + 2;
      v65 = v62;
      v63 += 32;
      v62 += 4;
      *(v62 - 4) = v64;
      sub_1081180(v65, *((_BYTE **)v63 - 4), *((_QWORD *)v63 - 4) + *((_QWORD *)v63 - 3));
    }
    while ( a4 != v63 );
    v66 = a1[1];
  }
  v67 = v81;
  v68 = (const __m128i *)v80;
  v69 = (__m128i *)&v66[4 * (v82 - v84)];
  a1[1] = (void **)v69;
  if ( v67 != v68 )
  {
    v70 = v67 + 1;
    v71 = (unsigned __int64)v69[2].m128i_u64 + (((char *)v68 - (char *)v67 - 32) & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      while ( 1 )
      {
        v69->m128i_i64[0] = (__int64)v69[1].m128i_i64;
        v72 = (const __m128i *)v70[-1].m128i_i64[0];
        if ( v72 == v70 )
          break;
        v69->m128i_i64[0] = (__int64)v72;
        v69 += 2;
        v69[-1].m128i_i64[0] = v70->m128i_i64[0];
        v69[-2].m128i_i64[1] = v70[-1].m128i_i64[1];
        v70[-1].m128i_i64[0] = (__int64)v70;
        v70 += 2;
        v70[-3].m128i_i64[1] = 0;
        v70[-2].m128i_i8[0] = 0;
        if ( v69 == (__m128i *)v71 )
          goto LABEL_59;
      }
      v69 += 2;
      v69[-1] = _mm_loadu_si128(v70);
      v69[-2].m128i_i64[1] = v70[-1].m128i_i64[1];
      v70[-1].m128i_i64[0] = (__int64)v70;
      v70 += 2;
      v70[-3].m128i_i64[1] = 0;
      v70[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v71 != v69 );
LABEL_59:
    v69 = (__m128i *)a1[1];
  }
  v73 = v83;
  a1[1] = (void **)((char *)v69->m128i_i64 + v83);
  if ( v73 > 0 )
  {
    do
    {
      v74 = v4;
      v75 = v10;
      v4 += 32;
      v10 += 32;
      sub_9CAB60(v75, v74);
      m128i_i64 = (__int64 *)((char *)m128i_i64 - 1);
    }
    while ( m128i_i64 );
  }
}

