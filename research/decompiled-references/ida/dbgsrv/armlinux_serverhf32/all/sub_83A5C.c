/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83A5C
// Address: 0x00083A5C

//----- (00083A5C) --------------------------------------------------------
void __fastcall __noreturn sub_83A5C(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_8117C(8);
  v3 = gettext(a1);
  sub_8AF78(v2, v3);
  sub_80D98((int)v2, (int)&`typeinfo for'std::domain_error, (int)std::domain_error::~domain_error);
}
// D1DD8: using guessed type int *`typeinfo for'std::domain_error;
