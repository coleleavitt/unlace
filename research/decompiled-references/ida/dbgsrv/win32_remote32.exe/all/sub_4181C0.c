/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4181C0
// Address: 0x004181C0

//----- (004181C0) --------------------------------------------------------
_DWORD *__thiscall sub_4181C0(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 115);
  if ( v3 )
  {
    *(this + 116) = 0;
    sub_453A20(v3);
    *(this + 115) = 0;
    *(this + 117) = 0;
  }
  sub_40A460(this);
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
