/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D310
// Address: 0x000000000043D310

//----- (000000000043D310) ----------------------------------------------------
__int64 __fastcall sub_43D310(_QWORD *a1, __int64 a2)
{
  _BYTE v3[8]; // [xsp+10h] [xbp-10h] BYREF

  sub_43D268(a1, a2, v3, 4);
  return (v3[2] << 16) + (v3[1] << 8) + v3[0] + (v3[3] << 24);
}
