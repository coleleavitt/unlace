/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B69C0
// Address: 0x000B69C0

//----- (000B69C0) --------------------------------------------------------
unsigned int sub_B69C0(char **a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_BB110(a1, a2, (int)va);
  return __readgsdword(0x14u);
}
