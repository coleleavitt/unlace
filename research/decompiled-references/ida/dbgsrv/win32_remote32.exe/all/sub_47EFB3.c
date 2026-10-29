/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EFB3
// Address: 0x0047EFB3

//----- (0047EFB3) --------------------------------------------------------
int __cdecl sub_47EFB3(_BYTE *a1, int a2)
{
  int result; // eax

  result = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == a2 )
        break;
      ++result;
    }
    while ( a1[result] );
  }
  return result;
}
