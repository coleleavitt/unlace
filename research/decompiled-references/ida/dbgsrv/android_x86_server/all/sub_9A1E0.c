/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A1E0
// Address: 0x0009A1E0

//----- (0009A1E0) --------------------------------------------------------
int (**__cdecl sub_9A1E0(char *name))()
{
  _DWORD *v1; // esi
  const char *v3; // eax

  if ( !byte_13C2F4 && _cxa_guard_acquire((__guard *)&byte_13C2F4) )
  {
    dword_13C2F0 = (int)qsem_create(name, 1u);
    _cxa_guard_release((__guard *)&byte_13C2F4);
  }
  if ( !dword_13C2F0 )
  {
    v3 = qstrerror(0xFFFFFFFF);
    sub_1DE10("%s qsem: %s", name, v3);
  }
  if ( !qsem_wait(dword_13C2F0, 0) )
    sub_1DE10("%s: another running copy has been detected, exiting...", name);
  v1 = operator new(4u);
  *v1 = &off_138BF4;
  sub_9AF90(&dword_13C2E0, v1);
  *v1 = &off_138CC4;
  return &off_138CC4;
}
// 9AF90: using guessed type _DWORD __cdecl sub_9AF90(_DWORD, _DWORD);
// 138BF4: using guessed type void (__noreturn *off_138BF4)();
// 138CC4: using guessed type int (*off_138CC4)();
// 13C2E0: using guessed type int dword_13C2E0;
// 13C2F0: using guessed type int dword_13C2F0;
// 13C2F4: using guessed type char byte_13C2F4;
