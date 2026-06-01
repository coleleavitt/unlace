/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_395A2
// Address: 0x000395A2

//----- (000395A2) --------------------------------------------------------
int __fastcall sub_395A2(int a1)
{
  int v2; // r1
  _BYTE *v3; // r0
  int v5; // r5
  int v6; // r1
  _BYTE *v7; // r0

  v2 = *(unsigned __int8 *)(a1 + 120);
  v3 = (_BYTE *)(a1 + 120);
  if ( v2 == 168 || v2 == 191 )
    return 0;
  *v3 = -65;
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
  v7[v6] = -65;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
