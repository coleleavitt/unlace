/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B404
// Address: 0x0003B404

//----- (0003B404) --------------------------------------------------------
int __fastcall sub_3B404(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r5

  if ( dword_DD63C < 1 )
    return 1612;
  *(_BYTE *)(a1 + 120) = -44;
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -44;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 116);
  v5 = 0;
  sub_39282(a1, 0, (unsigned __int16)dword_DD63C);
  return v5;
}
// DD63C: using guessed type int dword_DD63C;
