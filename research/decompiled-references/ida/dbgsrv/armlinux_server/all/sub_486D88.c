/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486D88
// Address: 0x0000000000486D88

//----- (0000000000486D88) ----------------------------------------------------
__int64 __fastcall sub_486D88(char *a1, _QWORD *a2)
{
  __int64 v2; // x5
  __int64 v3; // x2
  __int64 v4; // x3
  const char *v5; // x0
  _QWORD v7[4]; // [xsp+10h] [xbp-20h] BYREF

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v7[0] = *a2;
  v7[1] = v2;
  v7[2] = v3;
  v7[3] = v4;
  sub_49B710(a1, v7);
  v5 = sub_493840(-1);
  return sub_486900(": %s\n", v5);
}
