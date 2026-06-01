/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402820
// Address: 0x00402820

//----- (00402820) --------------------------------------------------------
int __usercall sub_402820@<eax>(__m128i a1@<xmm0>, LPVOID *a2, _DWORD *a3, char *a4, ...)
{
  int v4; // esi
  _DWORD v6[256]; // [esp+Ch] [ebp-404h] BYREF
  va_list va; // [esp+420h] [ebp+10h] BYREF

  va_start(va, a4);
  v4 = sub_453E80(a1, v6, 1024, a4, (int)va);
  sub_402760(&dword_489384);
  *a3 = v4 + 1;
  *a2 = sub_453A90((char *)v6);
  return -2;
}
// 489384: using guessed type int dword_489384;
