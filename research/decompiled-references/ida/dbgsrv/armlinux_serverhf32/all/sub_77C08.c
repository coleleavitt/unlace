/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C08
// Address: 0x00077C08

//----- (00077C08) --------------------------------------------------------
int __fastcall sub_77C08(const char *a1, FILE *a2)
{
  if ( a2 )
    return sub_147A4(a1, a2);
  sub_70A2C(1);
  *_errno_location() = 9;
  sub_70A2C(1);
  return -1;
}
