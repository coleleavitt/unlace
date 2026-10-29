/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x0008FDE8

//----- (0008FDE8) --------------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC1EPKc'
std::logic_error *__fastcall std::logic_error::logic_error(std::logic_error *this, char *a2)
{
  *(_DWORD *)this = &off_DBA70;
  sub_8FDAC((_DWORD *)this + 1, a2);
  return this;
}
// DBA70: using guessed type _UNKNOWN *off_DBA70;
