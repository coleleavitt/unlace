/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B000
// Address: 0x0040B000

//----- (0040B000) --------------------------------------------------------
void __thiscall sub_40B000(_DWORD *this)
{
  void *v2; // eax

  *this = &off_48A4F0;
  v2 = (void *)*(this + 1);
  if ( v2 )
  {
    *(this + 2) = 0;
    sub_453A20(v2);
    *(this + 1) = 0;
    *(this + 3) = 0;
  }
}
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
