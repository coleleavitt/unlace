/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8461C
// Address: 0x000000000008461C

//----- (000000000008461C) ----------------------------------------------------
__int64 __fastcall sub_8461C(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // x0
  int v6; // w8
  _BOOL8 v7; // x8
  int v8; // w8
  _BOOL8 v9; // x8
  char v10[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v11; // [xsp+10h] [xbp-60h]
  char v12[8]; // [xsp+18h] [xbp-58h] BYREF
  __int64 v13; // [xsp+20h] [xbp-50h]
  __int64 v14; // [xsp+28h] [xbp-48h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = sub_839CC(a1, a2, a3 & 1);
  while ( 1 )
  {
    v12[0] = 1;
    v13 = 0;
    v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
    if ( v6 != 8509 )
      break;
    result = sub_839CC(a1, (__int64)v12, 1);
    v7 = *(_QWORD *)(a2 + 8) != v13;
LABEL_2:
    *(_QWORD *)(a2 + 8) = v7;
    *(_BYTE *)a2 = 0;
  }
  if ( v6 == 15677 )
  {
    result = sub_839CC(a1, (__int64)v12, 1);
    v7 = *(_QWORD *)(a2 + 8) == v13;
    goto LABEL_2;
  }
  if ( v6 != 38 )
    return result;
  while ( 2 )
  {
    v10[0] = 1;
    v11 = 0;
    result = sub_839CC(a1, (__int64)v10, 1);
    while ( 2 )
    {
      v12[0] = 1;
      v13 = 0;
      v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 600) + 24LL);
      if ( v8 == 8509 )
      {
        result = sub_839CC(a1, (__int64)v12, 1);
        v9 = v11 != v13;
        goto LABEL_9;
      }
      if ( v8 == 15677 )
      {
        result = sub_839CC(a1, (__int64)v12, 1);
        v9 = v11 == v13;
LABEL_9:
        v11 = v9;
        v10[0] = 0;
        continue;
      }
      break;
    }
    *(_QWORD *)(a2 + 8) &= v11;
    if ( *(_WORD *)(*(_QWORD *)(a1 + 600) + 24LL) == 38 )
      continue;
    return result;
  }
}
