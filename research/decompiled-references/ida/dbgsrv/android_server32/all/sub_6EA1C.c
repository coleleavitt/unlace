/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EA1C
// Address: 0x0006EA1C

//----- (0006EA1C) --------------------------------------------------------
int __fastcall sub_6EA1C(int *a1, int a2)
{
  _BYTE *v4; // r4
  const char *v5; // r0
  int v6; // r0
  sa_family_t v7; // r1
  int v8; // r3
  socklen_t v9; // r7
  int v10; // r2
  char *v11; // r6
  const char *v12; // r2
  int v13; // r4
  const char *v14; // r0
  int optval; // [sp+14h] [bp-24h] BYREF
  struct sockaddr addr; // [sp+18h] [bp-20h] BYREF
  int v18; // [sp+28h] [bp-10h]
  int v19; // [sp+2Ch] [bp-Ch]
  int v20; // [sp+30h] [bp-8h]

  bsd_signal(13, 1);
  if ( !sub_6E03C((int)a1, 10, 1, 0) && !sub_6E03C((int)a1, 2, 1, 0) )
    goto LABEL_27;
  optval = 0;
  v4 = a1 + 13;
  if ( *((_BYTE *)a1 + 52) )
  {
    if ( setsockopt(a1[7], 41, 26, &optval, 4u) )
    {
      a1[11] = (int)"setsockopt(IPV6_V6ONLY)";
      if ( (byte_E0546 & 0x10) != 0 )
      {
        v5 = (const char *)(*(int (__fastcall **)(int *))(*a1 + 44))(a1);
        sub_6DAE0((int)"%s", v5);
      }
    }
  }
  v20 = 0;
  v19 = 0;
  v18 = 0;
  memset(&addr, 0, sizeof(addr));
  v6 = (unsigned __int8)*v4;
  v7 = 2;
  if ( *v4 )
    v7 = 10;
  v8 = *(unsigned __int16 *)(a2 + 16);
  addr.sa_family = v7;
  *(_WORD *)addr.sa_data = (unsigned int)(16777472 * v8) >> 16;
  v9 = 16;
  if ( v6 )
    v9 = 28;
  if ( *(_DWORD *)(a2 + 8) >= 2u )
  {
    v10 = 2;
    if ( v6 )
      v10 = 10;
    v11 = *(char **)(a2 + 4);
    if ( !qhost2addr_((int)&addr, v11, v10, v8) )
    {
      if ( *v4 )
        v12 = "in6addr_any";
      else
        v12 = "INADDR_ANY";
      sub_6F20C("Cannot parse IP address \"%s\", falling back to %s\n", v11, v12);
      if ( *v4 )
      {
        v19 = 0;
        v18 = 0;
        *(_DWORD *)&addr.sa_data[10] = 0;
        *(_DWORD *)&addr.sa_data[6] = 0;
      }
      else
      {
        *(_DWORD *)&addr.sa_data[2] = 0;
      }
    }
  }
  if ( bind(a1[7], &addr, v9) == -1 )
  {
    v14 = "bind";
LABEL_26:
    a1[11] = (int)v14;
    a1[12] = *(_DWORD *)_errno(v14);
LABEL_27:
    v13 = 0;
    (*(void (__fastcall **)(int *, int))(*a1 + 36))(a1, -1);
    return v13;
  }
  if ( listen(a1[7], 128) == -1 )
  {
    v14 = "listen";
    goto LABEL_26;
  }
  return 1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 19574: using guessed type int __fastcall bsd_signal(_DWORD, _DWORD);
// E0546: using guessed type char byte_E0546;
