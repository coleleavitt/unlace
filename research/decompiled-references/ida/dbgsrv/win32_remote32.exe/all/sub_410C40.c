/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410C40
// Address: 0x00410C40

//----- (00410C40) --------------------------------------------------------
_DWORD *__thiscall sub_410C40(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 4) & 0xFFFFFFF;
  if ( v1 != 2 && v1 != 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3296);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
