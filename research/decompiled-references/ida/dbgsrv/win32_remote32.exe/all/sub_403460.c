/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403460
// Address: 0x00403460

//----- (00403460) --------------------------------------------------------
_DWORD *__thiscall sub_403460(_DWORD *this, char a2)
{
  int v3; // ecx

  v3 = *(this + 2);
  *this = &off_489904;
  if ( v3 && *((_BYTE *)this + 12) )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    *(this + 2) = 0;
  }
  *(this + 1) = 0;
  *this = off_489870;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 489870: using guessed type void (__noreturn *off_489870[36])();
// 489904: using guessed type _UNKNOWN *off_489904;
