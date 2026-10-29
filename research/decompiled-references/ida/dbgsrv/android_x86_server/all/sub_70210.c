/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70210
// Address: 0x00070210

//----- (00070210) --------------------------------------------------------
char __cdecl sub_70210(int a1)
{
  int v1; // eax
  int v2; // edx
  char result; // al

  if ( !*(_DWORD *)(a1 + 132) )
    return 0;
  if ( *(_DWORD *)(a1 + 140) )
    qfclose(*(FILE **)(a1 + 140));
  qfree(*(void **)(a1 + 144));
  *(_DWORD *)(a1 + 144) = 0;
  v1 = *(_DWORD *)(a1 + 128);
  v2 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(v1 + 24 * (v2 - 1) + 4);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(v1 + 24 * (v2 - 1) + 16);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(v1 + 24 * (v2 - 1));
  *(_BYTE *)(a1 + 68) = *(_BYTE *)(v1 + 24 * (v2 - 1) + 20);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(v1 + 24 * (v2 - 1) + 8);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 24 * (v2 - 1) + 12);
  result = 1;
  if ( v2 )
    *(_DWORD *)(a1 + 132) = v2 - 1;
  return result;
}
