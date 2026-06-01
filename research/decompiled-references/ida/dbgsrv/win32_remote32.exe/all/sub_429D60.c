/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429D60
// Address: 0x00429D60

//----- (00429D60) --------------------------------------------------------
int __stdcall sub_429D60(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -85;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -85;
  ++*(_DWORD *)(a1 + 108);
  sub_42E320((int *)a1, 0);
  sub_42E320((int *)a1, 0);
  return 0;
}
