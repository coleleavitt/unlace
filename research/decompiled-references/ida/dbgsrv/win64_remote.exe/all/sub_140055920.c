/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055920
// Address: 0x0000000140055920

//----- (0000000140055920) ----------------------------------------------------
char __fastcall sub_140055920(__int64 a1, __int64 a2, __int64 a3)
{
  SOCKET v5; // rcx
  bool v7; // di
  int v8; // eax
  INT v10; // ebp
  __int64 v11; // rsi
  unsigned __int8 (__fastcall *v12)(__int64); // rdi
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  SOCKET v16; // rcx
  SOCKET v17; // rcx
  u_long argp; // [rsp+30h] [rbp-48h] BYREF
  char optval[4]; // [rsp+34h] [rbp-44h] BYREF
  struct pollfd fdArray; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 == -1 )
  {
    v7 = 0;
  }
  else
  {
    argp = 1;
    v7 = ioctlsocket(v5, -2147195266, &argp) == 0;
  }
  v8 = connect(*(_QWORD *)(a1 + 56), *(const struct sockaddr **)(a2 + 32), *(_DWORD *)(a2 + 16));
  if ( !v7 )
  {
    if ( v8 == -1 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 88) = "connect";
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
      return 0;
    }
    return 1;
  }
  if ( v8 != -1 )
  {
LABEL_22:
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 != -1 )
    {
      *(_DWORD *)optval = 0;
      ioctlsocket(v17, -2147195266, (u_long *)optval);
    }
    return 1;
  }
  if ( (unsigned int)(WSAGetLastError() - 10035) > 1 )
    goto LABEL_6;
  v10 = *(_DWORD *)(a3 + 16);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(unsigned __int8 (__fastcall **)(__int64))a3;
  fdArray.fd = *(_QWORD *)(a1 + 56);
  fdArray.events = 16;
  v13 = WSAPoll(&fdArray, 1u, v10);
  v14 = v13 < 0;
  if ( v13 )
  {
LABEL_14:
    if ( v14 )
    {
      *(_QWORD *)(a1 + 88) = "poll";
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
      return 0;
    }
    v16 = *(_QWORD *)(a1 + 56);
    argp = 4;
    if ( getsockopt(v16, 0xFFFF, 4103, optval, (int *)&argp) )
    {
      *(_QWORD *)(a1 + 88) = "getsockopt";
      *(_DWORD *)(a1 + 96) = WSAGetLastError();
      return 0;
    }
    if ( *(_DWORD *)optval )
    {
      *(_DWORD *)(a1 + 96) = *(_DWORD *)optval;
      *(_QWORD *)(a1 + 88) = "connect";
      return 0;
    }
    goto LABEL_22;
  }
  if ( v12 )
  {
    while ( !v12(v11) )
    {
      v15 = WSAPoll(&fdArray, 1u, v10);
      if ( v15 )
      {
        v14 = v15 < 0;
        goto LABEL_14;
      }
    }
    *(_DWORD *)(a1 + 96) = 1223;
    *(_QWORD *)(a1 + 88) = "poll";
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 96) = 258;
    *(_QWORD *)(a1 + 88) = "poll";
    return 0;
  }
}
