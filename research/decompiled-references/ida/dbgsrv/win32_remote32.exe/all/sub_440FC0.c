/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440FC0
// Address: 0x00440FC0

//----- (00440FC0) --------------------------------------------------------
void __thiscall sub_440FC0(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax

  *this = &off_48DC40;
  v2 = (void *)*(this + 10);
  if ( v2 )
  {
    *(this + 11) = 0;
    sub_453A20(v2);
    *(this + 10) = 0;
    *(this + 12) = 0;
  }
  v3 = (void *)*(this + 2);
  if ( v3 )
  {
    *(this + 3) = 0;
    sub_453A20(v3);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
}
// 48DC40: using guessed type _UNKNOWN *off_48DC40;
