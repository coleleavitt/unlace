/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_395EE
// Address: 0x000395EE

//----- (000395EE) --------------------------------------------------------
int __fastcall sub_395EE(int a1)
{
  int v2; // r1
  _BYTE *v3; // r0
  int v5; // r5
  int v6; // r1
  _BYTE *v7; // r0

  v2 = *(unsigned __int8 *)(a1 + 120) | 2;
  v3 = (_BYTE *)(a1 + 120);
  if ( v2 == 210 )
    return 0;
  *v3 = -48;
  v5 = *(_DWORD *)(a1 + 112);
  v6 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_BYTE **)v5;
  }
  else
  {
    v7 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v5, v6 + 1, 1u);
    *(_DWORD *)v5 = v7;
    v6 = *(_DWORD *)(v5 + 4);
  }
  v7[v6] = -48;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
