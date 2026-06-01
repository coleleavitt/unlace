/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38AE0
// Address: 0x00038AE0

//----- (00038AE0) --------------------------------------------------------
int __fastcall sub_38AE0(int a1)
{
  int v1; // r4
  int v3; // r3
  _BYTE *v4; // r2
  _BYTE *v6; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -67;
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
  v4[v3] = -67;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
