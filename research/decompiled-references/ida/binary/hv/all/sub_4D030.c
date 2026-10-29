bool __fastcall sub_4D030(__m128i *a1, const __m128i **a2, __int64 a3)
{
  const __m128i *v3; // rbx
  bool result; // al
  const __m128i *v5; // r14
  __m128i v6; // xmm0
  const __m128i *v7; // [rsp+8h] [rbp-40h] BYREF
  const __m128i *v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = (const __m128i *)__readfsqword(0x28u);
  v7 = *a2;
  v3 = (const __m128i *)((char *)v7 + a3);
  if ( __CFADD__(v7, a3) )
    return 0;
  if ( !(unsigned __int8)sub_480B0(a1->m128i_i64, (const void **)&v7, (unsigned __int64)v3) )
    return 0;
  v5 = v7;
  v8[0] = v7;
  a1[1].m128i_i64[1] = sub_93CE0(v8, v3) - 1;
  if ( v5 >= v8[0] )
    return 0;
  if ( v3 < &v8[0][1] )
    return 0;
  v6 = _mm_loadu_si128(v8[0]);
  v7 = v8[0] + 1;
  a1[2] = v6;
  result = sub_4A460((__m128i *)a1[3].m128i_i32, (unsigned __int64 *)&v7, (__int64)v3);
  if ( !result )
    return 0;
  *a2 = v7;
  return result;
}

