/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_911EA
// Address: 0x000911EA

//----- (000911EA) --------------------------------------------------------
void __fastcall sub_911EA(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 911F6: variable 'v1' is possibly undefined
