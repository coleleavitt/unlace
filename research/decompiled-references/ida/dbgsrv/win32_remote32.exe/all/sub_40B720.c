/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B720
// Address: 0x0040B720

//----- (0040B720) --------------------------------------------------------
_DWORD *__thiscall sub_40B720(_DWORD *this, char a2)
{
  *this = &off_48A4E4;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 48A4E4: using guessed type int (__stdcall *off_48A4E4)(int, int, int);
