/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtimegm
// Address: 0x0007F3A0

//----- (0007F3A0) --------------------------------------------------------
time_t __fastcall qtimegm(struct tm *a1)
{
  return timegm(a1);
}
