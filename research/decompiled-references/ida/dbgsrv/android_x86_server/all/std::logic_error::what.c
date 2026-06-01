/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::what
// Address: 0x000C0BA0

//----- (000C0BA0) --------------------------------------------------------
int __cdecl std::logic_error::what(std::logic_error *this)
{
  return *((_DWORD *)this + 1);
}
