/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C34C
// Address: 0x0006C34C

//----- (0006C34C) --------------------------------------------------------
int __fastcall sub_6C34C(int a1, unsigned int a2)
{
  int result; // r0

  result = sub_6C2C0(a1, a2);
  if ( ((a1 != 0) + a2 - 1) & a2 | (a1 - 1) & a1 )
    ++result;
  return result;
}
