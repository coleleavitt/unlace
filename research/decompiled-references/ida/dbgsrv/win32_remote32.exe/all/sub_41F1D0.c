/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F1D0
// Address: 0x0041F1D0

//----- (0041F1D0) --------------------------------------------------------
int __thiscall sub_41F1D0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = a2 + *(this + 12);
  if ( v2 < 0 || (unsigned int)v2 >= *(this + 4) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(287);
  }
  return *(this + 3) + 24 * v2;
}
// 4B70F0: using guessed type char byte_4B70F0;
