/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AD98
// Address: 0x0003AD98

//----- (0003AD98) --------------------------------------------------------
int __fastcall sub_3AD98(int a1)
{
  int v3; // r5
  int v4; // r1
  _BYTE *v5; // r0

  if ( *(_DWORD *)(a1 + 124) )
    return set_qerrno(1540);
  *(_BYTE *)(a1 + 120) = -81;
  v3 = *(_DWORD *)(a1 + 112);
  v4 = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
  {
    v5 = *(_BYTE **)v3;
  }
  else
  {
    v5 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v3, v4 + 1, 1u);
    *(_DWORD *)v3 = v5;
    v4 = *(_DWORD *)(v3 + 4);
  }
  v5[v4] = -81;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
