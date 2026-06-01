/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error
// Address: 0x00080EA8

//----- (00080EA8) --------------------------------------------------------
void __fastcall __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error(
        __gnu_cxx::__concurrence_lock_error *this)
{
  *(_DWORD *)this = &off_D1D00;
  nullsub_1(this);
}
// 7FC84: using guessed type int __fastcall nullsub_1(_DWORD);
// D1D00: using guessed type _UNKNOWN *off_D1D00;
