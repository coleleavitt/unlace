/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409C70
// Address: 0x00409C70

//----- (00409C70) --------------------------------------------------------
void __thiscall sub_409C70(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 4);
  if ( v2 )
  {
    *(this + 5) = 0;
    sub_453A20(v2);
    *(this + 4) = 0;
    *(this + 6) = 0;
  }
}
