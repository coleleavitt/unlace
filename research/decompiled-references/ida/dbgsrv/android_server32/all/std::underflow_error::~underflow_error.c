/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::underflow_error::~underflow_error
// Address: 0x00091F80

//----- (00091F80) --------------------------------------------------------
void __fastcall std::underflow_error::~underflow_error(std::underflow_error *this)
{
  void *v1; // r0

  std::overflow_error::~overflow_error(this);
  operator delete(v1);
}
// 91F8C: variable 'v1' is possibly undefined
