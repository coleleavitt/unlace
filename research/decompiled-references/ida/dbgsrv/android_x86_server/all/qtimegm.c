/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtimegm
// Address: 0x000B1D50

//----- (000B1D50) --------------------------------------------------------
time_t __cdecl qtimegm(struct tm *tp)
{
  return timegm(tp);
}
