/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4263A0
// Address: 0x004263A0

//----- (004263A0) --------------------------------------------------------
void __thiscall sub_4263A0(void *this)
{
  void *v2; // eax
  void *v3; // eax

  v2 = *((void **)this + 19);
  if ( v2 )
  {
    *((_DWORD *)this + 20) = 0;
    sub_453A20(v2);
    *((_DWORD *)this + 19) = 0;
    *((_DWORD *)this + 21) = 0;
  }
  sub_4262C0((void **)this + 11);
  v3 = *((void **)this + 8);
  if ( v3 )
  {
    *((_DWORD *)this + 9) = 0;
    sub_453A20(v3);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 10) = 0;
  }
  sub_426200((void **)this + 5);
  sub_40A2D0((void **)this + 2);
  *(_DWORD *)this = &off_48BE88;
}
// 48BE88: using guessed type _UNKNOWN *off_48BE88;
