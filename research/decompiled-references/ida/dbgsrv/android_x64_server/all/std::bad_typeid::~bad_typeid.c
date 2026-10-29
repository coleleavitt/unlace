/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x00000000000D27B0

//----- (00000000000D27B0) ----------------------------------------------------
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::exception::~exception(this);
  operator delete(this);
}
