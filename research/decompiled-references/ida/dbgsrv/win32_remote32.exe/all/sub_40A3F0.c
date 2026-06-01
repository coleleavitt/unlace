/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A3F0
// Address: 0x0040A3F0

//----- (0040A3F0) --------------------------------------------------------
void __thiscall sub_40A3F0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 2);
  if ( v2 )
  {
    *(this + 3) = 0;
    sub_453A20(v2);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
}
