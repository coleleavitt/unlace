/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4569C0
// Address: 0x004569C0

//----- (004569C0) --------------------------------------------------------
__int8 *sub_4569C0(__int8 *a1, int a2, char *a3, ...)
{
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_4569E0(a1, a2, a3, (int)va);
}
