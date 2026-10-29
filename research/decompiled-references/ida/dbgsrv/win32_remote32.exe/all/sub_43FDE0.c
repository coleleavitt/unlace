/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FDE0
// Address: 0x0043FDE0

//----- (0043FDE0) --------------------------------------------------------
unsigned int __cdecl sub_43FDE0(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int result; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx

  if ( !a3 )
    return 0;
  v4 = *a1;
  v5 = *a1 + a3;
  if ( v5 < *a1 || v5 > a1[1] )
  {
    result = 0;
    if ( a3 == -1 )
      return a2;
  }
  else
  {
    *a1 = v5;
    v6 = sub_464310(a2, v4, a3);
    v7 = -1;
    if ( v6 )
      v7 = a3;
    result = 0;
    if ( v7 == a3 )
      return a2;
  }
  return result;
}
