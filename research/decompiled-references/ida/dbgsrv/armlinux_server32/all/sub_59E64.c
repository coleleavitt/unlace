/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59E64
// Address: 0x00059E64

//----- (00059E64) --------------------------------------------------------
int __fastcall sub_59E64(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = *(unsigned __int8 *)(a4 + 153);
  if ( *(_BYTE *)(a4 + 153) )
  {
    if ( sub_59DC0(a4, 40) )
      return 2;
    else
      return 1;
  }
  return result;
}
