unsigned __int64 __fastcall sub_16B5720(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx

  v2 = a1;
  v3 = HIDWORD(a1);
  if ( (unsigned int)a2 > (unsigned int)a1 )
  {
    if ( !BYTE4(a1) )
      v2 = a2;
    LOBYTE(v3) = BYTE4(a1) != 0;
  }
  if ( BYTE4(a2) )
  {
    LOBYTE(v3) = 1;
    if ( v2 > (unsigned int)a2 )
      v2 = a2;
  }
  return ((unsigned __int64)(unsigned __int8)v3 << 32) | v2;
}
