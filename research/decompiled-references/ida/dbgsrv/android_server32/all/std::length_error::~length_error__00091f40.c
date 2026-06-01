/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x00091F40

//----- (00091F40) --------------------------------------------------------
void __fastcall std::length_error::~length_error(std::length_error *this)
{
  void *v1; // r0

  std::length_error::~length_error(this);
  operator delete(v1);
}
// 91F4C: variable 'v1' is possibly undefined
