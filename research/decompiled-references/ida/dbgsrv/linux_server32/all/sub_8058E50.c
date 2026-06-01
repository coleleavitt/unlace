/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058E50
// Address: 0x08058E50

//----- (08058E50) --------------------------------------------------------
int sub_8058E50(int a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_80A0390(1, *(_DWORD *)(a1 + 248), a2, (int)va);
}
