/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_function_call::~bad_function_call
// Address: 0x00000000004A0258

//----- (00000000004A0258) ----------------------------------------------------
void __fastcall std::bad_function_call::~bad_function_call(std::bad_function_call *this)
{
  *(_QWORD *)this = &off_51E710;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E710: using guessed type void (__fastcall *off_51E710)(std::bad_function_call *__hidden this);
