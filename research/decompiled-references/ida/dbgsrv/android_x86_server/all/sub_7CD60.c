/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CD60
// Address: 0x0007CD60

//----- (0007CD60) --------------------------------------------------------
int sub_7CD60(int a1, char *a2, ...)
{
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  return sub_92EE0(a1, a2, (int)va);
}
