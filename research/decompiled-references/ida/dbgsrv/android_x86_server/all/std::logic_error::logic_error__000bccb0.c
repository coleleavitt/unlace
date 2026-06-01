/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::logic_error
// Address: 0x000BCCB0

//----- (000BCCB0) --------------------------------------------------------
// Alternative name is '_ZNSt11logic_errorC2ERKS_'
int __cdecl std::logic_error::logic_error(std::logic_error *this, const std::logic_error *a2)
{
  int result; // eax

  *(_DWORD *)this = off_139AEC;
  result = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = result;
  _InterlockedIncrement((volatile signed __int32 *)(result - 4));
  return result;
}
// 139AEC: using guessed type void (__cdecl *[2])(std::length_error *__hidden this);
