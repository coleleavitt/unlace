/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20D34
// Address: 0x00020D34

//----- (00020D34) --------------------------------------------------------
int sub_20D34(int a1, char *a2, ...)
{
  int v3; // [sp+18h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_64A8A(1, *(_DWORD *)(a1 + 208), a2, va);
  return v3;
}
// 20D68: variable 'v3' is possibly undefined
