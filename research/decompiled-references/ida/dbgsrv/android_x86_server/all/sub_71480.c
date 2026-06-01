/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71480
// Address: 0x00071480

//----- (00071480) --------------------------------------------------------
int __cdecl sub_71480(int a1, int a2)
{
  *(_QWORD *)(a1 + 4) = -*(_QWORD *)(a2 + 4);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  return a1;
}
