/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A360
// Address: 0x0045A360

//----- (0045A360) --------------------------------------------------------
int __stdcall sub_45A360(_WORD *a1)
{
  _WORD *i; // eax

  for ( i = a1; *i; ++i )
    ;
  return i - a1;
}
