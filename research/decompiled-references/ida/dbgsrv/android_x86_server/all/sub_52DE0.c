/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52DE0
// Address: 0x00052DE0

//----- (00052DE0) --------------------------------------------------------
int __cdecl sub_52DE0(_DWORD *a1, int a2)
{
  int result; // eax
  unsigned int v3; // edx
  int v4; // esi

  result = -1;
  if ( a2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      while ( *(_DWORD *)(*a1 + 4 * v4) != a2 )
      {
        if ( ++v4 >= v3 )
          return result;
      }
      return v4;
    }
  }
  return result;
}
