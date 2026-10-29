/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4104E0
// Address: 0x004104E0

//----- (004104E0) --------------------------------------------------------
int sub_4104E0(int a1, int a2, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_43CE00(0, *(_DWORD *)(a1 + 200), a2, (int)va);
}
