/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C650
// Address: 0x0044C650

//----- (0044C650) --------------------------------------------------------
_DWORD *__thiscall sub_44C650(_DWORD *this, char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  *this = &off_48F610;
  sub_44D810(this + 11, -1);
  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 12);
  if ( v3 )
    (**v3)(v3, 1);
  v4 = (void *)*(this + 8);
  if ( v4 )
  {
    *(this + 9) = 0;
    sub_453A20(v4);
    *(this + 8) = 0;
    *(this + 10) = 0;
  }
  v5 = (void *)*(this + 5);
  if ( v5 )
  {
    *(this + 6) = 0;
    sub_453A20(v5);
    *(this + 5) = 0;
    *(this + 7) = 0;
  }
  v6 = (void *)*(this + 2);
  if ( v6 )
  {
    *(this + 3) = 0;
    sub_453A20(v6);
    *(this + 2) = 0;
    *(this + 4) = 0;
  }
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48F610: using guessed type int (__stdcall *off_48F610)(char);
