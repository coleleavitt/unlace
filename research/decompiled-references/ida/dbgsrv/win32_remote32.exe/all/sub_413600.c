/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413600
// Address: 0x00413600

//----- (00413600) --------------------------------------------------------
_DWORD *__thiscall sub_413600(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 4) & 0xFFFFFFF;
  if ( v1 != 3 && v1 != 9 && v1 != 10 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3297);
  }
  return this + 5;
}
// 4B70F0: using guessed type char byte_4B70F0;
