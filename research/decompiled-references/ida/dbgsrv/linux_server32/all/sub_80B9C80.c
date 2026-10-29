/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9C80
// Address: 0x080B9C80

//----- (080B9C80) --------------------------------------------------------
int __cdecl sub_80B9C80(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // edx

  result = 0;
  if ( a2 != 4 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 4 * result + 456);
      if ( a3 == v4 && a2 == *(_DWORD *)(a1 + 4 * result + 472) )
        return 6;
      if ( v4 == -1 )
        break;
      if ( ++result == 4 )
        return 6;
    }
    return 0;
  }
  return result;
}
