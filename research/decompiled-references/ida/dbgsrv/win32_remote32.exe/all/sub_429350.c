/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429350
// Address: 0x00429350

//----- (00429350) --------------------------------------------------------
int __stdcall sub_429350(int a1)
{
  unsigned int v1; // eax
  void **v2; // esi
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // eax

  v1 = *(_DWORD *)(a1 + 140) + 1;
  if ( v1 > *(_DWORD *)(a1 + 144) )
    *(_DWORD *)(a1 + 136) = sub_453B00(a1 + 136, *(void **)(a1 + 136), v1, 4u);
  *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4 * (*(_DWORD *)(a1 + 140))++) = -1;
  v2 = (void **)(a1 + 148);
  v3 = *(_DWORD *)(a1 + 152) + 1;
  if ( v3 > *(_DWORD *)(a1 + 156) )
    *v2 = sub_453B00(a1 + 148, *v2, v3, 4u);
  *((_DWORD *)*v2 + (*(_DWORD *)(a1 + 152))++) = -1;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(a1 + 164) + 1;
  if ( v5 > *(_DWORD *)(a1 + 168) )
    *(_DWORD *)(a1 + 160) = sub_453B00(a1 + 160, *(void **)(a1 + 160), v5, 4u);
  *(_DWORD *)(*(_DWORD *)(a1 + 160) + 4 * (*(_DWORD *)(a1 + 164))++) = v4;
  return 0;
}
