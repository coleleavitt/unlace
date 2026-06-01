/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A680
// Address: 0x0003A680

//----- (0003A680) --------------------------------------------------------
int __fastcall sub_3A680(int a1)
{
  int v2; // r5
  int v4; // r3
  _BYTE *v5; // r2
  unsigned int v6; // r2
  _BYTE *v7; // r0

  if ( dword_D2CF8 <= 0 )
    return 1612;
  v2 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -44;
  v4 = *(_DWORD *)(v2 + 4);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(v2 + 8) )
  {
    v7 = sub_77EB0(v2, *(void **)v2, v4 + 1, 1u);
    v4 = *(_DWORD *)(v2 + 4);
    v5 = v7;
    *(_DWORD *)v2 = v7;
  }
  else
  {
    v5 = *(_BYTE **)v2;
  }
  v5[v4] = -44;
  ++*(_DWORD *)(v2 + 4);
  v6 = (unsigned __int16)dword_D2CF8;
  ++*(_DWORD *)(a1 + 116);
  sub_3A4B0(a1, 0, v6);
  return 0;
}
// D2CF8: using guessed type int dword_D2CF8;
