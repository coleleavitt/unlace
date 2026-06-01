/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C4A0
// Address: 0x0044C4A0

//----- (0044C4A0) --------------------------------------------------------
void __thiscall sub_44C4A0(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  *this = &off_48F610;
  sub_44D810(this + 11, -1);
  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 12);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (void *)*(this + 8);
  if ( v3 )
  {
    *(this + 9) = 0;
    sub_453A20(v3);
    *(this + 8) = 0;
    *(this + 10) = 0;
  }
  v4 = (void *)*(this + 5);
  if ( v4 )
  {
    *(this + 6) = 0;
    sub_453A20(v4);
    *(this + 5) = 0;
    *(this + 7) = 0;
  }
  v5 = (void *)*(this + 2);
  if ( v5 )
  {
    *(this + 3) = 0;
    sub_453A20(v5);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
}
// 48F610: using guessed type int (__stdcall *off_48F610)(char);
