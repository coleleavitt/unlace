/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8374C
// Address: 0x0008374C

//----- (0008374C) --------------------------------------------------------
unsigned int *__fastcall sub_8374C(unsigned int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_8353C(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}
