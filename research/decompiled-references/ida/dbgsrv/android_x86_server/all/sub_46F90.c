/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F90
// Address: 0x00046F90

//----- (00046F90) --------------------------------------------------------
_BYTE *__cdecl sub_46F90(int a1, int a2, int a3)
{
  sub_46F00(a1, a2);
  sub_46F00(a1, SHIWORD(a2));
  sub_46F00(a1, a3);
  return sub_46F00(a1, SHIWORD(a3));
}
