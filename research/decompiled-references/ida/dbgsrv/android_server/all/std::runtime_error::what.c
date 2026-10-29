/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::what
// Address: 0x00000000000D9730

//----- (00000000000D9730) ----------------------------------------------------
__int64 __fastcall std::runtime_error::what(std::runtime_error *this)
{
  return *((_QWORD *)this + 1);
}
