/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B080
// Address: 0x0040B080

//----- (0040B080) --------------------------------------------------------
void __thiscall sub_40B080(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1);
  if ( v2 )
  {
    *(this + 2) = 0;
    sub_453A20(v2);
    *(this + 1) = 0;
    *(this + 3) = 0;
  }
}
