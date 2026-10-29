/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4627C2
// Address: 0x004627C2

//----- (004627C2) --------------------------------------------------------
LPVOID __cdecl sub_4627C2(SIZE_T a1)
{
  LPVOID result; // eax

  while ( 1 )
  {
    result = sub_46D25F(a1);
    if ( result )
      break;
    if ( !sub_476614(a1) )
    {
      if ( a1 != -1 )
        sub_46365C();
      sub_463679();
    }
  }
  return result;
}
