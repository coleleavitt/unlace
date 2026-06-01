/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_401470
// Address: 0x00401470

//----- (00401470) --------------------------------------------------------
void __thiscall sub_401470(void **this)
{
  void *v2; // [esp-4h] [ebp-18h]

  if ( *this )
  {
    v2 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v2);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
