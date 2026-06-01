__int64 __fastcall sub_8CC000(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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
    set_error_string();
    return 55;
  }
}

