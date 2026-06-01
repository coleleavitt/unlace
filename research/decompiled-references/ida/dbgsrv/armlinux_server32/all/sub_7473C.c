/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7473C
// Address: 0x0007473C

//----- (0007473C) --------------------------------------------------------
ssize_t __fastcall sub_7473C(int a1, int a2, int a3, int a4, void *a5, signed int a6)
{
  int v7; // r0
  int v8; // r1
  bool v9; // zf

  v7 = sub_772FC(*(_DWORD *)(a1 + 20));
  v9 = ++v8 == 0;
  if ( !v8 )
    v9 = v7 == -1;
  if ( v9 )
    return -1;
  else
    return sub_77268(*(_DWORD *)(a1 + 20), a5, a6);
}
// 74750: variable 'v8' is possibly undefined
