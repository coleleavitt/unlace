/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B1DA
// Address: 0x0001B1DA

//----- (0001B1DA) --------------------------------------------------------
int __fastcall sub_1B1DA(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
