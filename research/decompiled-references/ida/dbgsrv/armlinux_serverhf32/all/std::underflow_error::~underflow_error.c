/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::underflow_error::~underflow_error
// Address: 0x0008ACFC

//----- (0008ACFC) --------------------------------------------------------
void __fastcall std::underflow_error::~underflow_error(std::underflow_error *this)
{
  *(_DWORD *)this = &off_D1EC0;
  std::runtime_error::~runtime_error(this);
}
// D1EC0: using guessed type _UNKNOWN *off_D1EC0;
