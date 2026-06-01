/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7E70
// Address: 0x00000000000D7E70

//----- (00000000000D7E70) ----------------------------------------------------
void __fastcall sub_D7E70(std::type_info *a1)
{
  std::type_info::~type_info(a1);
  operator delete(a1);
}
