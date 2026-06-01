/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B4B0
// Address: 0x0040B4B0

//----- (0040B4B0) --------------------------------------------------------
void __thiscall sub_40B4B0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 115);
  if ( v2 )
  {
    *(this + 116) = 0;
    sub_453A20(v2);
    *(this + 115) = 0;
    *(this + 117) = 0;
  }
  sub_40A460(this);
}
