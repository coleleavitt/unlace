/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::range_error::~range_error
// Address: 0x0008AC94

//----- (0008AC94) --------------------------------------------------------
void __fastcall std::range_error::~range_error(std::range_error *this)
{
  *(_DWORD *)this = &off_D1E48;
  std::runtime_error::~runtime_error(this);
}
// D1E48: using guessed type _UNKNOWN *off_D1E48;
