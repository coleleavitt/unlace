__int64 __fastcall calc_min_align(unsigned int a1)
{
  if ( !a1 )
    return 0;
  _BitScanReverse(&a1, a1);
  return a1 + 1;
}

