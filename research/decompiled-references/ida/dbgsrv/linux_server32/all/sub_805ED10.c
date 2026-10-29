/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805ED10
// Address: 0x0805ED10

//----- (0805ED10) --------------------------------------------------------
_DWORD *sub_805ED10(_DWORD *a1, char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  sub_805EC70(a1, a2, (int)va);
  return a1;
}
