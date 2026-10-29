/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CE30
// Address: 0x0041CE30

//----- (0041CE30) --------------------------------------------------------
void __thiscall sub_41CE30(unsigned int *this)
{
  if ( *this )
  {
    sub_422F80(this, 0);
    sub_453A20((void *)*this);
    *this = 0;
    *(this + 2) = 0;
  }
}
