/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A5B8
// Address: 0x0003A5B8

//----- (0003A5B8) --------------------------------------------------------
int __fastcall sub_3A5B8(int a1, char *s)
{
  int v2; // r4
  int v5; // r3
  _BYTE *v6; // r0

  v2 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -86;
  v5 = *(_DWORD *)(v2 + 4);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v2 + 8) )
  {
    v6 = sub_77EB0(v2, *(void **)v2, v5 + 1, 1u);
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
  sub_3A2A4(a1, s, 0);
  sub_3A4B0(a1, 0, (unsigned __int16)dword_D2CEC);
  return 0;
}
// D2CEC: using guessed type int dword_D2CEC;
