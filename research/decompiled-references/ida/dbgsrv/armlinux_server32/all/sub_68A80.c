/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68A80
// Address: 0x00068A80

//----- (00068A80) --------------------------------------------------------
int *__fastcall sub_68A80(int a1)
{
  int v2; // r8
  const char *v3; // r5
  const char *v4; // r0
  void *v6; // r6
  const char *v7; // r0

  v2 = a1 + 32;
  v3 = *(const char **)(a1 + 44);
  if ( !strcmp(v3, "gai_strerror") )
  {
    v7 = gai_strerror(*(_DWORD *)(a1 + 48));
    sub_188E0(v2, "getaddrinfo: %s", v7);
  }
  else
  {
    if ( !strcmp(v3, "connection_closed_by_peer") )
    {
      v6 = *(void **)(a1 + 32);
      if ( *(_DWORD *)(a1 + 40) <= 0x1Fu )
      {
        v6 = sub_78018(v2, *(void **)(a1 + 32), 0x20u, 1u);
        *(_DWORD *)(a1 + 32) = v6;
      }
      *(_DWORD *)(a1 + 36) = 32;
      qmemcpy(v6, "recv: Connection closed by peer", 31);
      *(_BYTE *)(*(_DWORD *)(a1 + 32) + 31) = 0;
      if ( *(_DWORD *)(a1 + 36) )
        return *(int **)(a1 + 32);
      return &dword_8DB98;
    }
    v4 = (const char *)sub_79440(*(_DWORD *)(a1 + 48));
    sub_188E0(v2, "%s: %s", v3, v4);
  }
  if ( *(_DWORD *)(a1 + 36) )
    return *(int **)(a1 + 32);
  return &dword_8DB98;
}
// 8DB98: using guessed type int dword_8DB98;
