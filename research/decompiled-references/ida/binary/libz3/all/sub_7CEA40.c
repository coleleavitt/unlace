__int64 __fastcall sub_7CEA40(_QWORD *a1, __int64 a2, const __m128i *a3, const __m128i *a4, const __m128i *a5)
{
  const __m128i *v8; // rbx
  void (__fastcall *v9)(__m128i *, const __m128i *, __int64); // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  void (__fastcall *v13)(__m128i *, const __m128i *, __int64); // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  void (__fastcall *v17)(__m128i *, const __m128i *, __int64); // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23; // [rsp+10h] [rbp-48h]

  v8 = (const __m128i *)sub_186B270(0x208u);
  sub_7A80B0((__int64)v8, a1);
  v9 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  a1[283] = v8;
  v8[7].m128i_i64[1] = a2;
  v23 = 0u;
  v22 = 0;
  if ( v9 )
  {
    v9(&v22, a3, 2);
    v10 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v10 = 0;
  }
  v11 = _mm_loadu_si128(v8 + 8);
  v8[8] = _mm_load_si128(&v22);
  v12 = _mm_loadu_si128(v8 + 9);
  v22 = v11;
  v23 = v12;
  v8[9] = v10;
  if ( v12.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v22, &v22, 3);
  v13 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v23 = 0u;
  v22 = 0;
  if ( v13 )
  {
    v13(&v22, a4, 2);
    v14 = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    v14 = 0;
  }
  v15 = _mm_loadu_si128(v8 + 10);
  v8[10] = _mm_load_si128(&v22);
  v16 = _mm_loadu_si128(v8 + 11);
  v22 = v15;
  v23 = v16;
  v8[11] = v14;
  if ( v16.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v16.m128i_i64[0])(&v22, &v22, 3);
  v17 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a5[1].m128i_i64[0];
  v23 = 0u;
  v22 = 0;
  if ( v17 )
  {
    v17(&v22, a5, 2);
    v18 = _mm_loadu_si128(a5 + 1);
  }
  else
  {
    v18 = 0;
  }
  v19 = _mm_loadu_si128(v8 + 12);
  v8[12] = _mm_load_si128(&v22);
  v20 = _mm_loadu_si128(v8 + 13);
  v22 = v19;
  v23 = v20;
  v8[13] = v18;
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v22, &v22, 3);
  return sub_7CDF60(a1, a1[283]);
}

