/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::invalid_argument::~invalid_argument
// Address: 0x00091F30

//----- (00091F30) --------------------------------------------------------
void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  void *v1; // r0

  std::length_error::~length_error(this);
  operator delete(v1);
}
// 91F3C: variable 'v1' is possibly undefined
