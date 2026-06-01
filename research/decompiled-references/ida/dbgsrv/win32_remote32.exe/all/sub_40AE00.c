/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40AE00
// Address: 0x0040AE00

//----- (0040AE00) --------------------------------------------------------
void __thiscall sub_40AE00(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 3);
  if ( v2 )
  {
    *(this + 4) = 0;
    sub_453A20(v2);
    *(this + 3) = 0;
    *(this + 5) = 0;
  }
}
