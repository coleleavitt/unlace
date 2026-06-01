/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B5F0
// Address: 0x000000000043B5F0

//----- (000000000043B5F0) ----------------------------------------------------
__int64 __fastcall sub_43B5F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x2
  __int64 v7; // [xsp+20h] [xbp-20h] BYREF
  __int64 v8; // [xsp+28h] [xbp-18h]
  __int64 v9; // [xsp+30h] [xbp-10h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_43AAE8((__int64 (__fastcall *)(__int64))sub_43A968, (__int64)&v7, a1, a2);
  v4 = v7;
  v3 = v8;
  *(_BYTE *)a2 = 7;
  v6 = v9;
  *(_QWORD *)(a2 + 8) = v4;
  *(_QWORD *)(a2 + 16) = v3;
  *(_QWORD *)(a2 + 24) = v6;
  return 0;
}
