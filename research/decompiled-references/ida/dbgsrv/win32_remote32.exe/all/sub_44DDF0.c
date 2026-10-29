/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DDF0
// Address: 0x0044DDF0

//----- (0044DDF0) --------------------------------------------------------
_DWORD *__thiscall sub_44DDF0(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // esi
  int v3; // ecx
  _DWORD *v4; // eax

  *this = &off_48F940;
  v2 = dword_4B6C98;
  sub_4562D0(dword_4B6C98);
  v3 = dword_4B6CA0;
  if ( dword_4B6CA0 + 1 <= (unsigned int)dword_4B6CA4 )
  {
    v4 = (_DWORD *)dword_4B6C9C;
  }
  else
  {
    v4 = sub_453B00((int)&dword_4B6C9C, (void *)dword_4B6C9C, dword_4B6CA0 + 1, 4u);
    v3 = dword_4B6CA0;
    dword_4B6C9C = (int)v4;
  }
  v4[v3] = this;
  ++dword_4B6CA0;
  sub_4562F0(v2);
  return this;
}
// 48F940: using guessed type void (__noreturn *off_48F940)();
// 4B6C9C: using guessed type int dword_4B6C9C;
// 4B6CA0: using guessed type int dword_4B6CA0;
// 4B6CA4: using guessed type int dword_4B6CA4;
