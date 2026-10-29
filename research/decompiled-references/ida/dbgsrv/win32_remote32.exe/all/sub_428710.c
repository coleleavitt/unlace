/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428710
// Address: 0x00428710

//----- (00428710) --------------------------------------------------------
char __thiscall sub_428710(_DWORD *this, int a2, char a3)
{
  if ( *(this + 1) - a2 < 1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(277);
  }
  *(_BYTE *)(a2 + *this) = a3;
  return a3;
}
// 4B70F0: using guessed type char byte_4B70F0;
