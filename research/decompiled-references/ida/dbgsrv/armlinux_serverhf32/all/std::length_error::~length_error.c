/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x0008ABA4

//----- (0008ABA4) --------------------------------------------------------
void __fastcall std::length_error::~length_error(std::length_error *this)
{
  *(_DWORD *)this = &off_D1E70;
  std::logic_error::~logic_error(this);
}
// D1E70: using guessed type _UNKNOWN *off_D1E70;
