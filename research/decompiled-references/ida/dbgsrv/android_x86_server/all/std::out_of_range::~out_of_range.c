/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x000C0D90

//----- (000C0D90) --------------------------------------------------------
void __cdecl std::out_of_range::~out_of_range(std::out_of_range *this)
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
