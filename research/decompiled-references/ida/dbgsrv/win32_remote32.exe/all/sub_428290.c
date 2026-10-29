/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428290
// Address: 0x00428290

//----- (00428290) --------------------------------------------------------
int __thiscall sub_428290(_DWORD *this, int a2)
{
  if ( *(this + 3) - a2 < 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(276);
  }
  return (unsigned __int8)*(_DWORD *)(a2 + *this)
       + (((unsigned __int8)BYTE1(*(_DWORD *)(a2 + *this))
         + (((HIBYTE(*(_DWORD *)(a2 + *this)) << 8) + (unsigned __int8)BYTE2(*(_DWORD *)(a2 + *this))) << 8)) << 8);
}
// 4B70F0: using guessed type char byte_4B70F0;
