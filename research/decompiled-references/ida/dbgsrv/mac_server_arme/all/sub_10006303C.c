/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006303C
// Address: 0x000000010006303C

//----- (000000010006303C) ----------------------------------------------------
__int64 __fastcall sub_10006303C(__int64 a1, int a2)
{
  __int64 result; // x0
  __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x21
  __darwin_time_t v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  _BYTE *v16; // x0
  unsigned int v17; // w8
  void *v18; // x22
  __darwin_time_t v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  unsigned int v27; // [xsp+8h] [xbp-48h] BYREF
  char v28; // [xsp+Ch] [xbp-44h]
  char v29[25]; // [xsp+Fh] [xbp-41h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( result )
  {
    if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( v5 )
      {
        v6 = *(_QWORD *)(a1 + 48) + 4LL;
        do
        {
          if ( *(unsigned __int8 *)(v6 - 4) == a2 )
            break;
          v6 += 8;
          --v5;
        }
        while ( v5 );
      }
      if ( !(unsigned int)sub_100062E2C(a1, (__int64)&v27, 5) )
      {
        v7 = bswap32(v27);
        v27 = v7;
        if ( (v7 & 0x80000000) == 0 && ((unsigned int)v7 <= 0x2000 || (*(_BYTE *)(a1 + 69) & 1) != 0) )
        {
          v16 = qalloc((void *)(v7 + 5));
          if ( v16 )
          {
            v17 = v27;
            v16[4] = v28;
            *(_DWORD *)v16 = v17;
            v18 = v16;
            if ( !(unsigned int)sub_100062E2C(a1, (__int64)(v16 + 5), v7) )
              return (__int64)v18;
            qfree(v18);
          }
          else
          {
            v19 = qtime64();
            format_timestamp(v29, 0x19u, v19, 0);
            sub_1000631DC("%s rpc: no local memory", v20, v21, v22, v23, v24, v25, v26, (char)v29);
          }
        }
        else
        {
          v8 = qtime64();
          format_timestamp(v29, 0x19u, v8, 0);
          sub_1000631DC("%s rpc: bad packet length", v9, v10, v11, v12, v13, v14, v15, (char)v29);
        }
      }
    }
    return 0;
  }
  return result;
}
// 10006312C: variable 'v9' is possibly undefined
// 10006312C: variable 'v10' is possibly undefined
// 10006312C: variable 'v11' is possibly undefined
// 10006312C: variable 'v12' is possibly undefined
// 10006312C: variable 'v13' is possibly undefined
// 10006312C: variable 'v14' is possibly undefined
// 10006312C: variable 'v15' is possibly undefined
// 1000631CC: variable 'v20' is possibly undefined
// 1000631CC: variable 'v21' is possibly undefined
// 1000631CC: variable 'v22' is possibly undefined
// 1000631CC: variable 'v23' is possibly undefined
// 1000631CC: variable 'v24' is possibly undefined
// 1000631CC: variable 'v25' is possibly undefined
// 1000631CC: variable 'v26' is possibly undefined
