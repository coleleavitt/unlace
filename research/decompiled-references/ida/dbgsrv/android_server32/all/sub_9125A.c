/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9125A
// Address: 0x0009125A

//----- (0009125A) --------------------------------------------------------
void __fastcall sub_9125A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91266: variable 'v1' is possibly undefined
