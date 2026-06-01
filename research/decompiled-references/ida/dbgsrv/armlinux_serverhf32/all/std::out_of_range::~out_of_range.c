/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::out_of_range::~out_of_range
// Address: 0x0008ABD8

//----- (0008ABD8) --------------------------------------------------------
void __fastcall std::out_of_range::~out_of_range(std::out_of_range *this)
{
  *(_DWORD *)this = &off_D1E84;
  std::logic_error::~logic_error(this);
}
// D1E84: using guessed type _UNKNOWN *off_D1E84;
