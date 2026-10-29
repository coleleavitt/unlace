/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D110
// Address: 0x0041D110

//----- (0041D110) --------------------------------------------------------
int __cdecl sub_41D110(int *a1, unsigned int a2)
{
  int result; // eax

  result = *a1;
  if ( *a1 < 0 )
  {
    result += a2;
    *a1 = result;
    if ( result < 0 )
    {
      *a1 = 0;
      result = 0;
    }
  }
  if ( result > a2 )
    *a1 = a2;
  return result;
}
