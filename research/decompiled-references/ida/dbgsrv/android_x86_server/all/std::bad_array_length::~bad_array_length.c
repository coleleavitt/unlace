/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_array_length::~bad_array_length
// Address: 0x000C0AA0

//----- (000C0AA0) --------------------------------------------------------
void __cdecl std::bad_array_length::~bad_array_length(std::bad_array_length *this)
{
  operator delete(this);
}
