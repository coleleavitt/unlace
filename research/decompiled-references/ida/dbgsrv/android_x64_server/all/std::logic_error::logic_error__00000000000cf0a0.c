/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x00000000000CF0A0

//----- (00000000000CF0A0) ----------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC2ERKS_'
__int64 __fastcall std::logic_error::logic_error(std::logic_error *this, const std::logic_error *a2)
{
  __int64 result; // rax

  *(_QWORD *)this = off_1515B8;
  result = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = result;
  _InterlockedAdd((volatile signed __int32 *)(result - 8), 1u);
  return result;
}
// CF0A0: using guessed type __int64 __fastcall std::logic_error::logic_error(std::logic_error *this, const std::logic_error *a2);
// 1515B8: using guessed type void (__fastcall *[2])(std::length_error *__hidden this);
