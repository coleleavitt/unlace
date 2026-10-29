/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8390C
// Address: 0x0008390C

//----- (0008390C) --------------------------------------------------------
unsigned int *__fastcall sub_8390C(unsigned int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_836D4(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}
