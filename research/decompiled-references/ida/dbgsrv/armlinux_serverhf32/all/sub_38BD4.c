/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38BD4
// Address: 0x00038BD4

//----- (00038BD4) --------------------------------------------------------
int __fastcall sub_38BD4(int a1)
{
  int v1; // r3
  int v2; // r4
  int v4; // r3
  _BYTE *v5; // r0

  v1 = *(unsigned __int8 *)(a1 + 120);
  if ( v1 != 168 && v1 != 191 )
  {
    v2 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -65;
    v4 = *(_DWORD *)(v2 + 4);
    if ( (unsigned int)(v4 + 1) > *(_DWORD *)(v2 + 8) )
    {
      v5 = sub_77EB0(v2, *(void **)v2, v4 + 1, 1u);
      v4 = *(_DWORD *)(v2 + 4);
      *(_DWORD *)v2 = v5;
    }
    else
    {
      v5 = *(_BYTE **)v2;
    }
    v5[v4] = -65;
    ++*(_DWORD *)(v2 + 4);
    ++*(_DWORD *)(a1 + 116);
  }
  return 0;
}
