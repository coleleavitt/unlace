/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BC48
// Address: 0x0001BC48

//----- (0001BC48) --------------------------------------------------------
int sub_1BC48(int a1, char *a2, ...)
{
  int v3; // [sp+18h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp-8h] BYREF

  va_start(va, a2);
  sub_64A8A(0, *(_DWORD *)(a1 + 208), a2, va);
  return v3;
}
// 1BC7C: variable 'v3' is possibly undefined
