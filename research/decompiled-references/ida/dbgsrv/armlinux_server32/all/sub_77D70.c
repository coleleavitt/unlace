/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77D70
// Address: 0x00077D70

//----- (00077D70) --------------------------------------------------------
int __fastcall sub_77D70(const char *a1, FILE *a2)
{
  if ( a2 )
    return sub_1494C(a1, a2);
  sub_70B98(1);
  *_errno_location() = 9;
  sub_70B98(1);
  return -1;
}
