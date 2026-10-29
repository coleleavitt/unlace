/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B4B4
// Address: 0x0006B4B4

//----- (0006B4B4) --------------------------------------------------------
int __fastcall sub_6B4B4(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2

  v5 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 244))(*(_DWORD *)(a1 + 4), a2, 0);
  if ( v5 < 0 )
    goto LABEL_6;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v6 + 284);
  if ( !v7 )
    v7 = *(_DWORD *)(v6 + 332);
  if ( v5 >= v7 )
  {
LABEL_6:
    if ( !under_debugger )
      interr(30182);
    __debugbreak();
  }
  return a3 + 24 * v5;
}
// E0550: using guessed type char under_debugger;
