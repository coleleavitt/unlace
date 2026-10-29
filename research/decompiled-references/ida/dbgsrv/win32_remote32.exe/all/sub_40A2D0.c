/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A2D0
// Address: 0x0040A2D0

//----- (0040A2D0) --------------------------------------------------------
void __thiscall sub_40A2D0(void **this)
{
  if ( *this )
  {
    sub_415F90(this, 0);
    sub_453A20(*this);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
