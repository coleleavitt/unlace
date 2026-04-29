__int64 __fastcall sub_251380(unsigned int a1)
{
  unsigned int v1; // edx

  if ( a1 > 0x29 )
    return 0;
  v1 = 1;
  if ( ((1LL << a1) & 0x14155005200LL) == 0 )
    return 2 * (unsigned int)(((1LL << a1) & 0x282AA00A400LL) != 0);
  return v1;
}
