/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlfile
// Address: 0x000AB920

//----- (000AB920) --------------------------------------------------------
int __cdecl qlfile(int *a1)
{
  int result; // eax

  result = 0;
  if ( a1 )
  {
    if ( *a1 <= 1 )
      return a1[1];
  }
  return result;
}
