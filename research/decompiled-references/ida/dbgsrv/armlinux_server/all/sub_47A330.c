/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A330
// Address: 0x000000000047A330

//----- (000000000047A330) ----------------------------------------------------
__int64 __fastcall sub_47A330(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  int v7; // w0
  unsigned int v8; // w21
  __int64 v10; // x0
  int *v11; // x20
  int v13; // w26
  unsigned __int8 (__fastcall *v14)(__int64); // x24
  __int64 v15; // x25
  int v16; // w0
  int v17; // w1
  const char *v18; // x0
  int v19; // w0
  int optval; // [xsp+58h] [xbp-18h] BYREF
  socklen_t v21; // [xsp+5Ch] [xbp-14h] BYREF
  struct pollfd fds; // [xsp+60h] [xbp-10h] BYREF

  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 == -1 )
  {
    v7 = connect(-1, *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
    goto LABEL_3;
  }
  v8 = (unsigned __int8)sub_479450(v6, 0);
  v7 = connect(*(_DWORD *)(a1 + 56), *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
  if ( !v8 )
  {
LABEL_3:
    if ( v7 == -1 )
    {
      *(_QWORD *)(a1 + 88) = "connect";
      v8 = 0;
      *(_DWORD *)(a1 + 96) = *__errno_location();
      return v8;
    }
    return 1;
  }
  if ( v7 == -1 )
  {
    v11 = __errno_location();
    if ( *v11 != 115 && *v11 != 11 )
    {
      *(_QWORD *)(a1 + 88) = "connect";
      v8 = 0;
      *(_DWORD *)(a1 + 96) = *v11;
      return v8;
    }
    fds.events = 4;
    v13 = *(_DWORD *)(a3 + 16);
    v14 = *(unsigned __int8 (__fastcall **)(__int64))a3;
    v15 = *(_QWORD *)(a3 + 8);
    fds.fd = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = poll(&fds, 1u, v13);
        if ( v16 != -1 )
          break;
        if ( *v11 != 4 )
          goto LABEL_25;
      }
      if ( v16 )
        break;
      if ( !v14 )
      {
        v17 = 62;
        goto LABEL_23;
      }
      if ( v14(v15) )
      {
        v17 = 125;
LABEL_23:
        *(_DWORD *)(a1 + 96) = v17;
        *(_QWORD *)(a1 + 88) = "poll";
        return 0;
      }
    }
    if ( v16 < 0 )
    {
LABEL_25:
      v18 = "poll";
    }
    else
    {
      v19 = *(_DWORD *)(a1 + 56);
      v21 = 4;
      if ( !getsockopt(v19, 1, 4, &optval, &v21) )
      {
        if ( optval )
        {
          *(_DWORD *)(a1 + 96) = optval;
          *(_QWORD *)(a1 + 88) = "connect";
          return 0;
        }
        goto LABEL_8;
      }
      v18 = "getsockopt";
    }
    *(_QWORD *)(a1 + 88) = v18;
    v8 = 0;
    *(_DWORD *)(a1 + 96) = *v11;
    return v8;
  }
LABEL_8:
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 != -1 )
  {
    sub_479450(v10, 1u);
    return v8;
  }
  return 1;
}
// 47A330: could not find valid save-restore pair for x26
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
