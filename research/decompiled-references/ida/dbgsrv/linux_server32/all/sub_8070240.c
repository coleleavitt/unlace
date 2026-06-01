/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8070240
// Address: 0x08070240

//----- (08070240) --------------------------------------------------------
void **sub_8070240(void **a1, char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  sub_80701B0(a1, a2, (int)va);
  return a1;
}
