/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::what
// Address: 0x00000000000D9678

//----- (00000000000D9678) ----------------------------------------------------
__int64 __fastcall std::logic_error::what(std::logic_error *this)
{
  return *((_QWORD *)this + 1);
}
