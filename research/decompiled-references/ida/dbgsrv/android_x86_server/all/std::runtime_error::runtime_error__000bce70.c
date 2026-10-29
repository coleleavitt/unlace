/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::runtime_error
// Address: 0x000BCE70

//----- (000BCE70) --------------------------------------------------------
// Alternative name is '_ZNSt13runtime_errorC2ERKS_'
int __cdecl std::runtime_error::runtime_error(std::runtime_error *this, const std::runtime_error *a2)
{
  int result; // eax

  *(_DWORD *)this = off_139B00;
  result = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = result;
  _InterlockedIncrement((volatile signed __int32 *)(result - 4));
  return result;
}
// 139B00: using guessed type void (__cdecl *[2])(std::overflow_error *__hidden this);
