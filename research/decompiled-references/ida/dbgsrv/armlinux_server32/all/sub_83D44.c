/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83D44
// Address: 0x00083D44

//----- (00083D44) --------------------------------------------------------
void __fastcall __noreturn sub_83D44(const char *a1)
{
  char *v2; // r5
  char *v3; // r0

  v2 = sub_807D4(8);
  v3 = gettext(a1);
  sub_8B1EC(v2, v3);
  sub_8109C((int)v2, (int)&`typeinfo for'std::domain_error, (int)std::domain_error::~domain_error);
}
// D2DD8: using guessed type int *`typeinfo for'std::domain_error;
