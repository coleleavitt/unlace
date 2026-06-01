/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4297D0
// Address: 0x004297D0

//----- (004297D0) --------------------------------------------------------
int __stdcall sub_4297D0(int a1)
{
  int v1; // esi
  unsigned int v2; // eax
  int v3; // ebx
  int v4; // edx
  void **v5; // esi
  int v6; // ecx
  unsigned int v7; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -85;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -85;
  v3 = *(_DWORD *)(a1 + 108) + 1;
  *(_DWORD *)(a1 + 108) = v3;
  sub_42E320((int *)a1, 0);
  sub_42E320((int *)a1, 0);
  v4 = *(_DWORD *)(a1 + 128);
  v5 = (void **)(a1 + 124);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 4 * v4 - 4);
  if ( v4 )
    *(_DWORD *)(a1 + 128) = v4 - 1;
  sub_428740(*(_DWORD **)(a1 + 104), v6, *(_DWORD *)(a1 + 108) - v6 - 4);
  v7 = *(_DWORD *)(a1 + 128) + 1;
  if ( v7 > *(_DWORD *)(a1 + 132) )
    *v5 = sub_453B00(a1 + 124, *v5, v7, 4u);
  *((_DWORD *)*v5 + (*(_DWORD *)(a1 + 128))++) = v3;
  return 0;
}
