/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B790
// Address: 0x0044B790

//----- (0044B790) --------------------------------------------------------
_BYTE *__thiscall sub_44B790(_BYTE *this, char a2, int a3, int a4, int a5)
{
  *(_DWORD *)this = &off_48DC40;
  *(this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 7) = a5;
  *((_DWORD *)this + 8) = a3;
  *(this + 36) = a2;
  *((_DWORD *)this + 5) = 0;
  *(this + 37) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  return this;
}
// 48DC40: using guessed type _UNKNOWN *off_48DC40;
