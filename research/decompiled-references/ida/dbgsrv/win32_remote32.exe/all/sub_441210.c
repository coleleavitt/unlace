/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441210
// Address: 0x00441210

//----- (00441210) --------------------------------------------------------
_DWORD *__thiscall sub_441210(_DWORD *this, char a2)
{
  void *v3; // eax

  *this = &off_48DC94;
  v3 = (void *)*(this + 2);
  if ( v3 )
  {
    *(this + 3) = 0;
    sub_453A20(v3);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
  *this = &off_48DC88;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48DC88: using guessed type _UNKNOWN *off_48DC88;
// 48DC94: using guessed type int (__stdcall *off_48DC94)(char);
