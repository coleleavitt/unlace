/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9121A
// Address: 0x0009121A

//----- (0009121A) --------------------------------------------------------
void __fastcall sub_9121A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91226: variable 'v1' is possibly undefined
