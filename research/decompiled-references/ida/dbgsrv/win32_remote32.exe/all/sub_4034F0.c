/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4034F0
// Address: 0x004034F0

//----- (004034F0) --------------------------------------------------------
_DWORD *__thiscall sub_4034F0(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 2);
  *this = &off_489ACC;
  if ( v3 != (void *)-1 )
    CloseHandle(v3);
  *this = &off_489AC0;
  if ( (a2 & 1) != 0 )
    sub_4627F2(this);
  return this;
}
// 489AC0: using guessed type _UNKNOWN *off_489AC0;
// 489ACC: using guessed type int (__stdcall *off_489ACC)(char);
