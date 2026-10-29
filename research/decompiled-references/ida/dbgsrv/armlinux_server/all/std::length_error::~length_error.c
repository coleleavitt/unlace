/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x00000000004AF0F8

//----- (00000000004AF0F8) ----------------------------------------------------
void __fastcall std::length_error::~length_error(std::length_error *this)
{
  *(_QWORD *)this = &off_51E970;
  std::logic_error::~logic_error(this);
}
// 51E970: using guessed type void (__fastcall *off_51E970)(std::length_error *__hidden this);
