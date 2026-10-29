/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B1B0
// Address: 0x0040B1B0

//----- (0040B1B0) --------------------------------------------------------
void __thiscall sub_40B1B0(int *this)
{
  void *v2; // eax

  if ( *this >= -1 )
  {
    v2 = (void *)*(this + 2);
    if ( v2 )
    {
      *(this + 3) = 0;
      sub_453A20(v2);
      *(this + 2) = 0;
      *(this + 4) = 0;
    }
    *this = -2;
  }
}
