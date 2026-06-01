/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007D010
// Address: 0x000000010007D010

//----- (000000010007D010) ----------------------------------------------------
__int64 __fastcall sub_10007D010(char *a1, unsigned __int16 a2)
{
  ifaddrs *v2; // r14
  socklen_t v3; // r12d
  unsigned int v4; // r13d
  ifaddrs *v5; // rdi
  ifaddrs *v7; // [rsp+8h] [rbp-38h] BYREF

  getifaddrs(&v7);
  v2 = v7;
  if ( v7 )
  {
    v3 = 28;
    if ( a2 == 2 )
      v3 = 16;
    do
    {
      v4 = 0;
      if ( sub_10007A530((__int64)v2, a2, 0) )
        LOBYTE(v4) = getnameinfo(v2->ifa_addr, v3, a1, 0x401u, nullptr, 0, 2) == 0;
      v2 = v2->ifa_next;
    }
    while ( v2 && !(_BYTE)v4 );
    v5 = v7;
  }
  else
  {
    v5 = nullptr;
    v4 = 0;
  }
  freeifaddrs(v5);
  return v4;
}
