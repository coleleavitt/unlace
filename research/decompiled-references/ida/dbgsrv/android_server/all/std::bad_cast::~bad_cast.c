/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x00000000000D99DC

//----- (00000000000D99DC) ----------------------------------------------------
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::bad_alloc::~bad_alloc(this);
  operator delete(this);
}
