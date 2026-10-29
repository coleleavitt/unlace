/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441110
// Address: 0x00441110

//----- (00441110) --------------------------------------------------------
_DWORD *__thiscall sub_441110(_DWORD *this, char a2)
{
  _BYTE *v3; // ecx

  v3 = (_BYTE *)*(this + 64);
  *this = &off_48DC58;
  *(this + 28) = &off_48DC68;
  if ( !v3[372] && v3 )
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v3 + 16))(v3, 1);
  sub_44DBD0((int)this);
  *(this + 65) = 0;
  sub_45B190(this + 53);
  sub_45B190(this + 42);
  sub_440FC0(this + 28);
  sub_44DAC0(this);
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48DC58: using guessed type int (__stdcall *off_48DC58)(char);
// 48DC68: using guessed type int (__stdcall *off_48DC68)(int);
