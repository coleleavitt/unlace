/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6876C
// Address: 0x0006876C

//----- (0006876C) --------------------------------------------------------
int __fastcall sub_6876C(int *a1, int a2, __int64 *a3)
{
  int v5; // r0
  int v6; // r0
  _BOOL4 v7; // r8
  int v10; // r0
  int *v11; // r0
  int *v12; // r7
  bool v13; // zf
  int v14; // r3
  int v15; // r10
  __int64 v16; // kr00_8
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int optval; // [sp+Ch] [bp-18h] BYREF
  socklen_t optlen; // [sp+10h] [bp-14h] BYREF
  struct pollfd fds; // [sp+14h] [bp-10h] BYREF

  v5 = a1[7];
  if ( v5 == -1 )
  {
    v6 = connect(-1, *(const struct sockaddr **)(a2 + 20), *(_DWORD *)(a2 + 16));
    goto LABEL_3;
  }
  v7 = sub_67D4C(v5, 0);
  v6 = connect(a1[7], *(const struct sockaddr **)(a2 + 20), *(_DWORD *)(a2 + 16));
  if ( !v7 )
  {
LABEL_3:
    if ( v6 == -1 )
    {
      v7 = 0;
      a1[11] = (int)"connect";
      a1[12] = *_errno_location();
      return v7;
    }
    return 1;
  }
  if ( v6 == -1 )
  {
    v11 = _errno_location();
    v12 = v11;
    v13 = *v11 == 11;
    if ( *v11 != 11 )
      v13 = *v11 == 115;
    if ( v13 )
    {
      v14 = a1[7];
      v15 = *((_DWORD *)a3 + 2);
      v16 = *a3;
      fds.events = 4;
      fds.fd = v14;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = poll(&fds, 1u, v15);
          if ( v17 != -1 )
            break;
          if ( *v12 != 4 )
            goto LABEL_24;
        }
        if ( v17 )
          break;
        if ( !(_DWORD)v16 )
        {
          a1[11] = (int)"poll";
          a1[12] = 62;
          return 0;
        }
        if ( ((int (__fastcall *)(_DWORD))v16)(HIDWORD(v16)) )
        {
          a1[11] = (int)"poll";
          a1[12] = 125;
          return 0;
        }
      }
      if ( v17 < 0 )
      {
LABEL_24:
        a1[11] = (int)"poll";
        a1[12] = *v12;
        return 0;
      }
      v18 = a1[7];
      optlen = 4;
      if ( getsockopt(v18, 1, 4, &optval, &optlen) )
      {
        a1[11] = (int)"getsockopt";
        a1[12] = *v12;
      }
      else
      {
        v19 = optval;
        if ( !optval )
          goto LABEL_8;
        a1[11] = (int)"connect";
        a1[12] = v19;
      }
    }
    else
    {
      a1[11] = (int)"connect";
      a1[12] = *v11;
    }
    return 0;
  }
LABEL_8:
  v10 = a1[7];
  if ( v10 != -1 )
  {
    sub_67D4C(v10, 1);
    return v7;
  }
  return 1;
}
