/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qerrstr
// Address: 0x0000000100067474

//----- (0000000100067474) ----------------------------------------------------
__int64 __fastcall qerrstr(int a1)
{
  int v1; // w20
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  size_t v10; // x0
  size_t v11; // x20
  unsigned __int64 v12; // x21
  void *v13; // x0
  char __strerrbuf[1024]; // [xsp+8h] [xbp-428h] BYREF

  v1 = a1;
  if ( a1 == -1 )
    v1 = *__error();
  off_10009D688();
  v3 = v2;
  if ( strerror_r(v1, __strerrbuf, 0x400u) )
  {
    sub_10000273C((char **)(v3 + 176), "unknown error code %d", v4, v5, v6, v7, v8, v9, v1);
  }
  else
  {
    v10 = strlen(__strerrbuf);
    if ( v10 )
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = *(void **)(v3 + 176);
      if ( *(_QWORD *)(v3 + 192) < v12 )
      {
        v13 = qvector_reserve((_QWORD *)(v3 + 176), *(_QWORD **)(v3 + 176), v12, 1u);
        *(_QWORD *)(v3 + 176) = v13;
      }
      *(_QWORD *)(v3 + 184) = v12;
      memmove(v13, __strerrbuf, v11);
      *(_BYTE *)(*(_QWORD *)(v3 + 176) + v11) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 184) = 0;
    }
  }
  return *(_QWORD *)(v3 + 176);
}
// 1000674BC: variable 'v2' is possibly undefined
// 1000674E4: variable 'v4' is possibly undefined
// 1000674E4: variable 'v5' is possibly undefined
// 1000674E4: variable 'v6' is possibly undefined
// 1000674E4: variable 'v7' is possibly undefined
// 1000674E4: variable 'v8' is possibly undefined
// 1000674E4: variable 'v9' is possibly undefined
// 10009D688: using guessed type void (*off_10009D688)(void);
