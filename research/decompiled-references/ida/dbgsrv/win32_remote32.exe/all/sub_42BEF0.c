/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BEF0
// Address: 0x0042BEF0

//----- (0042BEF0) --------------------------------------------------------
int __stdcall sub_42BEF0(unsigned int *a1)
{
  int v2; // esi
  int v3; // edi
  int v5; // [esp+14h] [ebp+4h]

  v5 = *(_DWORD *)(a1[46] + 4 * a1[47] - 4);
  v2 = *(_DWORD *)(v5 + 8);
  v3 = *(_DWORD *)(v2 + 4) != 0 ? *(_DWORD *)(v2 + 4) - 1 : 0;
  if ( (unsigned int)(v3 + 2) > *(_DWORD *)(v2 + 8) )
    *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3 + 2, 1u);
  *(_DWORD *)(v2 + 4) = v3 + 2;
  *(_BYTE *)(v3 + *(_DWORD *)v2) = 46;
  *(_BYTE *)(v3 + *(_DWORD *)v2 + 1) = 0;
  sub_40CC20(*(_DWORD *)(v5 + 8), a1 + 4);
  return 0;
}
