/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477F4E
// Address: 0x00477F4E

//----- (00477F4E) --------------------------------------------------------
int __cdecl sub_477F4E(_WORD *a1, _WORD *a2, int a3)
{
  int result; // eax

  result = a3;
  if ( a3 )
  {
    while ( --result && *a1 && *a1 == *a2 )
    {
      ++a1;
      ++a2;
    }
    return (unsigned __int16)*a1 - (unsigned __int16)*a2;
  }
  return result;
}
