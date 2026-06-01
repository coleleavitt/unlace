/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_cast::~bad_cast
// Address: 0x000C0FB0

//----- (000C0FB0) --------------------------------------------------------
void __cdecl std::bad_cast::~bad_cast(std::bad_cast *this)
{
  std::exception::~exception();
  operator delete(this);
}
