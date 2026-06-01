/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82FE8
// Address: 0x0000000000082FE8

//----- (0000000000082FE8) ----------------------------------------------------
__int64 __fastcall sub_82FE8(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  char *v7; // x8
  char v8; // w9
  __int64 v9; // x8
  _BOOL8 v10; // x9
  char v11[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v12; // [xsp+10h] [xbp-60h]
  char v13[8]; // [xsp+18h] [xbp-58h] BYREF
  _BOOL8 v14; // [xsp+20h] [xbp-50h]
  char v15[8]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v16; // [xsp+30h] [xbp-40h]
  __int64 v17; // [xsp+38h] [xbp-38h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v13[0] = 1;
  v14 = 0;
  result = sub_84C30(a1, (__int64)v13, a3 & 1);
  while ( 1 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
    if ( v6 != 31868 )
      break;
    v15[0] = 1;
    v16 = 0;
    result = sub_84C30(a1, (__int64)v15, 1);
    v13[0] = 0;
    v14 = (v16 | v14) != 0;
  }
  if ( v6 == 63 )
  {
    v15[0] = 1;
    v16 = 0;
    sub_82FE8(a1, v15, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) != 58 )
      sub_82EA4(a1);
    v11[0] = 1;
    v12 = 0;
    result = sub_82FE8(a1, v11, 1);
    if ( v14 )
      v7 = v15;
    else
      v7 = v11;
    v8 = *v7;
    v9 = *((_QWORD *)v7 + 1);
    *(_BYTE *)a2 = v8;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    v10 = v14;
    *(_BYTE *)a2 = v13[0];
    *(_QWORD *)(a2 + 8) = v10;
  }
  return result;
}
