/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E03C
// Address: 0x0006E03C

//----- (0006E03C) --------------------------------------------------------
int __fastcall sub_6E03C(int a1, int domain, int type, int protocol)
{
  int v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  int optval; // [sp+8h] [bp-8h] BYREF

  v6 = socket(domain, type, protocol);
  *(_DWORD *)(a1 + 28) = v6;
  if ( v6 == -1 )
  {
    *(_DWORD *)(a1 + 44) = "socket";
    *(_DWORD *)(a1 + 48) = *(_DWORD *)_errno("socket");
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 52) = domain == 10;
    optval = 1;
    if ( setsockopt(v6, 1, 2, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_REUSEADDR)";
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
      {
        v7 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_6DAE0((int)"%s", v7);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 1, 9, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_KEEPALIVE)";
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
      {
        v8 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_6DAE0((int)"%s", v8);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 6, 1, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(TCP_NODELAY)";
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
      {
        v9 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_6DAE0((int)"%s", v9);
      }
    }
    return 1;
  }
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
