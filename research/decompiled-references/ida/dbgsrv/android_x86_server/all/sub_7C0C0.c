/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C0C0
// Address: 0x0007C0C0

//----- (0007C0C0) --------------------------------------------------------
unsigned int sub_7C0C0(_BYTE *a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_96A90(0, a1, a2, va);
  return __readgsdword(0x14u);
}
