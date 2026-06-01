/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::invalid_argument::~invalid_argument
// Address: 0x000C0CD0

//----- (000C0CD0) --------------------------------------------------------
void __cdecl std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  int v1; // eax

  *(_DWORD *)this = off_139AEC;
  v1 = *((_DWORD *)this + 1);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v1 - 4)) < 0 )
    operator delete((void *)(v1 - 12));
  std::exception::~exception();
  operator delete(this);
}
// 139AEC: using guessed type void (__cdecl *off_139AEC[2])(std::length_error *__hidden this);
