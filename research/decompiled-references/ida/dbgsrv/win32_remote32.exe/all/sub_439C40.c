/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439C40
// Address: 0x00439C40

//----- (00439C40) --------------------------------------------------------
_DWORD *__thiscall sub_439C40(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 18);
  if ( v3 )
  {
    *(this + 19) = 0;
    sub_453A20(v3);
    *(this + 18) = 0;
    *(this + 20) = 0;
  }
  sub_44C4A0(this);
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
