__int64 __fastcall sub_10ACD10(__int64 a1, __int64 a2)
{
  const __m128i *v2; // r12
  __int64 result; // rax
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __m128i v6[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = (const __m128i *)&off_2B5FDE0;
  result = *(unsigned int *)(a2 + 8);
  do
  {
    si128 = _mm_loadu_si128(v2);
    if ( result + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v4 = (__m128i *)(*(_QWORD *)a2 + 16 * result);
    }
    else
    {
      v6[0] = si128;
      sub_2237220(a2, a2 + 16, result + 1, 16);
      si128 = _mm_load_si128(v6);
      v4 = (__m128i *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
    }
    *v4 = si128;
    v2 = (const __m128i *)((char *)v2 + 24);
    result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = result;
  }
  while ( &unk_2B60110 != (_UNKNOWN *)v2 );
  return result;
}
