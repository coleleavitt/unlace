/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38CD8
// Address: 0x00038CD8

//----- (00038CD8) --------------------------------------------------------
int __fastcall sub_38CD8(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0

  if ( *(unsigned __int8 *)(a1 + 120) != 211 )
  {
    v1 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -47;
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
    v4[v3] = -47;
    ++*(_DWORD *)(v1 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  return 0;
}
