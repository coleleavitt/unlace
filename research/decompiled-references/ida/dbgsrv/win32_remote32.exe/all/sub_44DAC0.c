/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DAC0
// Address: 0x0044DAC0

//----- (0044DAC0) --------------------------------------------------------
void __thiscall sub_44DAC0(_DWORD *this)
{
  void *v2; // eax

  *this = &off_48F91C;
  sub_44D810(this + 18, -1);
  v2 = (void *)*(this + 19);
  if ( v2 )
  {
    *(this + 20) = 0;
    sub_453A20(v2);
    *(this + 19) = 0;
    *(this + 21) = 0;
  }
}
// 48F91C: using guessed type int (__stdcall *off_48F91C)(char);
