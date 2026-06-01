/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36514
// Address: 0x00036514

//----- (00036514) --------------------------------------------------------
int __fastcall sub_36514(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
    v2 = **(unsigned __int8 **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = v2;
  return 0;
}
