/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417AD8
// Address: 0x0000000000417AD8

//----- (0000000000417AD8) ----------------------------------------------------
__int64 __fastcall sub_417AD8(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // x20
  _QWORD *v4; // x23
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v14; // x0
  _QWORD v15[2]; // [xsp+50h] [xbp-50h] BYREF
  char v16; // [xsp+60h] [xbp-40h]
  int v17; // [xsp+64h] [xbp-3Ch]

  if ( *(_BYTE *)(a1 + 2118) && !*(_BYTE *)(a1 + 2053) )
  {
    if ( !under_debugger )
      sub_492270(30059);
    __break(0x3E8u);
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(a1 + 136);
  v4 = v15;
  v3 = (_QWORD *)(a1 + 120);
  v5 = 0xFFFFFFFFLL;
  v6 = -1;
  do
  {
    while ( *(_QWORD *)(a1 + 168) == v10 )
    {
LABEL_13:
      v16 = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[5] = 0;
      v4[6] = 0;
      v4[7] = 0;
      v4[8] = 0;
      v15[0] = v5;
      v15[1] = v6;
      v17 = 0;
      if ( !(unsigned int)sub_417098(a1, (__int64)v4, a3) )
      {
        sub_482ED0((__int64)v4);
        return 0;
      }
      if ( (v17 & 0xFFFFFFF) != 0 )
      {
        v14 = v3[6];
        if ( v14 == v3[8] - 72LL )
        {
          sub_411490(v3, (__int64)v4);
        }
        else
        {
          *(_QWORD *)v14 = v5;
          *(_QWORD *)(v14 + 8) = v6;
          *(_BYTE *)(v14 + 16) = 0;
          *(_DWORD *)(v14 + 20) = 0;
          sub_483128(v14, (__int64)v4);
          v3[6] += 72LL;
        }
        *(_BYTE *)(a1 + 2116) = 0;
      }
      sub_482ED0((__int64)v4);
      v10 = *(_QWORD *)(a1 + 136);
    }
    sub_483128(a2, v10);
    v11 = v3[2];
    if ( v11 == v3[4] - 72LL )
    {
      sub_40D1F0((__int64)v3);
      v10 = *(_QWORD *)(a1 + 136);
    }
    else
    {
      sub_482ED0(v11);
      v10 = v3[2] + 72LL;
      v3[2] = v10;
    }
  }
  while ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 0 );
  v12 = *(_QWORD *)(a1 + 440);
  *(_BYTE *)(a1 + 2118) = 1;
  if ( !v12 )
    *(_BYTE *)(a1 + 2117) = 0;
  return (unsigned int)(*(_QWORD *)(a1 + 168) != v10) + 1;
}
// 417B48: variable 'v3' is possibly undefined
// 417BE4: variable 'v4' is possibly undefined
// 417BF8: variable 'v5' is possibly undefined
// 417BF8: variable 'v6' is possibly undefined
// 52451C: using guessed type char under_debugger;
