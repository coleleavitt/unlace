/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x0008FEE0

//----- (0008FEE0) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC1EPKc'
std::runtime_error *__fastcall std::runtime_error::runtime_error(std::runtime_error *this, char *a2)
{
  *(_DWORD *)this = &off_DBA84;
  sub_8FDAC((_DWORD *)this + 1, a2);
  return this;
}
// DBA84: using guessed type _UNKNOWN *off_DBA84;
