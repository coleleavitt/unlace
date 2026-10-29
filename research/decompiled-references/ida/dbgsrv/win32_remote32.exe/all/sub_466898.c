/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466898
// Address: 0x00466898

//----- (00466898) --------------------------------------------------------
char sub_466898()
{
  if ( dwTlsIndex != -1 )
  {
    sub_467BB4(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return 1;
}
