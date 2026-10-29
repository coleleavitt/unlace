/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB6E0
// Address: 0x00000000000AB6E0

//----- (00000000000AB6E0) ----------------------------------------------------
const char *__fastcall sub_AB6E0(__int64 a1)
{
  const char *v2; // rbx
  char **v3; // r14
  char *v4; // rax
  const char *v6; // rax
  __int64 v7; // rax
  size_t v8; // r15
  __int64 v9; // rbx
  char *v10; // rdi

  v2 = *(const char **)(a1 + 88);
  if ( !strcmp(v2, "gai_strerror") )
  {
    v6 = gai_strerror(*(_DWORD *)(a1 + 96));
    sub_3BBA0(a1 + 64, "getaddrinfo: %s", v6);
    if ( *(_QWORD *)(a1 + 72) )
      return *(const char **)(a1 + 64);
  }
  else
  {
    v3 = (char **)(a1 + 64);
    if ( !strcmp(v2, "connection_closed_by_peer") )
    {
      v7 = __strlen_chk("recv: Connection closed by peer", 32);
      if ( v7 )
      {
        v8 = v7;
        v9 = v7 + 1;
        if ( *(_QWORD *)(a1 + 80) >= (unsigned __int64)(v7 + 1) )
        {
          v10 = *v3;
        }
        else
        {
          v10 = (char *)qvector_reserve(a1 + 64, *v3, v7 + 1, 1u);
          *v3 = v10;
        }
        *(_QWORD *)(a1 + 72) = v9;
        memmove(v10, "recv: Connection closed by peer", v8);
        *(_BYTE *)(*(_QWORD *)(a1 + 64) + v8) = 0;
        if ( *(_QWORD *)(a1 + 72) )
          return *(const char **)(a1 + 64);
      }
      else
      {
        *(_QWORD *)(a1 + 72) = 0;
        if ( *(_QWORD *)(a1 + 72) )
          return *(const char **)(a1 + 64);
      }
    }
    else
    {
      v4 = winerr(*(_DWORD *)(a1 + 96));
      sub_3BBA0(a1 + 64, "%s: %s", v2, v4);
      if ( *(_QWORD *)(a1 + 72) )
        return *(const char **)(a1 + 64);
    }
  }
  return s1;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
