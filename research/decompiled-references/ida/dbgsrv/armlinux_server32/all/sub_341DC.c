/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_341DC
// Address: 0x000341DC

//----- (000341DC) --------------------------------------------------------
int __fastcall sub_341DC(int a1, char *a2, int a3)
{
  int v5; // r0
  int v6; // r6
  int v7; // r4
  unsigned int v8; // r9
  _BYTE *v9; // r0

  v5 = sub_7E92C(nullptr, 0, a2, a3);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( v6 )
      --v6;
    v7 = v5 + 1;
    v8 = v6 + v5 + 1;
    v9 = *(_BYTE **)a1;
    if ( v8 > *(_DWORD *)(a1 + 8) )
    {
      v9 = sub_78018(a1, *(void **)a1, v8, 1u);
      *(_DWORD *)a1 = v9;
    }
    *(_DWORD *)(a1 + 4) = v8;
    sub_7E92C(&v9[v6], v7, a2, a3);
  }
  return a1;
}
