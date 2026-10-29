/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AF60
// Address: 0x0040AF60

//----- (0040AF60) --------------------------------------------------------
void __thiscall sub_40AF60(void **this)
{
  void *v2; // eax
  void *v3; // eax

  v2 = *(this + 3);
  if ( v2 )
  {
    *(this + 4) = nullptr;
    sub_453A20(v2);
    *(this + 3) = nullptr;
    *(this + 5) = nullptr;
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
