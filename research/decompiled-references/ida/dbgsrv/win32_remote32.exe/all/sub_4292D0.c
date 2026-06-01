/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4292D0
// Address: 0x004292D0

//----- (004292D0) --------------------------------------------------------
int __stdcall sub_4292D0(int a1)
{
  int v1; // esi
  unsigned int v2; // eax
  void **v3; // esi
  int v4; // ebx
  unsigned int v5; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -83;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -83;
  v3 = (void **)(a1 + 124);
  v4 = ++*(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(a1 + 128) + 1;
  if ( v5 > *(_DWORD *)(a1 + 132) )
    *v3 = sub_453B00(a1 + 124, *v3, v5, 4u);
  *((_DWORD *)*v3 + (*(_DWORD *)(a1 + 128))++) = v4;
  sub_42E320((int *)a1, 0);
  sub_42E320((int *)a1, 0);
  return 0;
}
