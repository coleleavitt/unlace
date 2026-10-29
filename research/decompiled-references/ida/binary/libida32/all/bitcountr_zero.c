__int64 __fastcall bitcountr_zero(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 64;
  if ( a1 )
    return dword_2398500[(0x3F79D71B4CB0A89LL * (a1 ^ (unsigned __int64)(a1 - 1))) >> 58];
  return v1;
}

