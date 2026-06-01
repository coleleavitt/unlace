/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilelength
// Address: 0x00000000000BD5F0

//----- (00000000000BD5F0) ----------------------------------------------------
__off_t __fastcall qfilelength(int a1)
{
  __off_t result; // x0
  __off_t v3; // x20
  __off_t v4; // x21

  result = qtell(a1);
  if ( result != -1 )
  {
    v3 = result;
    v4 = qseek(a1, 0, 2);
    qseek(a1, v3, 0);
    return v4;
  }
  return result;
}
