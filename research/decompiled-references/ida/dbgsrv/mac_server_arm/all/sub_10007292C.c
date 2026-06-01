/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007292C
// Address: 0x000000010007292C

//----- (000000010007292C) ----------------------------------------------------
void __fastcall sub_10007292C(char *a1, char *a2, __int64 a3)
{
  size_t v6; // x0
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  char *v12; // x22
  unsigned __int64 v13; // x23
  int v14; // w0
  __int128 v15; // [xsp+10h] [xbp-A0h] BYREF
  _OWORD v16[5]; // [xsp+20h] [xbp-90h] BYREF
  __int64 v17; // [xsp+70h] [xbp-40h]

  v17 = 0;
  memset(v16, 0, sizeof(v16));
  MD5Init((__int64)v16);
  v6 = strlen(a1);
  MD5Update((__int64)v16, (__int128 *)a1, v6);
  MD5Final(&v15, (__int64)v16);
  v12 = &a2[a3];
  if ( &a2[a3] > a2 )
  {
    v13 = 0;
    do
    {
      v14 = qsnprintf(a2, v12 - a2, "%02X", v7, v8, v9, v10, v11, *((_BYTE *)&v16[-1] + v13));
      if ( v13 > 0xE )
        break;
      a2 += v14;
      ++v13;
    }
    while ( a2 < v12 );
  }
}
// 1000729D0: variable 'v7' is possibly undefined
// 1000729D0: variable 'v8' is possibly undefined
// 1000729D0: variable 'v9' is possibly undefined
// 1000729D0: variable 'v10' is possibly undefined
// 1000729D0: variable 'v11' is possibly undefined
