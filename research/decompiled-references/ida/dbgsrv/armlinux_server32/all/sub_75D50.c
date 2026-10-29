/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75D50
// Address: 0x00075D50

//----- (00075D50) --------------------------------------------------------
FILE *__fastcall sub_75D50(int a1, unsigned __int8 *a2)
{
  FILE *v3; // r4
  char v5[20]; // [sp+0h] [bp-18h] BYREF

  sub_7968C(v5, a2, 20);
  sub_79758(v5, (unsigned __int8 *)"e", 20);
  v3 = sub_75CD8(a1, v5, 8);
  if ( !v3 )
    sub_70B98(1);
  return v3;
}
