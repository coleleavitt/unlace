/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414A40
// Address: 0x00414A40

//----- (00414A40) --------------------------------------------------------
int __usercall sub_414A40@<eax>(int a1@<ebx>, int a2@<edi>, __m128i a3@<xmm0>, char *a4, ...)
{
  va_list va; // [esp+8h] [ebp+8h] BYREF

  va_start(va, a4);
  sub_453E60(a1, a2, a3, a4, (int)va);
  return sub_415760(a1, a2, a3, "\n");
}
