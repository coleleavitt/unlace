/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DB40
// Address: 0x0044DB40

//----- (0044DB40) --------------------------------------------------------
_DWORD *__thiscall sub_44DB40(_DWORD *this, char a2)
{
  void *v3; // eax

  *this = &off_48F91C;
  sub_44D810(this + 18, -1);
  v3 = (void *)*(this + 19);
  if ( v3 )
  {
    *(this + 20) = 0;
    sub_453A20(v3);
    *(this + 19) = 0;
    *(this + 21) = 0;
  }
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48F91C: using guessed type int (__stdcall *off_48F91C)(char);
