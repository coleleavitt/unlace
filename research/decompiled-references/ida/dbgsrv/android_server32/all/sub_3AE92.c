/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AE92
// Address: 0x0003AE92

//----- (0003AE92) --------------------------------------------------------
int __fastcall sub_3AE92(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0

  *(_BYTE *)(a1 + 120) = -54;
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(v2, *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -54;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
