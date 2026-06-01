/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B90B
// Address: 0x0046B90B

//----- (0046B90B) --------------------------------------------------------
int __cdecl sub_46B90B(int a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x2D; ++i )
  {
    if ( a1 == dword_4A57C8[2 * i] )
      return dword_4A57CC[2 * i];
  }
  if ( (unsigned int)(a1 - 19) > 0x11 )
    return (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    return 13;
}
// 4A57C8: using guessed type int dword_4A57C8[];
// 4A57CC: using guessed type int dword_4A57CC[];
