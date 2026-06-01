/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99F60
// Address: 0x00099F60

//----- (00099F60) --------------------------------------------------------
FILE *__cdecl sub_99F60(int a1)
{
  FILE *result; // eax

  result = *(FILE **)(a1 + 4);
  if ( result )
  {
    result = (FILE *)result->__pad1;
    if ( result )
    {
      qfclose(result);
      result = *(FILE **)(a1 + 4);
      result->__pad1 = nullptr;
    }
  }
  return result;
}
