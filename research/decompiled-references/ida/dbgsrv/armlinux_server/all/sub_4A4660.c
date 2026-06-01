/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A4660
// Address: 0x00000000004A4660

//----- (00000000004A4660) ----------------------------------------------------
void __fastcall __noreturn sub_4A4660(struct _Unwind_Exception *a1)
{
  std::domain_error *v1; // x19

  std::domain_error::~domain_error(v1);
  _Unwind_Resume(a1);
}
// 4A4668: variable 'v1' is possibly undefined
