/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458A00
// Address: 0x0000000000458A00

//----- (0000000000458A00) ----------------------------------------------------
__int64 __fastcall sub_458A00(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x21
  __int64 v9; // x22
  __int64 result; // x0
  char v11[8]; // [xsp+48h] [xbp-18h] BYREF
  __int64 v12; // [xsp+50h] [xbp-10h]

  v7 = *a1;
  v6 = a1[1];
  a1[1] = a2;
  v9 = a1[19];
  v8 = a1[20];
  a1[19] = a4;
  a1[20] = 0;
  v11[0] = 1;
  v12 = 0;
  result = sub_4586D0((__int64)a1, (__int64)v11);
  if ( !(_DWORD)result )
    *a3 = v12;
  *a1 = v7;
  a1[1] = v6;
  a1[19] = v9;
  a1[20] = v8;
  return result;
}
