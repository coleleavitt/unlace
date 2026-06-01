/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403570
// Address: 0x00403570

//----- (00403570) --------------------------------------------------------
_DWORD *__thiscall sub_403570(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v3 = *(this + 8);
  *this = &off_489A08;
  if ( v3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    *(this + 8) = 0;
  }
  v4 = *(this + 7);
  if ( v4 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*(this + 7));
    *(this + 7) = 0;
  }
  v5 = *(this + 6);
  if ( v5 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 8))(*(this + 6));
    *(this + 6) = 0;
  }
  *(this + 5) = -1;
  *this = &off_4899A0;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 4899A0: using guessed type _UNKNOWN *off_4899A0;
// 489A08: using guessed type int (__stdcall *off_489A08)(char);
