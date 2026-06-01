unsigned __int64 __fastcall sub_1C59950(
        __m128i *a1,
        const __m128i *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v7; // rax
  const __m128i *v8; // rbp
  __int64 v9; // r12
  const __m128i *v10; // r13
  const __m128i *v11; // rbp
  __int64 v12; // r15
  const __m128i *v13; // r12
  size_t v14; // rbp
  size_t v15; // rdx
  __int8 *v16; // rbx
  size_t v17; // r13
  int v18; // eax
  unsigned __int64 v19; // r15
  __m128i *v20; // r14
  __int64 v21; // rax
  __m128i *v22; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v24; // rdx
  __m128i *v25; // r12
  __m128i v26; // xmm1
  __int64 v27; // rcx
  const __m128i *v28; // rcx
  __m128i *v29; // rbx
  __m128i *i; // r13
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  size_t v33; // r15
  size_t v34; // rdx
  int v35; // eax
  __int64 v36; // rbx
  const __m128i *v37; // r12
  size_t v38; // r15
  __int64 v39; // r13
  __int8 *v40; // r14
  size_t v41; // rbp
  size_t v42; // rdx
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // r12
  __m128i v46; // xmm3
  __int64 v47; // rdx
  const __m128i *v48; // rbx
  unsigned __int64 v49; // rdx
  const __m128i *v50; // r12
  __m128i v51; // xmm0
  __int64 v52; // rcx
  __m128i v53; // xmm6
  size_t v54; // r15
  size_t v55; // r13
  size_t v56; // rdx
  int v57; // eax
  __m128i v58; // xmm4
  const __m128i *v59; // r12
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __m128i *v62; // rdx
  __int64 v63; // rsi
  const __m128i *v64; // [rsp+8h] [rbp-80h]
  __m128i *v65; // [rsp+8h] [rbp-80h]
  __m128i *v66; // [rsp+10h] [rbp-78h]
  __int64 v67; // [rsp+18h] [rbp-70h]
  const void **v70; // [rsp+30h] [rbp-58h]
  __int64 v71; // [rsp+38h] [rbp-50h]
  __int64 v72; // [rsp+38h] [rbp-50h]
  __int64 v73; // [rsp+40h] [rbp-48h]
  __int64 v74; // [rsp+48h] [rbp-40h]
  __int64 v75; // [rsp+48h] [rbp-40h]

  v7 = a5;
  v8 = a6;
  v66 = a1;
  if ( a7 <= a5 )
    v7 = a7;
  v64 = a2;
  v67 = a4;
  if ( a4 <= v7 )
  {
    v20 = a1;
    v48 = a2;
LABEL_67:
    result = (char *)v48 - (char *)v20;
    v49 = 0xAAAAAAAAAAAAAAABLL * (((char *)v48 - (char *)v20) >> 3);
    if ( (char *)v48 - (char *)v20 <= 0 )
      return result;
    v50 = v8;
    result = (unsigned __int64)v20;
    do
    {
      v51 = _mm_loadu_si128((const __m128i *)result);
      v52 = *(_QWORD *)(result + 16);
      v50 = (const __m128i *)((char *)v50 + 24);
      result += 24LL;
      *(__m128i *)((char *)v50 - 24) = v51;
      v50[-1].m128i_i64[1] = v52;
      --v49;
    }
    while ( v49 );
    if ( v8 == v50 )
    {
LABEL_62:
      if ( v50 != v8 )
      {
        v45 = (char *)v50 - (char *)v8;
        result = 0xAAAAAAAAAAAAAAABLL * (v45 >> 3);
        if ( v45 > 0 )
        {
          do
          {
            v46 = _mm_loadu_si128(v8);
            v47 = v8[1].m128i_i64[0];
            v20 = (__m128i *)((char *)v20 + 24);
            v8 = (const __m128i *)((char *)v8 + 24);
            *(__m128i *)((char *)v20 - 24) = v46;
            v20[-1].m128i_i64[1] = v47;
            --result;
          }
          while ( result );
        }
      }
      return result;
    }
    while ( 1 )
    {
      if ( a3 == v48 )
        goto LABEL_62;
      v54 = v48->m128i_u64[1];
      v55 = v8->m128i_u64[1];
      v56 = v55;
      if ( v54 <= v55 )
        v56 = v48->m128i_u64[1];
      if ( v56 && (v57 = memcmp((const void *)v48->m128i_i64[0], (const void *)v8->m128i_i64[0], v56)) != 0 )
      {
        if ( v57 >= 0 )
          goto LABEL_81;
      }
      else if ( v54 == v55 || v54 >= v55 )
      {
LABEL_81:
        v58 = _mm_loadu_si128(v8);
        result = v8[1].m128i_u64[0];
        v8 = (const __m128i *)((char *)v8 + 24);
        *v20 = v58;
        v20[1].m128i_i64[0] = result;
        goto LABEL_73;
      }
      result = v48[1].m128i_u64[0];
      v53 = _mm_loadu_si128(v48);
      v48 = (const __m128i *)((char *)v48 + 24);
      v20[1].m128i_i64[0] = result;
      *v20 = v53;
LABEL_73:
      v20 = (__m128i *)((char *)v20 + 24);
      if ( v50 == v8 )
        goto LABEL_62;
    }
  }
  if ( a7 < a5 )
  {
    v9 = a5;
    while ( v9 < v67 )
    {
      v10 = v64;
      v11 = (__m128i *)((char *)v66 + 24 * (v67 / 2));
      v71 = v67 / 2;
      v12 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)v64) >> 3);
      if ( (char *)a3 - (char *)v64 > 0 )
      {
        v74 = v9;
        v13 = v64;
        v14 = v11->m128i_u64[1];
        while ( 1 )
        {
          while ( 1 )
          {
            v15 = v14;
            v16 = &v13->m128i_i8[24 * (v12 >> 1)];
            v17 = *((_QWORD *)v16 + 1);
            if ( v17 <= v14 )
              v15 = *((_QWORD *)v16 + 1);
            if ( !v15 )
              break;
            v18 = memcmp(*(const void **)v16, (const void *)v66->m128i_i64[3 * (v67 / 2)], v15);
            if ( !v18 )
              break;
            if ( v18 >= 0 )
            {
              v12 >>= 1;
              goto LABEL_17;
            }
LABEL_9:
            v13 = (const __m128i *)(v16 + 24);
            v12 = v12 - (v12 >> 1) - 1;
            if ( v12 <= 0 )
              goto LABEL_18;
          }
          if ( v17 != v14 && v17 < v14 )
            goto LABEL_9;
          v12 >>= 1;
LABEL_17:
          if ( v12 <= 0 )
          {
LABEL_18:
            v10 = v13;
            v11 = (__m128i *)((char *)v66 + 24 * (v67 / 2));
            v19 = 0xAAAAAAAAAAAAAAABLL * (((char *)v13 - (char *)v64) >> 3);
            v9 = v74 - v19;
            goto LABEL_19;
          }
        }
      }
      v19 = 0;
