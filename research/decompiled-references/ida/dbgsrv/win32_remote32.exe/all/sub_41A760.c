/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A760
// Address: 0x0041A760

//----- (0041A760) --------------------------------------------------------
int __stdcall sub_41A760(_DWORD *a1, int a2)
{
  _BYTE *v2; // esi
  int i; // edi

  v2 = (_BYTE *)a1[2];
  for ( i = a1[3] != 0 ? a1[3] - 1 : 0; i; --i )
  {
    *v2 = sub_4692B4((unsigned __int8)*v2);
    ++v2;
  }
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  return 0;
}
