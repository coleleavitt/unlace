/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CCC0
// Address: 0x0041CCC0

//----- (0041CCC0) --------------------------------------------------------
void __thiscall sub_41CCC0(unsigned int *this)
{
  if ( *this )
  {
    sub_422F80(this, 0);
    sub_453A20((void *)*this);
    *this = 0;
    *(this + 2) = 0;
  }
}
