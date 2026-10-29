__int64 __fastcall sub_8C2BC0(__int64 a1, const __m128i **a2, __int64 a3)
{
  const __m128i *v3; // rbx
  bool v4; // cf
  const __m128i *v5; // rdx
  const __m128i *v7; // rbp
  const __m128i *v8; // rdx
  const __m128i *v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = (const __m128i *)__readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (const __m128i *)((char *)*a2 + a3);
  if ( v4 )
    return 0;
  v9[0] = *a2;
  v7 = v5;
  *(_QWORD *)a1 = unpack_dq(v9, v5) - 1;
  if ( v3 >= v9[0] )
    return 0;
  v8 = v9[0] + 1;
  if ( v7 < &v9[0][1] )
    return 0;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128(v9[0]);
  *a2 = v8;
  return 1;
}

