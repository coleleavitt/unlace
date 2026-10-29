/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31370
// Address: 0x00031370

//----- (00031370) --------------------------------------------------------
int sub_31370(int a1, char *a2, ...)
{
  va_list va; // [esp+28h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_43950(a1, a2, (int)va);
  return a1;
}
