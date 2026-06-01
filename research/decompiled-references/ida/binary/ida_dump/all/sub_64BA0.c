__int64 __fastcall sub_64BA0(_QWORD *a1, int a2)
{
  unsigned int v2; // ecx
  int i; // ecx

  v2 = 0;
  if ( a2 < 0 )
    return v2;
  for ( i = a2; i >= 0; ++i )
  {
    if ( (unsigned __int64)i >= a1[1] || (*(_QWORD *)(*a1 + 8LL * (i >> 6)) & (1LL << i)) == 0 )
      return (unsigned int)(i - a2);
  }
  return 0x80000000 - a2;
}
