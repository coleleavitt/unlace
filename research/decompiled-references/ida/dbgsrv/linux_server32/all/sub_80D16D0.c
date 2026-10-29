/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D16D0
// Address: 0x080D16D0

//----- (080D16D0) --------------------------------------------------------
int sub_80D16D0()
{
  char *v1; // ebx

  if ( !byte_811F8B8 && __cxa_guard_acquire((__guard *)&byte_811F8B8) )
  {
    v1 = (char *)operator new(0xA8u);
    sub_80D13C0(v1);
    dword_811F8C0 = (int)v1;
    __cxa_guard_release((__guard *)&byte_811F8B8);
  }
  sub_80D1630((char *)dword_811F8C0);
  return dword_811F8C0;
}
// 811F8B8: using guessed type char byte_811F8B8;
// 811F8C0: using guessed type int dword_811F8C0;
