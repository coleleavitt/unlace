/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_alloc::~bad_alloc
// Address: 0x000C09A0

//----- (000C09A0) --------------------------------------------------------
void __cdecl std::bad_alloc::~bad_alloc(std::bad_alloc *this)
{
  operator delete(this);
}
