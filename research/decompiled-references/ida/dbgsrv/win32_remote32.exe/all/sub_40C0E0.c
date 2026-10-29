/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C0E0
// Address: 0x0040C0E0

//----- (0040C0E0) --------------------------------------------------------
int *__cdecl sub_40C0E0(int *a1)
{
  int *result; // eax
  int *v2; // ecx
  int *v3; // edx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 13) )
  {
    do
    {
      v3 = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 13) );
    return v3;
  }
  return result;
}
