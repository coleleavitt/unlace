/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429540
// Address: 0x00429540

//----- (00429540) --------------------------------------------------------
int __stdcall sub_429540(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -33;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -33;
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
