/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B780
// Address: 0x0040B780

//----- (0040B780) --------------------------------------------------------
_DWORD *__thiscall sub_40B780(_DWORD *this, char a2)
{
  void *v3; // eax

  *this = &off_48A4F0;
  v3 = (void *)*(this + 1);
  if ( v3 )
  {
    *(this + 2) = 0;
    sub_453A20(v3);
    *(this + 1) = 0;
    *(this + 3) = 0;
  }
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
