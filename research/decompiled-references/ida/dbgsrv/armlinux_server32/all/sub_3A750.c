/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A750
// Address: 0x0003A750

//----- (0003A750) --------------------------------------------------------
int __fastcall sub_3A750(int a1, char *s)
{
  int v2; // r4
  int v5; // r3
  _BYTE *v6; // r0

  v2 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -86;
  v5 = *(_DWORD *)(v2 + 4);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v2 + 8) )
  {
    v6 = sub_78018(v2, *(void **)v2, v5 + 1, 1u);
    v5 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)v2 = v6;
  }
  else
  {
    v6 = *(_BYTE **)v2;
  }
  v6[v5] = -86;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_3A43C(a1, s, 0);
  sub_3A648(a1, 0, (unsigned __int16)dword_D3D0C);
  return 0;
}
// D3D0C: using guessed type int dword_D3D0C;
