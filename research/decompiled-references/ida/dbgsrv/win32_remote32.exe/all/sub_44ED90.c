/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44ED90
// Address: 0x0044ED90

//----- (0044ED90) --------------------------------------------------------
char __thiscall sub_44ED90(SOCKET *this, u_long a2, int a3)
{
  void (__stdcall *v3)(SOCKET, int, u_long *); // ebp
  SOCKET v5; // eax
  bool v6; // bl
  int v7; // eax
  int Error; // eax
  int v10; // ebp
  unsigned __int8 (__cdecl *v11)(int); // ebx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  SOCKET v15; // eax
  u_long argp; // [esp+10h] [ebp-10h] BYREF
  char optval[4]; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+18h] [ebp-8h] BYREF
  __int16 v19; // [esp+1Ch] [ebp-4h]

  v3 = (void (__stdcall *)(SOCKET, int, u_long *))ioctlsocket;
  v5 = *(this + 7);
  if ( v5 == -1 )
  {
    v6 = 0;
  }
  else
  {
    argp = 1;
    v6 = ioctlsocket(v5, -2147195266, &argp) == 0;
  }
  v7 = connect(*(this + 7), *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
  if ( !v6 )
  {
    if ( v7 == -1 )
    {
LABEL_6:
      *(this + 11) = (SOCKET)"connect";
      *(this + 12) = WSAGetLastError();
      return 0;
    }
    return 1;
  }
  if ( v7 != -1 )
  {
LABEL_24:
    v15 = *(this + 7);
    if ( v15 != -1 )
    {
      a2 = 0;
      v3(v15, -2147195266, &a2);
    }
    return 1;
  }
  Error = WSAGetLastError();
  if ( Error != 10035 && Error != 10036 )
    goto LABEL_6;
  v18 = *(this + 7);
  v19 = 16;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(unsigned __int8 (__cdecl **)(int))a3;
  a2 = *(_DWORD *)(a3 + 8);
  v12 = off_4B4058((int)&v18, 1u, a2);
  v13 = v12 < 0;
  if ( v12 )
  {
LABEL_15:
    if ( v13 )
    {
      *(this + 11) = (SOCKET)"poll";
      *(this + 12) = WSAGetLastError();
      return 0;
    }
    argp = 4;
    if ( getsockopt(*(this + 7), 0xFFFF, 4103, optval, (int *)&argp) )
    {
      *(this + 11) = (SOCKET)"getsockopt";
      *(this + 12) = WSAGetLastError();
      return 0;
    }
    if ( *(_DWORD *)optval )
    {
      *(this + 12) = *(_DWORD *)optval;
      *(this + 11) = (SOCKET)"connect";
      return 0;
    }
    v3 = (void (__stdcall *)(SOCKET, int, u_long *))ioctlsocket;
    goto LABEL_24;
  }
  if ( v11 )
  {
    while ( !v11(v10) )
    {
      v14 = off_4B4058((int)&v18, 1u, a2);
      if ( v14 )
      {
        v13 = v14 < 0;
        goto LABEL_15;
      }
    }
    *(this + 11) = (SOCKET)"poll";
    *(this + 12) = 1223;
    return 0;
  }
  else
  {
    *(this + 11) = (SOCKET)"poll";
    *(this + 12) = 258;
    return 0;
  }
}
// 4B4058: using guessed type int (__stdcall *off_4B4058)(int a1, unsigned int a2, int a3);
