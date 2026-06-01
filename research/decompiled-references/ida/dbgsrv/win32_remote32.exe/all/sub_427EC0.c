/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427EC0
// Address: 0x00427EC0

//----- (00427EC0) --------------------------------------------------------
unsigned int __thiscall sub_427EC0(_DWORD *this, int a2, unsigned int a3, signed int a4)
{
  if ( *(this + 3) - a2 < a4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(276);
  }
  return sub_464310(a3, a2 + *this, a4);
}
// 4B70F0: using guessed type char byte_4B70F0;
