/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462882
// Address: 0x00462882

//----- (00462882) --------------------------------------------------------
char __cdecl sub_462882(int a1)
{
  if ( !a1 )
    byte_4B7504 = 1;
  sub_46369B();
  if ( !sub_466737() )
    return 0;
  if ( !sub_47740A() )
  {
    sub_466756(0);
    return 0;
  }
  return 1;
}
// 4B7504: using guessed type char byte_4B7504;
