/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::length_error::~length_error
// Address: 0x0008ACD4

//----- (0008ACD4) --------------------------------------------------------
void __fastcall std::length_error::~length_error(std::length_error *this)
{
  *(_DWORD *)this = &off_D2E70;
  std::logic_error::~logic_error(this);
}
// D2E70: using guessed type _UNKNOWN *off_D2E70;
