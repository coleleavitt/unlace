/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41710
// Address: 0x00041710

//----- (00041710) --------------------------------------------------------
int __fastcall sub_41710(unsigned int a1)
{
  bool v1; // cc
  int v2; // r0

  v1 = a1 > 0x2E;
  if ( a1 != 46 )
    v1 = a1 - 48 > 9;
  v2 = !v1;
  return v2 ^ 1;
}
