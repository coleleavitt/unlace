/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450970
// Address: 0x00450970

//----- (00450970) --------------------------------------------------------
char *__thiscall sub_450970(char *this, char a2)
{
  bool v3; // zf
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax

  v3 = *(this + 124) == 0;
  *(_DWORD *)this = &off_48FD2C;
  *((_DWORD *)this + 8) = 0;
  if ( !v3 )
  {
    sub_452400((int)this);
    DeleteSecurityContext((PCtxtHandle)(this + 60));
    *(this + 124) = 0;
  }
  sub_44D810((_DWORD *)this + 4, -1);
  v4 = *((void **)this + 21);
  if ( v4 )
  {
    *((_DWORD *)this + 22) = 0;
    sub_453A20(v4);
    *((_DWORD *)this + 21) = 0;
    *((_DWORD *)this + 23) = 0;
  }
  v5 = *((void **)this + 18);
  if ( v5 )
  {
    *((_DWORD *)this + 19) = 0;
    sub_453A20(v5);
    *((_DWORD *)this + 18) = 0;
    *((_DWORD *)this + 20) = 0;
  }
  v6 = *((void **)this + 10);
  if ( v6 )
  {
    *((_DWORD *)this + 11) = 0;
    sub_453A20(v6);
    *((_DWORD *)this + 10) = 0;
    *((_DWORD *)this + 12) = 0;
  }
  v7 = *((void **)this + 5);
  if ( v7 )
  {
    *((_DWORD *)this + 6) = 0;
    sub_453A20(v7);
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 7) = 0;
  }
  *(_DWORD *)this = &off_48F9A8;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48F9A8: using guessed type _UNKNOWN *off_48F9A8;
// 48FD2C: using guessed type int (__stdcall *off_48FD2C)(char);
