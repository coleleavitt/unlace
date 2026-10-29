__int64 __fastcall sub_E72630(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( a2 != sub_E70DA0(a1, v2) )
  {
    if ( ++v2 == 12 )
      return 0;
  }
  return v2 | 0x100000000LL;
}

