/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4281C0
// Address: 0x004281C0

//----- (004281C0) --------------------------------------------------------
__int64 __thiscall sub_4281C0(_DWORD *this, int a2)
{
  __int64 v2; // rax

  if ( *(this + 3) - a2 < 4 || *(this + 3) - (a2 + 4) < 4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(276);
  }
  HIDWORD(v2) = (unsigned __int8)*(_DWORD *)(*this + a2 + 4)
              + (((unsigned __int8)BYTE1(*(_DWORD *)(*this + a2 + 4))
                + (((HIBYTE(*(_DWORD *)(*this + a2 + 4)) << 8) + (unsigned __int8)BYTE2(*(_DWORD *)(*this + a2 + 4))) << 8)) << 8);
  LODWORD(v2) = 0;
  return (unsigned __int8)*(_DWORD *)(*this + a2)
       + (((unsigned __int8)BYTE1(*(_DWORD *)(*this + a2))
         + (((HIBYTE(*(_DWORD *)(*this + a2)) << 8) + (unsigned int)(unsigned __int8)BYTE2(*(_DWORD *)(*this + a2))) << 8)) << 8)
       + v2;
}
// 4B70F0: using guessed type char byte_4B70F0;
