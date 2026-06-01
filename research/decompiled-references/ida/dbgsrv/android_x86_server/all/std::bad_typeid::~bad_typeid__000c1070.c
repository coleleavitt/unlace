/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_typeid::~bad_typeid
// Address: 0x000C1070

//----- (000C1070) --------------------------------------------------------
void __cdecl std::bad_typeid::~bad_typeid(std::bad_typeid *this)
{
  std::exception::~exception();
  operator delete(this);
}
