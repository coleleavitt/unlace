/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440E80
// Address: 0x00440E80

//----- (00440E80) --------------------------------------------------------
void __thiscall sub_440E80(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax

  v2 = (void *)*(this + 7);
  if ( v2 )
  {
    *(this + 8) = 0;
    sub_453A20(v2);
    *(this + 7) = 0;
    *(this + 9) = 0;
  }
  v3 = (void *)*(this + 4);
  if ( v3 )
  {
    *(this + 5) = 0;
    sub_453A20(v3);
    *(this + 4) = 0;
    *(this + 6) = 0;
  }
  *this = &off_48A4D8;
}
// 48A4D8: using guessed type int (__stdcall *off_48A4D8)(int, int, int);
