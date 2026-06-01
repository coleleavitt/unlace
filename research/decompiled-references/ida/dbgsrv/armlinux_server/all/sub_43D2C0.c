/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D2C0
// Address: 0x000000000043D2C0

//----- (000000000043D2C0) ----------------------------------------------------
__int64 __fastcall sub_43D2C0(_QWORD *a1, __int64 a2)
{
  _BYTE v3[8]; // [xsp+10h] [xbp-10h] BYREF

  sub_43D268(a1, a2, v3, 2);
  return v3[0] + (v3[1] << 8);
}
