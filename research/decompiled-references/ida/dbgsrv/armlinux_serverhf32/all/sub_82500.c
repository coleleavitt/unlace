/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82500
// Address: 0x00082500

//----- (00082500) --------------------------------------------------------
int __fastcall sub_82500(int *a1, int a2)
{
  int v3; // r3

  v3 = *a1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_8244C(a1);
    v3 = *a1;
  }
  return v3 + a2;
}
