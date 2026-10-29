/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83C24
// Address: 0x00083C24

//----- (00083C24) --------------------------------------------------------
void __fastcall __noreturn sub_83C24(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_8117C(8);
  v3 = gettext(a1);
  sub_8B03C(v2, v3);
  sub_80D98((int)v2, (int)&`typeinfo for'std::range_error, (int)std::range_error::~range_error);
}
// D1DCC: using guessed type int *`typeinfo for'std::range_error;
