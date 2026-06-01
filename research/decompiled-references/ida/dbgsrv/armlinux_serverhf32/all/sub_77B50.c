/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77B50
// Address: 0x00077B50

//----- (00077B50) --------------------------------------------------------
int __fastcall sub_77B50(FILE *a1)
{
  if ( a1 )
    return sub_14208(a1);
  sub_70A2C(1);
  *_errno_location() = 9;
  sub_70A2C(1);
  return -1;
}
