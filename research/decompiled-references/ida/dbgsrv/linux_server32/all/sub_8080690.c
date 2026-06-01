/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8080690
// Address: 0x08080690

//----- (08080690) --------------------------------------------------------
int __cdecl sub_8080690(_DWORD *a1, int a2)
{
  int v2; // ecx
  int result; // eax

  if ( !a2 )
    return -1;
  v2 = a1[1];
  if ( !v2 )
    return -1;
  result = 0;
  while ( *(_DWORD *)(*a1 + 4 * result) != a2 )
  {
    if ( ++result == v2 )
      return -1;
  }
  return result;
}
