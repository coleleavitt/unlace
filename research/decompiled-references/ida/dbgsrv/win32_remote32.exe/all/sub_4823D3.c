/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4823D3
// Address: 0x004823D3

//----- (004823D3) --------------------------------------------------------
int __cdecl sub_4823D3(double a1)
{
  if ( (sub_482670(a1) & 0x90) != 0 || a1 != sub_47EF86(a1) )
    return 0;
  if ( a1 * 0.5 == sub_47EF86(a1 * 0.5) )
    return 2;
  return 1;
}
