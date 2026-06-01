__int64 __fastcall sub_E97A40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( a2 != sub_E963B0(a1, v2) )
  {
    if ( ++v2 == 13 )
      return 0;
  }
  return v2 | 0x100000000LL;
}
