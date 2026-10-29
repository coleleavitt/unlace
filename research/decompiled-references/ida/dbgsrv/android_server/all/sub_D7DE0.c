/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7DE0
// Address: 0x00000000000D7DE0

//----- (00000000000D7DE0) ----------------------------------------------------
void __fastcall sub_D7DE0(std::type_info *a1)
{
  std::type_info::~type_info(a1);
  operator delete(a1);
}
