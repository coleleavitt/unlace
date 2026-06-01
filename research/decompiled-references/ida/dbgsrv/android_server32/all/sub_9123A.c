/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9123A
// Address: 0x0009123A

//----- (0009123A) --------------------------------------------------------
void __fastcall sub_9123A(std::type_info *a1)
{
  void *v1; // r0

  std::type_info::~type_info(a1);
  operator delete(v1);
}
// 91246: variable 'v1' is possibly undefined
