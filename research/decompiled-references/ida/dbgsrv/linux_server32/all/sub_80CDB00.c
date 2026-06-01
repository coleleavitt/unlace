/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDB00
// Address: 0x080CDB00

//----- (080CDB00) --------------------------------------------------------
FILE *__cdecl sub_80CDB00(int a1)
{
  FILE *result; // eax

  result = sub_80CD940(a1, "rte", 8);
  if ( !result )
  {
    sub_80C7880(1);
    return nullptr;
  }
  return result;
}
