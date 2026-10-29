/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x0008AD08

//----- (0008AD08) --------------------------------------------------------
void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  *(_DWORD *)this = &off_D2E84;
  std::logic_error::~logic_error(this);
}
// D2E84: using guessed type _UNKNOWN *off_D2E84;
