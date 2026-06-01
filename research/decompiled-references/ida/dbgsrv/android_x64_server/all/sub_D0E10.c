/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0E10
// Address: 0x00000000000D0E10

//----- (00000000000D0E10) ----------------------------------------------------
void __fastcall sub_D0E10(std::type_info *ptr)
{
  std::type_info::~type_info(ptr);
  operator delete(ptr);
}
