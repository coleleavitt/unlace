/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453D50
// Address: 0x00453D50

//----- (00453D50) --------------------------------------------------------
int __usercall sub_453D50@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int a3, char *a4, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a4);
  return sub_453E80(a1, a2, a3, a4, (int)va);
}
