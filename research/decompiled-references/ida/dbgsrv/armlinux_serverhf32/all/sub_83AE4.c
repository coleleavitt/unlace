/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83AE4
// Address: 0x00083AE4

//----- (00083AE4) --------------------------------------------------------
void __fastcall __noreturn sub_83AE4(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_8117C(8);
  v3 = gettext(a1);
  sub_8AFC0(v2, v3);
  sub_80D98((int)v2, (int)&`typeinfo for'std::length_error, (int)std::length_error::~length_error);
}
// D1DE4: using guessed type int *`typeinfo for'std::length_error;
