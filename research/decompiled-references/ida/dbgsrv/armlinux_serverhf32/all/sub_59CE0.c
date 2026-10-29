/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59CE0
// Address: 0x00059CE0

//----- (00059CE0) --------------------------------------------------------
int __fastcall sub_59CE0(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = *(unsigned __int8 *)(a4 + 153);
  if ( *(_BYTE *)(a4 + 153) )
  {
    if ( sub_59C3C(a4, 40) )
      return 2;
    else
      return 1;
  }
  return result;
}
