/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_836F4
// Address: 0x000836F4

//----- (000836F4) --------------------------------------------------------
unsigned int *__fastcall sub_836F4(unsigned int *a1, int a2, int a3, _BYTE **a4)
{
  return sub_8353C(a1, a2 - *a1, a3 - a2, *a4, *((_DWORD *)*a4 - 3));
}
