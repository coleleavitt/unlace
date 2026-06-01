/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B310
// Address: 0x000000000004B310

//----- (000000000004B310) ----------------------------------------------------
__int64 __fastcall sub_4B310(__int64 a1, int8x16x2_t a2)
{
  char v2; // w19
  _QWORD v4[79]; // [xsp+8h] [xbp-298h] BYREF

  v4[78] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_4ECD4((__int64)v4, a1, 0, a2);
  v4[62] = sub_4B3C0;
  if ( sub_4B3EC((__int64)v4) )
    v2 = sub_4B520(v4);
  else
    v2 = 0;
  sub_4BE70(v4);
  return v2 & 1;
}
