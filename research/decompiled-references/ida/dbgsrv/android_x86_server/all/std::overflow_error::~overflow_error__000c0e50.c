/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x000C0E50

//----- (000C0E50) --------------------------------------------------------
void __cdecl std::overflow_error::~overflow_error(std::overflow_error *this)
{
  int v1; // eax

  *(_DWORD *)this = off_139B00;
  v1 = *((_DWORD *)this + 1);
  if ( _InterlockedDecrement((volatile signed __int32 *)(v1 - 4)) < 0 )
    operator delete((void *)(v1 - 12));
  std::exception::~exception();
  operator delete(this);
}
// 139B00: using guessed type void (__cdecl *off_139B00[2])(std::overflow_error *__hidden this);
