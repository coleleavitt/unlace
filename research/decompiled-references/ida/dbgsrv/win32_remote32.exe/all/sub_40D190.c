/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D190
// Address: 0x0040D190

//----- (0040D190) --------------------------------------------------------
void __thiscall sub_40D190(void **this)
{
  void *v2; // [esp-4h] [ebp-8h]

  if ( *this )
  {
    v2 = *this;
    *(this + 1) = nullptr;
    sub_453A20(v2);
    *this = nullptr;
    *(this + 2) = nullptr;
  }
}
