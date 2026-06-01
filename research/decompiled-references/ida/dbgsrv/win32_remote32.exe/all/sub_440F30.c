/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440F30
// Address: 0x00440F30

//----- (00440F30) --------------------------------------------------------
void __thiscall sub_440F30(void **this)
{
  void *v2; // eax
  void *v3; // eax

  v2 = *(this + 4);
  if ( v2 )
  {
    *(this + 5) = nullptr;
    sub_453A20(v2);
    *(this + 4) = nullptr;
    *(this + 6) = nullptr;
  }
  v3 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v3);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
