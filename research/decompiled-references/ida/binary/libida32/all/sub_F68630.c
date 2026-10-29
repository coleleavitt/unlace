__int64 __fastcall sub_F68630(__int64 a1, __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  const void *v9; // r12
  __m128i *v10; // rbp
  __m128i *v11; // r15
  char v12; // al
  __m128 v13; // xmm0
  __int64 v14; // r14
  __m128i *v15; // r15
  __m128i *v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __int64 v20; // rax
  __m128i v21; // xmm5
  __m128i v22; // xmm0
  __m128i v23; // xmm6
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i *v26; // rbp
  __int64 v27; // r12
  __int64 v28; // r14
  const __m128i *v29; // r13
  __int128 v30; // xmm6
  __int128 v31; // xmm7
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int128 v36; // xmm4
  __int64 v37; // rax
  __int128 v38; // xmm5
  __int128 v39; // xmm6
  __m128i v40; // xmm7
  __int64 v41; // rax
  __m128i v42; // xmm4
  __m128i v43; // xmm6
  __m128i v44; // xmm7
  __m128i v45; // xmm1
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-D8h]
  void *s1; // [rsp+10h] [rbp-C8h]
  __m128 v49; // [rsp+20h] [rbp-B8h] BYREF
  __int64 m128i_i64; // [rsp+30h] [rbp-A8h] BYREF
  __m128i *v51; // [rsp+38h] [rbp-A0h] BYREF
  __m128 v52; // [rsp+40h] [rbp-98h] BYREF
  __m128 v53; // [rsp+50h] [rbp-88h] BYREF
  __m128i si128; // [rsp+60h] [rbp-78h] BYREF
  __int128 v55; // [rsp+70h] [rbp-68h]
  __int128 v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+90h] [rbp-48h]

  result = (__int64)a2->m128i_i64 - a1;
  v47 = a3;
  if ( (__int64)a2->m128i_i64 - a1 <= 896 )
    return result;
  v7 = a3;
  v8 = (__int64)a2->m128i_i64 - a1;
  if ( !v7 )
  {
    v26 = a2;
    goto LABEL_28;
  }
  v9 = (const void *)(a1 + 8);
  v10 = a2;
  v51 = (__m128i *)(a1 + 56);
  s1 = (void *)(a1 + 32);
  v52 = _mm_loadh_ps((const double *)&v51);
  do
  {
    --v47;
    si128 = _mm_load_si128((const __m128i *)&v52);
    v11 = (__m128i *)(a1 + 56 * ((0x6DB6DB6DB6DB6DB7LL * (v8 >> 3)) >> 1));
    m128i_i64 = (__int64)v11;
    v49 = _mm_loadh_ps((const double *)&m128i_i64);
    v53 = v49;
    v12 = sub_F58800(&si128, (__int64 **)&v53);
    m128i_i64 = (__int64)v10[-2].m128i_i64;
    if ( v12 )
    {
      m128i_i64 = (__int64)&v10[-4].m128i_i64[1];
      v13 = _mm_loadh_ps((const double *)&m128i_i64);
      si128 = _mm_load_si128((const __m128i *)&v49);
      v53 = v13;
      if ( (unsigned __int8)sub_F58800(&si128, (__int64 **)&v53) )
        goto LABEL_41;
      si128 = _mm_load_si128((const __m128i *)&v52);
      if ( !(unsigned __int8)sub_F58800(&si128, (__int64 **)&v53) )
        goto LABEL_42;
    }
    else
    {
      m128i_i64 = (__int64)&v10[-4].m128i_i64[1];
      v53 = _mm_loadh_ps((const double *)&m128i_i64);
      if ( (unsigned __int8)sub_F58800(&si128, (__int64 **)&v53) )
      {
LABEL_42:
        sub_F685E0((__m128i *)a1, v51);
        goto LABEL_8;
      }
      si128 = _mm_load_si128((const __m128i *)&v49);
      if ( !(unsigned __int8)sub_F58800(&si128, (__int64 **)&v53) )
      {
LABEL_41:
        sub_F685E0((__m128i *)a1, v11);
        goto LABEL_8;
      }
    }
    sub_F685E0((__m128i *)a1, (__m128i *)((char *)v10 - 56));
LABEL_8:
    v14 = *(_QWORD *)a1;
    v15 = v51;
    v16 = v10;
    m128i_i64 = (__int64)v10;
    while ( 1 )
    {
      v49.m128_u64[0] = (unsigned __int64)v15;
      if ( v15->m128i_i64[0] < v14 )
        goto LABEL_14;
      if ( v15->m128i_i64[0] != v14 )
      {
        if ( v15->m128i_i64[0] > v14 )
          goto LABEL_20;
        goto LABEL_18;
      }
      if ( memcmp(&v15->m128i_u64[1], v9, 0x10u) < 0 )
        goto LABEL_14;
      if ( memcmp(v9, &v15->m128i_u64[1], 0x10u) < 0 )
        break;
LABEL_18:
      v25 = *(_QWORD *)(a1 + 24);
      if ( v15[1].m128i_i64[1] >= v25 && (v15[1].m128i_i64[1] != v25 || memcmp(&v15[2], s1, 8u) >= 0) )
        goto LABEL_20;
LABEL_14:
      v15 = (__m128i *)((char *)v15 + 56);
    }
    do
    {
      while ( 1 )
      {
        do
LABEL_20:
          v16 = (__m128i *)((char *)v16 - 56);
        while ( v16->m128i_i64[0] > v14 );
        if ( v16->m128i_i64[0] == v14 )
          break;
        if ( v16->m128i_i64[0] < v14 )
          goto LABEL_12;
LABEL_10:
        v17 = v16[1].m128i_i64[1];
        if ( *(_QWORD *)(a1 + 24) >= v17 && (*(_QWORD *)(a1 + 24) != v17 || memcmp(s1, &v16[2], 8u) >= 0) )
        {
LABEL_12:
          if ( v15 >= v16 )
            goto LABEL_25;
LABEL_13:
          v18 = _mm_loadu_si128(v15);
          v19 = _mm_loadu_si128(v15 + 1);
          v20 = v15[3].m128i_i64[0];
          *v15 = _mm_loadu_si128(v16);
          v21 = _mm_loadu_si128(v16 + 1);
          v22 = _mm_loadu_si128(v15 + 2);
          v57 = v20;
          v15[1] = v21;
          v23 = _mm_loadu_si128(v16 + 2);
          si128 = v18;
          v15[2] = v23;
          v24 = v16[3].m128i_i64[0];
          v55 = (__int128)v19;
          v15[3].m128i_i64[0] = v24;
          *v16 = v18;
          v16[1] = v19;
          v16[2] = v22;
          v16[3].m128i_i64[0] = v20;
          v14 = *(_QWORD *)a1;
          v56 = (__int128)v22;
          goto LABEL_14;
        }
      }
    }
    while ( memcmp(v9, &v16->m128i_u64[1], 0x10u) < 0 );
    if ( memcmp(&v16->m128i_u64[1], v9, 0x10u) >= 0 )
      goto LABEL_10;
    if ( v15 < v16 )
      goto LABEL_13;
LABEL_25:
    result = sub_F68630(v15, m128i_i64, v47);
    v8 = (__int64)v15->m128i_i64 - a1;
    if ( (__int64)v15->m128i_i64 - a1 <= 896 )
      return result;
    v10 = v15;
  }
  while ( v47 );
  v26 = (__m128i *)v49.m128_u64[0];
