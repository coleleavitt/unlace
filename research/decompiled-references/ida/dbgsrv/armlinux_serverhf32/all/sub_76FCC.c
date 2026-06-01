/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76FCC
// Address: 0x00076FCC

//----- (00076FCC) --------------------------------------------------------
int __fastcall sub_76FCC(_BYTE *a1, _BYTE *a2)
{
  if ( *a2 == 42 && !a2[1] )
    return 1;
  else
    return sub_766A8(a1, a2);
}
