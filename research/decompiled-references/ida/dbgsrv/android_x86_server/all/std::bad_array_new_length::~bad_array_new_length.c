/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_array_new_length::~bad_array_new_length
// Address: 0x000C0A20

//----- (000C0A20) --------------------------------------------------------
void __cdecl std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  operator delete(this);
}
