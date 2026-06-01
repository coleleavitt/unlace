/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97050
// Address: 0x00097050

//----- (00097050) --------------------------------------------------------
char *__cdecl sub_97050(_DWORD *a1)
{
  _DWORD *v1; // edi
  const char *v2; // esi
  int v4; // eax
  unsigned int v5; // esi
  void *v6; // eax
  const char *v7; // [esp-8h] [ebp-24h]
  void *v8; // [esp-4h] [ebp-20h]
  void **v9; // [esp+0h] [ebp-1Ch]
  size_t v10; // [esp+4h] [ebp-18h]

  v1 = a1;
  v2 = (const char *)a1[11];
  if ( !strcmp(v2, "gai_strerror") )
  {
    v7 = gai_strerror(a1[12]);
    sub_1F400((int)(a1 + 8), "getaddrinfo: %s", v7, 618593);
  }
  else
  {
    if ( !strcmp(v2, "connection_closed_by_peer") )
    {
      v9 = (void **)(a1 + 8);
      v4 = __strlen_chk("recv: Connection closed by peer", 32);
      if ( v4 )
      {
        v10 = v4;
        v5 = v4 + 1;
        if ( a1[10] >= (unsigned int)(v4 + 1) )
        {
          v6 = *v9;
        }
        else
        {
          v6 = qvector_reserve((int)v9, *v9, v5, 1u);
          *v9 = v6;
        }
        a1[9] = v5;
        memmove(v6, "recv: Connection closed by peer", v10);
        *(_BYTE *)(a1[8] + v10) = 0;
        if ( a1[9] )
          return (char *)v1[8];
      }
      else
      {
        a1[9] = 0;
        if ( a1[9] )
          return (char *)v1[8];
      }
      return byte_EF875;
    }
    v8 = winerr(a1[12]);
    v1 = a1;
    sub_1F400((int)(a1 + 8), "%s: %s", v2, v8);
  }
  if ( v1[9] )
    return (char *)v1[8];
  return byte_EF875;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
