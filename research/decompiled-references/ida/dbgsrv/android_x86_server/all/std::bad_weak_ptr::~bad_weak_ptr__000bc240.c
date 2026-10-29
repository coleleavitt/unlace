/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_weak_ptr::~bad_weak_ptr
// Address: 0x000BC240

//----- (000BC240) --------------------------------------------------------
void __cdecl std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  std::exception::~exception();
  operator delete(this);
}
