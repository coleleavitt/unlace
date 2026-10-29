__int64 __fastcall sub_7A9E0(__int64 a1, void *a2, __int64 a3, __m128 a4)
{
  *(_QWORD *)(a1 + 720) = *(_QWORD *)a3;
  if ( a3 + 8 != a1 + 728 )
  {
    a4 = (__m128)_mm_loadu_si128((const __m128i *)(a3 + 8));
    *(__m128 *)(a1 + 728) = a4;
  }
  if ( (unsigned __int8)sub_795C0(a1, a2) )
    return sub_7A8F0(a1, 2, *(double *)a4.m128_u64);
  else
    return 0;
}

