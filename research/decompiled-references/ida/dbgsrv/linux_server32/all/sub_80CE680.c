/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE680
// Address: 0x080CE680

//----- (080CE680) --------------------------------------------------------
char *sub_80CE680(char *a1, int a2, char *a3, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_80CE4C0(a1, a2, a3, (int)va);
}
