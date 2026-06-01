/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x00091F50

//----- (00091F50) --------------------------------------------------------
void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  void *v1; // r0

  std::length_error::~length_error(this);
  operator delete(v1);
}
// 91F5C: variable 'v1' is possibly undefined
