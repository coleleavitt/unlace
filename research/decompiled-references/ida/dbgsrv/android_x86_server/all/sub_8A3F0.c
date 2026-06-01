/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A3F0
// Address: 0x0008A3F0

//----- (0008A3F0) --------------------------------------------------------
unsigned int sub_8A3F0(int a1, char *a2, ...)
{
  int v2; // edx
  va_list va; // [esp+34h] [ebp+10h] BYREF

  va_start(va, a2);
  if ( *(_BYTE *)(a1 + 348) )
  {
    v2 = *(_DWORD *)(a1 + 208);
    if ( v2 && !*(_BYTE *)(v2 + 36) )
      sub_95A70(0, v2, (int)a2, (int)va);
    else
      sub_99010(0, a2, va);
  }
  return __readgsdword(0x14u);
}
