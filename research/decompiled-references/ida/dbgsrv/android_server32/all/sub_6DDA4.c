/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DDA4
// Address: 0x0006DDA4

//----- (0006DDA4) --------------------------------------------------------
char *__fastcall sub_6DDA4(_DWORD *a1)
{
  const char *v2; // r6
  void **v3; // r5
  const char *v4; // r0
  const char *v5; // r0
  int v6; // r0
  size_t v7; // r6
  unsigned int v8; // r7
  void *v9; // r0

  v2 = (const char *)a1[11];
  if ( !strcmp(v2, "gai_strerror") )
  {
    v5 = gai_strerror(a1[12]);
    sub_1DA58((int)(a1 + 8), "getaddrinfo: %s", v5);
  }
  else
  {
    v3 = (void **)(a1 + 8);
    if ( !strcmp(v2, "connection_closed_by_peer") )
    {
      v6 = _strlen_chk("recv: Connection closed by peer", 32);
      if ( v6 )
      {
        v7 = v6;
        v8 = v6 + 1;
        if ( a1[10] >= (unsigned int)(v6 + 1) )
        {
          v9 = *v3;
        }
        else
        {
          v9 = qvector_reserve((int)(a1 + 8), *v3, v8, 1u);
          *v3 = v9;
        }
        a1[9] = v8;
        memmove(v9, "recv: Connection closed by peer", v7);
        *(_BYTE *)(a1[8] + v7) = 0;
      }
      else
      {
        a1[9] = 0;
      }
    }
    else
    {
      v4 = (const char *)winerr(a1[12]);
      sub_1DA58((int)(a1 + 8), "%s: %s", v2, v4);
    }
  }
  if ( a1[9] )
    return (char *)a1[8];
  else
    return &byte_B3CBE;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
