/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::invalid_argument::~invalid_argument
// Address: 0x0008AB70

//----- (0008AB70) --------------------------------------------------------
void __fastcall std::invalid_argument::~invalid_argument(std::invalid_argument *this)
{
  *(_DWORD *)this = &off_D1ED4;
  std::logic_error::~logic_error(this);
}
// D1ED4: using guessed type _UNKNOWN *off_D1ED4;
