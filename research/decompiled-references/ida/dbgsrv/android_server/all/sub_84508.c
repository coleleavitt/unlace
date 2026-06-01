/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84508
// Address: 0x0000000000084508

//----- (0000000000084508) ----------------------------------------------------
__int64 __fastcall sub_84508(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  _BOOL8 v7; // x8
  char v8[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v9; // [xsp+10h] [xbp-50h]
  __int64 v10; // [xsp+18h] [xbp-48h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_839CC(a1, a2, a3 & 1);
  while ( 1 )
  {
    v8[0] = 1;
    v9 = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
    if ( v6 != 8509 )
      break;
    result = sub_839CC(a1, (__int64)v8, 1);
    v7 = *(_QWORD *)(a2 + 8) != v9;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v7;
    *(_BYTE *)a2 = 0;
  }
  if ( v6 == 15677 )
  {
    result = sub_839CC(a1, (__int64)v8, 1);
    v7 = *(_QWORD *)(a2 + 8) == v9;
    goto LABEL_2;
  }
  return result;
}
