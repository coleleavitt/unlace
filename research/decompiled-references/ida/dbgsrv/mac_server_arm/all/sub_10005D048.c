/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D048
// Address: 0x000000010005D048

//----- (000000010005D048) ----------------------------------------------------
__int64 __fastcall sub_10005D048(__int64 a1, __int64 *a2)
{
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  char *v10; // x8
  char *v11; // x8
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  char v18; // w21
  char *v19; // x8
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  char *v26; // x8
  __int64 result; // x0

  if ( !(unsigned int)sub_10005E338(a2[17]) )
  {
    if ( a2[19] )
      v11 = (char *)a2[18];
    else
      v11 = &byte_100075A30;
    sub_10004B8FC((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v4, v5, v6, v7, v8, v9, (char)v11);
    if ( a2[19] )
      v26 = (char *)a2[18];
    else
      v26 = &byte_100075A30;
    sub_10004B8FC((__int64)a2, "Closing connection from %s...\n", v20, v21, v22, v23, v24, v25, (char)v26);
    return sub_10005DFAC(a1, (__int64)a2);
  }
  if ( a2[19] )
    v10 = (char *)a2[18];
  else
    v10 = &byte_100075A30;
  sub_10004B8FC((__int64)a2, "Accepting connection from %s...\n", v4, v5, v6, v7, v8, v9, (char)v10);
  v18 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  if ( a2[19] )
    v19 = (char *)a2[18];
  else
    v19 = &byte_100075A30;
  result = sub_10004B8FC((__int64)a2, "Closing connection from %s...\n", v12, v13, v14, v15, v16, v17, (char)v19);
  if ( (v18 & 1) != 0 )
    return sub_10005DFAC(a1, (__int64)a2);
  return result;
}
// 10005D0AC: variable 'v4' is possibly undefined
// 10005D0AC: variable 'v5' is possibly undefined
// 10005D0AC: variable 'v6' is possibly undefined
// 10005D0AC: variable 'v7' is possibly undefined
// 10005D0AC: variable 'v8' is possibly undefined
// 10005D0AC: variable 'v9' is possibly undefined
// 10005D11C: variable 'v12' is possibly undefined
// 10005D11C: variable 'v13' is possibly undefined
// 10005D11C: variable 'v14' is possibly undefined
// 10005D11C: variable 'v15' is possibly undefined
// 10005D11C: variable 'v16' is possibly undefined
// 10005D11C: variable 'v17' is possibly undefined
// 10005D1CC: variable 'v20' is possibly undefined
// 10005D1CC: variable 'v21' is possibly undefined
// 10005D1CC: variable 'v22' is possibly undefined
// 10005D1CC: variable 'v23' is possibly undefined
// 10005D1CC: variable 'v24' is possibly undefined
// 10005D1CC: variable 'v25' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
