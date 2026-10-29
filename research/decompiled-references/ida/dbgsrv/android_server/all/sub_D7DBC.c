/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7DBC
// Address: 0x00000000000D7DBC

//----- (00000000000D7DBC) ----------------------------------------------------
void __fastcall sub_D7DBC(std::type_info *a1)
{
  std::type_info::~type_info(a1);
  operator delete(a1);
}
