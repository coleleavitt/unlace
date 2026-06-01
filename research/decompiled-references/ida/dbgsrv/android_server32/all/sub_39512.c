/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39512
// Address: 0x00039512

//----- (00039512) --------------------------------------------------------
int __fastcall sub_39512(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0

  if ( !sub_3947C(a1) )
  {
    *(_BYTE *)(a1 + 120) = -50;
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
    v4[v3] = -50;
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  return 0;
}
