/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481710
// Address: 0x0000000000481710

//----- (0000000000481710) ----------------------------------------------------
__int64 __fastcall sub_481710(char *host, unsigned __int16 a2)
{
  struct ifaddrs *v2; // rbx
  socklen_t v3; // r14d
  unsigned int v4; // eax
  unsigned int v5; // ebp
  bool v6; // al
  int v7; // eax
  struct ifaddrs *ifa[7]; // [rsp+0h] [rbp-38h] BYREF

  ifa[1] = (struct ifaddrs *)__readfsqword(0x28u);
  getifaddrs(ifa);
  v2 = ifa[0];
  if ( !ifa[0] )
  {
    v5 = 0;
    goto LABEL_10;
  }
  v3 = 16;
  if ( a2 != 2 )
    v3 = 28;
  do
  {
    LOBYTE(v4) = sub_4857D0((__int64)v2, a2, 0);
    v5 = v4;
    v6 = 1;
    if ( !(_BYTE)v5 )
    {
      v2 = v2->ifa_next;
      if ( !v2 )
        break;
      continue;
    }
    v7 = getnameinfo(v2->ifa_addr, v3, host, 0x401u, nullptr, 0, 1);
    v2 = v2->ifa_next;
    LOBYTE(v5) = v7 == 0;
    v6 = v7 != 0;
    if ( !v2 )
      break;
  }
  while ( v6 );
  v2 = ifa[0];
LABEL_10:
  freeifaddrs(v2);
  return v5;
}
// 481779: variable 'v4' is possibly undefined
