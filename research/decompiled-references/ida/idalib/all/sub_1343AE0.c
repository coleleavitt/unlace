__int64 __fastcall sub_1343AE0(__m128i *a1, __m128i *a2, __int64 a3, __int64 m128i_i64, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __m128i *v8; // r12
  size_t v9; // r15
  const void *v10; // r9
  __m128i *v11; // rbp
  size_t v12; // r13
  size_t v13; // rdx
  int v14; // eax
  size_t v15; // r14
  const void *v16; // r10
  size_t v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm7
  __int64 v22; // rdx
  __int64 v23; // rax
  size_t v24; // r13
  unsigned __int64 v25; // r14
  __m128i *v26; // r15
  size_t v27; // r10
  size_t v28; // rdx
  __m128i *v29; // rbp
  int v30; // eax
  size_t v31; // r11
  size_t v32; // rdx
  int v33; // eax
  __m128i v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rdx
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v41; // xmm5
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm4
  __m128i v46; // xmm5
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  void *v51; // rsi
  unsigned __int64 v52; // rdi
  __int64 v53; // r9
  __int64 v54; // r10
  size_t v55; // r14
  const void *v56; // r10
  size_t v57; // rdx
  int v58; // eax
  size_t v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rax
  __m128i v63; // xmm7
  __int64 v64; // rdx
  __int64 v65; // rax
  __int128 v66; // [rsp-10h] [rbp-98h]
  void *s1; // [rsp+0h] [rbp-88h]
  void *s1a; // [rsp+0h] [rbp-88h]
  __int64 v69; // [rsp+8h] [rbp-80h]
  const void *v70; // [rsp+10h] [rbp-78h]
  const void *v71; // [rsp+10h] [rbp-78h]
  __int64 v72; // [rsp+10h] [rbp-78h]
  const void *v73; // [rsp+10h] [rbp-78h]
  const void *v74; // [rsp+18h] [rbp-70h]
  __int64 v75; // [rsp+18h] [rbp-70h]
  size_t v76; // [rsp+18h] [rbp-70h]
  size_t v77; // [rsp+20h] [rbp-68h]

  result = (char *)a2 - (char *)a1;
  v69 = a3;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return result;
  v8 = a2;
  if ( !a3 )
  {
    v29 = a2;
    goto LABEL_49;
  }
  m128i_i64 = (__int64)a1[2].m128i_i64;
  while ( 2 )
  {
    v9 = a1[2].m128i_u64[1];
    --v69;
    v10 = (const void *)a1[2].m128i_i64[0];
    v11 = &a1[2 * (result >> 6)];
    v12 = v11->m128i_u64[1];
    v13 = v12;
    s1 = (void *)v11->m128i_i64[0];
    if ( v9 <= v12 )
      v13 = a1[2].m128i_u64[1];
    if ( !v13
      || (v70 = (const void *)a1[2].m128i_i64[0],
          v14 = memcmp(v10, (const void *)v11->m128i_i64[0], v13),
          v10 = v70,
          !v14) )
    {
      if ( v9 != v12 && v9 < v12 )
        goto LABEL_10;
LABEL_53:
      v55 = v8[-2].m128i_u64[1];
      v56 = (const void *)v8[-2].m128i_i64[0];
      v57 = v55;
      if ( v9 <= v55 )
        v57 = v9;
      if ( v57 && (v73 = (const void *)v8[-2].m128i_i64[0], v58 = memcmp(v10, v73, v57), v56 = v73, v58) )
      {
        if ( v58 < 0 )
          goto LABEL_42;
      }
      else if ( v9 != v55 && v9 < v55 )
      {
        goto LABEL_42;
      }
      v59 = v55;
      if ( v12 <= v55 )
        v59 = v12;
      if ( v59 && (v60 = memcmp(s1, v56, v59)) != 0 )
      {
        if ( v60 >= 0 )
          goto LABEL_16;
      }
      else if ( v12 == v55 || v12 >= v55 )
      {
        goto LABEL_16;
      }
      v61 = a1->m128i_i64[0];
      v62 = a1->m128i_i64[1];
      *a1 = _mm_loadu_si128(v8 - 2);
      v63 = _mm_loadu_si128(v8 - 1);
      v8[-2].m128i_i64[0] = v61;
      v8[-2].m128i_i64[1] = v62;
      v64 = a1[1].m128i_i64[0];
      v65 = a1[1].m128i_i64[1];
      a1[1] = v63;
      v8[-1].m128i_i64[0] = v64;
      v8[-1].m128i_i64[1] = v65;
      goto LABEL_17;
    }
    if ( v14 >= 0 )
      goto LABEL_53;
LABEL_10:
    v15 = v8[-2].m128i_u64[1];
    v16 = (const void *)v8[-2].m128i_i64[0];
    v17 = v15;
    if ( v12 <= v15 )
      v17 = v12;
    if ( !v17
      || (v74 = v10, v71 = (const void *)v8[-2].m128i_i64[0], v18 = memcmp(s1, v71, v17), v16 = v71, v10 = v74, !v18) )
    {
      if ( v12 != v15 && v12 < v15 )
        goto LABEL_16;
LABEL_34:
      v37 = v15;
      if ( v9 <= v15 )
        v37 = v9;
      if ( v37 && (v38 = memcmp(v10, v16, v37)) != 0 )
      {
        if ( v38 < 0 )
        {
LABEL_40:
          v39 = a1->m128i_i64[0];
          v40 = a1->m128i_i64[1];
          *a1 = _mm_loadu_si128(v8 - 2);
          v41 = _mm_loadu_si128(v8 - 1);
          v8[-2].m128i_i64[0] = v39;
          v8[-2].m128i_i64[1] = v40;
          v42 = a1[1].m128i_i64[0];
          v43 = a1[1].m128i_i64[1];
          a1[1] = v41;
          v8[-1].m128i_i64[0] = v42;
          v8[-1].m128i_i64[1] = v43;
          goto LABEL_17;
        }
      }
      else if ( v9 != v15 && v9 < v15 )
      {
        goto LABEL_40;
      }
LABEL_42:
      v44 = a1->m128i_i64[1];
      v45 = _mm_loadu_si128(a1 + 2);
      v46 = _mm_loadu_si128(a1 + 3);
      a1[2].m128i_i64[0] = a1->m128i_i64[0];
      v47 = a1[1].m128i_i64[0];
      a1[2].m128i_i64[1] = v44;
      v48 = a1[1].m128i_i64[1];
      *a1 = v45;
      a1[1] = v46;
      a1[3].m128i_i64[0] = v47;
      a1[3].m128i_i64[1] = v48;
      goto LABEL_17;
    }
    if ( v18 >= 0 )
      goto LABEL_34;
LABEL_16:
    v19 = a1->m128i_i64[0];
    v20 = a1->m128i_i64[1];
    *a1 = _mm_loadu_si128(v11);
    v21 = _mm_loadu_si128(v11 + 1);
    v11->m128i_i64[0] = v19;
    v11->m128i_i64[1] = v20;
    v22 = a1[1].m128i_i64[0];
    v23 = a1[1].m128i_i64[1];
    a1[1] = v21;
    v11[1].m128i_i64[0] = v22;
    v11[1].m128i_i64[1] = v23;
LABEL_17:
    v24 = a1->m128i_u64[1];
    v25 = (unsigned __int64)v8;
    v26 = a1 + 2;
    s1a = (void *)a1->m128i_i64[0];
    while ( 1 )
    {
      v27 = v26->m128i_u64[1];
      v28 = v24;
      v29 = v26;
      v72 = v26->m128i_i64[0];
      if ( v27 <= v24 )
        v28 = v26->m128i_u64[1];
      if ( !v28 )
        break;
      v75 = v26->m128i_i64[1];
      v30 = memcmp((const void *)v26->m128i_i64[0], s1a, v28);
      v27 = v75;
      if ( !v30 )
        break;
      if ( v30 >= 0 )
        goto LABEL_25;
LABEL_18:
      v26 += 2;
    }
    if ( v27 != v24 && v27 < v24 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
LABEL_25:
        v25 -= 32LL;
        v31 = *(_QWORD *)(v25 + 8);
        v32 = v24;
        if ( v31 <= v24 )
          v32 = *(_QWORD *)(v25 + 8);
        if ( v32 )
        {
          v77 = *(_QWORD *)(v25 + 8);
          v76 = v27;
          v33 = memcmp(s1a, *(const void **)v25, v32);
          v27 = v76;
          v31 = v77;
          if ( v33 )
            break;
        }
        if ( v31 == v24 || v31 <= v24 )
        {
          if ( (unsigned __int64)v26 >= v25 )
            goto LABEL_47;
LABEL_32:
          *v26 = _mm_loadu_si128((const __m128i *)v25);
          v34 = _mm_loadu_si128((const __m128i *)(v25 + 16));
          *(_QWORD *)v25 = v72;
          *(_QWORD *)(v25 + 8) = v27;
          v35 = v26[1].m128i_i64[1];
          v36 = v26[1].m128i_i64[0];
          v26[1] = v34;
          *(_QWORD *)(v25 + 24) = v35;
          *(_QWORD *)(v25 + 16) = v36;
          v24 = a1->m128i_u64[1];
          s1a = (void *)a1->m128i_i64[0];
          goto LABEL_18;
        }
      }
    }
    while ( v33 < 0 );
    if ( (unsigned __int64)v26 < v25 )
      goto LABEL_32;
LABEL_47:
    sub_1343AE0(v26, v8, v69, m128i_i64, a5, v10);
    result = (char *)v26 - (char *)a1;
    if ( (char *)v26 - (char *)a1 > 512 )
    {
      v8 = v26;
      if ( !v69 )
      {
LABEL_49:
        sub_13439A0((__int64)a1, (unsigned __int64)v29, (unsigned __int64)v29, m128i_i64, a5, a6);
        do
        {
          v29 -= 2;
          v51 = (void *)v29->m128i_i64[0];
          v52 = v29->m128i_u64[1];
          v53 = v29[1].m128i_i64[0];
          v54 = v29[1].m128i_i64[1];
          *v29 = _mm_loadu_si128(a1);
          v29[1] = _mm_loadu_si128(a1 + 1);
          *((_QWORD *)&v66 + 1) = v54;
          *(_QWORD *)&v66 = v53;
          result = (__int64)sub_12FABA0((__int64)a1, 0, ((char *)v29 - (char *)a1) >> 5, v49, v50, v53, v51, v52, v66);
        }
        while ( (char *)v29 - (char *)a1 > 32 );
        return result;
      }
      continue;
    }
    return result;
  }
}
