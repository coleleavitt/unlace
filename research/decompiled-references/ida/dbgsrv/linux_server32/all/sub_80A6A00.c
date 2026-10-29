/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6A00
// Address: 0x080A6A00

//----- (080A6A00) --------------------------------------------------------
int sub_80A6A00(_BYTE *a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_80BCAD0(1, a1, a2, (int)va);
}
