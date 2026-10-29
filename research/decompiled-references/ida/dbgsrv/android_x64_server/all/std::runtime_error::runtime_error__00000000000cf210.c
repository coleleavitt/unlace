/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x00000000000CF210

//----- (00000000000CF210) ----------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKS_'
__int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *a2)
{
  __int64 result; // rax

  *(_QWORD *)this = off_1515E0;
  result = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = result;
  _InterlockedAdd((volatile signed __int32 *)(result - 8), 1u);
  return result;
}
// CF210: using guessed type __int64 __fastcall std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *a2);
// 1515E0: using guessed type void (__fastcall *[2])(std::overflow_error *__hidden this);
