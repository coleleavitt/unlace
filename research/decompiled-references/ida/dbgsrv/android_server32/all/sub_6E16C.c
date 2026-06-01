/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E16C
// Address: 0x0006E16C

//----- (0006E16C) --------------------------------------------------------
int __fastcall sub_6E16C(int *a1, int a2, int a3)
{
  int v5; // r6
  _BOOL4 v6; // r4
  int v7; // r2
  int v8; // r0
  int v9; // r4
  int v10; // r2
  int v11; // r2
  int v12; // r0
  int v13; // r0
  int (__fastcall *v14)(int); // r7
  int v15; // r4
  int v16; // r6
  int v17; // r0
  const char *v18; // r0
  int *v20; // [sp+Ch] [bp-24h]
  socklen_t optlen; // [sp+1Ch] [bp-14h] BYREF
  int optval; // [sp+20h] [bp-10h] BYREF
  struct pollfd fds; // [sp+24h] [bp-Ch] BYREF

  v5 = a1[7];
  v6 = 0;
  if ( v5 != -1 )
  {
    v6 = 0;
    v7 = fcntl(v5, 3, 0);
    if ( v7 != -1 )
    {
      v6 = 1;
      if ( (v7 & 0x800) == 0 )
        v6 = fcntl(v5, 4, v7 ^ 0x800) == 0;
    }
  }
  v8 = connect(a1[7], *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
  if ( !v6 )
  {
    v11 = 1;
    if ( v8 != -1 )
      return v11;
    a1[11] = (int)"connect";
    v12 = *(_DWORD *)_errno("connect");
    goto LABEL_30;
  }
  if ( v8 == -1 )
  {
    v20 = (int *)_errno(0);
    if ( *v20 == 11 || *v20 == 115 )
    {
      v13 = a1[7];
      fds.events = 4;
      fds.fd = v13;
      v14 = *(int (__fastcall **)(int))a3;
      v15 = *(_DWORD *)(a3 + 4);
      v16 = *(_DWORD *)(a3 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = poll(&fds, 1u, v16);
          if ( v17 )
            break;
          if ( !v14 )
          {
            a1[11] = (int)"poll";
            v12 = 62;
            goto LABEL_30;
          }
          if ( v14(v15) )
          {
            a1[11] = (int)"poll";
            v12 = 125;
            goto LABEL_30;
          }
        }
        if ( v17 != -1 )
          break;
        if ( *v20 != 4 )
          goto LABEL_28;
      }
      if ( v17 < 0 )
      {
LABEL_28:
        v18 = "poll";
        goto LABEL_29;
      }
      optlen = 4;
      if ( getsockopt(a1[7], 1, 4, &optval, &optlen) )
      {
        v18 = "getsockopt";
        goto LABEL_29;
      }
      v12 = optval;
      if ( !optval )
        goto LABEL_7;
      a1[11] = (int)"connect";
    }
    else
    {
      v18 = "connect";
LABEL_29:
      a1[11] = (int)v18;
      v12 = *v20;
    }
LABEL_30:
    a1[12] = v12;
    return 0;
  }
LABEL_7:
  v9 = a1[7];
  if ( v9 != -1 )
  {
    v10 = fcntl(a1[7], 3, 0);
    if ( v10 != -1 && (v10 & 0x800) != 0 )
      fcntl(v9, 4, v10 ^ 0x800, v10 + 1);
  }
  return 1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
