/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::what
// Address: 0x00091EE0

//----- (00091EE0) --------------------------------------------------------
int __fastcall std::logic_error::what(std::logic_error *this)
{
  return *((_DWORD *)this + 1);
}
