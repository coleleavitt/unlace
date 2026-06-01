/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A04D0
// Address: 0x00000000004A04D0

//----- (00000000004A04D0) ----------------------------------------------------
void __fastcall __noreturn sub_4A04D0(const char *a1)
{
  _QWORD *v2; // x19
  char *v3; // x0

  v2 = sub_49DA58(16);
  v3 = gettext(a1);
  sub_4A4038(v2, v3);
  sub_49DCD8((__int64)v2, (__int64)&`typeinfo for'std::length_error, (__int64)std::length_error::~length_error);
}
// 51E858: using guessed type __int64 *`typeinfo for'std::length_error;
