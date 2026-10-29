/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::exception::~exception
// Address: 0x000C08D0

//----- (000C08D0) --------------------------------------------------------
void __cdecl std::exception::~exception(std::exception *this)
{
  operator delete(this);
}
