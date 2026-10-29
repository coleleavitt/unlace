/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440E10
// Address: 0x00440E10

//----- (00440E10) --------------------------------------------------------
void __thiscall sub_440E10(void **this)
{
  if ( *this )
  {
    sub_415F90(this, 0);
    sub_453A20(*this);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
