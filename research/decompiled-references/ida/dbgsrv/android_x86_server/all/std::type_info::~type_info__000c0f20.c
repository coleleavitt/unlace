/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::type_info::~type_info
// Address: 0x000C0F20

//----- (000C0F20) --------------------------------------------------------
void __cdecl std::type_info::~type_info(std::type_info *this)
{
  operator delete(this);
}
