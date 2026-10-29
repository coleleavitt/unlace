/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::underflow_error::~underflow_error
// Address: 0x00000000004AF2B0

//----- (00000000004AF2B0) ----------------------------------------------------
void __fastcall std::underflow_error::~underflow_error(std::underflow_error *this)
{
  *(_QWORD *)this = &off_51EA38;
  std::runtime_error::~runtime_error(this);
}
// 51EA38: using guessed type void (__fastcall *off_51EA38)(std::underflow_error *__hidden this);
