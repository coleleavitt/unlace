/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C2FA
// Address: 0x0046C2FA

//----- (0046C2FA) --------------------------------------------------------
int *__cdecl sub_46C2FA(int a1)
{
  if ( a1 == 2 )
    return &dword_4B78E0;
  if ( a1 != 6 )
  {
    if ( a1 == 15 )
      return &dword_4B78EC;
    if ( a1 == 21 )
      return &dword_4B78E4;
    if ( a1 != 22 )
      return nullptr;
  }
  return &dword_4B78E8;
}
// 4B78E0: using guessed type int dword_4B78E0;
// 4B78E4: using guessed type int dword_4B78E4;
// 4B78E8: using guessed type int dword_4B78E8;
// 4B78EC: using guessed type int dword_4B78EC;
