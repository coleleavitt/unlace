/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93370
// Address: 0x00093370

//----- (00093370) --------------------------------------------------------
int __fastcall sub_93370(unsigned __int8 **a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // lr

  v3 = *a1;
  if ( a3 - a2 > (unsigned int)(a1[1] - *a1) )
    return 0;
  while ( a3 != a2 )
  {
    if ( *a2 != *v3 )
      return 0;
    ++v3;
    ++a2;
  }
  return 1;
}
