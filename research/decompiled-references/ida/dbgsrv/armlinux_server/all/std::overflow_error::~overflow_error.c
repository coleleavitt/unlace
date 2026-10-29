/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x00000000004AF270

//----- (00000000004AF270) ----------------------------------------------------
void __fastcall std::overflow_error::~overflow_error(std::overflow_error *this)
{
  *(_QWORD *)this = &off_51EA10;
  std::runtime_error::~runtime_error(this);
}
// 51EA10: using guessed type void (__fastcall *off_51EA10)(std::overflow_error *__hidden this);