LABEL_19:
      v67 -= v67 / 2;
LABEL_20:
      v20 = sub_1C59700(v11, v64, v10, v67, v19, a6, a7);
      sub_1C59950((_DWORD)v66, (_DWORD)v11, (_DWORD)v20, v71, v19, (_DWORD)a6, a7);
      v21 = v9;
      if ( v9 > a7 )
        v21 = a7;
      if ( v21 >= v67 )
      {
        v8 = a6;
        v48 = v10;
        goto LABEL_67;
      }
      v66 = v20;
      v64 = v10;
      if ( v9 <= a7 )
      {
        v8 = a6;
        v22 = (__m128i *)v10;
        goto LABEL_25;
      }
    }
    v11 = v66;
    v73 = v9 / 2;
    v19 = v9 / 2;
    v10 = (const __m128i *)((char *)v64 + 24 * (v9 / 2));
    v36 = 0xAAAAAAAAAAAAAAABLL * (((char *)v64 - (char *)v66) >> 3);
    if ( (char *)v64 - (char *)v66 <= 0 )
    {
      LODWORD(v71) = 0;
LABEL_57:
      v9 -= v73;
      goto LABEL_20;
    }
    v72 = v9 / 2;
    v75 = v9;
    v37 = v66;
    v70 = (const void **)v10;
    v38 = v10->m128i_u64[1];
    while ( 1 )
    {
      while ( 1 )
      {
        v39 = v36 >> 1;
        v40 = &v37->m128i_i8[24 * (v36 >> 1)];
        v41 = *((_QWORD *)v40 + 1);
        v42 = v41;
        if ( v38 <= v41 )
          v42 = v38;
        if ( !v42 )
          break;
        v43 = memcmp(*v70, *(const void **)v40, v42);
        if ( !v43 )
          break;
        if ( v43 >= 0 )
        {
          v37 = (const __m128i *)(v40 + 24);
          v36 = v36 - v39 - 1;
          goto LABEL_55;
        }
LABEL_47:
        v36 >>= 1;
        if ( v39 <= 0 )
          goto LABEL_56;
      }
      if ( v38 != v41 && v38 < v41 )
        goto LABEL_47;
      v37 = (const __m128i *)(v40 + 24);
      v36 = v36 - v39 - 1;
LABEL_55:
      if ( v36 <= 0 )
      {
LABEL_56:
        v11 = v37;
        v19 = v72;
        v10 = (const __m128i *)v70;
        v44 = (char *)v37 - (char *)v66;
        v9 = v75;
        v67 -= 0xAAAAAAAAAAAAAAABLL * (v44 >> 3);
        v71 = 0xAAAAAAAAAAAAAAABLL * (v44 >> 3);
        goto LABEL_57;
      }
    }
  }
  v20 = a1;
  v22 = (__m128i *)a2;
