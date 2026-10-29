/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85234
// Address: 0x0000000000085234

//----- (0000000000085234) ----------------------------------------------------
__int64 __fastcall sub_85234(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 result; // x0
  char v11[8]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+10h] [xbp-50h]
  __int64 v13; // [xsp+18h] [xbp-48h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a1;
  v7 = a1[1];
  v8 = a1[17];
  v9 = a1[18];
  a1[1] = a2;
  a1[17] = a4;
  a1[18] = 0;
  v11[0] = 1;
  v12 = 0;
  result = sub_84F38((__int64)a1, (__int64)v11);
  if ( !(_DWORD)result )
    *a3 = v12;
  *a1 = v6;
  a1[1] = v7;
  a1[17] = v8;
  a1[18] = v9;
  return result;
}
