/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D292
// Address: 0x0008D292

//----- (0008D292) --------------------------------------------------------
int __fastcall sub_8D292(int a1, _DWORD *a2)
{
  int v2; // r2

  v2 = -102;
  if ( a1 )
  {
    *a2 = *(_DWORD *)(a1 + 56);
    a2[1] = *(_DWORD *)(a1 + 64);
    return 0;
  }
  return v2;
}
