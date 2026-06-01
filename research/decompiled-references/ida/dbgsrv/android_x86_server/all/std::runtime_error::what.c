/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::what
// Address: 0x000C0C60

//----- (000C0C60) --------------------------------------------------------
int __cdecl std::runtime_error::what(std::runtime_error *this)
{
  return *((_DWORD *)this + 1);
}
