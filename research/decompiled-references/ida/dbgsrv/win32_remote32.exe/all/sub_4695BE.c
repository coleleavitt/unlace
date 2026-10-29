/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4695BE
// Address: 0x004695BE

//----- (004695BE) --------------------------------------------------------
int __userpurge sub_4695BE@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, int *a3, int **a4, int *a5)
{
  int v6; // [esp+10h] [ebp-1Ch]

  sub_469596(*a3);
  v6 = sub_469D97(a4, a1, a2);
  sub_4695AA(*a5);
  return v6;
}
