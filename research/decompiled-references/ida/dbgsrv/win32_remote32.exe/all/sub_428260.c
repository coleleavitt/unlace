/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428260
// Address: 0x00428260

//----- (00428260) --------------------------------------------------------
char __thiscall sub_428260(_DWORD *this, int a2)
{
  if ( *(this + 3) - a2 < 1 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(276);
  }
  return *(_BYTE *)(a2 + *this);
}
// 4B70F0: using guessed type char byte_4B70F0;
