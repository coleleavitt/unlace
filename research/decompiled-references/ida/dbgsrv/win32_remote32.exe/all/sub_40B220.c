/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B220
// Address: 0x0040B220

//----- (0040B220) --------------------------------------------------------
void __thiscall sub_40B220(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 9);
  if ( v2 )
  {
    *(this + 10) = 0;
    sub_453A20(v2);
    *(this + 9) = 0;
    *(this + 11) = 0;
  }
}
