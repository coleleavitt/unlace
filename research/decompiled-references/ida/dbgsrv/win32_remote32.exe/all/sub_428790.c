/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428790
// Address: 0x00428790

//----- (00428790) --------------------------------------------------------
int __thiscall sub_428790(int *this, int a2, __int16 a3)
{
  int result; // eax

  if ( *(this + 1) - a2 < 2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(277);
  }
  *(_BYTE *)(a2 + *this) = a3;
  result = *this;
  *(_BYTE *)(*this + a2 + 1) = HIBYTE(a3);
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
