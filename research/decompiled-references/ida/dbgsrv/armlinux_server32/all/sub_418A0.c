/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418A0
// Address: 0x000418A0

//----- (000418A0) --------------------------------------------------------
int __fastcall sub_418A0(unsigned int a1)
{
  bool v1; // cc
  int v2; // r0

  v1 = a1 > 0x2E;
  if ( a1 != 46 )
    v1 = a1 - 48 > 9;
  v2 = !v1;
  return v2 ^ 1;
}
