/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415760
// Address: 0x00415760

//----- (00415760) --------------------------------------------------------
int __usercall sub_415760@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, char *a4, ...)
{
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, a4);
  return sub_453E60(a1, a2, a3, a4, (int)va);
}
