/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78204
// Address: 0x00078204

//----- (00078204) --------------------------------------------------------
struct ifaddrs *__fastcall sub_78204(char *a1, int a2)
{
  struct ifaddrs *v4; // r4
  struct ifaddrs *v5; // r5
  socklen_t v6; // r10
  char v7; // r3
  struct ifaddrs *ifap; // [sp+10h] [bp-Ch] BYREF

  getifaddrs(&ifap);
  v4 = ifap;
  v5 = ifap;
  if ( ifap )
  {
    if ( a2 == 2 )
      v6 = 16;
    else
      v6 = 28;
    do
    {
      v5 = (struct ifaddrs *)sub_7F02C((int)v4, a2, 0);
      if ( v5 )
        v5 = (struct ifaddrs *)(getnameinfo(v4->ifa_addr, v6, a1, 0x401u, nullptr, 0, 1u) == 0);
      v4 = v4->ifa_next;
      if ( v4 )
        v7 = (char)v5;
      else
        v7 = (unsigned __int8)v5 | 1;
    }
    while ( !v7 );
    v4 = ifap;
  }
  freeifaddrs(v4);
  return v5;
}
