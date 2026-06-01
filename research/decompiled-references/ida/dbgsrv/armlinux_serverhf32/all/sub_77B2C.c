/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77B2C
// Address: 0x00077B2C

//----- (00077B2C) --------------------------------------------------------
int __fastcall sub_77B2C(int a1, FILE *a2)
{
  if ( a2 )
    return j_fputc(a1, a2);
  sub_70A2C(1);
  *_errno_location() = 9;
  sub_70A2C(1);
  return -1;
}
