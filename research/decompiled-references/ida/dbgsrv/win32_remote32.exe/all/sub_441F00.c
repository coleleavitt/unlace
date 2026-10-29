/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441F00
// Address: 0x00441F00

//----- (00441F00) --------------------------------------------------------
int sub_441F00(_BYTE *a1, int a2, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_44B800(1, a1, a2, (int)va);
}
