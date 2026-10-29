/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDAB0
// Address: 0x080CDAB0

//----- (080CDAB0) --------------------------------------------------------
FILE *__cdecl sub_80CDAB0(int a1)
{
  FILE *result; // eax

  result = sub_80CD940(a1, "rbe", 8);
  if ( !result )
  {
    sub_80C7880(1);
    return nullptr;
  }
  return result;
}
