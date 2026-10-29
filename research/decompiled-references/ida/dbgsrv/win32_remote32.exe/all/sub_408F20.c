/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408F20
// Address: 0x00408F20

//----- (00408F20) --------------------------------------------------------
int __cdecl sub_408F20(int *a1, int *a2, int *a3)
{
  int *v3; // edx
  int result; // eax
  unsigned int v5; // esi
  unsigned int v6; // esi

  v3 = a1;
  result = 0;
  v5 = (unsigned int)((char *)a2 - (char *)a1 + 3) >> 2;
  if ( a1 > a2 )
    v5 = 0;
  if ( v5 >= 4 )
  {
    result = *a3;
    if ( a1 > a3 || &a1[v5 - 1] < a3 )
    {
      v6 = v5 & 0xFFFFFFFC;
      v3 = &a1[v6];
      memset32(a1, result, (v6 * 4) >> 2);
    }
  }
  for ( ; v3 != a2; ++v3 )
  {
    result = *a3;
    *v3 = *a3;
  }
  return result;
}
