/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83BE0
// Address: 0x00083BE0

//----- (00083BE0) --------------------------------------------------------
void __fastcall __noreturn sub_83BE0(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_8117C(8);
  v3 = gettext(a1);
  sub_8B008(v2, v3);
  sub_80D98((int)v2, (int)&`typeinfo for'std::runtime_error, (int)std::runtime_error::~runtime_error);
}
// D1DFC: using guessed type int *`typeinfo for'std::runtime_error;
