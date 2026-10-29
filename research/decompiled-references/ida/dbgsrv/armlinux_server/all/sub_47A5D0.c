/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A5D0
// Address: 0x000000000047A5D0

//----- (000000000047A5D0) ----------------------------------------------------
__int64 *__fastcall sub_47A5D0(__int64 a1)
{
  __int64 v2; // x21
  const char *v3; // x20
  const char *v4; // x0
  void *v6; // x0
  const char *v7; // x0

  v2 = a1 + 64;
  v3 = *(const char **)(a1 + 88);
  if ( !strcmp(v3, "gai_strerror") )
  {
    v7 = gai_strerror(*(_DWORD *)(a1 + 96));
    sub_40CD68(v2, "getaddrinfo: %s", v7);
  }
  else
  {
    if ( !strcmp(v3, "connection_closed_by_peer") )
    {
      v6 = *(void **)(a1 + 64);
      if ( *(_QWORD *)(v2 + 16) <= 0x1Fu )
      {
        v6 = sub_491288(v2, *(void **)(a1 + 64), 0x20u, 1u);
        *(_QWORD *)(a1 + 64) = v6;
      }
      *(_QWORD *)(v2 + 8) = 32;
      qmemcpy(v6, "recv: Connection closed by peer", 31);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 31LL) = 0;
      if ( *(_QWORD *)(a1 + 72) )
        return *(__int64 **)(a1 + 64);
      return &qword_4B2D48;
    }
    v4 = (const char *)sub_492F00(*(_DWORD *)(a1 + 96));
    sub_40CD68(v2, "%s: %s", v3, v4);
  }
  if ( *(_QWORD *)(a1 + 72) )
    return *(__int64 **)(a1 + 64);
  return &qword_4B2D48;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
