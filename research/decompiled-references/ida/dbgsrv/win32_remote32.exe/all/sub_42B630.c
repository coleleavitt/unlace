/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B630
// Address: 0x0042B630

//----- (0042B630) --------------------------------------------------------
int __stdcall sub_42B630(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  if ( *(unsigned __int8 *)(a1 + 112) != 208 && *(unsigned __int8 *)(a1 + 112) != 210 )
  {
    v1 = *(_DWORD *)(a1 + 104);
    *(_BYTE *)(a1 + 112) = -48;
    v2 = *(_DWORD *)(v1 + 4) + 1;
    if ( v2 > *(_DWORD *)(v1 + 8) )
      *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
    *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -48;
    ++*(_DWORD *)(a1 + 108);
  }
  return 0;
}
