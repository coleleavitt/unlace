/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA370
// Address: 0x080BA370

//----- (080BA370) --------------------------------------------------------
int __cdecl sub_80BA370(int a1)
{
  int result; // eax

  result = 0;
  while ( *(_DWORD *)(a1 + 4 * result + 4) )
  {
    if ( ++result == 16 )
    {
      *__errno_location() = 23;
      return -1;
    }
  }
  return result;
}
