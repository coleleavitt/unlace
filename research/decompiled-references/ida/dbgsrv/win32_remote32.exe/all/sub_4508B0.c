/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4508B0
// Address: 0x004508B0

//----- (004508B0) --------------------------------------------------------
void __thiscall sub_4508B0(SECURITY_STATUS *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  sub_451560(this);
  v2 = (void *)*(this + 6);
  if ( v2 )
  {
    *(this + 7) = 0;
    sub_453A20(v2);
    *(this + 6) = 0;
    *(this + 8) = 0;
  }
  v3 = (void *)*(this + 3);
  if ( v3 )
  {
    *(this + 4) = 0;
    sub_453A20(v3);
    *(this + 3) = 0;
    *(this + 5) = 0;
  }
  v4 = (void *)*this;
  if ( *this )
  {
    *(this + 1) = 0;
    sub_453A20(v4);
    *this = 0;
    *(this + 2) = 0;
  }
}
