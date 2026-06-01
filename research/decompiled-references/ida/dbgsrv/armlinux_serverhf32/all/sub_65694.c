/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65694
// Address: 0x00065694

//----- (00065694) --------------------------------------------------------
FILE *__fastcall sub_65694(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  FILE *v3; // t1
  FILE *result; // r0

  v1 = a1;
  v2 = a1 + 16;
  do
  {
    v3 = (FILE *)v1[1];
    ++v1;
    result = v3;
    if ( v3 )
    {
      result = (FILE *)sub_77754(result);
      *v1 = 0;
    }
  }
  while ( v1 != v2 );
  return result;
}
