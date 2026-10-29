/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FA34
// Address: 0x0005FA34

//----- (0005FA34) --------------------------------------------------------
int sub_5FA34(_BYTE *a1, char *a2, ...)
{
  int v3; // [sp+18h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_6DA0C(1, a1, a2, va);
  return v3;
}
// 5FA68: variable 'v3' is possibly undefined
