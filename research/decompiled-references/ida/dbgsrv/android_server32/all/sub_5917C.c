/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5917C
// Address: 0x0005917C

//----- (0005917C) --------------------------------------------------------
int __fastcall sub_5917C(int a1, int a2, int a3, char a4, int a5, int a6)
{
  _BYTE *v9; // r0
  size_t v10; // r2

  v9 = (_BYTE *)(a1 + 1034);
  if ( *(_DWORD *)(a6 + 4) > 1u )
    qstrncpy((unsigned int)v9, *(unsigned __int8 **)a6, 4096);
  else
    *v9 = 0;
  v10 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 4) = a2;
  if ( v10 >> 10 )
    v10 = 1024;
  *(_WORD *)(a1 + 8) = v10;
  memmove((void *)(a1 + 10), *(const void **)a5, v10);
  *(_BYTE *)(a1 + 1) = a4;
  *(_BYTE *)a1 = a3;
  return a3;
}
