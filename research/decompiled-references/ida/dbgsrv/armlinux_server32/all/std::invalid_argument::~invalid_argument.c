/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::invalid_argument::~invalid_argument
// Address: 0x0008ACA0

//----- (0008ACA0) --------------------------------------------------------
void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  *(_DWORD *)this = &off_D2ED4;
  std::logic_error::~logic_error(this);
}
// D2ED4: using guessed type _UNKNOWN *off_D2ED4;
