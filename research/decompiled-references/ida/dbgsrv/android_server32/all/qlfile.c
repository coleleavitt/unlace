/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlfile
// Address: 0x0007B83A

//----- (0007B83A) --------------------------------------------------------
int __fastcall qlfile(int *a1)
{
  int result; // r0

  result = 0;
  if ( a1 )
  {
    if ( *a1 <= 1 )
      return a1[2];
  }
  return result;
}
