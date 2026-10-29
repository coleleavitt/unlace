/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442A00
// Address: 0x00442A00

//----- (00442A00) --------------------------------------------------------
int __usercall sub_442A00@<eax>(__m128i a1@<xmm0>, int a2, char *a3, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a3);
  return sub_44DC30(a2, a1, a3, (int)va);
}
