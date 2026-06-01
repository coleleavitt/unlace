/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x000C0AF0

//----- (000C0AF0) --------------------------------------------------------
// Alternative name is '_ZNSt11logic_errorD1Ev'
// Alternative name is '_ZNSt11logic_errorD2Ev'
// Alternative name is '_ZNSt12domain_errorD1Ev'
// Alternative name is '_ZNSt12domain_errorD2Ev'
// Alternative name is '_ZNSt12length_errorD2Ev'
// Alternative name is '_ZNSt12out_of_rangeD1Ev'
// Alternative name is '_ZNSt12out_of_rangeD2Ev'
// Alternative name is '_ZNSt16invalid_argumentD1Ev'
// Alternative name is '_ZNSt16invalid_argumentD2Ev'
void __cdecl std::length_error::~length_error(std::length_error *this)
{
  int v1; // eax

  *(_DWORD *)this = off_139AEC;
  v1 = *((_DWORD *)this + 1);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v1 - 4)) < 0 )
    operator delete((void *)(v1 - 12));
  std::exception::~exception();
}
// 139AEC: using guessed type void (__cdecl *off_139AEC[2])(std::length_error *__hidden this);
