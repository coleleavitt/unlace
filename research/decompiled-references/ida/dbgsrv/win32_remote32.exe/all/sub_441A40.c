/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441A40
// Address: 0x00441A40

//----- (00441A40) --------------------------------------------------------
int sub_441A40(_BYTE *a1, int a2, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_44B800(0, a1, a2, (int)va);
}
