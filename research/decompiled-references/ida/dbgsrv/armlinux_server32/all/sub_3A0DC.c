/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A0DC
// Address: 0x0003A0DC

//----- (0003A0DC) --------------------------------------------------------
int __fastcall sub_3A0DC(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0
  unsigned int v5; // r1
  int v6; // r3
  int v7; // r5
  _DWORD *v8; // r0

  if ( !*(_DWORD *)(a1 + 172) )
    return sub_70B98(50);
  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -85;
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
  v4[v3] = -85;
  ++*(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(a1 + 152);
  v6 = *(_DWORD *)(a1 + 148);
  v7 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v7;
  if ( v6 + 1 > v5 )
  {
    v8 = sub_78018(a1 + 144, *(void **)(a1 + 144), v6 + 1, 4u);
    v6 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 144) = v8;
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 144);
  }
  v8[v6] = v7;
  ++*(_DWORD *)(a1 + 148);
  sub_39CA8(a1, 0);
  sub_39CA8(a1, 0);
  return 0;
}
