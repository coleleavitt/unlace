/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::range_error::~range_error
// Address: 0x00000000004AF230

//----- (00000000004AF230) ----------------------------------------------------
void __fastcall std::range_error::~range_error(std::range_error *this)
{
  *(_QWORD *)this = &off_51E9E8;
  std::runtime_error::~runtime_error(this);
}
// 51E9E8: using guessed type void (__fastcall *off_51E9E8)(std::range_error *__hidden this);
