/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63B40
// Address: 0x00063B40

//----- (00063B40) --------------------------------------------------------
int __fastcall sub_63B40(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r2
  int v7; // r3

  v5 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 244))(*(_DWORD *)(a1 + 4), a2, 0);
  if ( v5 < 0 )
    goto LABEL_5;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v6 + 348);
  if ( !v7 )
    v7 = *(_DWORD *)(v6 + 396);
  if ( v5 >= v7 )
  {
LABEL_5:
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(30182);
  }
  return a3 + 24 * v5;
}
// D5C00: using guessed type char under_debugger;
