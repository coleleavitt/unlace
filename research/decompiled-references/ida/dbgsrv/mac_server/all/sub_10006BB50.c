/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BB50
// Address: 0x000000010006BB50

//----- (000000010006BB50) ----------------------------------------------------
const char *__fastcall sub_10006BB50(__int64 a1)
{
  const char *v1; // r14
  const char *v2; // rax
  const char *v3; // rax
  void *v5; // rax

  v1 = *(const char **)(a1 + 88);
  if ( strcmp(v1, "gai_strerror") )
  {
    if ( !strcmp(v1, "connection_closed_by_peer") )
    {
      v5 = *(void **)(a1 + 64);
      if ( *(_QWORD *)(a1 + 80) <= 0x1Fu )
      {
        v5 = qvector_reserve(a1 + 64, *(void **)(a1 + 64), 0x20u, 1u);
        *(_QWORD *)(a1 + 64) = v5;
      }
      *(_QWORD *)(a1 + 72) = 32;
      qmemcpy(v5, "recv: Connection closed by peer", 31);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 31LL) = 0;
      if ( !*(_QWORD *)(a1 + 72) )
        return _s1;
    }
    else
    {
      v2 = (const char *)winerr(*(_DWORD *)(a1 + 96));
      sub_100002D00(a1 + 64, "%s: %s", v1, v2);
      if ( !*(_QWORD *)(a1 + 72) )
        return _s1;
    }
    return *(const char **)(a1 + 64);
  }
  v3 = gai_strerror(*(_DWORD *)(a1 + 96));
  sub_100002D00(a1 + 64, "getaddrinfo: %s", v3);
  if ( *(_QWORD *)(a1 + 72) )
    return *(const char **)(a1 + 64);
  return _s1;
}
