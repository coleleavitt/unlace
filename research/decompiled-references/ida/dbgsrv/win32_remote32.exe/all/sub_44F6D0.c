/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F6D0
// Address: 0x0044F6D0

//----- (0044F6D0) --------------------------------------------------------
char __thiscall sub_44F6D0(_DWORD *this, int a2)
{
  int v2; // eax
  bool v4; // zf
  char v5; // dl
  unsigned __int16 v6; // bp
  __int16 v7; // cx
  __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // ebx
  const char *v11; // edi
  const char *v12; // eax
  char optval[4]; // [esp+8h] [ebp-1B4h] BYREF
  struct WSAData WSAData; // [esp+Ch] [ebp-1B0h] BYREF
  _DWORD name[7]; // [esp+19Ch] [ebp-20h] BYREF

  v2 = protocol;
  if ( protocol )
  {
    v2 = WSAStartup(2u, &WSAData);
    protocol = v2;
    if ( v2 )
    {
      *(this + 11) = "WSAStartup";
    }
    else
    {
      sub_462A4C((int)WSACleanup);
      v2 = protocol;
    }
  }
  *(this + 12) = v2;
  if ( v2 )
    return 0;
  if ( !sub_44EF70(this, 23, 1, 0) && !sub_44EF70(this, 2, 1, 0) )
  {
LABEL_33:
    (*(void (__thiscall **)(_DWORD *, int))(*this + 32))(this, -1);
    return 0;
  }
  v4 = *((_BYTE *)this + 52) == 0;
  *(_DWORD *)optval = 0;
  if ( !v4 )
  {
    if ( setsockopt(*(this + 7), 41, 27, optval, 4) )
    {
      *(this + 11) = "setsockopt(IPV6_V6ONLY)";
      if ( (dword_4B70EC & 0x100000) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 40))(this);
        sub_402760(&dword_489384);
      }
    }
  }
  v5 = *((_BYTE *)this + 52);
  memset(&name[1], 0, 24);
  v6 = *(_WORD *)(a2 + 16);
  LOBYTE(v7) = HIBYTE(v6);
  HIBYTE(v7) = v6;
  v8 = v7;
  v9 = 23;
  HIWORD(name[0]) = v8;
  LOWORD(name[0]) = 23;
  if ( !v5 )
    LOWORD(name[0]) = 2;
  v10 = 28;
  if ( !v5 )
    v10 = 16;
  if ( *(_DWORD *)(a2 + 8) > 1u )
  {
    if ( *(_DWORD *)(a2 + 8) )
      v11 = *(const char **)(a2 + 4);
    else
      v11 = MultiByteStr;
    if ( !v5 )
      v9 = 2;
    if ( !sub_461600((int)name, v11, v9, v6) )
    {
      v12 = "in6addr_any";
      if ( !*((_BYTE *)this + 52) )
        v12 = "INADDR_ANY";
      sub_44D450(v10, (__m128i)0LL, "Cannot parse IP address \"%s\", falling back to %s\n", v11, v12);
      if ( *((_BYTE *)this + 52) )
        *(_OWORD *)&name[2] = xmmword_4A4504;
      else
        name[1] = 0;
    }
  }
  if ( bind(*(this + 7), (const struct sockaddr *)name, v10) == -1 )
  {
    *(this + 11) = "bind";
LABEL_32:
    *(this + 12) = WSAGetLastError();
    goto LABEL_33;
  }
  if ( listen(*(this + 7), 0x7FFFFFFF) == -1 )
  {
    *(this + 11) = "listen";
    goto LABEL_32;
  }
  return 1;
}
// 489384: using guessed type int dword_489384;
// 4A4504: using guessed type __int128 xmmword_4A4504;
// 4B70EC: using guessed type int dword_4B70EC;
