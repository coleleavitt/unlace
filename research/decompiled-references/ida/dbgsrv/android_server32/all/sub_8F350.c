/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F350
// Address: 0x0008F350

//----- (0008F350) --------------------------------------------------------
int __fastcall sub_8F350(int a1, FILE *stream, int off, int a4, unsigned int whence)
{
  int result; // r0
  int v6; // r1

  result = -1;
  if ( whence <= 2 )
  {
    v6 = fseek(stream, off, whence);
    result = -1;
    if ( !v6 )
      return 0;
  }
  return result;
}
