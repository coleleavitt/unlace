__int64 __fastcall sub_2F4740(const char *a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 server_connection2; // rax

  v3 = sub_2F44B0(a1, a2, "Delete", 4, a3);
  if ( v3 > 3 )
    return v3;
  if ( *(_DWORD *)(a2 + 8) == 35
    && *(_QWORD *)(a2 + 24)
    && !strcmp(*(const char **)(a2 + 16), "Lumina Metadata History:3")
    && *(_BYTE *)(a2 + 704)
    && (server_connection2 = get_server_connection2(0x80000000LL)) != 0
    && (*(_BYTE *)(server_connection2 + 176) & 2) != 0 )
  {
    return v3;
  }
  else
  {
    return 7;
  }
}
