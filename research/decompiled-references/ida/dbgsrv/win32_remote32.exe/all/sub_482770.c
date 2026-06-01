/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482770
// Address: 0x00482770

//----- (00482770) --------------------------------------------------------
BOOL __cdecl sub_482770(int a1)
{
  int v1; // eax

  return sub_482830(0x400000) && (v1 = sub_482720(0x400000, a1 - 0x400000)) != 0 && *(int *)(v1 + 36) >= 0;
}
