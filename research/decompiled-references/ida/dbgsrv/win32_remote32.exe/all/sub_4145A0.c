/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4145A0
// Address: 0x004145A0

//----- (004145A0) --------------------------------------------------------
_DWORD *__thiscall sub_4145A0(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 4) & 0xFFFFFFF;
  if ( v1 != 1 && v1 != 11 && v1 != 8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3295);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
