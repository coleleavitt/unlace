/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_685D4
// Address: 0x000685D4

//----- (000685D4) --------------------------------------------------------
int __fastcall sub_685D4(int a1, int a2)
{
  int v4; // r2
  unsigned int v5; // r1
  __int16 v6; // r1
  socklen_t v7; // r9
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v11; // r3
  char *v12; // r10
  const char *v13; // r2
  uint32_t v14; // r1
  uint32_t v15; // r2
  uint32_t v16; // r3
  int optval; // [sp+Ch] [bp-24h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-20h] BYREF
  uint32_t v19; // [sp+20h] [bp-10h]
  uint32_t v20; // [sp+24h] [bp-Ch]
  int v21; // [sp+28h] [bp-8h]

  signal(13, (__sighandler_t)1);
  if ( sub_684D4(a1, 10, 1, 0) )
  {
    v4 = *(unsigned __int8 *)(a1 + 52);
    optval = 0;
    if ( !v4 )
      goto LABEL_3;
    goto LABEL_19;
  }
  if ( !sub_684D4(a1, 2, 1, 0) )
    goto LABEL_7;
  v4 = *(unsigned __int8 *)(a1 + 52);
  optval = 0;
  if ( v4 )
  {
LABEL_19:
    if ( setsockopt(*(_DWORD *)(a1 + 28), 41, 26, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(IPV6_V6ONLY)";
      if ( (debug & 0x100000) != 0 )
        sub_68478(a1);
    }
    v4 = *(unsigned __int8 *)(a1 + 52);
  }
LABEL_3:
  v5 = *(unsigned __int16 *)(a2 + 16);
  memset(&addr.sa_data[2], 0, 12);
  v6 = __rev16(v5);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( v4 )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v8 = 10;
    *(_WORD *)addr.sa_data = v6;
    v7 = 28;
    addr.sa_family = 10;
    if ( v11 <= 1 )
      goto LABEL_5;
  }
  else
  {
    v7 = 16;
    v8 = 2;
    addr.sa_family = 2;
    v9 = *(_DWORD *)(a2 + 8);
    *(_WORD *)addr.sa_data = v6;
    if ( v9 <= 1 )
      goto LABEL_5;
  }
  v12 = *(char **)(a2 + 4);
  if ( !sub_77F24((int)&addr, v12, v8, (char *)*(unsigned __int16 *)(a2 + 16)) )
  {
    if ( *(_BYTE *)(a1 + 52) )
      v13 = "in6addr_any";
    else
      v13 = "INADDR_ANY";
    sub_6946C("Cannot parse IP address \"%s\", falling back to %s\n", v12, v13);
    if ( *(_BYTE *)(a1 + 52) )
    {
      v14 = in6addr_any.in6_u.u6_addr32[1];
      v15 = in6addr_any.in6_u.u6_addr32[2];
      v16 = in6addr_any.in6_u.u6_addr32[3];
      *(_DWORD *)&addr.sa_data[6] = in6addr_any.in6_u.u6_addr32[0];
      *(_DWORD *)&addr.sa_data[10] = v14;
      v19 = v15;
      v20 = v16;
    }
    else
    {
      *(_DWORD *)&addr.sa_data[2] = *(unsigned __int8 *)(a1 + 52);
    }
  }
LABEL_5:
  if ( bind(*(_DWORD *)(a1 + 28), &addr, v7) == -1 )
  {
    *(_DWORD *)(a1 + 44) = "bind";
    *(_DWORD *)(a1 + 48) = *_errno_location();
LABEL_7:
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, -1);
    return 0;
  }
  if ( listen(*(_DWORD *)(a1 + 28), 128) == -1 )
  {
    *(_DWORD *)(a1 + 44) = "listen";
    *(_DWORD *)(a1 + 48) = *_errno_location();
    goto LABEL_7;
  }
  return 1;
}
// D5BF8: using guessed type int debug;
