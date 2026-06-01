/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416250
// Address: 0x00416250

//----- (00416250) --------------------------------------------------------
_DWORD *__thiscall sub_416250(_DWORD *this)
{
  sub_45B9B0(this, 5);
  if ( (*(this + 4) & 0xFFFFFFF) != 5 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3298);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
