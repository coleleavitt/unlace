/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401400
// Address: 0x00401400

//----- (00401400) --------------------------------------------------------
void __thiscall sub_401400(void **this)
{
  void *v2; // eax

  v2 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v2);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
