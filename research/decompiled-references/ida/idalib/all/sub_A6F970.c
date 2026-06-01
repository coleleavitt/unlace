void __fastcall sub_A6F970(void ***a1, const __m128i *a2, char *a3, char *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  __m128i *v10; // rdi
  signed __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 m128i_i64; // r15
  char *v14; // r12
  const __m128i *v15; // rax
  unsigned __int64 v16; // rsi
  __m128i *v17; // rdx
  const __m128i *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  void **v22; // rdx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rdi
  bool v25; // cf
  unsigned __int64 v26; // rdi
  __m128i *v27; // rbp
  const __m128i *v28; // rax
  unsigned __int64 v29; // rbx
  __m128i *v30; // rdx
  __int64 v31; // rbx
  __m128i *v32; // rsi
  const __m128i *v33; // rcx
  __int64 *v34; // r13
  char *v35; // rbx
  _BYTE *v36; // rsi
  __int64 *v37; // rdi
  signed __int64 v38; // r12
  void **v39; // r15
  unsigned __int64 v40; // r12
  __int64 v41; // rbx
  char *v42; // r15
  const __m128i *v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // rsi
  const __m128i *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned __int64 v49; // rdi
  void **v50; // r12
  char *v51; // r13
  __int64 *v52; // r15
  _QWORD *v53; // rdx
  __int64 *v54; // rdi
  void **v55; // rax
  const __m128i *v56; // rdi
  const __m128i *v57; // rsi
  __m128i *v58; // rdx
  const __m128i *v59; // rax
  unsigned __int64 v60; // rsi
  const __m128i *v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdi
  unsigned __int64 v65; // r13
  __m128i *v66; // rax
  __m128i v67; // xmm4
  __int64 v68; // rcx
  __int64 *v69; // [rsp+0h] [rbp-70h] BYREF
  const __m128i *v70; // [rsp+8h] [rbp-68h]
  __m128i *v71; // [rsp+10h] [rbp-60h]
  unsigned __int64 v72; // [rsp+18h] [rbp-58h]
  __int64 v73; // [rsp+20h] [rbp-50h]
  __int64 v74; // [rsp+28h] [rbp-48h]
  unsigned __int64 v75; // [rsp+30h] [rbp-40h]

  if ( a3 == a4 )
    return;
  v8 = (__int64)a2;
  v9 = (__int64)a3;
  v10 = (__m128i *)a1[1];
  v70 = a2;
  v11 = a4 - a3;
  v71 = v10;
  v73 = a4 - a3;
  v72 = (a4 - a3) >> 5;
  v12 = v72;
  if ( v72 <= ((char *)a1[2] - (char *)v10) >> 5 )
  {
    v74 = (char *)v10 - (char *)a2;
    v75 = ((char *)v10 - (char *)a2) >> 5;
    v69 = (__int64 *)v75;
    if ( v72 >= v75 )
    {
      v51 = &a3[v74];
      if ( a4 == &a3[v74] )
      {
        v55 = (void **)v71;
      }
      else
      {
        v52 = (__int64 *)v71;
        do
        {
          v53 = v52 + 2;
          v54 = v52;
          v51 += 32;
          v52 += 4;
          *(v52 - 4) = (__int64)v53;
          sub_A579B0(v54, *((_BYTE **)v51 - 4), *((_QWORD *)v51 - 4) + *((_QWORD *)v51 - 3));
        }
        while ( a4 != v51 );
        v55 = a1[1];
      }
      v56 = v70;
      v57 = v71;
      v58 = (__m128i *)&v55[4 * (v72 - v75)];
      a1[1] = (void **)v58;
      if ( v56 != v57 )
      {
        v59 = v56 + 1;
        v60 = (unsigned __int64)v58[2].m128i_u64 + (((char *)v57 - (char *)v56 - 32) & 0xFFFFFFFFFFFFFFE0LL);
        do
        {
          while ( 1 )
          {
            v58->m128i_i64[0] = (__int64)v58[1].m128i_i64;
            v61 = (const __m128i *)v59[-1].m128i_i64[0];
            if ( v59 == v61 )
              break;
            v58->m128i_i64[0] = (__int64)v61;
            v58 += 2;
            v58[-1].m128i_i64[0] = v59->m128i_i64[0];
            v58[-2].m128i_i64[1] = v59[-1].m128i_i64[1];
            v59[-1].m128i_i64[0] = (__int64)v59;
            v59 += 2;
            v59[-3].m128i_i64[1] = 0;
            v59[-2].m128i_i8[0] = 0;
            if ( v58 == (__m128i *)v60 )
              goto LABEL_50;
          }
          v58 += 2;
          v58[-1] = _mm_loadu_si128(v59);
          v58[-2].m128i_i64[1] = v59[-1].m128i_i64[1];
          v59[-1].m128i_i64[0] = (__int64)v59;
          v59 += 2;
          v59[-3].m128i_i64[1] = 0;
          v59[-2].m128i_i8[0] = 0;
        }
        while ( (__m128i *)v60 != v58 );
LABEL_50:
        v58 = (__m128i *)a1[1];
      }
      v62 = v74;
      a1[1] = (void **)((char *)v58->m128i_i64 + v74);
      if ( v62 > 0 )
      {
        do
        {
          v63 = v9;
          v64 = v8;
          v9 += 32;
          v8 += 32;
          sub_9EE8A0(v64, v63);
          v69 = (__int64 *)((char *)v69 - 1);
        }
        while ( v69 );
      }
    }
    else
    {
      m128i_i64 = (__int64)v10[-2].m128i_i64;
      v14 = &v10->m128i_i8[-v11];
      v15 = (__m128i *)((char *)v10 - v11 + 16);
      v16 = (unsigned __int64)v10[2].m128i_u64 + ((v11 - 32) & 0xFFFFFFFFFFFFFFE0LL);
      v17 = v10;
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
      a1[1] = (void **)((char *)a1[1] + v73);
      v19 = (v14 - (char *)v70) >> 5;
      if ( v14 - (char *)v70 > 0 )
      {
        while ( 1 )
        {
          v14 -= 32;
          sub_A0AAD0(m128i_i64, v14);
          if ( !--v19 )
            break;
          m128i_i64 -= 32;
        }
      }
      if ( v73 > 0 )
      {
        do
        {
          v20 = v9;
          v21 = v8;
          v9 += 32;
          v8 += 32;
          sub_9EE8A0(v21, v20);
          --v12;
        }
        while ( v12 );
      }
    }
    return;
  }
  v22 = *a1;
  v23 = ((char *)v10 - (char *)*a1) >> 5;
  if ( v72 > 0x7FFFFFFFFFFFFFFLL - v23 )
    std::__throw_length_error("vector::_M_range_insert");
  v24 = v72;
  if ( v72 < v23 )
    v24 = v23;
  v25 = __CFADD__(v23, v24);
  v26 = v23 + v24;
  if ( v25 || v26 > 0x7FFFFFFFFFFFFFFLL )
  {
    v65 = 0xFFFFFFFFFFFFFFELL;
LABEL_57:
    v66 = (__m128i *)operator new(v65 * 16);
    v22 = *a1;
    v27 = v66;
    v71 = &v66[v65];
    goto LABEL_20;
  }
  v71 = nullptr;
  v27 = nullptr;
  if ( v26 )
  {
    v65 = 2 * v26;
    goto LABEL_57;
  }
LABEL_20:
  if ( v70 == (const __m128i *)v22 )
  {
    v69 = (__int64 *)v27;
    v34 = (__int64 *)v27;
  }
  else
  {
    v28 = (const __m128i *)(v22 + 2);
    v29 = (char *)&v70[-2] - (char *)v22;
    v30 = v27;
    v31 = (v29 >> 5) + 1;
    v32 = &v27[2 * v31];
    do
    {
      while ( 1 )
      {
        v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
        v33 = (const __m128i *)v28[-1].m128i_i64[0];
        if ( v33 == v28 )
          break;
        v30->m128i_i64[0] = (__int64)v33;
        v30 += 2;
        v30[-1].m128i_i64[0] = v28->m128i_i64[0];
        v30[-2].m128i_i64[1] = v28[-1].m128i_i64[1];
        v28[-1].m128i_i64[0] = (__int64)v28;
        v28 += 2;
        v28[-3].m128i_i64[1] = 0;
        v28[-2].m128i_i8[0] = 0;
        if ( v30 == v32 )
          goto LABEL_24;
      }
      v30 += 2;
      v30[-1] = _mm_loadu_si128(v28);
      v30[-2].m128i_i64[1] = v28[-1].m128i_i64[1];
      v28[-1].m128i_i64[0] = (__int64)v28;
      v28 += 2;
      v28[-3].m128i_i64[1] = 0;
      v28[-2].m128i_i8[0] = 0;
    }
    while ( v32 != v30 );
LABEL_24:
    v69 = v27[2 * v31].m128i_i64;
    v34 = v69;
  }
  v35 = a3;
  do
  {
    v36 = *(_BYTE **)v35;
    v37 = v34;
    v35 += 32;
    *v34 = (__int64)(v34 + 2);
    v34 += 4;
    sub_A579B0(v37, v36, (__int64)&v36[*((_QWORD *)v35 - 3)]);
  }
  while ( a4 != v35 );
  v38 = a4 - 32 - a3;
  v39 = a1[1];
  v40 = v38 & 0xFFFFFFFFFFFFFFE0LL;
  v41 = (__int64)v69 + v40 + 32;
  if ( v70 != (const __m128i *)v39 )
  {
    v42 = (char *)((char *)v39 - (char *)v70);
    v43 = v70 + 1;
    v44 = (__m128i *)((char *)v69 + v40 + 32);
    v45 = (__m128i *)(v41 + 32 * (((unsigned __int64)(v42 - 32) >> 5) + 1));
    do
    {
      while ( 1 )
      {
        v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
        v46 = (const __m128i *)v43[-1].m128i_i64[0];
        if ( v46 == v43 )
          break;
        v44->m128i_i64[0] = (__int64)v46;
        v47 = v43->m128i_i64[0];
        v44 += 2;
        v43[-1].m128i_i64[0] = (__int64)v43;
        v43 += 2;
        v44[-1].m128i_i64[0] = v47;
        v48 = v43[-3].m128i_i64[1];
        v43[-2].m128i_i8[0] = 0;
        v44[-2].m128i_i64[1] = v48;
        v43[-3].m128i_i64[1] = 0;
        if ( v44 == v45 )
          goto LABEL_31;
      }
      v67 = _mm_loadu_si128(v43);
      v68 = v43[-1].m128i_i64[1];
      v44 += 2;
      v43->m128i_i8[0] = 0;
      v43[-1].m128i_i64[1] = 0;
      v43 += 2;
      v44[-1] = v67;
      v44[-2].m128i_i64[1] = v68;
    }
    while ( v45 != v44 );
LABEL_31:
    v49 = 32 * (((unsigned __int64)(v42 - 32) >> 5) + 1);
    v39 = a1[1];
    v41 += v49;
  }
  v50 = *a1;
  if ( *a1 != v39 )
  {
    do
    {
      while ( *v50 != v50 + 2 )
      {
        operator delete(*v50);
        v50 += 4;
        if ( v39 == v50 )
          goto LABEL_35;
      }
      v50 += 4;
    }
    while ( v50 != v39 );
LABEL_35:
    v39 = *a1;
  }
  if ( v39 )
    operator delete(v39);
  v69 = (__int64 *)v41;
  a1[2] = (void **)v71;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v69);
}
