/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A68FC
// Address: 0x00000000000A68FC

//----- (00000000000A68FC) ----------------------------------------------------
char *__fastcall sub_A68FC(__int64 a1)
{
  const char *v1; // x21
  void **v3; // x20
  const char *v4; // x0
  const char *v6; // x0
  __int64 v7; // x0
  unsigned __int64 v8; // x22
  size_t v9; // x21
  void *v10; // x0

  v1 = *(const char **)(a1 + 88);
  if ( !strcmp(v1, "gai_strerror") )
  {
    v6 = gai_strerror(*(_DWORD *)(a1 + 96));
    sub_3C748(a1 + 64, "getaddrinfo: %s", v6);
    if ( *(_QWORD *)(a1 + 72) )
      return *(char **)(a1 + 64);
  }
  else
  {
    v3 = (void **)(a1 + 64);
    if ( !strcmp(v1, "connection_closed_by_peer") )
    {
      v7 = __strlen_chk("recv: Connection closed by peer", 32);
      if ( v7 )
      {
        v8 = v7 + 1;
        v9 = v7;
        if ( *(_QWORD *)(a1 + 80) >= (unsigned __int64)(v7 + 1) )
        {
          v10 = *v3;
        }
        else
        {
          v10 = qvector_reserve((pthread_mutex_t *)(a1 + 64), *v3, v8, 1u);
          *v3 = v10;
        }
        *(_QWORD *)(a1 + 72) = v8;
        memmove(v10, "recv: Connection closed by peer", v9);
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + v9) = 0;
        if ( *(_QWORD *)(a1 + 72) )
          return *(char **)(a1 + 64);
      }
      else
      {
        *(_QWORD *)(a1 + 72) = 0;
        if ( *(_QWORD *)(a1 + 72) )
          return *(char **)(a1 + 64);
      }
    }
    else
    {
      v4 = (const char *)winerr(*(_DWORD *)(a1 + 96));
      sub_3C748(a1 + 64, "%s: %s", v1, v4);
      if ( *(_QWORD *)(a1 + 72) )
        return *(char **)(a1 + 64);
    }
  }
  return &byte_F154B;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
