/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::logic_error::~logic_error
// Address: 0x00091ED0

//----- (00091ED0) --------------------------------------------------------
void __fastcall std::logic_error::~logic_error(std::logic_error *this)
{
  void *v1; // r0

  std::length_error::~length_error(this);
  operator delete(v1);
}
// 91EDC: variable 'v1' is possibly undefined
