/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDB50
// Address: 0x080CDB50

//----- (080CDB50) --------------------------------------------------------
FILE *__cdecl sub_80CDB50(int a1)
{
  FILE *result; // eax

  result = sub_80CD940(a1, "wbe", 2);
  if ( !result )
  {
    sub_80C7880(1);
    return nullptr;
  }
  return result;
}
