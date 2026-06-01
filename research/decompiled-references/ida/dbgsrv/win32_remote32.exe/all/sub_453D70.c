/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453D70
// Address: 0x00453D70

//----- (00453D70) --------------------------------------------------------
int __usercall sub_453D70@<eax>(int a1@<ebx>, __m128i *a2, char *a3, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a3);
  return sub_453FB0(a1, a2, a3, (int)va);
}
