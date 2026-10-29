/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B710
// Address: 0x000000000049B710

//----- (000000000049B710) ----------------------------------------------------
__int64 __fastcall sub_49B710(char *s, _QWORD *a2)
{
  __int64 v2; // x7
  __int64 v3; // x4
  __int64 v4; // x5
  _QWORD v6[4]; // [xsp+10h] [xbp-20h] BYREF

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v6[0] = *a2;
  v6[1] = v2;
  v6[2] = v3;
  v6[3] = v4;
  return sub_49B600((__int64)stderr, s, v6);
}
