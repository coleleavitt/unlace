/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_weak_ptr::~bad_weak_ptr
// Address: 0x00000000000D59FC

//----- (00000000000D59FC) ----------------------------------------------------
void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  std::bad_alloc::~bad_alloc(this);
  operator delete(this);
}
