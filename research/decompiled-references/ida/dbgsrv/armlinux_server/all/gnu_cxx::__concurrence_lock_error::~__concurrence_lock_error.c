/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error
// Address: 0x000000000049D648

//----- (000000000049D648) ----------------------------------------------------
void __fastcall __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error(
        __gnu_cxx::__concurrence_lock_error *this)
{
  *(_QWORD *)this = &off_51E4A0;
  nullsub_4(this);
}
// 49F2D8: using guessed type __int64 __fastcall nullsub_4(_QWORD);
// 51E4A0: using guessed type void (__fastcall *off_51E4A0)(__gnu_cxx::__concurrence_lock_error *__hidden this);
