/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058E20
// Address: 0x08058E20

//----- (08058E20) --------------------------------------------------------
int sub_8058E20(int a1, char *a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_80A0390(0, *(_DWORD *)(a1 + 248), a2, (int)va);
}
