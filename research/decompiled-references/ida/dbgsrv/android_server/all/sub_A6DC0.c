/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6DC0
// Address: 0x00000000000A6DC0

//----- (00000000000A6DC0) ----------------------------------------------------
__int64 __fastcall sub_A6DC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x22
  int v7; // w0
  bool v8; // w22
  __int64 v9; // x0
  __int64 v10; // x19
  int v11; // w8
  __int64 result; // x0
  int *v13; // x0
  int *v14; // x21
  __int64 v15; // x8
  int v16; // w22
  __int64 v17; // x20
  __int64 (__fastcall *v18)(__int64); // x24
  int v19; // w0
  int v20; // w8
  const char *v21; // x8
  socklen_t optlen; // [xsp+8h] [xbp-58h] BYREF
  int optval; // [xsp+Ch] [xbp-54h] BYREF
  struct pollfd fds; // [xsp+10h] [xbp-50h] BYREF
  __int64 v25; // [xsp+18h] [xbp-48h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD *)(a1 + 56);
  v8 = v6 != -1 && (v7 = fcntl(v6, 3, 0), v7 != -1) && ((v7 & 0x800) != 0 || fcntl(v6, 4, v7 ^ 0x800u) == 0);
  v9 = connect(*(_DWORD *)(a1 + 56), *(const struct sockaddr **)(a2 + 32), *(_DWORD *)(a2 + 16));
  if ( !v8 )
  {
    if ( (_DWORD)v9 != -1 )
      return 1;
    *(_QWORD *)(a1 + 88) = "connect";
    v20 = *(_DWORD *)__errno(v9);
LABEL_26:
    result = 0;
    goto LABEL_32;
  }
  if ( (_DWORD)v9 == -1 )
  {
    v13 = (int *)__errno(v9);
    v14 = v13;
    if ( *v13 == 11 || *v13 == 115 )
    {
      v15 = *(_QWORD *)(a1 + 56);
      fds.events = 4;
      fds.fd = v15;
      v16 = *(_DWORD *)(a3 + 16);
      v18 = *(__int64 (__fastcall **)(__int64))a3;
      v17 = *(_QWORD *)(a3 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = poll(&fds, 1u, v16);
          if ( v19 )
            break;
          if ( !v18 )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v20 = 62;
            goto LABEL_26;
          }
          if ( (v18(v17) & 1) != 0 )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v20 = 125;
            goto LABEL_26;
          }
        }
        if ( v19 != -1 )
          break;
        if ( *v14 != 4 )
          goto LABEL_34;
      }
      if ( v19 < 0 )
      {
LABEL_34:
        *(_QWORD *)(a1 + 88) = "poll";
        v20 = *v14;
        goto LABEL_26;
      }
      optlen = 4;
      if ( getsockopt(*(_DWORD *)(a1 + 56), 1, 4, &optval, &optlen) )
      {
        result = 0;
        v21 = "getsockopt";
        goto LABEL_31;
      }
      v20 = optval;
      if ( !optval )
        goto LABEL_9;
      result = 0;
      *(_QWORD *)(a1 + 88) = "connect";
    }
    else
    {
      result = 0;
      v21 = "connect";
LABEL_31:
      *(_QWORD *)(a1 + 88) = v21;
      v20 = *v14;
    }
LABEL_32:
    *(_DWORD *)(a1 + 96) = v20;
    return result;
  }
LABEL_9:
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 == -1 )
    return 1;
  v11 = fcntl(v10, 3, 0);
  result = 1;
  if ( v11 != -1 && (v11 & 0x800) != 0 )
  {
    fcntl(v10, 4, v11 ^ 0x800u);
    return 1;
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
