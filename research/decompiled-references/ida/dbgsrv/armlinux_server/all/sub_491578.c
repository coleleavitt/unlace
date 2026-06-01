/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491578
// Address: 0x0000000000491578

//----- (0000000000491578) ----------------------------------------------------
__int64 __fastcall sub_491578(char *a1, unsigned __int16 a2)
{
  int v2; // w21
  struct ifaddrs *v4; // x19
  socklen_t v5; // w22
  unsigned int v6; // w20
  bool v7; // zf
  struct ifaddrs *ifap; // [xsp+40h] [xbp-10h] BYREF

  v2 = a2;
  getifaddrs(&ifap);
  v4 = ifap;
  if ( ifap )
  {
    if ( v2 == 2 )
      v5 = 16;
    else
      v5 = 28;
    do
    {
      v6 = (unsigned __int8)sub_49BF40((__int64)v4, v2, 0);
      if ( v6 )
        v6 = getnameinfo(v4->ifa_addr, v5, a1, 0x401u, nullptr, 0, 1) == 0;
      v4 = v4->ifa_next;
      if ( v4 )
        v7 = v6 == 0;
      else
        v7 = 0;
    }
    while ( v7 );
    v4 = ifap;
  }
  else
  {
    v6 = 0;
  }
  freeifaddrs(v4);
  return v6;
}
// 491578: could not find valid save-restore pair for x22
