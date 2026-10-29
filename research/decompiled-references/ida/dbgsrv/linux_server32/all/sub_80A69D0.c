/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A69D0
// Address: 0x080A69D0

//----- (080A69D0) --------------------------------------------------------
int sub_80A69D0(_BYTE *a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_80BCAD0(0, a1, a2, (int)va);
}
