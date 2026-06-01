/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8388C
// Address: 0x0008388C

//----- (0008388C) --------------------------------------------------------
unsigned int *__fastcall sub_8388C(unsigned int *a1, int a2, int a3, _BYTE **a4)
{
  return sub_836D4(a1, a2 - *a1, a3 - a2, *a4, *((_DWORD *)*a4 - 3));
}
