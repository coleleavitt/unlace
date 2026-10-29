/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0298
// Address: 0x00000000004A0298

//----- (00000000004A0298) ----------------------------------------------------
void __noreturn sub_4A0298()
{
  _QWORD *v0; // x0

  v0 = sub_49DA58(8);
  *v0 = &off_51E710;
  sub_49DCD8(
    (__int64)v0,
    (__int64)&`typeinfo for'std::bad_function_call,
    (__int64)std::bad_function_call::~bad_function_call);
}
// 51E6E8: using guessed type __int64 `typeinfo for'std::bad_function_call;
// 51E710: using guessed type void (__fastcall *off_51E710)(std::bad_function_call *__hidden this);
