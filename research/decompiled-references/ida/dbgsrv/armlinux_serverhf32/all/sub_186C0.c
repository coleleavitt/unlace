/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_186C0
// Address: 0x000186C0

//----- (000186C0) --------------------------------------------------------
int __fastcall sub_186C0(int a1, char *a2, int a3)
{
  _BYTE *v6; // r0
  int v7; // r0
  unsigned int v8; // r5
  _BYTE *v9; // r0

  v6 = *(_BYTE **)a1;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v6);
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  v7 = sub_7E7C4(nullptr, 0, a2, a3);
  if ( v7 )
  {
    v8 = v7 + 1;
    v9 = *(_BYTE **)a1;
    if ( v8 > *(_DWORD *)(a1 + 8) )
    {
      v9 = sub_77EB0(a1, *(void **)a1, v8, 1u);
      *(_DWORD *)a1 = v9;
    }
    *(_DWORD *)(a1 + 4) = v8;
    sub_7E7C4(v9, v8, a2, a3);
  }
  return a1;
}
