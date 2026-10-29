/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004500C
// Address: 0x000000010004500C

//----- (000000010004500C) ----------------------------------------------------
std::logic_error *__fastcall sub_10004500C(std::logic_error *a1, const char *a2)
{
  std::logic_error *result; // x0

  result = std::logic_error::logic_error(a1, a2);
  result->__vftable = (std::logic_error_vtbl *)&`vtable for'std::length_error.~length_error;
  return result;
}
