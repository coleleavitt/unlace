/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFB00
// Address: 0x080CFB00

//----- (080CFB00) --------------------------------------------------------
_BOOL4 __cdecl sub_80CFB00(char *a1, unsigned __int16 a2)
{
  struct ifaddrs *v2; // ebp
  socklen_t v3; // edi
  bool v4; // al
  bool v5; // cl
  int v6; // eax
  _BOOL4 result; // eax
  bool host; // [esp+0h] [ebp-30h]
  struct ifaddrs *ifap; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v10; // [esp+10h] [ebp-20h]

  v10 = __readgsdword(0x14u);
  getifaddrs(&ifap);
  v2 = ifap;
  if ( ifap )
  {
    v3 = 16;
    if ( a2 != 2 )
      v3 = 28;
    while ( 1 )
    {
      v4 = sub_80D3DA0(v2, a2, 0);
      v5 = 1;
      if ( v4 )
      {
        v6 = getnameinfo(v2->ifa_addr, v3, a1, 0x401u, nullptr, 0, 1u);
        v2 = v2->ifa_next;
        v4 = v6 == 0;
        v5 = !v4;
        if ( !v2 )
        {
LABEL_9:
          v2 = ifap;
          goto LABEL_10;
        }
      }
      else
      {
        v2 = v2->ifa_next;
        if ( !v2 )
          goto LABEL_9;
      }
      if ( !v5 )
        goto LABEL_9;
    }
  }
  v4 = 0;
LABEL_10:
  host = v4;
  freeifaddrs(v2);
  result = host;
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
