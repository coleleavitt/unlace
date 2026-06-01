/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B0C0
// Address: 0x000000014005B0C0

//----- (000000014005B0C0) ----------------------------------------------------
int sub_14005B0C0(char *a1, char *a2, ...)
{
  va_list ArgList; // [rsp+40h] [rbp+18h] BYREF

  va_start(ArgList, a2);
  return sub_14005B3E0(a1, a2, ArgList);
}
