/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x00091FAC

//----- (00091FAC) --------------------------------------------------------
void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  void *v1; // r0

  std::exception::~exception(this);
  operator delete(v1);
}
// 91FB8: variable 'v1' is possibly undefined
