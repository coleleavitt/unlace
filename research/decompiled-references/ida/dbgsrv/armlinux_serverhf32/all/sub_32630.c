/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32630
// Address: 0x00032630

//----- (00032630) --------------------------------------------------------
unsigned int __fastcall sub_32630(unsigned int result, _DWORD *a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r3
  int v4; // r2

  v2 = result;
  if ( *(_DWORD *)(result + 4) <= 1u )
  {
    v3 = a2[54];
    v4 = result < v3;
    if ( !result )
      v4 = 1;
    if ( v4 )
    {
      v4 = 0;
    }
    else if ( result <= v3 + 68 * a2[55] )
    {
      if ( (unsigned int)(-252645135 * ((int)(result - v3) >> 2)) < a2[57] )
        v4 = 1;
      else
        v4 = 2;
    }
    sub_325F0((int)a2, result, v4, *(_DWORD *)(result + 24));
    return v2;
  }
  return result;
}
