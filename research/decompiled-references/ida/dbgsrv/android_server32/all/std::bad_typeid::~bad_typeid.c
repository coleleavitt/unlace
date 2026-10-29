/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x00091FDC

//----- (00091FDC) --------------------------------------------------------
void __fastcall std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  void *v1; // r0

  std::exception::~exception(this);
  operator delete(v1);
}
// 91FE8: variable 'v1' is possibly undefined
