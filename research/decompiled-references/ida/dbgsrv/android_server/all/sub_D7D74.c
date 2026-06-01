/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7D74
// Address: 0x00000000000D7D74

//----- (00000000000D7D74) ----------------------------------------------------
void __fastcall sub_D7D74(std::type_info *a1)
{
  std::type_info::~type_info(a1);
  operator delete(a1);
}
