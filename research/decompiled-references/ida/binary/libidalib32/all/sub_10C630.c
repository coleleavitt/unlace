__int64 __fastcall sub_10C630(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 server_connection2; // rax

  v2 = sub_10C2D0(a1, a2, (__int64)"Delete", 8);
  if ( v2 > 3 )
    return v2;
  if ( *(_DWORD *)(a2 + 8) == 35
    && *(_QWORD *)(a2 + 24)
    && !strcmp(*(const char **)(a2 + 16), "Lumina Metadata History:3")
    && *(_BYTE *)(a2 + 600)
    && (server_connection2 = get_server_connection2()) != 0
    && (*(_BYTE *)(server_connection2 + 176) & 2) != 0 )
  {
    return v2;
  }
  else
  {
    return 7;
  }
}

