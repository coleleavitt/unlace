/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C9D0
// Address: 0x0001C9D0

//----- (0001C9D0) --------------------------------------------------------
unsigned int sub_1C9D0(int a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_8A2F0(0, *(_DWORD *)(a1 + 208), a2, va);
  return __readgsdword(0x14u);
}
