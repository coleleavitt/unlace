void __fastcall sub_10AC8C0(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  __int64 v3; // rax
  __m128i si128; // xmm0
  __m128i v5[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = &off_2B5FDF8;
  do
  {
    while ( *((_DWORD *)v2 + 5) != 1 )
    {
      v2 += 3;
      if ( &unk_2B60110 == (_UNKNOWN *)v2 )
        return;
    }
    v3 = *(unsigned int *)(a2 + 8);
    si128 = _mm_loadu_si128((const __m128i *)v2);
    if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v5[0] = si128;
      sub_2237220(a2, a2 + 16, v3 + 1, 16);
      v3 = *(unsigned int *)(a2 + 8);
      si128 = _mm_load_si128(v5);
    }
    v2 += 3;
    *(__m128i *)(*(_QWORD *)a2 + 16 * v3) = si128;
    ++*(_DWORD *)(a2 + 8);
  }
  while ( &unk_2B60110 != (_UNKNOWN *)v2 );
}
