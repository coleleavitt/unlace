/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_exception::~bad_exception
// Address: 0x000C0920

//----- (000C0920) --------------------------------------------------------
void __cdecl std::bad_exception::~bad_exception(std::bad_exception *this)
{
  operator delete(this);
}
