/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0E30
// Address: 0x00000000000D0E30

//----- (00000000000D0E30) ----------------------------------------------------
void __fastcall sub_D0E30(std::type_info *ptr)
{
  std::type_info::~type_info(ptr);
  operator delete(ptr);
}
