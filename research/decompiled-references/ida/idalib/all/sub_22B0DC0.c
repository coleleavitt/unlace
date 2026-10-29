__int64 __fastcall sub_22B0DC0(__int64 a1)
{
  const __m128i *v1; // r12
  __int64 result; // rax
  __m128i *v3; // rax
  __m128i si128; // xmm0
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (const __m128i *)&off_2BF5820;
  result = *(unsigned int *)(a1 + 8);
  do
  {
    si128 = _mm_loadu_si128(v1);
    if ( result + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v3 = (__m128i *)(*(_QWORD *)a1 + 16 * result);
    }
    else
    {
      v5[0] = si128;
      sub_2237220(a1, (const void *)(a1 + 16), result + 1, 16);
      si128 = _mm_load_si128(v5);
      v3 = (__m128i *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    }
    *v3 = si128;
    v1 = (const __m128i *)((char *)v1 + 40);
    result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = result;
  }
  while ( &unk_2BF6310 != (_UNKNOWN *)v1 );
  return result;
}
