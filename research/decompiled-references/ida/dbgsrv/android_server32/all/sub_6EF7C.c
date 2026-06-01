/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EF7C
// Address: 0x0006EF7C

//----- (0006EF7C) --------------------------------------------------------
_DWORD *__fastcall sub_6EF7C(_DWORD *result, int a2, int a3, int a4)
{
  result[1] = 0;
  result[2] = 0;
  result[3] = -1;
  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      result[1] = a3;
      result[2] = a4;
      result[3] = a2;
    }
  }
  return result;
}
