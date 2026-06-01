/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x00091F70

//----- (00091F70) --------------------------------------------------------
void __fastcall std::overflow_error::~overflow_error(std::overflow_error *this)
{
  void *v1; // r0

  std::overflow_error::~overflow_error(this);
  operator delete(v1);
}
// 91F7C: variable 'v1' is possibly undefined
