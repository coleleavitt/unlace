/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4C30
// Address: 0x00000000004A4C30

//----- (00000000004A4C30) ----------------------------------------------------
void __fastcall __noreturn sub_4A4C30(struct _Unwind_Exception *a1)
{
  std::runtime_error *v1; // x19

  std::runtime_error::~runtime_error(v1);
  _Unwind_Resume(a1);
}
// 4A4C38: variable 'v1' is possibly undefined
