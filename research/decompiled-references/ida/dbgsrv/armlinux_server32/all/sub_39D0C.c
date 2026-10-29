/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39D0C
// Address: 0x00039D0C

//----- (00039D0C) --------------------------------------------------------
int __fastcall sub_39D0C(int a1)
{
  int v1; // r4
  int v3; // r3
  _BYTE *v4; // r0

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
  ++*(_DWORD *)(a1 + 116);
  sub_39CA8(a1, 0);
  sub_39CA8(a1, 0);
  return 0;
}
