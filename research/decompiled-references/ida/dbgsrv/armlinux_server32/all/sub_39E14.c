/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39E14
// Address: 0x00039E14

//----- (00039E14) --------------------------------------------------------
int __fastcall sub_39E14(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0
  unsigned int v5; // r1
  int v6; // r3
  int v7; // r5
  _DWORD *v8; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -83;
  v3 = *(_DWORD *)(v1 + 4);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v1 + 8) )
  {
    v4 = sub_78018(v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)v1 = v4;
  }
  else
  {
    v4 = *(_BYTE **)v1;
  }
  v4[v3] = -83;
  ++*(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(a1 + 140);
  v6 = *(_DWORD *)(a1 + 136);
  v7 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v7;
  if ( v6 + 1 > v5 )
  {
    v8 = sub_78018(a1 + 132, *(void **)(a1 + 132), v6 + 1, 4u);
    v6 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 132) = v8;
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 132);
  }
  v8[v6] = v7;
  ++*(_DWORD *)(a1 + 136);
  sub_39CA8(a1, 0);
  sub_39CA8(a1, 0);
  return 0;
}
