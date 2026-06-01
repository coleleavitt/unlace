/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4759D8
// Address: 0x00000000004759D8

//----- (00000000004759D8) ----------------------------------------------------
FILE *__fastcall sub_4759D8(__int64 a1)
{
  FILE **v1; // x19
  FILE **v2; // x20
  FILE *result; // x0

  v1 = (FILE **)(a1 + 8);
  v2 = (FILE **)(a1 + 136);
  do
  {
    result = *v1;
    if ( *v1 )
    {
      result = (FILE *)sub_4906A0(result);
      *v1 = nullptr;
    }
    ++v1;
  }
  while ( v1 != v2 );
  return result;
}
