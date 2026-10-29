/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C6F0
// Address: 0x0042C6F0

//----- (0042C6F0) --------------------------------------------------------
int __stdcall sub_42C6F0(int a1, char a2, int a3)
{
  int v3; // edi
  unsigned int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  v3 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = a2;
  v4 = *(_DWORD *)(v3 + 4) + 1;
  if ( v4 > *(_DWORD *)(v3 + 8) )
    *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4, 1u);
  *(_BYTE *)(*(_DWORD *)v3 + (*(_DWORD *)(v3 + 4))++) = a2;
  ++*(_DWORD *)(a1 + 108);
  v5 = a3 - *(_DWORD *)(a1 + 108) - 4;
  sub_42E320((int *)a1, a3 - *(_WORD *)(a1 + 108) - 4);
  sub_42E320((int *)a1, SHIWORD(v5));
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 152);
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 148) + 4 * v6 - 4);
    if ( v6 )
      *(_DWORD *)(a1 + 152) = v6 - 1;
    if ( v7 == -1 )
      break;
    sub_428740(*(_DWORD **)(a1 + 104), v7, a3 - v7 - 4);
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 140);
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4 * v8 - 4);
    if ( v8 )
      *(_DWORD *)(a1 + 140) = v8 - 1;
    if ( v9 == -1 )
      break;
    sub_428740(*(_DWORD **)(a1 + 104), v9, *(_DWORD *)(a1 + 108) - v9 - 4);
  }
  return 0;
}
