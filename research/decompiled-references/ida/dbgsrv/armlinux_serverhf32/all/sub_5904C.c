/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5904C
// Address: 0x0005904C

//----- (0005904C) --------------------------------------------------------
void *__fastcall sub_5904C(int a1, int a2, char a3, char a4, int a5, int a6)
{
  size_t v10; // r2
  void *result; // r0

  if ( *(_DWORD *)(a6 + 4) > 1u )
    sub_79524((_BYTE *)(a1 + 1034), *(unsigned __int8 **)a6, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v10 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 4) = a2;
  if ( v10 >= 0x400 )
    v10 = 1024;
  *(_WORD *)(a1 + 8) = v10;
  result = memmove((void *)(a1 + 10), *(const void **)a5, v10);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return result;
}
