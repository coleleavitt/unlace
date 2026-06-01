/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420F70
// Address: 0x00420F70

//----- (00420F70) --------------------------------------------------------
int __thiscall sub_420F70(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = a2 + *(this + 13);
  if ( v2 < 0 || (unsigned int)v2 >= *(this + 4) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(286);
  }
  return *(this + 3) + 24 * v2;
}
// 4B70F0: using guessed type char byte_4B70F0;
