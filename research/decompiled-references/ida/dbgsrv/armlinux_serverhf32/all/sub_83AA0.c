/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83AA0
// Address: 0x00083AA0

//----- (00083AA0) --------------------------------------------------------
void __fastcall __noreturn sub_83AA0(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_8117C(8);
  v3 = gettext(a1);
  sub_8AF9C(v2, v3);
  sub_80D98((int)v2, (int)&`typeinfo for'std::invalid_argument, (int)std::invalid_argument::~invalid_argument);
}
// D1E20: using guessed type int *`typeinfo for'std::invalid_argument;
