/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::range_error::~range_error
// Address: 0x0008ADC4

//----- (0008ADC4) --------------------------------------------------------
void __fastcall std::range_error::~range_error(std::range_error *this)
{
  *(_DWORD *)this = &off_D2E48;
  std::runtime_error::~runtime_error(this);
}
// D2E48: using guessed type _UNKNOWN *off_D2E48;
