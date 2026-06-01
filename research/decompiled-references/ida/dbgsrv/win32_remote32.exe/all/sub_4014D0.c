/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4014D0
// Address: 0x004014D0

//----- (004014D0) --------------------------------------------------------
void __thiscall sub_4014D0(void **this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  v2 = *(this + 12);
  if ( v2 )
  {
    *(this + 13) = nullptr;
    sub_453A20(v2);
    *(this + 12) = nullptr;
    *(this + 14) = nullptr;
  }
  v3 = *(this + 3);
  if ( v3 )
  {
    *(this + 4) = nullptr;
    sub_453A20(v3);
    *(this + 3) = nullptr;
    *(this + 5) = nullptr;
  }
  v4 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v4);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
