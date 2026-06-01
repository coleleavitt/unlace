__int64 __fastcall sub_A16B00(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __m128i *v5; // r13
  const __m128i *v6; // rbx
  char *v7; // r12
  __m128i *v8; // r15
  __int64 v9; // r14
  __m128i *v10; // rbp
  unsigned int *v11; // rsi
  __m128i v12; // xmm0
  __m128i *v13; // rbp
  unsigned int v14; // r10d
  __int64 v15; // r13
  unsigned int *v16; // r14
  __m128i *v17; // rbx
  unsigned int v18; // r12d
  int v19; // edx
  unsigned int v20; // r15d
  char v21; // al
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // esi
  __m128i v25; // xmm0
  __m128i *v26; // r12
  __m128i v27; // xmm3
  char v28; // al
  __m128i v29; // xmm0
  char v30; // al
  __m128i v31; // xmm5
  unsigned int *v32; // [rsp+0h] [rbp-120h]
  unsigned int v33; // [rsp+8h] [rbp-118h]
  unsigned __int32 v34; // [rsp+Ch] [rbp-114h]
  __m128i *v35; // [rsp+10h] [rbp-110h]
  __int64 v36; // [rsp+18h] [rbp-108h]
  __int64 m128i_i64; // [rsp+28h] [rbp-F8h]
  __int64 v38; // [rsp+30h] [rbp-F0h]
  char v39; // [rsp+38h] [rbp-E8h] BYREF

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 3072 )
    return result;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( !a3 )
  {
    v26 = a2;
    goto LABEL_22;
  }
  v7 = &v39;
  v8 = a1;
  v32 = (unsigned int *)&a1[12];
  m128i_i64 = (__int64)a1[1].m128i_i64;
  v38 = (__int64)a1[13].m128i_i64;
  do
  {
    v9 = v4 - 1;
    v10 = &v8[12 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (result >> 6)) >> 1)];
    v11 = (unsigned int *)&v5[-12];
    if ( !(unsigned __int8)sub_9E60E0(v32, (unsigned int *)v10) )
    {
      if ( (unsigned __int8)sub_9E60E0(v32, v11) )
      {
        v27 = _mm_loadu_si128(v8 + 12);
        v8[12] = _mm_loadu_si128(v8);
        *v8 = v27;
        sub_A16AB0(m128i_i64, v38);
        goto LABEL_7;
      }
      v30 = sub_9E60E0((unsigned int *)v10, (unsigned int *)&v5[-12]);
      v29 = _mm_loadu_si128(v8);
      if ( !v30 )
      {
        *v8 = _mm_loadu_si128(v10);
        *v10 = v29;
        sub_A16AB0(m128i_i64, (__int64)v10[1].m128i_i64);
        goto LABEL_7;
      }
LABEL_28:
      *v8 = _mm_loadu_si128(v5 - 12);
      v5[-12] = v29;
      sub_A16AB0(m128i_i64, (__int64)v5[-11].m128i_i64);
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_9E60E0((unsigned int *)v10, v11) )
    {
      v28 = sub_9E60E0(v32, (unsigned int *)&v5[-12]);
      v29 = _mm_loadu_si128(v8);
      if ( !v28 )
      {
        v31 = _mm_loadu_si128(v8 + 12);
        v8[12] = v29;
        *v8 = v31;
        sub_A16AB0(m128i_i64, v38);
        goto LABEL_7;
      }
      goto LABEL_28;
    }
    v12 = _mm_loadu_si128(v8);
    *v8 = _mm_loadu_si128(v10);
    *v10 = v12;
    sub_A16AB0(m128i_i64, (__int64)v10[1].m128i_i64);
LABEL_7:
    v13 = v5;
    v35 = v5;
    v14 = v8->m128i_i32[0];
    v36 = v9;
    v15 = (__int64)v7;
    v16 = (unsigned int *)v8;
    v17 = a1 + 12;
    v18 = v8->m128i_i32[2] & 0x7FFFFFFF;
    v19 = v8->m128i_i32[3] & 0x7FFFFFFF;
    v20 = v8->m128i_i32[1] & 0x7FFFFFFF;
    while ( 1 )
    {
      v34 = v14;
      v33 = v19;
      v21 = sub_9E60E0((unsigned int *)v17, v16);
      v19 = v33;
      v14 = v34;
      if ( v21 )
        goto LABEL_8;
      do
      {
        do
          v13 -= 12;
        while ( v13->m128i_i32[0] > v34 );
        v22 = v13->m128i_i32[3] & 0x7FFFFFFF;
        v23 = v13->m128i_i32[2] & 0x7FFFFFFF;
        v24 = v13->m128i_i32[1] & 0x7FFFFFFF;
      }
      while ( v13->m128i_i32[0] == v34
           && (v24 > v20 || v24 == v20 && (v23 > v18 || (unsigned int)v22 > v33 && v23 == v18)) );
      if ( v17 >= v13 )
        break;
      v25 = _mm_loadu_si128(v17);
      *v17 = _mm_loadu_si128(v13);
      *v13 = v25;
      sub_9E6510(v15, (__int64)v17[1].m128i_i64);
      sub_9F9310((__int64)v17[1].m128i_i64, (__int64)v13[1].m128i_i64);
      sub_9F9310((__int64)v13[1].m128i_i64, v15);
      sub_9E5FF0(v15);
      v14 = *v16;
      v19 = v16[3] & 0x7FFFFFFF;
      v18 = v16[2] & 0x7FFFFFFF;
      v20 = v16[1] & 0x7FFFFFFF;
LABEL_8:
      v17 += 12;
    }
    v8 = (__m128i *)v16;
    v7 = (char *)v15;
    v4 = v36;
    sub_A16B00(v17, v35, v36, v22);
    result = (char *)v17 - (char *)v8;
    if ( (char *)v17 - (char *)v8 <= 3072 )
      return result;
    v5 = v17;
  }
  while ( v36 );
  v26 = v17;
  v6 = v8;
LABEL_22:
  sub_A08780((__int64)v6, (__int64)v26);
  do
  {
    v26 -= 12;
    sub_A08880(v6, (__int64)v26, v26);
    result = (char *)v26 - (char *)v6;
  }
  while ( (char *)v26 - (char *)v6 > 192 );
  return result;
}

