/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3BD0
// Address: 0x00000000004A3BD0

//----- (00000000004A3BD0) ----------------------------------------------------
unsigned int **__fastcall sub_4A3BD0(unsigned int **a1, __int64 a2, __int64 a3, unsigned int **a4)
{
  return sub_4A3948(a1, a2 - (_QWORD)*a1, a3 - a2, *a4, *((_QWORD *)*a4 - 3));
}
