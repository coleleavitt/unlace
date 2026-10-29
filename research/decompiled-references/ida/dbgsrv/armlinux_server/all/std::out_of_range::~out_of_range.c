/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x00000000004AF138

//----- (00000000004AF138) ----------------------------------------------------
void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  *(_QWORD *)this = &off_51E998;
  std::logic_error::~logic_error(this);
}
// 51E998: using guessed type void (__fastcall *off_51E998)(std::out_of_range *__hidden this);
