/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91BD0
// Address: 0x00091BD0

//----- (00091BD0) --------------------------------------------------------
void __cdecl sub_91BD0(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int i; // edx
  int v6; // eax
  unsigned int v7; // edi

  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      if ( !a4 || (v6 = *(unsigned __int8 *)(a4 + (i >> 3)), _bittest(&v6, i & 7)) )
      {
        v7 = i;
        sub_91C50(a1, a2);
        i = v7;
      }
      a2 += 16;
    }
  }
}
