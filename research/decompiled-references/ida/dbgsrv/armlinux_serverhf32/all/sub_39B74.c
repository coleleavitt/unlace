/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39B74
// Address: 0x00039B74

//----- (00039B74) --------------------------------------------------------
int __fastcall sub_39B74(int a1)
{
  int v1; // r4
  int v3; // r3
  _BYTE *v4; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -85;
  v3 = *(_DWORD *)(v1 + 4);
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(v1 + 8) )
  {
    v4 = sub_77EB0(v1, *(void **)v1, v3 + 1, 1u);
    v3 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)v1 = v4;
  }
  else
  {
    v4 = *(_BYTE **)v1;
  }
  v4[v3] = -85;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_39B10(a1, 0);
  sub_39B10(a1, 0);
  return 0;
}
