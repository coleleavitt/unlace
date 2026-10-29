/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75BE8
// Address: 0x00075BE8

//----- (00075BE8) --------------------------------------------------------
FILE *__fastcall sub_75BE8(int a1, unsigned __int8 *a2)
{
  FILE *v3; // r4
  char v5[20]; // [sp+0h] [bp-18h] BYREF

  sub_79524(v5, a2, 20);
  sub_795F0(v5, (unsigned __int8 *)"e", 20);
  v3 = sub_75B70(a1, v5, 8);
  if ( !v3 )
    sub_70A2C(1);
  return v3;
}
