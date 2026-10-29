/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C1E0
// Address: 0x0006C1E0

//----- (0006C1E0) --------------------------------------------------------
int __fastcall sub_6C1E0(int a1, unsigned int a2)
{
  int result; // r0

  result = sub_6C150(a1, a2);
  if ( ((a1 != 0) + a2 - 1) & a2 | (a1 - 1) & a1 )
    ++result;
  return result;
}
