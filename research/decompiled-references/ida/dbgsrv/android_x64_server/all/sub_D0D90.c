/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0D90
// Address: 0x00000000000D0D90

//----- (00000000000D0D90) ----------------------------------------------------
void __fastcall sub_D0D90(std::type_info *ptr)
{
  std::type_info::~type_info(ptr);
  operator delete(ptr);
}
