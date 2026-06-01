/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A69A0
// Address: 0x080A69A0

//----- (080A69A0) --------------------------------------------------------
int sub_80A69A0(int a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_80BA3C0(a1, a2, (int)va);
}
