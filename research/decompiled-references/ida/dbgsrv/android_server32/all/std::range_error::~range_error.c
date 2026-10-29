/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::range_error::~range_error
// Address: 0x00091F60

//----- (00091F60) --------------------------------------------------------
void __fastcall std::range_error::~range_error(std::range_error *this)
{
  void *v1; // r0

  std::overflow_error::~overflow_error(this);
  operator delete(v1);
}
// 91F6C: variable 'v1' is possibly undefined
