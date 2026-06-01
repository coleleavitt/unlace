/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CCF0
// Address: 0x0040CCF0

//----- (0040CCF0) --------------------------------------------------------
_DWORD *__thiscall sub_40CCF0(_DWORD *this)
{
  if ( (*(this + 4) & 0xFFFFFFF) != 5 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3298);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
