/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477A52
// Address: 0x00477A52

//----- (00477A52) --------------------------------------------------------
int *__cdecl sub_477A52(int a1)
{
  int *result; // eax

  if ( a1 == 1 )
  {
    result = sub_46B984();
    *result = 33;
  }
  else
  {
    result = (int *)(a1 - 2);
    if ( (unsigned int)(a1 - 2) <= 1 )
    {
      result = sub_46B984();
      *result = 34;
    }
  }
  return result;
}
