/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40ACD0
// Address: 0x0040ACD0

//----- (0040ACD0) --------------------------------------------------------
void __thiscall sub_40ACD0(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax

  v2 = (void *)*(this + 5);
  if ( v2 )
  {
    *(this + 6) = 0;
    sub_453A20(v2);
    *(this + 5) = 0;
    *(this + 7) = 0;
  }
  v3 = (void *)*(this + 2);
  if ( v3 )
  {
    *(this + 3) = 0;
    sub_453A20(v3);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
}
