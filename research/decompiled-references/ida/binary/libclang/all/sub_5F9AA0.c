const __m128i *__fastcall sub_5F9AA0(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i v6; // xmm1
  __m128i v7; // rax
  const __m128i *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rdx
  unsigned __int64 i; // rdx
  __m128i v14; // xmm0
  __m128i v15; // [rsp+0h] [rbp-158h]
  __int64 v16; // [rsp+10h] [rbp-148h]
  __m128i v17; // [rsp+F0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+100h] [rbp-58h] BYREF
  __m128i v19[4]; // [rsp+110h] [rbp-48h] BYREF

  v2 = *(unsigned int *)(a1->m128i_i64[0] + 8);
  sub_AC4830(&v17);
  v6 = _mm_loadu_si128((const __m128i *)&v18.m128i_u64[1]);
  v16 = v18.m128i_i64[0];
  v7 = v17;
  v15 = _mm_load_si128(&v17);
LABEL_2:
  if ( v6.m128i_i64[0] == v7.m128i_i64[0] )
  {
LABEL_9:
    if ( v6.m128i_i64[1] == v7.m128i_i64[1] )
      goto LABEL_10;
  }
  while ( 1 )
  {
    if ( (v7.m128i_i8[8] & 3) == 0 )
      goto LABEL_16;
    a2 = *(_QWORD *)sub_ACE280(&v17, a2, v7.m128i_i64[1], v3, v4, v5, v15.m128i_i64[0], v15.m128i_i64[1], v16);
    if ( a2 )
LABEL_5:
      sub_5F99B0(a1, a2);
    v7.m128i_i64[1] = v17.m128i_i64[1];
    if ( (v17.m128i_i8[8] & 3) == 0 )
      break;
    if ( v17.m128i_i64[1] <= 3uLL )
    {
      a2 = 1;
      sub_ACE0F0(&v17, 1);
      v7 = v17;
      goto LABEL_2;
    }
    sub_ACE150(&v17);
    v7 = v17;
    if ( v6.m128i_i64[0] == v17.m128i_i64[0] )
      goto LABEL_9;
  }
  v7.m128i_i64[0] = v17.m128i_i64[0] + 8;
  v17.m128i_i64[0] = v7.m128i_i64[0];
  if ( v6.m128i_i64[0] == v7.m128i_i64[0] )
    goto LABEL_18;
  do
  {
    do
    {
LABEL_16:
      a2 = *(_QWORD *)v7.m128i_i64[0];
      if ( *(_QWORD *)v7.m128i_i64[0] )
        goto LABEL_5;
      v7.m128i_i64[0] += 8;
      v17.m128i_i64[0] = v7.m128i_i64[0];
    }
    while ( v6.m128i_i64[0] != v7.m128i_i64[0] );
LABEL_18:
    ;
  }
  while ( v6.m128i_i64[1] != v7.m128i_i64[1] );
LABEL_10:
  result = (const __m128i *)a1->m128i_i64[0];
  v9 = *(unsigned int *)(a1->m128i_i64[0] + 8);
  if ( (_DWORD)v2 != (_DWORD)v9 )
  {
    v10 = result->m128i_i64[0];
    v11 = v2 << 6;
    v12 = v9 << 6;
    result = (const __m128i *)(result->m128i_i64[0] + v11);
    if ( v11 != v12 )
    {
      for ( i = v10 + v12 - 64;
            (unsigned __int64)result < i;
            *(__m128i *)(i + 108) = _mm_loadu_si128((const __m128i *)((char *)&v19[0].m128i_u64[1] + 4)) )
      {
        v14 = _mm_loadu_si128(result);
        i -= 64LL;
        result += 4;
        v17 = v14;
        v18 = _mm_loadu_si128(result - 3);
        v19[0] = _mm_loadu_si128(result - 2);
        v19[1] = _mm_loadu_si128(result - 1);
        result[-4] = _mm_loadu_si128((const __m128i *)(i + 64));
        result[-3] = _mm_loadu_si128((const __m128i *)(i + 80));
        result[-2] = _mm_loadu_si128((const __m128i *)(i + 96));
        *(const __m128i *)((char *)&result[-2] + 12) = _mm_loadu_si128((const __m128i *)(i + 108));
        *(__m128i *)(i + 64) = _mm_load_si128(&v17);
        *(__m128i *)(i + 80) = _mm_load_si128(&v18);
        *(__m128i *)(i + 96) = _mm_load_si128(v19);
      }
    }
  }
  return result;
}

