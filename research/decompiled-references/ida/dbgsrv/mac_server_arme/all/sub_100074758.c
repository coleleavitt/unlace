/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100074758
// Address: 0x0000000100074758

//----- (0000000100074758) ----------------------------------------------------
bool __fastcall sub_100074758(char *a1, int a2)
{
  ifaddrs *v4; // x21
  socklen_t v5; // w22
  _BOOL8 v6; // x23
  ifaddrs *v7; // x0
  ifaddrs *v9; // [xsp+0h] [xbp-40h] BYREF

  getifaddrs(&v9);
  v4 = v9;
  if ( v9 )
  {
    if ( a2 == 2 )
      v5 = 16;
    else
      v5 = 28;
    do
    {
      v6 = 0;
      if ( sub_1000718E0((__int64)v4, a2, 0) )
        v6 = getnameinfo(v4->ifa_addr, v5, a1, 0x401u, nullptr, 0, 2) == 0;
      v4 = v4->ifa_next;
    }
    while ( v4 && !v6 );
    v7 = v9;
  }
  else
  {
    v7 = nullptr;
    v6 = 0;
  }
  freeifaddrs(v7);
  return v6;
}
