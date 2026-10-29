/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A504
// Address: 0x0003A504

//----- (0003A504) --------------------------------------------------------
int __fastcall sub_3A504(int a1)
{
  int v1; // r5
  int v3; // r3
  _BYTE *v4; // r0
  size_t v5; // r2
  char *v6; // r1
  int v7; // r5
  int v8; // r1
  _BYTE *v9; // r3
  _BYTE *v11; // r0

  v1 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -86;
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
  v4[v3] = -86;
  ++*(_DWORD *)(v1 + 4);
  v5 = *(_DWORD *)(a1 + 28);
  ++*(_DWORD *)(a1 + 116);
  if ( v5 )
  {
    v6 = *(char **)(a1 + 24);
    --v5;
  }
  else
  {
    v6 = (char *)&dword_8DB98;
  }
  sub_3A43C(a1, v6, v5);
  v7 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = 1;
  v8 = *(_DWORD *)(v7 + 4);
  if ( (unsigned int)(v8 + 1) > *(_DWORD *)(v7 + 8) )
  {
    v11 = sub_78018(v7, *(void **)v7, v8 + 1, 1u);
    v8 = *(_DWORD *)(v7 + 4);
    v9 = v11;
    *(_DWORD *)v7 = v11;
  }
  else
  {
    v9 = *(_BYTE **)v7;
  }
  v9[v8] = 1;
  ++*(_DWORD *)(v7 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
