/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409C00
// Address: 0x00409C00

//----- (00409C00) --------------------------------------------------------
void __thiscall sub_409C00(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 10);
  if ( v2 )
  {
    *(this + 11) = 0;
    sub_453A20(v2);
    *(this + 10) = 0;
    *(this + 12) = 0;
  }
}
