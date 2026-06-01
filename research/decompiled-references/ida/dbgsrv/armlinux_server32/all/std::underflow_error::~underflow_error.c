/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::underflow_error::~underflow_error
// Address: 0x0008AE2C

//----- (0008AE2C) --------------------------------------------------------
void __fastcall std::underflow_error::~underflow_error(std::underflow_error *this)
{
  *(_DWORD *)this = &off_D2EC0;
  std::runtime_error::~runtime_error(this);
}
// D2EC0: using guessed type _UNKNOWN *off_D2EC0;
