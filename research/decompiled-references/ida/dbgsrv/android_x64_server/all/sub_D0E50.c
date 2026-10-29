/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0E50
// Address: 0x00000000000D0E50

//----- (00000000000D0E50) ----------------------------------------------------
void __fastcall sub_D0E50(std::type_info *ptr)
{
  std::type_info::~type_info(ptr);
  operator delete(ptr);
}
