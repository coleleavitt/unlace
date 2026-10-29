/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24410
// Address: 0x00024410

//----- (00024410) --------------------------------------------------------
unsigned int sub_24410(int a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_8A2F0(1, *(_DWORD *)(a1 + 208), a2, va);
  return __readgsdword(0x14u);
}
