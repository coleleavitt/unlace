/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1F400
// Address: 0x0001F400

//----- (0001F400) --------------------------------------------------------
int sub_1F400(int a1, char *a2, ...)
{
  va_list va; // [esp+28h] [ebp+10h] BYREF

  va_start(va, a2);
  sub_2EA00(a1, a2, (int)va);
  return a1;
}
