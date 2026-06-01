__int64 __fastcall sub_72CDE0(__int64 a1, void *a2, __int64 a3)
{
  *(_QWORD *)(a1 + 720) = *(_QWORD *)a3;
  if ( a3 + 8 != a1 + 728 )
    *(__m128i *)(a1 + 728) = _mm_loadu_si128((const __m128i *)(a3 + 8));
  if ( (unsigned __int8)sub_72B9C0(a1, a2) )
    return sub_72CCF0(a1, 2);
  else
    return 0;
}
