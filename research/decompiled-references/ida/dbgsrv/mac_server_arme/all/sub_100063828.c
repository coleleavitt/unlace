/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063828
// Address: 0x0000000100063828

//----- (0000000100063828) ----------------------------------------------------
char *__fastcall sub_100063828(__int64 a1)
{
  const char *v2; // x20
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  _QWORD *v16; // x1
  char v17; // [xsp+0h] [xbp-20h]

  v2 = *(const char **)(a1 + 88);
  if ( !strcmp(v2, "gai_strerror") )
  {
    v17 = (unsigned __int8)gai_strerror(*(_DWORD *)(a1 + 96));
    sub_10000295C((char **)(a1 + 64), "getaddrinfo: %s", v9, v10, v11, v12, v13, v14, v17);
  }
  else
  {
    if ( !strcmp(v2, "connection_closed_by_peer") )
    {
      v16 = *(_QWORD **)(a1 + 64);
      if ( *(_QWORD *)(a1 + 80) <= 0x1Fu )
      {
        v16 = qvector_reserve((_QWORD *)(a1 + 64), v16, 0x20u, 1u);
        *(_QWORD *)(a1 + 64) = v16;
      }
      *(_QWORD *)(a1 + 72) = 32;
      qmemcpy(v16, "recv: Connection closed by peer", 31);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + 31LL) = 0;
      if ( *(_QWORD *)(a1 + 72) )
        return *(char **)(a1 + 64);
      return &byte_10007AE40;
    }
    winerr(*(_DWORD *)(a1 + 96));
    sub_10000295C((char **)(a1 + 64), "%s: %s", v3, v4, v5, v6, v7, v8, (char)v2);
  }
  if ( *(_QWORD *)(a1 + 72) )
    return *(char **)(a1 + 64);
  return &byte_10007AE40;
}
// 100063880: variable 'v3' is possibly undefined
// 100063880: variable 'v4' is possibly undefined
// 100063880: variable 'v5' is possibly undefined
// 100063880: variable 'v6' is possibly undefined
// 100063880: variable 'v7' is possibly undefined
// 100063880: variable 'v8' is possibly undefined
// 10006389C: variable 'v9' is possibly undefined
// 10006389C: variable 'v10' is possibly undefined
// 10006389C: variable 'v11' is possibly undefined
// 10006389C: variable 'v12' is possibly undefined
// 10006389C: variable 'v13' is possibly undefined
// 10006389C: variable 'v14' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
