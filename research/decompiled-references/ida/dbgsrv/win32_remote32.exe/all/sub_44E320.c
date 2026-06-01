/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E320
// Address: 0x0044E320

//----- (0044E320) --------------------------------------------------------
_DWORD *__thiscall sub_44E320(_DWORD *this, char a2)
{
  void *v3; // eax
  void *v4; // eax

  *this = &off_48F9F4;
  v3 = (void *)*(this + 8);
  if ( v3 )
  {
    *(this + 9) = 0;
    sub_453A20(v3);
    *(this + 8) = 0;
    *(this + 10) = 0;
  }
  v4 = (void *)*(this + 4);
  if ( v4 )
  {
    *(this + 5) = 0;
    sub_453A20(v4);
    *(this + 4) = 0;
    *(this + 6) = 0;
  }
  *this = &off_48F9A8;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48F9A8: using guessed type _UNKNOWN *off_48F9A8;
// 48F9F4: using guessed type int (__stdcall *off_48F9F4)(char);
