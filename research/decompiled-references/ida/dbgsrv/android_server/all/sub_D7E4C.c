/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7E4C
// Address: 0x00000000000D7E4C

//----- (00000000000D7E4C) ----------------------------------------------------
void __fastcall sub_D7E4C(std::type_info *a1)
{
  std::type_info::~type_info(a1);
  operator delete(a1);
}
