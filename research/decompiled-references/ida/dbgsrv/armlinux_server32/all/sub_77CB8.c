/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77CB8
// Address: 0x00077CB8

//----- (00077CB8) --------------------------------------------------------
int __fastcall sub_77CB8(FILE *a1)
{
  if ( a1 )
    return sub_14374(a1);
  sub_70B98(1);
  *_errno_location() = 9;
  sub_70B98(1);
  return -1;
}
