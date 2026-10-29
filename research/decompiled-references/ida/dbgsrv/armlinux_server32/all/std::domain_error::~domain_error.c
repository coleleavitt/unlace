/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::domain_error::~domain_error
// Address: 0x0008AC6C

//----- (0008AC6C) --------------------------------------------------------
void __fastcall std::domain_error::~domain_error(std::domain_error *this)
{
  *(_DWORD *)this = &off_D2E5C;
  std::logic_error::~logic_error(this);
}
// D2E5C: using guessed type _UNKNOWN *off_D2E5C;
