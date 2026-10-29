/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45880
// Address: 0x00045880

//----- (00045880) --------------------------------------------------------
int __fastcall sub_45880(int a1)
{
  unsigned __int8 *v2; // r0
  int v3; // r6
  int i; // r4
  int v5; // r3

  v2 = *(unsigned __int8 **)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 3 * i;
        sub_455C8(&v2[8 * v5]);
        v2 = *(unsigned __int8 **)a1;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v2);
  }
  return a1;
}
