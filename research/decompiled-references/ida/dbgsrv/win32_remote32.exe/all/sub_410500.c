/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410500
// Address: 0x00410500

//----- (00410500) --------------------------------------------------------
int sub_410500(int a1, int a2, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_43CE00(1, *(_DWORD *)(a1 + 200), a2, (int)va);
}
