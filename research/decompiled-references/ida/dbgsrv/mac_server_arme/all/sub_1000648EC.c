/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000648EC
// Address: 0x00000001000648EC

//----- (00000001000648EC) ----------------------------------------------------
__int64 __fastcall sub_1000648EC(__int64 a1, __int64 a2)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v8; // x3
  __int16 v9; // w11
  int v10; // w8
  char v11; // w12
  socklen_t v12; // w21
  const char *v13; // x20
  int v14; // w2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  const char *v23; // x8
  int v24; // [xsp+14h] [xbp-4Ch] BYREF
  __int64 v25; // [xsp+18h] [xbp-48h] BYREF
  sockaddr v26; // [xsp+20h] [xbp-40h]
  int v27; // [xsp+30h] [xbp-30h]

  signal(13, (void (__cdecl *)(int))1);
  if ( sub_100063B24(a1, 30, 1, 0) || sub_100063B24(a1, 2, 1, 0) )
  {
    v24 = 0;
    if ( *(_BYTE *)(a1 + 100) == 1 )
    {
      if ( setsockopt(*(_DWORD *)(a1 + 56), 41, 27, &v24, 4u) )
      {
        *(_QWORD *)(a1 + 88) = "setsockopt(IPV6_V6ONLY)";
        if ( (debug & 0x100000) != 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
          sub_100012E04();
        }
      }
    }
    v25 = 0;
    v26 = (sockaddr)0LL;
    v27 = 0;
    v8 = *(unsigned __int16 *)(a2 + 32);
    v9 = __rev16(v8);
    v10 = *(unsigned __int8 *)(a1 + 100);
    if ( *(_BYTE *)(a1 + 100) )
      v11 = 30;
    else
      v11 = 2;
    if ( *(_BYTE *)(a1 + 100) )
      v12 = 28;
    else
      v12 = 16;
    BYTE1(v25) = v11;
    WORD1(v25) = v9;
    if ( *(_QWORD *)(a2 + 16) >= 2u )
    {
      v13 = *(const char **)(a2 + 8);
      if ( v10 )
        v14 = 30;
      else
        v14 = 2;
      if ( (qhost2addr_((__int64)&v25, v13, v14, v8, v4, v5, v6, v7) & 1) == 0 )
      {
        sub_100065520(
          "Cannot parse IP address \"%s\", falling back to %s\n",
          v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          (char)v13);
        if ( *(_BYTE *)(a1 + 100) == 1 )
          v26 = (sockaddr)in6addr_any;
        else
          HIDWORD(v25) = 0;
      }
    }
    if ( bind(*(_DWORD *)(a1 + 56), (const sockaddr *)&v25, v12) == -1 )
    {
      v23 = "bind";
    }
    else
    {
      if ( listen(*(_DWORD *)(a1 + 56), 128) != -1 )
        return 1;
      v23 = "listen";
    }
    *(_QWORD *)(a1 + 88) = v23;
    *(_DWORD *)(a1 + 96) = *__error();
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
  return 0;
}
// 100064A34: variable 'v4' is possibly undefined
// 100064A34: variable 'v5' is possibly undefined
// 100064A34: variable 'v6' is possibly undefined
// 100064A34: variable 'v7' is possibly undefined
// 100064A64: variable 'v15' is possibly undefined
// 100064A64: variable 'v16' is possibly undefined
// 100064A64: variable 'v17' is possibly undefined
// 100064A64: variable 'v18' is possibly undefined
// 100064A64: variable 'v19' is possibly undefined
// 100064A64: variable 'v20' is possibly undefined
// 100064A64: variable 'v21' is possibly undefined
// 1000A5908: using guessed type int debug;
