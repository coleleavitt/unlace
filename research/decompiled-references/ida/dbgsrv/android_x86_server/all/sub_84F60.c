/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84F60
// Address: 0x00084F60

//----- (00084F60) --------------------------------------------------------
unsigned int sub_84F60(_BYTE *a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_96A90(1, a1, a2, va);
  return __readgsdword(0x14u);
}
