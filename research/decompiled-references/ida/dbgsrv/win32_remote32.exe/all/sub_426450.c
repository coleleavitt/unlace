/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426450
// Address: 0x00426450

//----- (00426450) --------------------------------------------------------
void __thiscall sub_426450(void **this)
{
  void *v2; // eax

  sub_423B70((int)(this + 4));
  v2 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v2);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
