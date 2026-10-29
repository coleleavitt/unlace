/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38860
// Address: 0x00038860

//----- (00038860) --------------------------------------------------------
int __fastcall sub_38860(int a1)
{
  int v1; // r4
  int v3; // r3
  _BYTE *v4; // r2
  _BYTE *v6; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -75;
  v3 = *(_DWORD *)(v1 + 4);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v1 + 8) )
  {
    v6 = sub_78018(v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_DWORD *)(v1 + 4);
    v4 = v6;
    *(_DWORD *)v1 = v6;
  }
  else
  {
    v4 = *(_BYTE **)v1;
  }
  v4[v3] = -75;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
