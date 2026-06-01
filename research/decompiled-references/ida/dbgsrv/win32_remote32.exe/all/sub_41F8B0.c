/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F8B0
// Address: 0x0041F8B0

//----- (0041F8B0) --------------------------------------------------------
void __thiscall sub_41F8B0(unsigned int *this)
{
  if ( *this )
  {
    sub_422F80(this, 0);
    sub_453A20((void *)*this);
    *this = 0;
    *(this + 2) = 0;
  }
}