LABEL_28:
  v27 = 0x6DB6DB6DB6DB6DB7LL * (v8 >> 3);
  v28 = (v27 - 2) >> 1;
  v29 = (const __m128i *)(a1 + 56 * v28);
  v30 = (__int128)_mm_loadu_si128(v29 + 1);
  v31 = (__int128)_mm_loadu_si128(v29 + 2);
  v32 = v29[3].m128i_i64[0];
  si128 = _mm_loadu_si128(v29);
  v55 = v30;
  v56 = v31;
  v57 = v32;
  sub_F588B0(a1, v28, v27, v7, a5, a6, (__int128)si128, v30, v31, v32);
  do
  {
    v36 = (__int128)_mm_loadu_si128((const __m128i *)((char *)v29 - 56));
    v37 = v29[-1].m128i_i64[1];
    v38 = (__int128)_mm_loadu_si128((const __m128i *)((char *)v29 - 40));
    --v28;
    v29 = (const __m128i *)((char *)v29 - 56);
    v39 = (__int128)_mm_loadu_si128(v29 + 2);
    si128 = (__m128i)v36;
    v55 = v38;
    v56 = v39;
    v57 = v37;
    sub_F588B0(a1, v28, v27, v33, v34, v35, v36, v38, v39, v37);
  }
  while ( v28 );
  do
  {
    v26 = (__m128i *)((char *)v26 - 56);
    v40 = _mm_loadu_si128(v26);
    v41 = v26[3].m128i_i64[0];
    v42 = _mm_loadu_si128(v26 + 2);
    *v26 = _mm_loadu_si128((const __m128i *)a1);
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    si128 = v40;
    v44 = _mm_loadu_si128(v26 + 1);
    v26[1] = v43;
    v45 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    v57 = v41;
    v26[2] = v45;
    v46 = *(_QWORD *)(a1 + 48);
    v55 = (__int128)v44;
    v56 = (__int128)v42;
    v26[3].m128i_i64[0] = v46;
    result = sub_F588B0(
               a1,
               0,
               0x6DB6DB6DB6DB6DB7LL * (((__int64)v26->m128i_i64 - a1) >> 3),
               v33,
               v34,
               v35,
               (__int128)si128,
               v55,
               v56,
               v57);
  }
  while ( (__int64)v26->m128i_i64 - a1 > 56 );
  return result;
}

