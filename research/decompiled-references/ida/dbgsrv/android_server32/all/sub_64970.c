/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64970
// Address: 0x00064970

//----- (00064970) --------------------------------------------------------
int __fastcall sub_64970(int a1, _DWORD *a2)
{
  int v3; // r2
  unsigned int *v4; // r7
  int result; // r0
  _DWORD *v6; // r6
  unsigned int v7; // r5
  int i; // r4

  v3 = *(_DWORD *)(a1 + 200);
  v4 = (unsigned int *)(a1 + 200);
  result = 0;
  if ( v3 == a2[1] )
  {
    result = 1;
    if ( v3 )
    {
      v6 = (_DWORD *)(a1 + 196);
      v7 = 0;
      for ( i = 0; ; i += 40 )
      {
        ++v7;
        if ( !sub_672F4(*v6 + i, *a2 + i) )
          break;
        if ( v7 >= *v4 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
