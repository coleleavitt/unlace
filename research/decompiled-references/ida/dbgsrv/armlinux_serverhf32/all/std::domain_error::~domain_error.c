/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::domain_error::~domain_error
// Address: 0x0008AB3C

//----- (0008AB3C) --------------------------------------------------------
void __fastcall std::domain_error::~domain_error(std::domain_error *this)
{
  *(_DWORD *)this = &off_D1E5C;
  std::logic_error::~logic_error(this);
}
// D1E5C: using guessed type _UNKNOWN *off_D1E5C;
