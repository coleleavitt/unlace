/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469012
// Address: 0x00469012

//----- (00469012) --------------------------------------------------------
int __cdecl sub_469012(int a1, int a2, unsigned __int16 a3)
{
  if ( (unsigned int)(a2 + 1) > 0x100 )
    return 0;
  else
    return a3 & *(_WORD *)(a1 + 2 * a2);
}
