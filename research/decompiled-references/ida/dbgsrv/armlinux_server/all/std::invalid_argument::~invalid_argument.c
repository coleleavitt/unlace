/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::invalid_argument::~invalid_argument
// Address: 0x00000000004AF0B8

//----- (00000000004AF0B8) ----------------------------------------------------
void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  *(_QWORD *)this = &off_51E948;
  std::logic_error::~logic_error(this);
}
// 51E948: using guessed type void (__fastcall *off_51E948)(std::invalid_argument *__hidden this);
