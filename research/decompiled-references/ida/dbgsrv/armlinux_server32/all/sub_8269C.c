/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8269C
// Address: 0x0008269C

//----- (0008269C) --------------------------------------------------------
int __fastcall sub_8269C(int *a1, int a2)
{
  int v3; // r3

  v3 = *a1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_825E8(a1);
    v3 = *a1;
  }
  return v3 + a2;
}
