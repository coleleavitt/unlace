__int64 __fastcall sub_8E6B00(__m128i *a1, const __m128i **a2, __int64 a3)
{
  unsigned int v3; // r12d
  const __m128i *v5; // rbx
  const __m128i *v6; // r14
  const __m128i *v7; // rax
  const __m128i *v8; // [rsp+8h] [rbp-40h] BYREF
  const __m128i *v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = (const __m128i *)__readfsqword(0x28u);
  v8 = *a2;
  if ( __CFADD__(a3, v8) )
    return 0;
  v5 = (const __m128i *)((char *)v8 + a3);
  v3 = sub_7E1CF0(a1->m128i_i64, (const void **)&v8, (unsigned __int64)v8->m128i_u64 + a3);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = v8;
  v9[0] = v8;
  a1[1].m128i_i64[1] = unpack_dq(v9) - 1;
  v7 = v9[0];
  v8 = v9[0];
  if ( v6 >= v9[0] || v5 < &v9[0][1] )
  {
    return 0;
  }
  else
  {
    a1[2] = _mm_loadu_si128(v9[0]);
    *a2 = v7 + 1;
  }
  return v3;
}
