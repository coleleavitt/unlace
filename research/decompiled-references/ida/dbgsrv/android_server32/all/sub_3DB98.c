/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DB98
// Address: 0x0003DB98

//----- (0003DB98) --------------------------------------------------------
int __fastcall sub_3DB98(int a1)
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
