/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E0CF
// Address: 0x0047E0CF

//----- (0047E0CF) --------------------------------------------------------
unsigned int __cdecl sub_47E0CF(unsigned int a1)
{
  unsigned int result; // eax

  if ( dword_4B7844 >= 1 )
  {
    result = a1;
    if ( (a1 & 0x40) != 0 && dword_4B67F8 )
    {
      _mm_setcsr(a1);
    }
    else
    {
      _mm_setcsr(a1 & 0xFFFFFFBF);
      return a1 & 0xFFFFFFBF;
    }
  }
  return result;
}
// 4B67F8: using guessed type int dword_4B67F8;
// 4B7844: using guessed type int dword_4B7844;
