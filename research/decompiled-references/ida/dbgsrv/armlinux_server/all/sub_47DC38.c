/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DC38
// Address: 0x000000000047DC38

//----- (000000000047DC38) ----------------------------------------------------
void __fastcall __noreturn sub_47DC38(char *s1)
{
  _QWORD *v1; // x0

  if ( s1 )
    callui(24, 2, s1);
  v1 = sub_49DA58(8);
  *v1 = off_51BCF8;
  sub_49DCD8((__int64)v1, (__int64)&`typeinfo for'loader_failure_t, (__int64)sub_47D7E8);
}
// 51BCF8: using guessed type __int64 (__fastcall *off_51BCF8[3])();
// 51E3F8: using guessed type __int64 *`typeinfo for'loader_failure_t;
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
