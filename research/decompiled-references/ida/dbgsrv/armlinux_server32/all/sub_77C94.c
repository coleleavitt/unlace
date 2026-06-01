/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C94
// Address: 0x00077C94

//----- (00077C94) --------------------------------------------------------
int __fastcall sub_77C94(int a1, FILE *a2)
{
  if ( a2 )
    return j_fputc(a1, a2);
  sub_70B98(1);
  *_errno_location() = 9;
  sub_70B98(1);
  return -1;
}
