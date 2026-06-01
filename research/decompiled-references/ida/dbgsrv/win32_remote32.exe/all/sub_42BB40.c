/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BB40
// Address: 0x0042BB40

//----- (0042BB40) --------------------------------------------------------
int __stdcall sub_42BB40(int a1)
{
  int v1; // edi
  unsigned int v2; // eax

  v1 = *(_DWORD *)(a1 + 108);
  v2 = *(_DWORD *)(a1 + 140) + 1;
  if ( v2 > *(_DWORD *)(a1 + 144) )
    *(_DWORD *)(a1 + 136) = sub_453B00(a1 + 136, *(void **)(a1 + 136), v2, 4u);
  *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4 * (*(_DWORD *)(a1 + 140))++) = v1;
  return 0;
}
