/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::bad_exception::~bad_exception
// Address: 0x000000000049F2E0

//----- (000000000049F2E0) ----------------------------------------------------
void __fastcall std::bad_exception::~bad_exception(std::bad_exception *this)
{
  *(_QWORD *)this = &off_51E630;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E630: using guessed type void (__fastcall *off_51E630)(std::bad_exception *__hidden this);
