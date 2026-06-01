/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14740
// Address: 0x00014740

//----- (00014740) --------------------------------------------------------
// attributes: thunk
time_t __fastcall sub_14740(struct tm *tp)
{
  return timegm(tp);
}
