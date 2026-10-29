/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E071
// Address: 0x0047E071

//----- (0047E071) --------------------------------------------------------
int __cdecl sub_47E071(int a1, int a2)
{
  if ( a2 == 2146435072 )
  {
    if ( !a1 )
      return 1;
  }
  else if ( a2 == -1048576 && !a1 )
  {
    return 2;
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1) )
    return 4;
  return 0;
}
