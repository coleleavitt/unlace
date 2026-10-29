__int64 __fastcall sub_72CE80(__int64 a1, __int64 a2, const __m128i *a3)
{
  void (__fastcall *v3)(__m128i *, const __m128i *, __int64); // rax
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm0
  __int64 result; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __m128i v10; // [rsp+10h] [rbp-28h]

  *(_QWORD *)(a1 + 1200) = a2;
  v3 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v10 = 0u;
  v9 = 0;
  if ( v3 )
  {
    v3(&v9, a3, 2);
    v5 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v5 = 0;
  }
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 1208));
  *(__m128i *)(a1 + 1208) = _mm_load_si128(&v9);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 1224));
  v9 = v6;
  result = v7.m128i_i64[0];
  v10 = v7;
  *(__m128i *)(a1 + 1224) = v5;
  if ( v7.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v7.m128i_i64[0])(&v9, &v9, 3);
  return result;
}

