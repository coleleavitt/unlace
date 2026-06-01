/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::domain_error::~domain_error
// Address: 0x00091F20

//----- (00091F20) --------------------------------------------------------
void __fastcall std::domain_error::~domain_error(std::domain_error *this)
{
  void *v1; // r0

  std::length_error::~length_error(this);
  operator delete(v1);
}
// 91F2C: variable 'v1' is possibly undefined
