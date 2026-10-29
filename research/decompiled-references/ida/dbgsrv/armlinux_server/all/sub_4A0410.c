/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0410
// Address: 0x00000000004A0410

//----- (00000000004A0410) ----------------------------------------------------
void __fastcall __noreturn sub_4A0410(const char *a1)
{
  _QWORD *v2; // x19
  char *v3; // x0

  v2 = sub_49DA58(16);
  v3 = gettext(a1);
  sub_4A3FD8(v2, v3);
  sub_49DCD8((__int64)v2, (__int64)&`typeinfo for'std::domain_error, (__int64)std::domain_error::~domain_error);
}
// 51E828: using guessed type __int64 `typeinfo for'std::domain_error;
