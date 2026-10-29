/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440B50
// Address: 0x00440B50

//----- (00440B50) --------------------------------------------------------
void __thiscall sub_440B50(void **this)
{
  if ( *this )
  {
    sub_447000(this, 0);
    sub_453A20(*this);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
