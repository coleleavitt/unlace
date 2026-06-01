/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EF70
// Address: 0x0044EF70

//----- (0044EF70) --------------------------------------------------------
char __thiscall sub_44EF70(_DWORD *this, int a2, int type, int protocol)
{
  SOCKET v5; // ecx
  SOCKET *v7; // ebx

  v5 = socket(a2, type, protocol);
  *(this + 7) = v5;
  if ( v5 == -1 )
  {
    *(this + 11) = "socket";
    *(this + 12) = WSAGetLastError();
    return 0;
  }
  else
  {
    protocol = 1;
    *((_BYTE *)this + 52) = a2 == 23;
    v7 = this + 7;
    if ( setsockopt(v5, 0xFFFF, 4, (const char *)&protocol, 4) )
    {
      *(this + 11) = "setsockopt(SO_REUSEADDR)";
      if ( (dword_4B70EC & 0x100000) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 40))(this);
        sub_402760(&dword_489384);
        v7 = this + 7;
      }
    }
    if ( setsockopt(*(this + 7), 0xFFFF, 8, (const char *)&protocol, 4) )
    {
      *(this + 11) = "setsockopt(SO_KEEPALIVE)";
      if ( (dword_4B70EC & 0x100000) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 40))(this);
        sub_402760(&dword_489384);
      }
    }
    if ( setsockopt(*v7, 6, 1, (const char *)&protocol, 4) )
    {
      *(this + 11) = "setsockopt(TCP_NODELAY)";
      if ( (dword_4B70EC & 0x100000) != 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 40))(this);
        sub_402760(&dword_489384);
      }
    }
    return 1;
  }
}
// 489384: using guessed type int dword_489384;
// 4B70EC: using guessed type int dword_4B70EC;
