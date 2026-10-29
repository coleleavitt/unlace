/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_weak_ptr::~bad_weak_ptr
// Address: 0x0008F978

//----- (0008F978) --------------------------------------------------------
void __fastcall std::bad_weak_ptr::~bad_weak_ptr(std::bad_weak_ptr *this)
{
  void *v1; // r0

  std::exception::~exception(this);
  operator delete(v1);
}
// 8F984: variable 'v1' is possibly undefined
