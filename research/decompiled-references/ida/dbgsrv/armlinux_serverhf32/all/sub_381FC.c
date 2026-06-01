/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_381FC
// Address: 0x000381FC

//----- (000381FC) --------------------------------------------------------
int __fastcall sub_381FC(int a1)
{
  int v2; // r3
  void *v3; // r1
  void *v4; // r0
  unsigned int v5; // r0
  int v6; // r1
  _DWORD *v7; // r0
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r5
  _DWORD *v11; // r0

  v2 = *(_DWORD *)(a1 + 148);
  v3 = *(void **)(a1 + 144);
  if ( (unsigned int)(v2 + 1) > *(_DWORD *)(a1 + 152) )
  {
    v4 = sub_77EB0(a1 + 144, v3, v2 + 1, 4u);
    v2 = *(_DWORD *)(a1 + 148);
    v3 = v4;
    *(_DWORD *)(a1 + 144) = v4;
  }
  *((_DWORD *)v3 + v2) = -1;
  v5 = *(_DWORD *)(a1 + 164);
  v6 = *(_DWORD *)(a1 + 160);
  ++*(_DWORD *)(a1 + 148);
  if ( v6 + 1 > v5 )
  {
    v7 = sub_77EB0(a1 + 156, *(void **)(a1 + 156), v6 + 1, 4u);
    v6 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 156) = v7;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 156);
  }
  v7[v6] = -1;
  v8 = *(_DWORD *)(a1 + 176);
  v9 = *(_DWORD *)(a1 + 172);
  v10 = *(_DWORD *)(a1 + 116);
  ++*(_DWORD *)(a1 + 160);
  if ( v9 + 1 > v8 )
  {
    v11 = sub_77EB0(a1 + 168, *(void **)(a1 + 168), v9 + 1, 4u);
    v9 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = v11;
  }
  else
  {
    v11 = *(_DWORD **)(a1 + 168);
  }
  v11[v9] = v10;
  ++*(_DWORD *)(a1 + 172);
  return 0;
}
