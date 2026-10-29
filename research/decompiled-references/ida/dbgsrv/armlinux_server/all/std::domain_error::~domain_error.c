/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::domain_error::~domain_error
// Address: 0x00000000004AF078

//----- (00000000004AF078) ----------------------------------------------------
void __fastcall std::domain_error::~domain_error(std::domain_error *this)
{
  *(_QWORD *)this = &off_51E920;
  std::logic_error::~logic_error(this);
}
// 51E920: using guessed type void (__fastcall *off_51E920)(std::domain_error *__hidden this);
