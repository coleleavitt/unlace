/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::overflow_error::~overflow_error
// Address: 0x0008ADF8

//----- (0008ADF8) --------------------------------------------------------
void __fastcall std::overflow_error::~overflow_error(std::overflow_error *this)
{
  *(_DWORD *)this = &off_D2EAC;
  std::runtime_error::~runtime_error(this);
}
// D2EAC: using guessed type _UNKNOWN *off_D2EAC;
