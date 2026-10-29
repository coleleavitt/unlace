/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C428
// Address: 0x0008C428

//----- (0008C428) --------------------------------------------------------
int __fastcall sub_8C428(int *a1, int a2)
{
  int v3; // r4

  v3 = a2 - *a1;
  sub_8BF78(a1, v3, 1);
  return *a1 + v3;
}
