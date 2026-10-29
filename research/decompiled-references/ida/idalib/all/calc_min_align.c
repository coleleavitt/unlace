__int64 __fastcall calc_min_align(unsigned __int64 a1)
{
  if ( !a1 )
    return 0;
  _BitScanReverse64(&a1, a1);
  return (unsigned int)(a1 + 1);
}
