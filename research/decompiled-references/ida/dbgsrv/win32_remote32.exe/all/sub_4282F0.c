/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4282F0
// Address: 0x004282F0

//----- (004282F0) --------------------------------------------------------
__int16 __thiscall sub_4282F0(_DWORD *this, int a2)
{
  if ( *(this + 3) - a2 < 2 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(276);
  }
  return *(_WORD *)(a2 + *this);
}
// 4B70F0: using guessed type char byte_4B70F0;
