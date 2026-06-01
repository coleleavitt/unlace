__int64 __fastcall sub_733070(__int64 a1, __m128i *a2)
{
  if ( !a1 )
    return 4294967194LL;
  *a2 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  return 0;
}

