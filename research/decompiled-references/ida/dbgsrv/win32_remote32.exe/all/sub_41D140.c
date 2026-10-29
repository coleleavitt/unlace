/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D140
// Address: 0x0041D140

//----- (0041D140) --------------------------------------------------------
int __cdecl sub_41D140(int *a1, int *a2, unsigned int a3)
{
  int v3; // ecx
  int result; // eax

  v3 = *a2;
  if ( *a2 < 0 )
  {
    v3 += a3;
    *a2 = v3;
    if ( v3 < 0 )
    {
      *a2 = 0;
      v3 = 0;
    }
  }
  if ( v3 > a3 )
  {
    *a2 = a3;
    v3 = a3;
  }
  result = *a1;
  if ( *a1 > (unsigned int)v3 )
    *a2 = result;
  return result;
}
