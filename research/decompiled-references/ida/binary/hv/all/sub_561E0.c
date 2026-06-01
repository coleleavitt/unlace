__int64 __fastcall sub_561E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  if ( a4 > 0x37 && *(_QWORD *)a3 == 0x41544C4544594F54LL )
  {
    *(_QWORD *)a2 = *(_QWORD *)(a3 + 32);
    if ( a3 + 40 != a2 + 8 )
      *(__m128i *)(a2 + 8) = _mm_loadu_si128((const __m128i *)(a3 + 40));
    return 0;
  }
  else
  {
    sub_8F890(0, a5);
    return 55;
  }
}

