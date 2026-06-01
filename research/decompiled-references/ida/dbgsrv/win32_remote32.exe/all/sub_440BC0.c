/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_440BC0
// Address: 0x00440BC0

//----- (00440BC0) --------------------------------------------------------
void __thiscall sub_440BC0(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  *this = &off_48DE78;
  v2 = (void *)*(this + 266);
  if ( v2 )
  {
    *(this + 267) = 0;
    sub_453A20(v2);
    *(this + 266) = 0;
    *(this + 268) = 0;
  }
  v3 = (void *)*(this + 263);
  if ( v3 )
  {
    *(this + 264) = 0;
    sub_453A20(v3);
    *(this + 263) = 0;
    *(this + 265) = 0;
  }
  v4 = (void *)*(this + 260);
  if ( v4 )
  {
    *(this + 261) = 0;
    sub_453A20(v4);
    *(this + 260) = 0;
    *(this + 262) = 0;
  }
  if ( *(this + 257) )
  {
    sub_415F90(this + 257, 0);
    sub_453A20((void *)*(this + 257));
    *(this + 257) = 0;
    *(this + 259) = 0;
  }
}
// 48DE78: using guessed type int (__stdcall *off_48DE78)(int);
