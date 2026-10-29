/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428740
// Address: 0x00428740

//----- (00428740) --------------------------------------------------------
unsigned int __thiscall sub_428740(_DWORD *this, int a2, unsigned int a3)
{
  if ( *(this + 1) - a2 < 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(277);
  }
  *(_DWORD *)(a2 + *this) = a3;
  return HIWORD(a3);
}
// 4B70F0: using guessed type char byte_4B70F0;
