/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A30C
// Address: 0x0003A30C

//----- (0003A30C) --------------------------------------------------------
int __fastcall sub_3A30C(int a1)
{
  size_t v2; // r2
  char *v3; // r1
  int v4; // r5
  int v5; // r3
  _BYTE *v6; // r2
  _BYTE *v8; // r0

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
  {
    v3 = *(char **)(a1 + 24);
    --v2;
  }
  else
  {
    v3 = (char *)&dword_8DA5C;
  }
  sub_3A2A4(a1, v3, v2);
  v4 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -80;
  v5 = *(_DWORD *)(v4 + 4);
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v4 + 8) )
  {
    v8 = sub_77EB0(v4, *(void **)v4, v5 + 1, 1u);
    v5 = *(_DWORD *)(v4 + 4);
    v6 = v8;
    *(_DWORD *)v4 = v8;
  }
  else
  {
    v6 = *(_BYTE **)v4;
  }
  v6[v5] = -80;
  ++*(_DWORD *)(v4 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