LABEL_25:
  result = (char *)a3 - (char *)v22;
  v24 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)v22) >> 3);
  if ( (char *)a3 - (char *)v22 <= 0 )
    return result;
  v25 = (__m128i *)v8;
  result = (unsigned __int64)v22;
  while ( 1 )
  {
    v26 = _mm_loadu_si128((const __m128i *)result);
    v27 = *(_QWORD *)(result + 16);
    result += 24LL;
    v25[1].m128i_i64[0] = v27;
    v28 = (__m128i *)((char *)v25 + 24);
    *v25 = v26;
    if ( !--v24 )
      break;
    v25 = (__m128i *)((char *)v25 + 24);
  }
  if ( v22 != v20 )
  {
    if ( v8 == v28 )
      return result;
    v29 = (__m128i *)((char *)v22 - 24);
    v65 = v20;
    for ( i = (__m128i *)((char *)a3 - 24); ; i = (__m128i *)((char *)i - 24) )
    {
      v32 = v25->m128i_u64[1];
      v33 = v29->m128i_u64[1];
      v34 = v33;
      if ( v32 <= v33 )
        v34 = v25->m128i_u64[1];
      if ( v34 && (v35 = memcmp((const void *)v25->m128i_i64[0], (const void *)v29->m128i_i64[0], v34)) != 0 )
      {
        if ( v35 >= 0 )
          goto LABEL_41;
      }
      else if ( v32 == v33 || v32 >= v33 )
      {
LABEL_41:
        result = v25[1].m128i_u64[0];
        *i = _mm_loadu_si128(v25);
        i[1].m128i_i64[0] = result;
        if ( v8 == v25 )
          return result;
        v25 = (__m128i *)((char *)v25 - 24);
        continue;
      }
      v31 = v29[1].m128i_i64[0];
      result = (unsigned __int64)i;
      *i = _mm_loadu_si128(v29);
      i[1].m128i_i64[0] = v31;
      if ( v29 == v65 )
      {
        v59 = (__m128i *)((char *)v25 + 24);
        v60 = 0xAAAAAAAAAAAAAAABLL * (((char *)v59 - (char *)v8) >> 3);
        if ( (char *)v59 - (char *)v8 > 0 )
        {
          do
          {
            v59 = (const __m128i *)((char *)v59 - 24);
            v61 = v59[1].m128i_i64[0];
            result -= 24LL;
            *(__m128i *)result = _mm_loadu_si128(v59);
            *(_QWORD *)(result + 16) = v61;
            --v60;
          }
          while ( v60 );
        }
        return result;
      }
      v29 = (__m128i *)((char *)v29 - 24);
    }
  }
  result = 0xAAAAAAAAAAAAAAABLL * (((char *)v28 - (char *)v8) >> 3);
  if ( (char *)v28 - (char *)v8 > 0 )
  {
    v62 = a3;
    do
    {
      v28 = (const __m128i *)((char *)v28 - 24);
      v63 = v28[1].m128i_i64[0];
      v62 = (__m128i *)((char *)v62 - 24);
      *v62 = _mm_loadu_si128(v28);
      v62[1].m128i_i64[0] = v63;
      --result;
    }
    while ( result );
  }
  return result;
}
