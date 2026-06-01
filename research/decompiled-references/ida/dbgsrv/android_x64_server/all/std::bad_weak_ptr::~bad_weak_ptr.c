/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_weak_ptr::~bad_weak_ptr
// Address: 0x00000000000CE9B0

//----- (00000000000CE9B0) ----------------------------------------------------
void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  std::exception::~exception(this);
  operator delete(this);
}
