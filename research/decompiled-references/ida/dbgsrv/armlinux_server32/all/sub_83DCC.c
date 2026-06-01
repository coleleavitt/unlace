/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83DCC
// Address: 0x00083DCC

//----- (00083DCC) --------------------------------------------------------
void __fastcall __noreturn sub_83DCC(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_807D4(8);
  v3 = gettext(a1);
  sub_8B234(v2, v3);
  sub_8109C((int)v2, (int)&`typeinfo for'std::length_error, (int)std::length_error::~length_error);
}
// D2DE4: using guessed type int *`typeinfo for'std::length_error;
