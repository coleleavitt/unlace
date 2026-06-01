/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::runtime_error::~runtime_error
// Address: 0x00091F0C

//----- (00091F0C) --------------------------------------------------------
void __fastcall std::runtime_error::~runtime_error(std::runtime_error *this)
{
  void *v1; // r0

  std::overflow_error::~overflow_error(this);
  operator delete(v1);
}
// 91F18: variable 'v1' is possibly undefined
