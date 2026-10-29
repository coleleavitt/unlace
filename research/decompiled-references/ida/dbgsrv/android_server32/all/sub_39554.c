/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39554
// Address: 0x00039554

//----- (00039554) --------------------------------------------------------
int __fastcall sub_39554(int a1)
{
  int v2; // r1
  _BYTE *v3; // r0
  int v4; // r5
  int v5; // r1
  _BYTE *v6; // r0

  v2 = *(unsigned __int8 *)(a1 + 120);
  v3 = (_BYTE *)(a1 + 120);
  if ( v2 != 211 )
  {
    *v3 = -47;
    v4 = *(_DWORD *)(a1 + 112);
    v5 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
    {
      v6 = *(_BYTE **)v4;
    }
    else
    {
      v6 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)v4 = v6;
      v5 = *(_DWORD *)(v4 + 4);
    }
    v6[v5] = -47;
    ++*(_DWORD *)(v4 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  return 0;
}
