/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68650
// Address: 0x00068650

//----- (00068650) --------------------------------------------------------
int __fastcall sub_68650(int a1, int domain, int type, int protocol)
{
  int v6; // r0
  int v8; // r3
  int v9; // [sp+8h] [bp-8h] BYREF

  v6 = socket(domain, type, protocol);
  *(_DWORD *)(a1 + 28) = v6;
  if ( v6 == -1 )
  {
    *(_DWORD *)(a1 + 44) = "socket";
    v8 = *_errno_location();
    *(_DWORD *)(a1 + 48) = v8;
    return 0;
  }
  else
  {
    v9 = 1;
    *(_BYTE *)(a1 + 52) = domain == 10;
    if ( setsockopt(v6, 1, 2, &v9, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_REUSEADDR)";
      if ( (debug & 0x100000) != 0 )
        sub_685F4(a1);
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 1, 9, &v9, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug & 0x100000) != 0 )
        sub_685F4(a1);
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 6, 1, &v9, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(TCP_NODELAY)";
      if ( (debug & 0x100000) != 0 )
        sub_685F4(a1);
    }
    return 1;
  }
}
// D6C18: using guessed type int debug;
