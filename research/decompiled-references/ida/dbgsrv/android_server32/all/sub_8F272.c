/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F272
// Address: 0x0008F272

//----- (0008F272) --------------------------------------------------------
int __fastcall sub_8F272(int a1, FILE *stream, int off, unsigned int whence)
{
  int result; // r0
  int v5; // r1

  result = -1;
  if ( whence <= 2 )
  {
    v5 = fseek(stream, off, whence);
    result = -1;
    if ( !v5 )
      return 0;
  }
  return result;
}
