/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4163F0
// Address: 0x004163F0

//----- (004163F0) --------------------------------------------------------
_DWORD *__thiscall sub_4163F0(_DWORD *this, int a2)
{
  int v3; // eax

  sub_45B9B0(this, a2);
  v3 = *(this + 4) & 0xFFFFFFF;
  if ( v3 != 1 && v3 != 11 && v3 != 8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3295);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
