/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x00000000000D9A24

//----- (00000000000D9A24) ----------------------------------------------------
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::bad_alloc::~bad_alloc(this);
  operator delete(this);
}
